#    file_s = open(file='E:\\文档\\oee.txt', encoding="utf-8")#统一编码方式
 #   content =file_s.readlines()
  #  for i in content:
   #     print(i)
    #file_s.close()
import numpy as np
import matplotlib as plt
a=1
b=3
c=np.add(a,b)
print(c)
def isprime(num):
    for i in range(2,num):
        if num%i==0:
            return False
    return True


with open(file='E:\\文档\\oee.txt',mode='w',encoding='utf-8') as f:
    f.writelines("100以内的质数有\n")
    for num in range(2,100):
        if isprime(num):
            f.write("第"+str(num-1)+"各质数"+str(num)+'\n')


#pip list查看已有的库
#pip install matplotlib//绘图，//numpy数学计算//pandas
#装错了卸载的话 pip uninstall ---