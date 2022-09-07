N, K = map(int, input().split()) 
wv = [[0, 0]]
for _ in range(N):
    wv.append(list(map(int, input().split())))
P = [[0]*(N + 1) for _ in range(K + 1)] #점화식 사용을 위한 이차원 배열 초기화

for i in range(1, N+1):
    for w in range(1, K+1):
        if wv[i][0] <= w: #wv가 배낭의 총 용량보다 작을 때
            P[w][i] = max(wv[i][1] + (P[(w - wv[i][0])][i - 1]), P[w][i - 1])#wv 합과 이전 max값중 큰거 선택
        else: P[w][i] = P[w][i - 1] #wv가 배낭보다 크면 이전 값 사용

print(P[K][N])



#자료구조 시간에 사용했던 그리드 알고리즘을 통해서 
#0부터 N까지의 경로중 가장 최소비용을 가진 알고리즘을
#최대로 변경해서 품
#자료구조 책에 설명 잘 되있음 ㅇㅇ