# True / False 두 가지 값만을 가짐

a = True
print(a)
print(type(a)) # class 'bool'

# python 특이점
# 비어있는 string, list, tuple, dictionary + 0, None 는 모두 False
# 반대는 True(1 역시 True)

if a :
    print(a)
# True 라는 값을 반환

string = "Hi"
if string :
    print(string) # Hi 출력

emptystr = ""
if emptystr :
    print(emptystr)
# if 뿐만아니라 while 도 조건이 참이어야만 실행됨.

# 자료형의 참과 거짓
# 문자열(""), 리스트([]), 튜플(()), 딕셔너리({}) 등 어떠한 것이라도
# 내용이 비어있으면 거짓으로 판단
# 1 : 참
# 0 : 거짓
# None : 거짓

ex1 = [1,2,3,4]
while ex1:
    ex1.pop() # 마지막 원소를 삭제
    print(ex1)
# ex1 리스트가 비게되면 false로 판단하기 때문에, 작동이 멈춘다
