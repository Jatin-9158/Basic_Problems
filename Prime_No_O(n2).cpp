#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2)
        return false;
    
    int sqrtN = sqrt(n);
    
    for (int i = 2; i <= sqrtN; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}
int main()
{
  int n;
  cin>>n;
  if(isPrime(n))cout<<"Yes";
  else
    cout<<"No";
}

