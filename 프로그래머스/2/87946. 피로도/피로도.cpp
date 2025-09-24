#include <vector>

using namespace std;

int answer = 0;
vector<vector<int>> D;
vector<int> visited;

void dfs(int k, int cnt)
{
    answer = max(answer, cnt);
    
    for(int i = 0; i < D.size(); ++i)
    {
        if(visited[i]) continue;
        
        int need = D[i][0];
        int cost = D[i][1];
        
        if(k < need) continue;
        
        visited[i] = 1;
        dfs(k - cost, cnt + 1);
        visited[i] = 0;
    }
}


int solution(int k, vector<vector<int>> dungeons) {
    D = dungeons;
    visited.assign(D.size(), 0);
    
    dfs(k, 0);
    
    return answer;
}