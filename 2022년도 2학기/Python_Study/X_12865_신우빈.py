# N : 물건의 개수 (1 <= N <= 100)
# K : 최대 무개 (1 <= K <= 100,000)
# N 과 K 가 주어짐
# 두 번째줄부터 N 개의 줄 -> 각 물건의 무게 W(1 <= W <= 100,000), 물건의 가치 V(0 <= V <= 1000) 주어짐
# n, k, w, v 모두 정수

# 가치의 최댓값

n, k = input().split() # n 과 k 를 띄어쓰기 기준으로 각각 입력받기
n = int(n) # n 을 정수형으로 변환
k = int(k) # k 를 정수형으로 변환

# w 와 v 는 입력되는 값이 여러개이므로 list 형태로 선언
w = []
v = []
for i in range(0,n) :
    tmp1, tmp2 = input().split() # w 와 v 를 띄어쓰기 기준으로 입력받기 위해 임시 변수 tmp1, tmp2 선언
    w.append(int(tmp1)) # w 에는 tmp1 을 정수형으로 변환하여 추가
    v.append(int(tmp2)) # v 에는 tmp2 를 정수형으로 변환하여 추가

idx1 = [] # w 관련 조건을 만족하는 idx 번호 중 0 번에 가까운 idx 번호 list
idx2 = [] # w 관련 조건을 만족하는 idx 번호 중 n 번에 가까운 idx 번호 list

idx = 0 # w를 비교하기 위해 0번 부터 시작하는 index 관련 변수 선언
copy_n = n-1 # w를 비교하기 위해 n-1 부터 시작하는 index 관련 변수 선언

while True: 
    if idx == copy_n: 
        if idx+1 != n: 
            copy_n = n-1
            idx += 1
        else : break
    else :
        if w[idx]+w[copy_n] <= k:
            idx1.append(idx)
            idx2.append(copy_n)
            copy_n -= 1
        else : copy_n -= 1

# < while문 설명 >
# k 이하의 w 합에 대해서, 그 때 더한 w 의 idx들을 저장하기 위한 코드.
# 여기서 틀림.
# w를 더할 때, 두개만 합할 것이 아니라, k 이하를 만족하는 동안 계속 반복해서 더해줘야 함.
# 즉, 개수를 두개로 한정했기때문에 틀림.

res = [] # 무게 합이 가능한 조합들 중 가치의 합들의 집합

for i in range(0, len(idx1)):
    res.append(v[idx1[i]]+v[idx2[i]]) # res 에 앞서 가져온 인덱스를 이용하여 해당 무게 가치를 더해줌.

print(max(res))