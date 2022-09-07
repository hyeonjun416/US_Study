import sys

cnt,max_weight = map(int, sys.stdin.readline().split())

obj=[]
for _ in range(cnt):
    obj.append(list(map(int,sys.stdin.readline().split())))

obj=sorted(obj, key=lambda x:x[0])

values=[]


# 그냥 어떻게 해야할지 감도 안잡혔음음
# 1. 모든 경우의 수를 따져 구하기 -> 시간복잡도 O(2^n) 으로 시간초과 발생함
# 2. 가치가 최대인 것들만 생각해서 구하기 -> 무게가 같고 가치가 다른 입력이 들어올 수 있으므로 안됨