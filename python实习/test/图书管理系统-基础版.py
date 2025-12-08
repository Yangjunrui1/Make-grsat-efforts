class Book:
    # 图书类，用于管理单本书的信息
    def __init__(self, book_id, title, author, year):
        # 初始化方法，创建书籍时需要书籍ID、标题、作者和出版年份
        self.book_id = book_id  # 书籍的唯一标识符
        self.title = title  # 书籍标题
        self.author = author  # 书籍作者
        self.year = year  # 出版年份
        self.is_borrowed = False  # 书籍是否被借出

    def borrow(self):
        # 借书方法，如果书籍未被借出，则借出书籍
        if not self.is_borrowed:
            self.is_borrowed = True
            print(f"您已成功借阅《{self.title}》。")
        else:
            print("此书已被借出。")

    def return_book(self):
        # 还书方法，如果书籍被借出，则归还书籍
        if self.is_borrowed:
            self.is_borrowed = False
            print(f"您已成功归还《{self.title}》。")
        else:
            print("此书未被借出。")

    def get_info(self):
        # 获取书籍信息方法,详细解释见末尾注释
        status = "已借出" if self.is_borrowed else "可借"
        return f"书籍ID：{self.book_id}，标题：{self.title}，作者：{self.author}，年份：{self.year}，状态：{status}"


class Library:
    # 图书馆类，用于管理多本书和借阅行为
    def __init__(self):
        self.books = {}  # 存储书籍的字典，键为书籍ID，值为Book对象

    def add_book(self, book_id, title, author, year):
        # 添加书籍方法，如果书籍ID不存在，则添加新书
        if book_id not in self.books:
            self.books[book_id] = Book(book_id, title, author, year)
            print(f"书籍《{title}》添加成功。")
        else:
            print("此ID的书籍已存在。")


    def borrow_book(self, book_id):
        # 借书方法，根据书籍ID借书
        if book_id in self.books:
            self.books[book_id].borrow()
        else:
            print("未找到书籍。")

    def return_book(self, book_id):
        # 还书方法，根据书籍ID还书
        if book_id in self.books:
            self.books[book_id].return_book()
        else:
            print("未找到书籍。")

    def find_book(self, book_id):
        # 查询书籍方法，根据书籍ID查询书籍信息
        if book_id in self.books:
            print(self.books[book_id].get_info())
        else:
            print("未找到书籍。")

    def list_books(self):
        # 列出所有书籍信息
        for book_id, book in self.books.items():
            print(book.get_info())


def main():
    # 主函数，提供用户交互界面
    library = Library()  # 创建图书馆实例
    while True:
        print("\n欢迎使用图书馆管理系统")
        print("1. 添加书籍")
        print("2. 借阅书籍")
        print("3. 归还书籍")
        print("4. 查询书籍")
        print("5. 列出所有书籍")
        print("6. 退出")
        choice = input("请选择一个选项：")

        if choice == '1':
            book_id = input("输入书籍ID：")
            title = input("输入书籍标题：")
            author = input("输入书籍作者：")
            year = input("输入出版年份：")
            library.add_book(book_id, title, author, year)
        elif choice == '2':
            book_id = input("输入要借阅的书籍ID：")
            library.borrow_book(book_id)
        elif choice == '3':
            book_id = input("输入要归还的书籍ID：")
            library.return_book(book_id)
        elif choice == '4':
            book_id = input("输入要查询的书籍ID：")
            library.find_book(book_id)
        elif choice == '5':
            library.list_books()
        elif choice == '6':
            print("感谢您使用图书馆管理系统。再见！")
            break
        else:
            print("无效选项，请重新选择。")


if __name__ == "__main__":
    main()


'''def get_info(self):
    # 这个方法不需要额外的参数，self代表实例本身，用于访问类的属性和方法。
    # 它用于获取书籍的详细信息，并以字符串格式返回。

    status = "已借出" if self.is_borrowed else "可借"
    # 这一行是一个条件表达式（也称为三元运算符），用于确定书籍的状态。
    # 如果self.is_borrowed为True（即书籍已被借出），则status变量被赋值为字符串"已借出"。
    # 如果self.is_borrowed为False（即书籍未被借出），则status变量被赋值为字符串"可借"。

    return f"书籍ID：{self.book_id}，标题：{self.title}，作者：{self.author}，年份：{self.year}，状态：{status}"
    # 这一行是方法的返回语句，使用f-string（格式化字符串字面量）来构造一个包含书籍所有信息的字符串。
    # f-string允许在字符串中直接嵌入表达式，用大括号{}包围起来。
    # self.book_id、self.title、self.author、self.year和status是`Book`类实例的属性，
    它们分别代表书籍的ID、标题、作者、出版年份和借阅状态。
    # 这些属性的值被插入到字符串中，形成一条完整的信息，然后返回这个字符串。'''
