# Why use list?
# 변수 여러개를 관리하기 힘들어서 서랍장처럼 여러개를 하나의 변수를 관리하기 위함
# list : 변수 여러 개를 묶는 역할(대표적인 예가 출석부)
namelist = ["James", "Khan","int", "Faker" ]

print(namelist)
print(namelist[1]) # Khan 출력
# 리스트 안에 리스트 기입 가능
# 리스트에는 자료형 여러 종류를 넣을 수 있음

test = [1,2,"mcd", ["go","Shinwoobin"]]

print(test[3])
print(test[3][1])

tplus = [1,2,3,4,5]

print(tplus[0:3])
print(tplus[0]+tplus[3])

x = [1,2,3]
y = [4,5,6]

print(x+y)
print(x*3)

# 리스트 값 수정하기
test[2] = "Macdonald"
print(test) # mcd -> Macdonald 로 변경됨을 알 수 있음
x[0:2] = [3,4,5] # 여러 개를 한번에 변경 가능
x[0]=[] # 리스트 내용 삭제
del y[0] # 삭제

x.remove(3) # x 리스트에서 3이라는 값을 삭제
# 3의 값이 여러개라면 인덱스 번호가 가장 작은 수만 삭제
# del은 인덱스로 삭제
# remove는 값으로 삭제
# list.remove(값)

test.append["I do not want"] # 리스트 마지막에 추가
test.insert(1,11) # 1번 인덱스에 11을 추가
x.sort() # 숫자는 오름차순 정리
# 문자열은 문자순으로 정리
x.reverse() # 리스트 역방향으로 뒤집는 함수

print(x.pop()) # 리스트 마지막 인덱스만 리스트밖으로 뽑아냄
print(x) # 원래보다 하나 줄어듬을 확인 가능

print(x.count(3)) # 값의 개수를 출력

x.extend([2,3]) # extend는 리스트를 추가. 그렇다고 리스트 안에 리스트가 추가된 형태는 아님. 2와 3이 리스트에 들어갔을 뿐임을 확인할 것




