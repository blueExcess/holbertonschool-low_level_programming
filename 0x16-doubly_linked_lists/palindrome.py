#!/usr/bin/python3

results = []
for x in range(100, 1000):
    for y in range(100, 1000):
        prod = x * y
        sP = str(prod)
        revSp = sP[::-1]
        if sP == revSp:
            results.append(prod)
print(max(results))
