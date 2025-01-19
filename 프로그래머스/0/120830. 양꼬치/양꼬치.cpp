#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int drink_count = n / 10;
    int drink = k - drink_count;
    if(drink <= 0) k = 0;
    else k = drink;
    answer += n * 12000 + k * 2000;
    return answer;
}