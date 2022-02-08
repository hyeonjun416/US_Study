a = "Hello World"
# 'Hello World' (가능)
# """Hello World""" (가능)
# '''Hello World'''(가능)
print(a)
print(type(a)) # str

b = 'Python\'s favorite food is perl'
c = """Life is too short 
You need python"""
c1 = 'Life is too short \n YOu need python'

# Escape code
# \n : 문자열 안에서 줄 바꿈
# \t : 문자열 사이에 탭 간격을 줄 때 사용
# \\ : 문자 \를 그대로 표현할 때 사용
# \' : 따옴표를 그대로 사용할 때 사용

d = "Python"
e = " is fun!"
print(d+e) # Python is fun!
print(d*100) #Python 100번 출력

# 인덱싱 사용 가능
print(d[0]) # P
print(d[1]) # y
print(d[-1]) # n
print(d[-2]) # o
#a[x:y:z] = x 이상 y 미만 z 간격

slicing1 = "20010331Rainy"
print(slicing1[:8]) # 첫 글자부터 8번 인덱스 전까지 출력
print(slicing1[8:]) # 8번 인덱스부터 끝까지 출력

slicing2 = "12345678"
print(slicing2[::1]) # 처음부터 끝까지 간격을 1로하여 출력(12345678)
print(slicing2[::2]) # 처음부터 끝까지 간격을 2로하여 출력(1357)
print(slicing2[::-2]) #8642

formating = "I eat %d apples." % 3
print(formating) # I eat 3 apples가 출력
# 따옴표를 여러번 사용하지 않기 위해 formating 사용
# Ex)
number = 10
day = "three"
exam = "I ate %d apples. so I was sick for %s days" %(number,day)

print(exam)
# %s : 문자열(string)
# %c : 문자 1개(character)
# %d : 정수(Integer)
# %f : 부동 소수(Floating-Point)
# %o : 8진수
# %x : 16진수
# %s로 쓰면 편리함.

format_hard = "asdf asdf asdf {} asdf".format("Hi")
format_hard2 = "asdf {age}asdf asdf {name} asdf".format(name = "Tigi", age = 16) # 변수 이름을 줄 수 있음

float1 = "%0.4f" % 3.42134234 # 3.4213
# o 은 간격, 4는 소숫점 자릿수

print(format_hard.count('a'))
print(format_hard.find('s')) # 가장 처음나오는 글자의 인덱스
# 없는 경우 -1 출력

exjoin = ",".join("abcd")
# ""의 str을 기준으로, ("") 를 쪼개서 join
print(a) # a,b,c,d
exlistjoin = ",".join(["a","b","c"])
print(exlistjoin)

exupper = 'hi'
print(exupper.upper()) # HI
exstrip = "   HI   "
print(exstrip.strip()) # HI

exreplace = "Life is too short"
print(exreplace.replace("Life", "Your leg"))
# replace(a,b) : a를 b로 변경

exsplit = "Life is too short"
print(exsplit.split()) # 띄어쓰기 기준으로 잘라서 list 형태로 바꿈
exsplit2 = "a:b:c:d"
print(exsplit2.split(":")) # : 기준으로 잘라서 list 형태로 바꿈