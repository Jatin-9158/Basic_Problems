#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n) {
    std::string n1 = std::to_string(n);
    int k = n1.length();
    int original = n;
    int RevSq_No = 0;

    while (n > 0) {
        int remainder = n % 10;
        RevSq_No = RevSq_No + std::pow(remainder, k);
        n = n / 10;
    }

    return original == RevSq_No;
}
int main()
{
  int n;
  cin>>n;
  if(checkArmstrong(n))cout<<"Yes";
  else
    cout<<"No";
  return 0;
}
