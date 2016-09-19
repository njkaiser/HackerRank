# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations

# word, k = raw_input().split()
# k = int(k)

perms = permutations("HACK", 2)

print list(perms)[0]

print "why no work"

# ans = []
# for i in list(perms):
#     for j in len(list(perms)[0]):
#         ans[i] = ans[i] + list(perms)[i][j]
#     print ans[i]

# print ans
