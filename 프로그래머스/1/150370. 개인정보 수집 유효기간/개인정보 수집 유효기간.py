def solution(today, terms, privacies):
    answer = []
    di = {}
    today_arr = list(map(int, today.split('.')))
    for term in terms:
        n, m = term.split()
        di[n] = int(m)*28
    for i in range(len(privacies)):
        date, s = privacies[i].split()
        date_arr = list(map(int, date.split('.')))
        year = (today_arr[0] - date_arr[0])*336
        month = (today_arr[1] - date_arr[1])*28
        day = today_arr[2] - date_arr[2]
        total = year+month+day
        if di[s] <= total:
            answer.append(i+1)
        
    return answer
