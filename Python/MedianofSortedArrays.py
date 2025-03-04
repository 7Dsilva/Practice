from typing import List

# by far the craziest hard problem on leetcode I have encountered until now
# lets take it step by step


def findMedianSortedArrays(nums1: List[int], nums2: List[int]) -> float:
    A, B = num1, num2

    total = len(num1) + len(num2)  # finding half and total
    half = total // 2

    if len(B) < len(A):  # finding the smaller array
        A, B = B, A

    l, r = 0, len(A) - 1

    while True:
        i = (l + r) // 2   # partition of index till that point in A
        j = half - i - 2    # partition of index till that point in B by using A

        # Aleft : last element in left partition of A
        Aleft = A[i] if i >= 0 else float("-infinity")
        # Aright: fist element in right partition of A
        Aright = A[i + 1] if (i + 1) < len(A) else float("infinity")
        Bleft = B[j] if j >= 0 else float("-infinity")  # similarly Bleft
        # Similarly Bright
        Bright = B[j + 1] if (j + 1) < len(B) else float("infinity")

        if Aleft <= Bright and Bleft <= Aright:   # condidtion for correct partion
            if total % 2:  # actual logic
                return min(Aright, Bright)      # if total is even
            # if total is odd
            return (max(Aleft, Bleft) + min(Aright, Bright)) / 2
        elif Aleft > Bright:   # else shift pointers
            r = i - 1
        else:
            l = i + 1


num1 = [1, 2]
num2 = [3, 4]

z = findMedianSortedArrays(num1, num2)
print(z)
