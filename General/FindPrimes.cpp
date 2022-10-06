#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//Sieve of Eratosthenes Algorithm to find prime numbers
void FindPrimes(int n)
{
    // Create a list of size n+1, Initialized with 1 as primes
    // Mark each multiples of ith number as a non-prime
    vector<int> List(n + 1, 1);

    // no primes in 0 and 1;
    List[0] = 0;
    List[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (List[i] == 1)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                List[j] = 0;
            }
        }
    }


    for (int i = 0; i <= n; i++)
    {
        if (List[i] == 1)
        {
            cout << i << " ";
        }
    }
}




int main()
{
    FindPrimes(100);
    

}