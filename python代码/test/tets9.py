import numpy as np
np.random.seed(1234)
print(np.random.rand())
arr = np.random.randint(0,100,16).reshape(4,4)
print(arr)
print(arr[arr>33])