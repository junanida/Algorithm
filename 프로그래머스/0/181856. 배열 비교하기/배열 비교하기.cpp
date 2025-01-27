#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int arr1_sum = 0;
    int arr2_sum = 0;

    if(arr1.size() == arr2.size())
    {
        for(int i = 0; i < arr1.size(); i++)
        {
            arr1_sum += arr1[i];
        }
        for(int i = 0; i < arr2.size(); i++)
        {
            arr2_sum += arr2[i];
        }
        if(arr1_sum > arr2_sum)
        {
            return 1;
        }
        else if(arr1_sum < arr2_sum)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    else if(arr1.size() > arr2.size()) return 1;
    else return -1;
}