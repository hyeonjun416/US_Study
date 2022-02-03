# 캐비넷과 같은 느낌의 도구
# 연관된 데이터를 모아서 정리정돈하는 도구
students = ["egoing","sori","maru"]
grades = [2, 1, 4]

print('students[1]',students[1]) # sori 출력
print('len(students)',len(students)) # students 원소 개수
print('min(grades)', min(grades)) # grades 값 중 가장 작은 값 출력
print('max(grades)', max(grades)) # 최대값 출력
print('sum(grades)', sum(grades)) # 합 출력

import statistics # 통계 관련 기능 내장
print('statistics.mean(grades)', statistics.mean(grades)) # grades 값의 평균 값

import random
print('random.choice(students)',random.choice(students))


