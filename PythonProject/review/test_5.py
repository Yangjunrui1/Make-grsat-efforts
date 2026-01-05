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
from logging import Manager
from traceback import format_list
from xml.dom.minidom import Element


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
# import random as r
# print(r.randint(1,29))
# from random import *
# list = [323,32,252,2532,252,5235,2552]
# print(choice(list))#从列表中随机选一个数字


# total = 0
# count = 0
# pass_count = 0
# fail_count = 0
# while True:
#     s = input("请输入成绩（end结束")
#     if s == "end":
#         break
#     score = int(s)
#     total+=score
#     count += 1
#     if score >=60:
#         pass_count+=1
#     else:
#         fail_count+=1
# if count >0:
#     avg = total/count
#     print("合格人数：",pass_count)
#     print("不合格人数：",fail_count)
#     print("平均分：{:.1f}".format(avg))
# else:
#     print("没有输入成绩")


# import random as r
# num = r.randint(1,100)
# count = 0
# while True:
#     guess = int(input("猜一个1-100的数字"))
#     count+=1
#     if guess>num:
#         print("猜大了")
#     elif guess<num:
#         print("猜小了")
#     else:
#         print("恭喜你猜对了")
#         break
#
#
# scores = []
# while True:
#     s = input("请输入成绩（end结束）")
#     if s == "end":
#         break
#     scores.append(int(s))
# #删除不及格
# # scores[x for x in scores if x>=60]
# scores.sort()
# print("成绩列表：",scores)
# print("最高分：",max(scores))
# print("最低分：",max(scores))
#
# score = []
# def fib(n):
#     if n ==1 or n==2:
#         return 1
#     else:
#         return fib(n-1)+fib(n-2)
# n = int(input("请输入项数："))
# for i in range(1,n+1):
#     # print(fib(i))
#     score.append(str(fib(i)))
#
#
# with open("score.txt",'w',encoding='UTF-8-sig') as f:
#     f.write(str(score)+'\n')
# with open("score.txt",'r',encoding='UTF-8-sig') as f:
#     print(f.readlines())

# score = []
# up_num = 0
# down_num = 0
# while True:
#     s = input("请输入数字（end结束：）")
#     if s == "end":
#         break
#     if int(s)>0:
#         up_num+=1
#         score.append(int(s))
#     else:
#         down_num+=1
#         score.append(int(s))
# print(f"正数有{up_num}")
# print(f"负数有{down_num}")
#
# def fib(n):
#     if n==1 or n==2:
#         return 1
#     else:
#         return fib(n-1)+fib(n-2)
# num = int(input("请输入项数："))
# for i in range(1,num+1):#不能够直接用括号
#     print(fib(i))

# import random as r
# num = r.randint(1,100)
# while True:
#     s = int(input("请在1-100之间猜一个数字："))
#     if s >num:
#         print("猜大了")
#     elif s<num:
#         print("猜小了")
#     else:
#         print("恭喜你，猜对了")
#         break
#
#
# class Element():
#     def __init__(self,name):
#         self.name = name
#     def get_slary(self):
#         pass
# class Manager(Element):
#     def __init__(self,name ,slary = 15000):
#         super().__init__(name)
#         self.slary = slary
#     def __str__(self):
#         return f"{self.name}的薪资为：{self.slary}"
#
#
# class programer(Element):
#     def __init__(self, name, slary=12000,out_time=0):
#         super().__init__(name)
#         self.slary = slary
#         self.out_time = out_time
#     def get_slary(self):
#         if self.out_time>20:
#             return self.slary+20*100
#         else:
#             return self.slary+100*self.out_time
#     def __str__(self):
#         return f"{self.name}的薪资为：{self.get_slary()}"
# class soft_test(Element):
#     def __init__(self, name, slary=8000,bug_num=0):
#         super().__init__(name)
#         self.slary = slary
#         self.bug_num = bug_num
#     def get_slary(self):
#         return self.slary+5*self.bug_num
#     def __str__(self):
#         return f"{self.name}的薪资为：{self.get_slary()}"
# def main():
#     Element_list =[Manager("宋江"),Manager("林冲"),Manager("吴用"),
#                    programer("柴进",12000,32),programer("花容",12000,19),programer("柴进",12000,12),
#                    soft_test("李逵",8000,400),soft_test("张三",8000,480),]
#     for emp in Element_list:
#         if isinstance(emp,Manager):
#             print("经理",emp)
#         elif isinstance(emp,programer):
#             print("程序员：",emp)
#         elif isinstance(emp,soft_test):
#             print("测试员：",emp)
# if __name__ =="__main__":
#     main()

# with open("test.txt","w",encoding="UTF-8-sig")
class Element():
    def __init__(self,name):
        self.name =name
    def get_slary(self):
        pass
class Manager(Element):
    def __init__(self,name,slary = 15000):
        super().__init__(name)
        self.slary = slary
    def get_slary(self):
        return self.slary
    def __str__(self):
        return f"{self.name}的薪资为{self.get_slary()}"
class programer(Element):
    def __init__(self,name,slary = 12000,out_time = 0):
        super().__init__(name)
        self.slary = slary
        self.out_time = out_time
    def get_slary(self):
        if self.out_time >20:
            return self.slary + 20*100
        else:
            return  self.slary +self.out_time*100
    def __str__(self):
        return f"{self.name}的薪资为{self.get_slary()}"
class soft_test(Element):
    def __init__(self,name,slary = 8000,bug_num = 0):
        super().__init__(name)
        self.slary = slary
        self.bug_num = bug_num
    def get_slary(self):
            return  self.slary +self.bug_num*5
    def __str__(self):
        return f"{self.name}的薪资为{self.get_slary()}"
def main():
    Element_list = [Manager("宋江"),Manager("吴用"),Manager("花容",13000),
                    programer("李逵",12000,32),programer("林冲",12000,12),programer("李达",12000,18),
                    soft_test("柴进",9000,400), soft_test("高俅",8000,300), soft_test("或三娘",9000,400)]
    for emp in Element_list:
        if isinstance(emp,Manager):
            print("经理",emp)
        elif isinstance(emp,programer):
            print("程序员",emp)
        elif isinstance(emp,soft_test):
            print("测试员",emp)

if __name__ == "__main__":
    main()
#
# def dib(n):
#     if n==1 or n==2:
#         return 1
#     else:
#         return dib(n-1)+dib(n-2)
# num = int(input("请输入项数："))
# for i in range(1,num+1):
#     print(dib(i))

# score = []
# for i in range(1,11):
#     score.append(int(input(f"请第{i}评委打分：")))
# score.sort(reverse=True)
# score.pop()
# score.pop(0)
# print(score)
# print(sum(score)/len(score))






























