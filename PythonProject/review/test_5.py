# class Employee:
#     def __init__(self,name):
#         self.name = name
#     def get_salary(self):
#         pass
# class Manager(Employee):
#     def __init__(self,name,salary = 15000):
#         super().__init__(name)
#         self.salary = salary
#     def __str__(self):
#         return f"{self.name}的薪资是{self.salary}"
# class Programmer(Employee):
#     def __init__(self,name,salary = 12000, overtime =0):
#         super().__init__(name)
#         self.salary = salary
#         self.__overtime = overtime
#     def get_salary(self):
#         if self.__overtime < 0:
#             return self.salary
#         elif self.__overtime > 20:
#             self.__overtime = 20
#         return self.salary + self.__overtime*100
#     def __str__(self):
#         return f"{self.name}的薪资为{self.get_salary()}"
# class Soft_test(Employee):
#     def __init__(self,name,salary =8000, bug_num =0):
#         super().__init__(name)
#         self.salary = salary
#         self.bug_num = bug_num
#     def get_salary(self):
#         return self.salary+self.bug_num*5
#     def __str__(self):
#          return f"{self.name}的薪资为{self.get_salary()}"
# def main():
#     Employee_list = [
#         Manager("宋江"),Manager("吴用"),Manager("公孙胜",10000),
#     Programmer("花容"),Programmer("武松",10000,10),Programmer("林冲",13000,30),
#     Soft_test("朱武"),Soft_test("蒋敬"),Soft_test("柴进",9000,100)]
#     for emp in Employee_list:
#
#         if isinstance(emp,Programmer):#判断是否为程序员类型
#             print("程序员：",emp)
#         elif isinstance(emp,Manager):
#             print("产品经理：",emp)
#         else:
#             print("测试工程师：",emp)
# if __name__ == "__main__":
#     main()
# def dug (m):
#     if m==1 or m==2:
#         return 1
#     else:
#         return dug(m-1)+dug(m-2)
# mouth = int(input("请输入月份："))
# print(dug(mouth))
# class Element():
#     def __init__(self,name):
#         self.name = name
#     def get_slary(self):
#         pass
#
# class Manager(Element):
#     def __init__(self,name,slary = 13000):
#         super().__init__(name)
#         self.slary = slary
#     def __str__(self):
#         return f"{self.name}的薪资为{self.slary}"
# class programer(Element):
#     def __init__(self,name,slary,out_time):
#         super().__init__(name)
#         self.slary = slary
#         self.out_time = out_time
#     def get_slary(self):
#         if(self.out_time>=20):
#             return self.slary+20*100
#         else:
#             return self.slary+self.out_time*100
#     def __str__(self):
#         return f"{self.name}的薪资为{self.get_slary()}"
#
#
# class soft_test(Element):
#     def __init__(self, name, slary, bug_num):
#         super().__init__(name)
#         self.slary = slary
#         self.bug_num = bug_num
#
#     def get_slary(self):
#         return self.slary+self.bug_num*5
#     def __str__(self):
#         return f"{self.name}的薪资为{self.get_slary()}"
#
#
# def main():
#     Elenment_list = [Manager("宋江"),Manager("吴用",15000),Manager("晁盖")
#                      ,programer("林冲",12000,23),programer("李逵",12000,12),
#                      soft_test("花容",8000,200),soft_test("柴进",9000,344)]
#     for Elenment in Elenment_list:
#         if isinstance(Elenment,Manager):
#             print("经理",Elenment)
#         elif isinstance(Elenment,programer):
#             print("程序员",Elenment)
#         else:
#             print("测试员" ,Elenment)
#
# if __name__ == "__main__":
#     main()
# class Element():
#     def __init__(self,name):
#         self.name = name
#     def get_slary(self):
#         pass
# class Manager(Element):
#     def __init__(self,name,slary = 14000):
#         super().__init__(name)
#         self.slary = slary
#     def __str__(self):
#         return f"{self.name}的薪资为：{self.slary}"
# class programer(Element):
#     def __init__(self,name,slary = 12000,out_time=0):
#         super().__init__(name)
#         self.slary = slary
#         self.out_time =out_time
#     def get_slary(self):
#         if(self.out_time>=20):
#             return self.slary+20*100
#         else:
#             return self.slary+100*self.out_time
#     def __str__(self):
#         return f"{self.name}的薪资为：{self.get_slary()}"
# class soft_test(Element):
#     def __init__(self,name,slary = 8000,bug_num=0):
#         super().__init__(name)
#         self.slary = slary
#         self.bug_num = bug_num
#     def get_slary(self):
#        return self.slary+5*self.bug_num
#     def __str__(self):
#         return f"{self.name}的薪资为：{self.get_slary()}"
#
# def main():
#     Element_list = [Manager("宋江"),Manager("吴用"),Manager("晁盖",12000),
#                     programer("林冲"), programer("花容",12000,20),
#                     soft_test("柴进",8000,400),soft_test("李逵",9000,200)]
#     for Element in Element_list:
#         if isinstance(Element,Manager):
#             print("经理",Element)
#         elif isinstance(Element,programer):
#             print("程序员",Element)
#         elif isinstance(Element,soft_test):
#             print("测试",Element)
#
#
# if __name__ == "__main__":
#     main()

# with open("test1.txt",'w+',encoding='UTF-8-sig')as f:
#     f.write("   静夜思  e  \n")
#     f.write("           李白\n")
#     f.writelines(["窗前明月光，\n","疑是地上霜。\n","举头望明月，\n","低头思故乡。\n"])
#     print("文件指针位置：",f.tell())
#     f.seek(0)
#     print("二文件指针位置",f.tell())
#     for line in f:
#         print(line.rstrip())

# from random import *
# print(randint(1,30))
import random as r
print(r.randint(1,29))
