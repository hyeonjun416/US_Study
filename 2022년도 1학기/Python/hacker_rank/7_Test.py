# 생각 코딩
En = int(input())
En_list = []

for i in range(En) :
    En_list.append(input().split())
    end=''

Fr = int(input())
Fr_list = []
for i in range(Fr) :
    Fr_list.append(input().split())
    end=''
SetEn = set(En_list)
SetFr = set(Fr_list)

result = SetEn.difference(Fr_list)
print(len(result))