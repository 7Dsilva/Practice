from typing import List


def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
    stack = []  # we are using pair [temp,index]
    res = [0]*len(temperatures)
    for i, t in enumerate(temperatures):
        while stack and t > stack[-1][0]:
            stacktemp, stackindex = stack.pop()  # we pop value amnd the index of it
            res[stackindex] = (i - stackindex)
            stack.append([t, i])
    return res
