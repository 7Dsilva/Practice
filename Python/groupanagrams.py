from typing import List
from collections import defaultdict


def groupAnagrams(strs: List[str]) -> List[List[str]]:
    res = defaultdict(list)

    for s in strs:
        count = [0]*26
        for c in s:
            count[ord(c) - ord('a')] += 1
        res[tuple(count)].append(s)

    return list(res.values())


if __name__ == "__main__":
    strs = ["eat", "tea", "tan", "ate", "nat", "bat"]

    rel = groupAnagrams(strs)
    print(rel)
