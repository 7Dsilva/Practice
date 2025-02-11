
from typing import List


def encode(strs: List[str]) -> str:
    res = ""
    for s in strs:
        res += str(len(s)) + "#" + s
    return res
# def encode(strs: List[str]) -> str:
 #   res = ""
   # for s in strs:
 #       res += strs(len(s)) + "#" + s
   # return res


def decode(s: str) -> List[str]:
    res = []
    i = 0
    while i < len(s):
        j = i
        while s[j] != "#":
            j += 1
        length = int(s[i:j])
        i = j + 1
        j = i + length
        res.append(s[i:j])
        i = j

    return res


if __name__ == "__main__":
    strs = ["neet", "code", "love", "you"]

    encoded = encode(strs)
    print(encoded)

    decoded = decode(encoded)
    print(decoded)
