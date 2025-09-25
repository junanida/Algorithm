#include <queue>
#include <vector>

using namespace std;

long long solution(int n, vector<int> works) {
    priority_queue<int> pq;
    
    for(int w : works)
    {
        pq.push(w);
    }
    
    while(n-- > 0 && !pq.empty())
    {
        int top = pq.top();
        pq.pop();
        if(top > 0)
        {
            pq.push(top - 1);
        }
    }
    
    long long answer = 0;
    while(!pq.empty())
    {
        long long x = pq.top();
        pq.pop();
        answer += x * x;
    }
    
    return answer;
}