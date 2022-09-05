# 집합의 핵심 : 중복된 요소를 가질 수 없다.
# 리스트는 똑같은 값도 여러개 담을 수 있음.
# < 집합 특징 >
    # 집합에 관련된 것들을 쉽게 처리하기 위해 만들어진 자료형
    # 중복을 허용X
    # 순서가 없음.

s1 = set([1,2,3])
# = s1 = {1,2,3}
print(s1)

# list 중복 제거 사용 예시
ex1 = [1,2,3,3,2,2,3]
newList1 = list(set(ex1)) # ex1을 집합으로 만들어 중복 제거 후 리스트로 다시 변경
print(newList1)

# 문자열에 set 사용
ex2 = set("Hello")
print(ex2) # {'o', 'l', 'e', 'H'} 출력
# 문자 역시 중복 삭제되며, 순서가 뒤죽박죽으로 나옴.

# 교집합(intersection)
i1 = set([1,2,3,4,5,6])
i2 = set([4,5,6,7,8,9])
print(i1&i2) # e1과 e2의 교집합 출력 => {4, 5, 6}
# = e1.intersection(e2) 역시 교집합 출력

# 합집합(union)
u1 = set([1,2,3,4,5,6])
u2 = set([4,5,6,7,8,9])
print(u1|u2) # {1,2,3,4,5,6,7,8,9} 출력
# = print(u1.union(u2))

# 차집합(difference)
d1 = set([1,2,3,4,5,6])
d2 = set([4,5,6,7,8,9])
print(d1 - d2) # 교집합을 제외한 d1을 출력 {1,2,3}
print(d2.difference(d1)) # 교집합을 제외한 d2 출력 {7,8,9}

# 값 추가하기
p1 = set([1,2,3,4,5,6])
p1.add(7) # p1값에 7 추가
print(p1)
p1.update([7,8,9,0]) # 여러 값 추가할 때 update 사용
print(p1)
p1.remove(0)
print(p1)