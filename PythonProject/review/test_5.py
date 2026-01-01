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
