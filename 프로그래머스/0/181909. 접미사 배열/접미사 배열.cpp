#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    answer.push_back(my_string);
    while(my_string != "\0"){
        answer.push_back(my_string.erase(0,1));
    }
    answer.erase(answer.begin()+answer.size());
    
    sort(answer.begin(), answer.end());
    
    return answer;
}