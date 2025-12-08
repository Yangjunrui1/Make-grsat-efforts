#要将图书管理系统修改为基于JSON的，我们需要将书籍数据保存到JSON文件中，
#并在程序启动时从该文件加载数据。

import json

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
        # 获取书籍信息方法
        status = "已借出" if self.is_borrowed else "可借"
        return f"书籍ID：{self.book_id}，标题：{self.title}，作者：{self.author}，年份：{self.year}，状态：{status}"


class Library:
    # 图书馆类，用于管理多本书和借阅行为
    def __init__(self, filename):
        self.filename = filename
        self.books = self.load_books()

    def load_books(self):
        # 从JSON文件加载书籍数据
        try:
            with open(self.filename, 'r') as file:
                return json.load(file)
        except FileNotFoundError:
            # 如果文件不存在，则创建一个新的空书籍字典
            return {}

    def save_books(self):
        # 将书籍数据保存到JSON文件
        with open(self.filename, 'w') as file:
            json.dump(self.books, file, indent=4)

    def add_book(self, book_id, title, author, year):
        # 添加书籍方法，如果书籍ID不存在，则添加新书
        if book_id not in self.books:
            self.books[book_id] = {
                'title': title,
                'author': author,
                'year': year,
                'is_borrowed': False
            }
            self.save_books()
            print(f"书籍《{title}》添加成功。")
        else:
            print("此ID的书籍已存在。")

    def borrow_book(self, book_id):
        # 借书方法，根据书籍ID借书
        if book_id in self.books:
            if not self.books[book_id]['is_borrowed']:
                self.books[book_id]['is_borrowed'] = True
                self.save_books()
                print(f"书籍《{self.books[book_id]['title']}》已借出。")
            else:
                print("此书已被借出。")
        else:
            print("未找到书籍。")

    def return_book(self, book_id):
        # 还书方法，根据书籍ID还书
        if book_id in self.books:
            if self.books[book_id]['is_borrowed']:
                self.books[book_id]['is_borrowed'] = False
                self.save_books()
                print(f"书籍《{self.books[book_id]['title']}》已归还。")
            else:
                print("此书未被借出。")
        else:
            print("未找到书籍。")

    def find_book(self, book_id):
        # 查询书籍方法，根据书籍ID查询书籍信息
        if book_id in self.books:
            book = self.books[book_id]
            status = "已借出" if book['is_borrowed'] else "可借"
            print(f"书籍ID：{book_id}，标题：{book['title']}，作者：{book['author']}，年份：{book['year']}，状态：{status}")
        else:
            print("未找到书籍。")

    def list_books(self):
        # 列出所有书籍信息
        for book_id, book in self.books.items():
            status = "已借出" if book['is_borrowed'] else "可借"
            print(f"书籍ID：{book_id}，标题：{book['title']}，作者：{book['author']}，年份：{book['year']}，状态：{status}")


def main():
    # 主函数，提供用户交互界面
    library = Library('library.json')  # 创建图书馆实例，并指定JSON文件名
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

'''在这个版本中，我们添加了load_books和save_books方法来从JSON文件加载和保存书籍数据。
Library类的构造函数现在接受一个文件名参数，用于指定存储书籍数据的JSON文件。
其他方法已经相应地修改，以使用书籍数据的字典形式，而不是直接使用Book对象。
这样，程序就可以在每次运行时持久化书籍数据，并在下次启动时加载它们。'''
