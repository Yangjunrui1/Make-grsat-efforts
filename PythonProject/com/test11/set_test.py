#集合中不有重复的元素
my_set = {"sdffsd","sdfsd","sfs","sf","fsdf","fsdf"}
print(my_set)
my_set = my_set.pop()
print(my_set)
set1 = {1,2,3}
set2 = {1,4,5,6}
set3 = set1.difference(set2)
print(set3)
set1.difference_update(set2)
#消除1中与2相同的内容
print(set1)
set5  = set1.union(set2)
print(set5)
for e in set1:
    print(e)
