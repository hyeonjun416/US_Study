# 특정 단어를 key로 하여 어떤 값이 있는 자료구조
# 사전과 똑같다고 생각하면 됨.
# 주로 API에 활용됨.

# Plus ) 어떤 요청을 보냈을 때 서버에서 응답이 오는 것이 Json 형태로 많이 들어옴.
# 그리고 json에는 dic이 많이 사용됨.
# 딕셔너리 = Hash = 연관 배열
# Key를 통해 Value를 얻는다.

from curses import erasechar


dic = {'name': 'Eric', 'age':15}

print(dic['name']) # Eric 출력

# dictionary 쌍 추가하기
a = {1:'a'}
a['name'] = "unknown"
print(a) #name : unknown 이라는 값이 추가됨.

# dictionary 삭제
del a[1] # 인덱스가 아닌 key를 대괄호 안에 작성해야 함.

# 리스트는 괄호 안에 순서를 작성
# 딕셔너리는 순서가 아닌 key를 작성

# 주의! : key는 중복되면 안됨. 그렇게하면 마지막 key와 value가 남음
# value는 같아도 무관! key가 핵심!!
b = {1:'a', 1:'b'} 
print(b)

# key or value 몰아보기
ex1 = {1:'blue', 2:'red', 3:'dark'}
print(ex1.keys()) # dic_keys([1,2,3]) 출력
print(ex1.values()) # values만 출력
print(ex1.items()) # (key,value) 쌍을 담을 수 있음(튜플형)

# items 사용 예시
for k, v in ex1.items() :
    print("Key : " + str(k))
    print("Value : " + v)

# get
# print(ex1[4])
print(ex1.get(4))
print(ex1.get(4,'Empty')) # ex1이라는 dic 안에 4라는 키가 없기때문에, Empty라는 값을 return.
# 위의 예시처럼 딕셔너리에 존재하지 않는 Key값을 주어줬을 때,
# 첫 번째는 error
# get은 None을 반환

# in
print(4 in ex1)
# 4가 ex1에 있냐? 라는 질문이며,
# bool값을 출력함(True or false)

# clear 함수를 사용해서 dic 비우기
ex1.clear()
print(ex1)