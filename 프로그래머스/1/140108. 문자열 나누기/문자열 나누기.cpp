#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = 0, idx = 0;
    while (idx < s.size())
    {
        int cnt = 1;//첫문자 - 다른문자
        char c = s[idx++];
        while (idx < s.size() && cnt)// cnt == 0 이 될때까지
        {
            if (s[idx] != c) cnt--;// 다른 문자면 
            else cnt++;// 같은 문자면
            idx++;
        }
        answer++;
    }
    return answer;
}