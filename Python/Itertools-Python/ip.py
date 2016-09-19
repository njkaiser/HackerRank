# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations


word, k = raw_input().split()
k = int(k)

perms = permutations(word, k)

for i in sorted(perms):
    print("".join(i))

# NONE OF THE STUFF BELOW WORKED
# LIKE NOT AT ALL
# NOT EVEN A LITTLE
# BASICALLY I HAD TO STEAL THE ANSWER OFF THE INTERNET

# A = list(perms)[0][0]
# print A

# ans = []
# for i in range(len(list(perms))):
#     ans = ""
#     print "i = ", i
#     for j in range(k):
#         print "j = ", j
#         ans = ans + "A"#list(perms)[i][j]
#         #print ans
#     print ans

# print ans
