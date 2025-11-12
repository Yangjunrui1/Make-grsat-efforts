#和集合一样都是使用大括号】，字典中存储的是键值对
my_dict = {"zangsan":99,"wangwu":45,"zhaolliu":22}
print(my_dict)
#集合不能直接使用{}，被字典使用了
print(my_dict["zangsan"])
socre = {
    "张三":{
        "数学":33,
        "语文":22},
        "李四":{
        "数学":33,
        "语文":22}
}

socre["赵六"] = 34

print(socre)
socre.pop("赵六")
print(socre)
print(socre.keys())
#下面两者一样
for key in socre.keys():
    print(f"字典的value{socre[key]}")
for key in socre:
    print(f"字典的value{socre[key]}")
    