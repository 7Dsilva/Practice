# defining a hashmap        hashmap = {}  or  hashmap = dict()

def anagram(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False

    countS, countT = {}, {}

    for i in range(len(s)):
        countS[s[i]] = 1 + countS.get(s[i], 0)
        countT[s[i]] = 1 + countS.get(s[i], 0)
    for c in countS:
        if countS[c] != countT[c]:
            return False

    return True


s = "rat"
t = "car"

result = anagram(s, t)
print(result)
