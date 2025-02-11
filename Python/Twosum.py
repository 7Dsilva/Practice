from typing import List


def twosum(nums: List[int], target=int) -> List[int]:
    rel = {}
    for i, n in enumerate(nums):
        sub = target - i
        if sub in rel:
            return [rel[sub], i]
        rel[n] = i


nums = [2, 7, 11, 15]
target = 9

result = twosum(nums, target)
print(result)
