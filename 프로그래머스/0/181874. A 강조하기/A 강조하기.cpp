#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++)
    {
        char ch = tolower(myString[i]);
        if(ch == 'a')
        {
            answer += 'A';
        }
        else
        {
            answer += ch;
        }
    }
    return answer;
}