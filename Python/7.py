En = input()
S_en = set(input().split())
Fr = input()
S_Fr = set(input().split())
# input의 리턴값은 문자열
# 
print(len(S_en.difference(S_Fr)))