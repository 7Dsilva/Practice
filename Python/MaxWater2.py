# optimal way 2 pointers
# initialize pointer at far ends that way we maximize the area


height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
l = 0
r = len(height) - 1
res = 0

while l < r:
    area = min(height[l], height[r]) * (r - l)
    res = max(res, area)
    if height[l] <= height[r]:
        l += 1
    else:
        r -= 1
print(res)
