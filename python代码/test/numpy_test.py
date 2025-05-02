import numpy as np
#1.创建一个数组
list = np.array([[1,2,3,4,5,6,7,8,9,10],[3,3,3,4,3,4,5,5,5,5]])
print(list)
print(list.shape)
#2.索引和切片
print(list[0])
print(list[1:2])
#3.计算
#直接用四则运算是对应位置计算
print([2,3,4]+[3,4,4])#这是直接拼接
print(np.array([3,3,3])+np.array([3,3,3]))#向量的加法
print(np.array([3,3,3])*np.array([3,3,3]))
arr = np.array([[1,2,3],[4,5,6]])
print(arr)
newarr = np.reshape(arr,(3,2))
print(newarr)
print(newarr.shape)
newarrT = np.transpose(newarr)
print(newarrT)#数组的转置

#5线性代数.统计学
arr = np.array([33,2,3])
arr2 =np.array([2,3,4])
arr3=np.dot(arr,arr2)
print(arr3)
print(np.mean(arr))
print(np.std(arr))#标准差
print(np.median(arr))#
print(np.max(arr))#
print(np.min(arr))#
print(np.sort(arr))
print(arr>10)
print(arr[(arr<50)&(arr>10)])#筛选数据

#6，数据的保存和导入
#npy
np.save("arr",arr)

np.random.seed(3)
print(np.random.rand())
print(np.random.randint(3,333,4))

arr = np.random.randint(0,100,16).reshaper(4,4)