#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int size = brown + yellow;
    
    for(int height = 3; height <= size / 2; height++)
    {
        int width = size / height;
        
        if(size % height == 0)
        {
            if((width - 2) * (height - 2) == yellow)
            {
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}