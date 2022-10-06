#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Greates common diviosr of max elemnt and min element using brute force
int findGCD(vector<int>& nums) {
    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());
    int maxGCD = INT_MIN;

    for (int i = 1; i <= max; i++)
    {
        if (max % i == 0 && min % i == 0)
        {
            if (i > maxGCD)
            {
                maxGCD = i;
            }
        }
    }
    if (maxGCD == INT_MIN)
    {
        return 0;
    }
    return maxGCD;


}



int main()
{
    vector<int>nums = {0,0};
    cout << findGCD(nums) << endl;

}