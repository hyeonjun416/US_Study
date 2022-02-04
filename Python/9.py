from audioop import reverse


n = int(input())
arr = map(int, input().split()) # 입력받은 내용을 리스트에 정수형으로 저장한다

print(sorted(list(set(arr)), reverse=True)[1])