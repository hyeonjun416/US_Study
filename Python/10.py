n = int(input())
memo = []
tmpscore = []
tmpname = []
for i in range(n) :
    name = input()
    score = float(input())
    memo.append([name, score])
    tmpscore.append(score)

set_tmp1 = set(tmpscore)
set_tmp = sorted(set_tmp1)
print(set_tmp)

final_score = set_tmp[1]
print(final_score)

for i in range(n) :
    if memo[i][1]==final_score :
        tmpname.append(memo[i][0])

tmpname.sort()
for k in tmpname:
    print(k)
