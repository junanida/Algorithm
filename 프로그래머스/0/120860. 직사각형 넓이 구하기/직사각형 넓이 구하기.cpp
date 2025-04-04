#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x=dots[0][0];
    int y=dots[0][1];
    bool bx=false, by=false;
    
    for(int i=1; i<dots.size(); i++){
        if(x!=dots[i][0] && !bx){
            x=abs(x-dots[i][0]);
            bx=true;
        }
        
        if(y!=dots[i][1] && !by){
            y=abs(y-dots[i][1]);
            by=true;
        }
    }
    
    answer=x*y;
    
    return answer;
}