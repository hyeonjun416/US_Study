n = int(input()) # n : the number of students.
memo = [] # memo = 학생의 이름과 점수를 기록하기 위한 리스트 선언
tmpscore = [] # tmpscore = 입력받은 점수들만 따로 저장
tmpname = [] # tmpname = 중복되는 점수를 가진 학생의 이름들을 저장하기 위한 공간 
for i in range(n) :
    name = input()
    score = float(input())
    memo.append([name, score])
    tmpscore.append(score)

set_tmp1 = set(tmpscore) # tmpscore에서 중복되는 점수를 제거하기 위해 set 사용
set_tmp = sorted(set_tmp1) # set_tmp1을 오름차순으로 정렬

final_score = set_tmp[1] # set_tmp의 1번 인덱스 값을 final_score에 저장

for i in range(n) : # 반복
    if memo[i][1]==final_score :
        tmpname.append(memo[i][0])

tmpname.sort() # 이름을 알파벳 순으로 정렬
for k in tmpname:
    print(k)
