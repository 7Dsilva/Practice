from typing import List

# took 6 hours but finally solved it


def largestRectangleArea(heights: List[int]) -> int:
    maxarea = 0
    stack = []  # 'using pair : index, height

    for i, h in enumerate(heights):
        start = i
        while stack and stack[-1][1] > h:
            index, height = stack.pop()
            maxarea = max(maxarea, height * (i - index))
            start = index
        stack.append((start, h))

    for i, h in stack:
        maxarea = max(maxarea, h * (len(heights) - i))
    return maxarea


heights = [2, 1, 5, 6, 2, 3]
rel = largestRectangleArea(heights)
print(rel)
