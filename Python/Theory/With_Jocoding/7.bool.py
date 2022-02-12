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