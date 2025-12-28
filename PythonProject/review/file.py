# with open("test.txt","r") as f:
#     f.write("  静夜思   \n")
#     f.write("        李白\n")
#     f.writelines(["床前明月光,\n","疑是地上霜.\n","举头望明月,\n","低头思故乡。\n"])

with open("test.txt","w+",encoding= 'UTF-8-sig')as f:
    print("指针的位置1",f.tell())
    f.write("    静夜思    \n")
    f.write("           李白\n")
    f.writelines(["床前明月光，\n","疑是地上霜,\n","举头望明月，\n","低头思故乡.\n"])
    print("指针的位置2",f.tell())
    # f.close()
    f.seek(0)#此时指针在文件的末尾，如果直接读写打印不了内容
    print("指针的位置3", f.tell())
    for line in f:
        print(line.rstrip())
