#include <vector>
using namespace std;

int answer = 0;

void dfs(vector<int> numbers, int target, int sum, int index)
{
    // 종료 조건
    if(index == numbers.size())
    {
        if(sum == target)
        {
            answer++;
        }
        return;
    }
    // 종료 조건이 만족되지 않으면 계속 탐색
    dfs(numbers, target, sum + numbers[index], index + 1);
    dfs(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, target, 0, 0);
    return answer;
}