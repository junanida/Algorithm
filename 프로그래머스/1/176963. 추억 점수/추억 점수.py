# 그리워하는 사람의 이름을 담은 문자열 배열 : name
# 각 사람별 그리움 점수를 담은 정수 배열 : yearning
# 각 사진에 찍인 인물의 이름을 담은 이차원 문자열 배열 : photo
def solution(name, yearning, photo):
    answer = []
    # name과 yearning을 딕셔너리로 매칭시킴
    match_dict = dict(zip(name, yearning))
    for i in range(0, len(photo)):
        result = 0
        for j in range(0, len(name)):
            if name[j] in photo[i]:
                result += match_dict[name[j]]
        answer.append(result)
    return answer