#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int m = max(arr.size(), arr[0].size());
    vector<vector<int>> answer(m, vector<int>(m, 0));
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            answer[i][j] = arr[i][j];
        }
    }
    return answer;
}