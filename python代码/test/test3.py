def display(a):
    print(a)
    return 0
display("dfsdf")

def add(a,b=1):
    return a+b
print(add(1))
tege = 99
predict = 0
while predict != tege:
    predict = int(input("请输入猜测的数字"))
    if predict>tege:
        print("猜打了")
    else:
        print("猜小了")
print("恭喜你猜对了")

a = input("<UNK>")
if int(a)>0:
    print("a是正数")
elif int(a) == 0:
    print("a的值为零")
else:
    print("a是负数")
print(a)
#for循环
for i in [2,35,66,77]:#for i in range(5):
    print(i)
for i in range(6):
    for j in range(3):
        print(i,j)
n = 19
while n>0:
    print(n)
    n = n-1