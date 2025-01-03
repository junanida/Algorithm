# data = [코드번호, 제조일, 최대 수량, 현재 수량]
# ext : 어떤 정보를 기준으로 데이터를 뽑아낼지 의미하는 문자열
# val_ext : 뽑아낼 정보의 기준값을 나타내는 정수
# sort_by : 정보를 정렬할 기준이 되는 문자열 (오름차순)
def solution(datas, ext, val_ext, sort_by):
    sort_dict = {'remain' : 3, 'maximum' : 2, 'date': 1, 'code': 0}
    condition = sort_dict[ext]
    answer = []
    for data in datas:
        if data[condition] < val_ext:
            answer.append(data)
    answer = sorted(answer, key =lambda x : x[sort_dict[sort_by]])
    
    return answer