def fibonacci(n):
    """
    生成斐波那契数列的前 n 项
    :param n: 需要生成的项数
    :return: 包含前 n 项斐波那契数的列表
    """
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fib = [0, 1]
        for i in range(2, n):
            fib.append(fib[-1] + fib[-2])
        return fib

# 示例：打印前 10 项斐波那契数列
print(fibonacci(16))
