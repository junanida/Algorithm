#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string str = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != letter[0])
        {
            str += my_string[i];
        }
    }
    return str;
}