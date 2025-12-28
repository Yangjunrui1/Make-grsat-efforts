# def jug(num):
#     """
#     计算兔子数量的递归函数
#     参数: num - 月份
#     返回: 该月份的兔子数量
#     这是一个斐波那契数列问题，第1个月和第2个月兔子数量都是1
#     从第3个月开始，兔子数量等于前两个月兔子数量之和
#     """
#     if num == 1 or num == 2:
#         return 1
#     else:
#         return jug(num-1) + jug(num-2)
#
# # 获取用户输入的月份
# mouth = int(input("请输入月份"))
# # 输出对应月份的兔子数量
# print(jug(mouth))
#
# class Elemnt:
#     def __init__(self,name):
#         self.name = name
#     def getslary(self):
#         pass
# class Manager(Elemnt):
#     def __init__(self,name,slary = 15000):
#         super().__init__(name)
#         self.slary = slary
#     def getslary(self):
#         return self.slary
#     def __str__(self):
#         return f"{self.name}的薪资是{self.slary}"
# class edit(Elemnt):
#     def __init__(self,name,slary = 12000,overtime = 0):
#         super().__init__(name)
#         self.slary = slary
#         self.overtime = overtime
#     def getslary(self):
#         if self.overtime<=0:
#             return self.slary
#         elif self.overtime>20:
#             return self.overtime +self.overtime* 20
#         else:
#             return self.slary + self.overtime*100
#     def __str__(self):
#         return f"{self.name}的薪资为{self.getslary()}"
# class soft_test(Elemnt):
#     def __init__(self,name,slary = 8000,bug_num = 0):
#         super().__init__(name)
#         self.slary = slary
#         self.bug_num = bug_num
#     def getslary(self):
#         return self.slary+self.bug_num*5
#     def __str__(self):
#         return f"{self.name}的薪资为{self.getslary()}"
# def main():
#     Element_list =[Manager("宋江"),Manager("吴用"),Manager("公孙胜",10000),
#                    edit("花容"),edit("武松",10000,10),edit("林冲",13000,30),
#                    soft_test("朱武",8000,100),soft_test("蒋敬"),soft_test("柴进",9000,100)]
#     for emp in Element_list:
#         if isinstance(emp,edit):
#             print("程序员",emp)
#         elif isinstance(emp,Manager):
#             print("经理",emp)
#         elif isinstance(emp,soft_test):
#             print("测试",emp)
# if __name__ == "__main__":
#     main()
# def jug(m):
#     if m ==1 or m==2:
#         return 1
#     else:
#         return jug(m-1)+jug(m-2)
# mouth = int(input("请输入月份："))
# print(jug(mouth))
# class Elemnt():
#     def __init__(self,name):
#         self.name = name
#     def __get_slary(self):
#         pass
# class Manager(Elemnt):
#     def __init__(self,name,slary = 15000):
#         super().__init__(name)
#         self.slary = slary
#     def __str__(self):
#         return f"{self.name}的薪资是：{self.slary}"
# class progrmer(Elemnt):
#     def __init__(self,name,slary = 12000,overtime = 0):
#         super().__init__(name)
#         self.slary = slary
#         self.overtime = overtime
#     def get_slary(self):
#         if self.overtime <=0:
#             return self.slary
#         elif self.overtime <=20:
#             return self.slary + self.overtime*100
#         else:
#             return self.slary + self.overtime*20
#     def __str__(self):
#         return f"{self.name}的薪资是：{self.get_slary()}"
# class soft_test(Elemnt):
#     def __init__(self,name,slary = 12000,bug_num = 0):
#         super().__init__(name)
#         self.slary = slary
#         self.bug_num = bug_num
#     def get_slary(self):
#        return self.slary + self.bug_num*5
#     def __str__(self):
#         return f"{self.name}的薪资是：{self.get_slary()}"
#
# def main():
#     Element_list = [Manager("宋江"),Manager("吴用"),Manager("晁盖",13000),
#                     progrmer("林冲",13330,28),progrmer("花容",13000,18),progrmer("柴进"),
#                     soft_test("李逵",9000,200),soft_test("李达",9000,129)]
#     for emp in Element_list:
#         if isinstance(emp,Manager):
#             print("经理",emp)
#         elif isinstance(emp,progrmer):
#             print("程序员",emp)
#         else:
#             print("测试员",emp)
# if __name__ == '__main__':
#     main()

# from random import *
# num = randint(1,10)
# print(num)

with open("test.txt","w+",encoding= 'UTF-8')as f:
    print("指针的位置1",f.tell())
    f.write("    静夜思    \n")
    f.write("           李白\n")
    f.writelines(["床前明月光，\n","疑是地上霜,\n","举头望明月，\n","低头思故乡.\n"])
    print("指针的位置2",f.tell())
    # f.close()
    f.seek(0)#此时指针在文件的末尾，如果直接读写打印不了内容
    print("指针的位置3", f.tell())
    for line in f:
        print(line.rstrip())



























