#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int GCD(int a, int b)
{
    int Max = max(a,b);
    int Min = min(a,b);
    
    int r = Max % Min;
    
    if(r == 0)
        return Min;
    else 
        return GCD(Min, r);
}
 
int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i = 1; i < arr.size(); i++)
    {
        int gcd = GCD(answer, arr[i]);
        int lcm = answer * arr[i] / gcd;
        answer = lcm;
    }
    return answer;
}