class BankAccount:
    # 银行账户类，用于管理账户信息

    def __init__(self, account_number, account_holder, balance=0):
        # 初始化方法，创建账户时需要账号、持有者姓名和余额（默认为0）
        self.account_number = account_number  # 账号
        self.account_holder = account_holder  # 账户持有者姓名
        self.balance = balance  # 账户余额
        self.is_locked = False  # 账户是否被锁定

    def deposit(self, amount):
        # 存款方法，向账户中增加金额
        if self.is_locked:
            print("账户已锁定，无法存款。")
            return
        self.balance += amount  # 增加余额
        print(f"账号{self.account_number}存入{amount}元成功，当前余额为{self.balance}元。")

    def withdraw(self, amount):
        # 取款方法，从账户中取出金额
        if self.is_locked:
            print("账户已锁定，无法取款。")
            return
        if amount > self.balance:
            print("余额不足，取款失败。")
            return
        self.balance -= amount  # 减少余额
        print(f"账号{self.account_number}取出{amount}元成功，当前余额为{self.balance}元。")

    def transfer(self, target_account, amount):
        # 转账方法，向另一个账户转账
        if self.is_locked or target_account.is_locked:
            print(f"转出账户或转入账户已锁定，无法转账。")
            return
        if amount > self.balance:
            print("余额不足，转账失败。")
            return
        self.withdraw(amount)  # 调用取款方法
        target_account.deposit(amount)  # 向目标账户存款

    def lock_account(self):
        # 锁定账户方法
        self.is_locked = True
        print(f"账号{self.account_number}已锁定。")

    def unlock_account(self):
        # 解锁账户方法
        self.is_locked = False
        print("账户已解锁。")

    def get_balance(self):
        # 查询余额方法
        return self.balance

    def get_account_info(self):
        # 查询账户信息方法
        print(f"账号：{self.account_number}, 持有者：{self.account_holder}, 余额：{self.balance}元")


class BankSystem:
    # 银行系统类，用于管理多个账户

    def __init__(self):
        self.accounts = {}  # 存储账户的字典，键为账号，值为BankAccount对象

    def create_account(self, account_number, account_holder):
        # 开户方法，创建新账户
        if account_number in self.accounts:
            print("账号已存在。")
            return
        new_account = BankAccount(account_number, account_holder)  # 创建新的BankAccount对象
        self.accounts[account_number] = new_account  # 将新账户添加到字典中
        print("开户成功。")

    def get_account(self, account_number):
        # 根据账号获取账户信息
        return self.accounts.get(account_number, None)  # 返回账户对象，如果不存在则返回None

    def run(self):
        # 运行银行系统，提供用户交互界面
        while True:
            print("\n欢迎使用银行管理系统")
            print("1. 开户")
            print("2. 查询账户")
            print("3. 存款")
            print("4. 取款")
            print("5. 转账")
            print("6. 锁定账户")
            print("7. 解锁账户")
            print("8. 退出")
            choice = input("请选择操作：")

            if choice == '1':
                acc_num = input("请输入账号：")
                acc_holder = input("请输入账户持有者姓名：")
                self.create_account(acc_num, acc_holder)
            elif choice == '2':
                acc_num = input("请输入账号：")
                account = self.get_account(acc_num)
                if account:
                    account.get_account_info()
                else:
                    print("账户不存在。")
            elif choice == '3':
                acc_num = input("请输入账号：")
                amount = float(input("请输入存款金额："))
                account = self.get_account(acc_num)
                if account:
                    account.deposit(amount)
                else:
                    print("账户不存在。")
            elif choice == '4':
                acc_num = input("请输入账号：")
                amount = float(input("请输入取款金额："))
                account = self.get_account(acc_num)
                if account:
                    account.withdraw(amount)
                else:
                    print("账户不存在。")
            elif choice == '5':
                acc_num = input("请输入转出账号：")
                target_acc_num = input("请输入目标账号：")
                amount = float(input("请输入转账金额："))
                account = self.get_account(acc_num)
                target_account = self.get_account(target_acc_num)
                if account and target_account:
                    account.transfer(target_account, amount)
                else:
                    print("账户不存在。")
            elif choice == '6':
                acc_num = input("请输入账号：")
                account = self.get_account(acc_num)
                if account:
                    account.lock_account()
                else:
                    print("账户不存在。")
            elif choice == '7':
                acc_num = input("请输入账号：")
                account = self.get_account(acc_num)
                if account:
                    account.unlock_account()
                else:
                    print("账户不存在。")
            elif choice == '8':
                print("感谢使用，再见！")
                break
            else:
                print("无效选项，请重新选择。")


# 创建银行系统实例并运行
bank_system = BankSystem()
bank_system.run()
