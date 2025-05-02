#列表使用【】color=['red','black']使用逗号分隔
#元组使用不能修改 color=('red','blak')使用圆括号，内容不能修改
#字典color={'red':'black'}使用花括号，中间使用：隔开
list=[1,3,"大家好",3.33]
print(list[1:3])
list1 = (2,3,22,"dffd")
print(list1)
#list1[3]="df",不能够修改
list2={"one":1,"two":2,"three":3,"four":4,"five":5}
print(list2["one"])#可以通过名称查找，没有索引,名称不能重复
list2["one"]=11
print(list2)
#集合，不能有重复的元素，只会输出一次
list4= {3,3,4,"dfds",True}#bool不能输出
print(list4)
print(list1*3)#字典和集合并不能运算
print(1  not in list)#判断1是否在list中