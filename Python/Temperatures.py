# monotonic Decreasinng stack problem
from typing import List

# first of its kind


def dailyTemperatures(temperatures: List[int]) -> List[int]:
    stack = []  # we are using pair [temp,index]
    res = [0]*len(temperatures)
    for i, t in enumerate(temperatures):
        while stack and t > stack[-1][0]:
            stacktemp, stackindex = stack.pop()
            res[stackindex] = (i - stackindex)
        stack.append([t, i])
    return res


temperatures = [[30, 40, 50, 60]]

rel = dailyTemperatures(temperatures)
print(rel)
