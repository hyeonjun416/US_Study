# string(문자열)
# ' '로 묶어서 문자열로 표현
print('Hello World')
print("Hello World")
# 텍스트가 여러 줄로 되어있는 경우, 작음따옴표 3개(''')로 묵으면 줄바꿈이 포함됨
print('''
Hello
World
''')
# 큰따음표도 가능

print("'1'+'1'",'1'+'1') # ""로 ''를 묶어서 코드가 아닌 문자로 인식
# 위에서 + 는 산술연산자가 아닌, 문자열과 문자열을 결합하는 "결합연산자"로 사용
print('Hello World'*100) # Hello World 100번 반복 출력

print("len('Hello world'*100)", len('Hello world'*100)) # 문자의 개수 출력
print("'Hello World'.replace('World', 'Universe')",'Hello World'.replace('World', 'Universe'))