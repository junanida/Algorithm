# board : 보트의 각 칸에 칠해진 색깔이 담긴 이차원 문자열 리스트
# board[h][w] : h, w는 고른 칸의 위치를 나타내는 정수
def solution(board, h, w):
    n = len(board)
    count = 0
    dh = [0, 1, -1 ,0]
    dw = [1, 0, 0, -1]
    for i in range(0, 4):
        h_check, w_check = h + dh[i], w + dw[i]
        if 0<=h_check<n and 0<=w_check<n :
            if board[h][w] == board[h_check][w_check]:
                count += 1
    return count