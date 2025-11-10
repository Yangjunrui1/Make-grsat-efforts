#字符串的 相关操作
#通过下标索引取值
my_str = "   z  ha23ngsan are2 verry h3an2dsom32e   "
print(my_str[1])
print(my_str)
#通元组一样，字符串无法修改
#index 方法
#replace
new_mystr = my_str.replace("zhangsan","zh")
print(new_mystr)
print(my_str)
my_sr_list = my_str.split(" ")
print(my_sr_list)
# 不传入参数，删除 前后的空格
mefds = my_str.strip("23")
print(mefds)