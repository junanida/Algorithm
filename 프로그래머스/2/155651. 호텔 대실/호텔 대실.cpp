#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 시간들을 분으로 변환
int toMinutes(const string& s)
{
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    return hh * 60 + mm;
}

int solution(vector<vector<string>> book_time) {
    vector<pair<int, int>> v;
    v.reserve(book_time.size());
    for(auto& t : book_time)
    {
        int start = toMinutes(t[0]);
        int end = toMinutes(t[1]) + 10;
        v.emplace_back(start, end);
    }
    
    sort(v.begin(), v.end(), [](const auto& a, const auto& b)
    {
        if(a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });
    
    priority_queue<int, vector<int>, greater<int>> pq;
    int answer = 0;
    
    for(auto& [start, avail] : v)
    {
        while(!pq.empty() && pq.top() <= start)
        {
            pq.pop();
        }
        
        pq.push(avail);
        
        answer = max(answer, (int)pq.size());
    }
    return answer;
}