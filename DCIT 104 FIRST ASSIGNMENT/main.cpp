#include <iostream>

using namespace std;
int sumOfPrimes(int n)
{
  bool prime[n + 1];
  memset (prime, true, n + 1);
  for (int p = 2; p * p < n; p++){
if (prime[p] == true){
    for (int i = p * 2; i < n; i += p)
        primel[i] = false;
}
  }
}
int sum = 0;
for (int i = 2; i < n; i++)
    sum += i;
return sum;
int main()
{
    int n = 100;
    cout << sumOfPrimes(n);
    return 0;
}
