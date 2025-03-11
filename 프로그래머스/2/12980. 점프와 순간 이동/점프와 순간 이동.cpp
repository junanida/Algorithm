#include <iostream>
using namespace std;
 
int solution(int n)
{
    int ans = 0;
    while(n > 0)
    { 
        // 점프
        if(n % 2 == 1)
        {
            --n;
            ++ans;
        }
        
        // 순간이동
        n /= 2;
    }
    return ans;
}