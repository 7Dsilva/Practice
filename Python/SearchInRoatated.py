from typing import List


def search(nums: List[int], target: int) -> int:
    l, r = 0, len(nums) - 1

    while l <= r:
        mid = (l + r) // 2
        if target == nums[mid]:
            return mid
        # target will always lie between  l and mid  OR mid and r   based on which we write if and else
        if nums[l] <= nums[mid]:    # target is the pivot based on mid and l here
            if target > nums[mid] or target < nums[l]:
                l = mid + 1
            else:
                r = mid - 1

        else:
            if target < nums[mid] or target > nums[r]:
                r = mid - 1
            else:
                l = mid + 1
    return -1


nums = [4, 5, 6, 7, 0, 1, 2]
target = 0

res = search(nums, target)
print(res)
