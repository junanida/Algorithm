#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string nums = to_string(num);
    char target = to_string(k)[0];  // char로 변경
    for(int i = 0; i < nums.length(); i++)
    {
        if(nums[i] == target)
        {
            return i + 1;  // 바로 리턴하면 됨
        }
    }
    return answer;
}
