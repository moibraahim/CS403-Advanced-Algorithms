#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


 // GCD using Euclidean Algorithm
int findGCD(int a, int b) {

    if (b == 0)
    {
        return a;
    }

    return findGCD(b, a % b);

    

}



int main()
{
    
    cout << findGCD(35,15) << endl;

}