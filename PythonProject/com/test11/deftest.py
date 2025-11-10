#
mylist  = ["zhangsan","lisi","wangwu"]
#1,查找某元素 在列表中下标索引
index  = mylist.index("wangwu")
print(f"zhangsan在 列表中的下标索引为{index}")
#,查找的内容如果不存在会报错index1 = mylist.index("zhaneegsan")
#修改 特定下表索引的值
mylist[1]  = "zhangsan"
print(mylist)
#在下标为一的位置添加，后面的往后走
mylist.insert(1,"f插入df")
print(mylist)
#append 在最后加入
mylist.append("最后添加")
print(mylist)
#在列表的尾部添加一批数据

print(mylist)
#元素的删除
del mylist[2]
print(mylist)
#取出而且还能接收
end = mylist.pop(2)
print(mylist)
#删除某个元素 第一次匹配的值

print(mylist)
#清空列表
mylist.clear()
print(mylist)
#统计某元素的个数
mylist2  = ["1233","343rewr","1233","2222","1233"]
mylist.extend(mylist2)
co1ut = mylist.count('1233')
print(f"list表中1233的个数为{co1ut}")