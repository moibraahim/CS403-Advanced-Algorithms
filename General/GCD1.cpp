#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Greates common diviosr of max elemnt and min element using brute force
int findGCD(int a , int b) {
    int mininum = min(a,b);
    int maximum = max(a,b);
    int maxGCD = INT_MIN; // Smallest Value int can handle ( Similar to int max = -999999 )

    for (int i = 1; i <= maximum; i++)
    {
        if (maximum % i == 0 && mininum % i == 0)
        {
            if (i > maxGCD)
            {
                maxGCD = i;
            }
        }
    }
   
    return maxGCD;


}



int main()
{
    
    cout << findGCD(60,24) << endl;

}