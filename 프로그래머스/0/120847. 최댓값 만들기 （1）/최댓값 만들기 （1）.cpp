#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max1 = 0;
    int max2 = 0;
    for(int i: numbers)
    {
        if(max1 <= i)
        {
            max2 = max1;
            max1 = i;
        }
        else if(max2 <= i)
        {
            max2 = i;
        }
    }
    answer = max1 * max2;
    return answer;
}