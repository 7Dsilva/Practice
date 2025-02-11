from typing import List


def hasDuplicate(nums: List[int]) -> bool:
    seen = set()
    for num in nums:
        if num in seen:
            return True

        seen.add(num)

    return False


nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
result = hasDuplicate(nums)

print(result)
