def lengthOfLongestSubstring(s: str) -> int:
    sets = set()
    l = 0
    res = 0

    for r in range(len(s)):
        while (s[r] in sets):
            sets.remove(s[l])
            l += 1
        sets.add(s[r])
        res = max(res, r-l+1)
    return res


s = "abcabcbb"
x = lengthOfLongestSubstring(s)
print(x)
