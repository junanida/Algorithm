#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int,int> second; //뒷놈
    map<int,int> first; // 앞놈
    for(int i = 0; i < topping.size();i++){
        second[topping[i]] += 1; //우선 뒷놈에 다 넣어버림
    }
    for(int i = 0; i < topping.size();i++){ //한칸씩 앞놈으로 가면서 갯수가 같으면 answer++함
        if(second.find(topping[i]) != second.end()){
            second[topping[i]] -= 1;
            first[topping[i]] += 1;
            if(second[topping[i]] == 0){ // 0이라는것은 없는거지 뒷놈 map지움
                second.erase(topping[i]);
            }
        }
        if(first.size() == second.size())
            answer++;
    }
    return answer;
}