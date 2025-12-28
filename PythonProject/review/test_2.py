def jug(mouth):
    if mouth ==1 or mouth ==2:
        return 1
    else:
        return jug(mouth-1)+jug(mouth-2)
print(jug(int(input("请输入月份："))))
