import datetime
import json
import os


class Transaction:
    """交易记录类"""
    
    def __init__(self, trans_id, trans_type, amount, category, date, description=""):
        self.trans_id = trans_id  # 交易ID
        self.trans_type = trans_type  # 交易类型：收入/支出
        self.amount = amount  # 金额
        self.category = category  # 分类
        self.date = date  # 日期
        self.description = description  # 备注
    
    def to_dict(self):
        """转换为字典格式，用于保存"""
        return {
            'trans_id': self.trans_id,
            'trans_type': self.trans_type,
            'amount': self.amount,
            'category': self.category,
            'date': self.date,
            'description': self.description
        }
    
    def display(self):
        """显示交易信息"""
        print(f"ID: {self.trans_id} | 类型: {self.trans_type} | 金额: ¥{self.amount:.2f} | "
              f"分类: {self.category} | 日期: {self.date} | 备注: {self.description}")


class FinanceSystem:
    """个人理财记账系统"""
    
    def __init__(self):
        self.transactions = []  # 存储所有交易记录
        self.next_id = 1  # 下一个交易ID
        self.data_file = "finance_data.json"  # 数据文件
        
        # 预设分类
        self.income_categories = ['工资', '奖金', '投资收益', '兼职', '其他收入']
        self.expense_categories = ['餐饮', '交通', '购物', '娱乐', '住房', '医疗', '教育', '其他支出']
        
        # 加载数据
        self.load_data()
    
    def add_transaction(self, trans_type, amount, category, date, description=""):
        """添加交易记录"""
        if amount <= 0:
            print("❌ 金额必须大于0！")
            return False
        
        if trans_type not in ['收入', '支出']:
            print("❌ 交易类型必须是'收入'或'支出'！")
            return False
        
        # 验证分类
        valid_categories = self.income_categories if trans_type == '收入' else self.expense_categories
        if category not in valid_categories:
            print(f"❌ 无效的分类！请从以下选项中选择：{', '.join(valid_categories)}")
            return False
        
        # 创建交易记录
        transaction = Transaction(self.next_id, trans_type, amount, category, date, description)
        self.transactions.append(transaction)
        self.next_id += 1
        
        print(f"✅ {trans_type}记录添加成功！ID: {transaction.trans_id}")
        self.save_data()
        return True
    
    def \
            delete_transaction(self, trans_id):
        """删除交易记录"""
        for i, trans in enumerate(self.transactions):
            if trans.trans_id == trans_id:
                deleted = self.transactions.pop(i)
                print(f"✅ 已删除记录：")
                deleted.display()
                self.save_data()
                return True
        print("❌ 未找到该交易记录！")
        return False
    
    def update_transaction(self, trans_id, **kwargs):
        """修改交易记录"""
        for trans in self.transactions:
            if trans.trans_id == trans_id:
                if 'amount' in kwargs:
                    if kwargs['amount'] <= 0:
                        print("❌ 金额必须大于0！")
                        return False
                    trans.amount = kwargs['amount']
                if 'category' in kwargs:
                    trans.category = kwargs['category']
                if 'date' in kwargs:
                    trans.date = kwargs['date']
                if 'description' in kwargs:
                    trans.description = kwargs['description']
                
                print("✅ 交易记录修改成功！")
                trans.display()
                self.save_data()
                return True
        print("❌ 未找到该交易记录！")
        return False
    
    def query_transactions(self, **filters):
        """查询交易记录"""
        results = self.transactions.copy()
        
        # 按类型筛选
        if 'trans_type' in filters:
            results = [t for t in results if t.trans_type == filters['trans_type']]
        
        # 按分类筛选
        if 'category' in filters:
            results = [t for t in results if t.category == filters['category']]
        
        # 按日期范围筛选
        if 'start_date' in filters:
            results = [t for t in results if t.date >= filters['start_date']]
        if 'end_date' in filters:
            results = [t for t in results if t.date <= filters['end_date']]
        
        # 按ID查询
        if 'trans_id' in filters:
            results = [t for t in results if t.trans_id == filters['trans_id']]
        
        return results
    
    def display_transactions(self, transactions=None):
        """显示交易记录"""
        if transactions is None:
            transactions = self.transactions
        
        if not transactions:
            print("📭 暂无交易记录。")
            return
        
        print("\n" + "="*80)
        print(f"{'ID':<6} {'类型':<8} {'金额':<12} {'分类':<10} {'日期':<12} {'备注':<20}")
        print("="*80)
        for trans in transactions:
            print(f"{trans.trans_id:<6} {trans.trans_type:<8} ¥{trans.amount:<10.2f} "
                  f"{trans.category:<10} {trans.date:<12} {trans.description:<20}")
        print("="*80 + "\n")
    
    def get_statistics(self, start_date=None, end_date=None):
        """统计分析"""
        transactions = self.transactions
        # 按日期筛选
        if start_date:
            transactions = [t for t in transactions if t.date >= start_date]
        if end_date:
            transactions = [t for t in transactions if t.date <= end_date]
        
        if not transactions:
            print("📭 该时间段内无交易记录。")
            return
        
        # 计算总收入和总支出
        total_income = sum(t.amount for t in transactions if t.trans_type == '收入')
        total_expense = sum(t.amount for t in transactions if t.trans_type == '支出')
        balance = total_income - total_expense
        
        print("\n" + "="*50)
        print("📊 财务统计报表")
        print("="*50)
        if start_date or end_date:
            period = f"{start_date or '开始'} 至 {end_date or '现在'}"
            print(f"统计周期：{period}")
        print(f"总收入：¥{total_income:.2f}")
        print(f"总支出：¥{total_expense:.2f}")
        print(f"结余：¥{balance:.2f}")
        print("="*50)
        
        # 支出分类统计
        expense_by_category = {}
        for trans in transactions:
            if trans.trans_type == '支出':
                if trans.category not in expense_by_category:
                    expense_by_category[trans.category] = 0
                expense_by_category[trans.category] += trans.amount
        
        if expense_by_category:
            print("\n💰 支出分类统计：")
            for category, amount in sorted(expense_by_category.items(), key=lambda x: x[1], reverse=True):
                percentage = (amount / total_expense * 100) if total_expense > 0 else 0
                print(f"  {category}: ¥{amount:.2f} ({percentage:.1f}%)")
        
        # 收入分类统计
        income_by_category = {}
        for trans in transactions:
            if trans.trans_type == '收入':
                if trans.category not in income_by_category:
                    income_by_category[trans.category] = 0
                income_by_category[trans.category] += trans.amount
        
        if income_by_category:
            print("\n💵 收入分类统计：")
            for category, amount in sorted(income_by_category.items(), key=lambda x: x[1], reverse=True):
                percentage = (amount / total_income * 100) if total_income > 0 else 0
                print(f"  {category}: ¥{amount:.2f} ({percentage:.1f}%)")
        
        print("="*50 + "\n")
    
    def save_data(self):
        """保存数据到文件"""
        data = {
            'next_id': self.next_id,
            'transactions': [t.to_dict() for t in self.transactions]
        }
        with open(self.data_file, 'w', encoding='utf-8') as f:
            json.dump(data, f, ensure_ascii=False, indent=2)
    
    def load_data(self):
        """从文件加载数据"""
        if os.path.exists(self.data_file):
            try:
                with open(self.data_file, 'r', encoding='utf-8') as f:
                    data = json.load(f)
                    self.next_id = data.get('next_id', 1)
                    for trans_data in data.get('transactions', []):
                        trans = Transaction(
                            trans_data['trans_id'],
                            trans_data['trans_type'],
                            trans_data['amount'],
                            trans_data['category'],
                            trans_data['date'],
                            trans_data['description']
                        )
                        self.transactions.append(trans)
                print(f"✅ 已加载 {len(self.transactions)} 条历史记录。")
            except Exception as e:
                print(f"⚠️ 加载数据失败：{e}")
    
    def run(self):
        """运行系统主程序"""
        print("\n" + "="*50)
        print("💰 欢迎使用个人理财记账系统 💰")
        print("="*50)
        
        while True:
            print("\n📋 主菜单：")
            print("1. 添加收入")
            print("2. 添加支出")
            print("3. 查看所有记录")
            print("4. 查询记录")
            print("5. 修改记录")
            print("6. 删除记录")
            print("7. 统计分析")
            print("8. 退出系统")
            
            choice = input("\n请选择操作（1-8）：").strip()
            
            if choice == '1':
                self._add_income()
            elif choice == '2':
                self._add_expense()
            elif choice == '3':
                self.display_transactions()
            elif choice == '4':
                self._query_menu()
            elif choice == '5':
                self._update_menu()
            elif choice == '6':
                self._delete_menu()
            elif choice == '7':
                self._statistics_menu()
            elif choice == '8':
                print("\n💾 正在保存数据...")
                self.save_data()
                print("👋 感谢使用，再见！")
                break
            else:
                print("❌ 无效选项，请重新选择！")
    
    def _add_income(self):
        """添加收入菜单"""
        print("\n📥 添加收入")
        print(f"收入分类：{', '.join(self.income_categories)}")
        
        try:
            amount = float(input("请输入金额："))
            category = input("请输入分类：").strip()
            date = input("请输入日期（YYYY-MM-DD，直接回车为今天）：").strip()
            if not date:
                date = datetime.date.today().strftime("%Y-%m-%d")
            description = input("请输入备注（可选）：").strip()
            
            self.add_transaction('收入', amount, category, date, description)
        except ValueError:
            print("❌ 输入格式错误！")
    
    def _add_expense(self):
        """添加支出菜单"""
        print("\n📤 添加支出")
        print(f"支出分类：{', '.join(self.expense_categories)}")
        
        try:
            amount = float(input("请输入金额："))
            category = input("请输入分类：").strip()
            date = input("请输入日期（YYYY-MM-DD，直接回车为今天）：").strip()
            if not date:
                date = datetime.date.today().strftime("%Y-%m-%d")
            description = input("请输入备注（可选）：").strip()
            
            self.add_transaction('支出', amount, category, date, description)
        except ValueError:
            print("❌ 输入格式错误！")
    
    def _query_menu(self):
        """查询菜单"""
        print("\n🔍 查询记录")
        print("1. 按ID查询")
        print("2. 按类型查询")
        print("3. 按分类查询")
        print("4. 按日期范围查询")

        choice = input("请选择查询方式（1-4）：").strip()
        filters = {}
        
        try:
            if choice == '1':
                trans_id = int(input("请输入交易ID："))
                filters['trans_id'] = trans_id
            elif choice == '2':
                trans_type = input("请输入类型（收入/支出）：").strip()
                filters['trans_type'] = trans_type
            elif choice == '3':
                category = input("请输入分类：").strip()
                filters['category'] = category
            elif choice == '4':
                start_date = input("请输入开始日期（YYYY-MM-DD）：").strip()
                end_date = input("请输入结束日期（YYYY-MM-DD）：").strip()
                if start_date:
                    filters['start_date'] = start_date
                if end_date:
                    filters['end_date'] = end_date
            else:
                print("❌ 无效选项！")
                return
            
            results = self.query_transactions(**filters)
            self.display_transactions(results)
        except ValueError:
            print("❌ 输入格式错误！")
    
    def _update_menu(self):
        """修改记录菜单"""
        print("\n✏️ 修改记录")
        try:
            trans_id = int(input("请输入要修改的交易ID："))
            
            # 先查找记录
            trans = None
            for t in self.transactions:
                if t.trans_id == trans_id:
                    trans = t
                    break
            
            if not trans:
                print("❌ 未找到该交易记录！")
                return
            
            print("当前记录：")
            trans.display()
            
            print("\n请输入新值（直接回车保持不变）：")
            amount_str = input(f"金额（当前：{trans.amount}）：").strip()
            category = input(f"分类（当前：{trans.category}）：").strip()
            date = input(f"日期（当前：{trans.date}）：").strip()
            description = input(f"备注（当前：{trans.description}）：").strip()
            
            updates = {}
            if amount_str:
                updates['amount'] = float(amount_str)
            if category:
                updates['category'] = category
            if date:
                updates['date'] = date
            if description:
                updates['description'] = description
            
            if updates:
                self.update_transaction(trans_id, **updates)
            else:
                print("⚠️ 未进行任何修改。")
        except ValueError:
            print("❌ 输入格式错误！")
    
    def _delete_menu(self):
        """删除记录菜单"""
        print("\n🗑️ 删除记录")
        try:
            trans_id = int(input("请输入要删除的交易ID："))
            confirm = input(f"确认删除ID为 {trans_id} 的记录？(y/n)：").strip().lower()
            if confirm == 'y':
                self.delete_transaction(trans_id)
            else:
                print("⚠️ 已取消删除。")
        except ValueError:
            print("❌ 输入格式错误！")
    
    def _statistics_menu(self):
        """统计分析菜单"""
        print("\n📊 统计分析")
        print("1. 全部记录统计")
        print("2. 指定时间段统计")
        
        choice = input("请选择统计方式（1-2）：").strip()
        
        if choice == '1':
            self.get_statistics()
        elif choice == '2':
            start_date = input("请输入开始日期（YYYY-MM-DD，直接回车为最早）：").strip()
            end_date = input("请输入结束日期（YYYY-MM-DD，直接回车为今天）：").strip()
            self.get_statistics(
                start_date if start_date else None,
                end_date if end_date else None
            )
        else:
            print("❌ 无效选项！")

# 主程序入口
if __name__ == "__main__":
    system = FinanceSystem()
    system.run()
