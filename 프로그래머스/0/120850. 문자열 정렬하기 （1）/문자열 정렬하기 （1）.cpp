#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i < my_string.size(); i++)
    {
        if(isdigit(my_string[i]))
        {
            answer.push_back(stoi(my_string.substr(i, 1)));
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}