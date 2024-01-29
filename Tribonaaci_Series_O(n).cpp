#include<iostream>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        int n0=0,n1=1,n2=1,n3;
        if(n==0)
             return 0;
        if(n==1 || n==2)
              return 1;
        else
      {
        
        for(int i=3;i<=n;i++)
        {
            n3=n0+n1+n2;
            n0=n1;
            n1=n2;
            n2=n3;

        }
      }
        return n3;
    }
};
int main()
{
  Solution S;
  cout<<S.tribonacci(5);
  return 0;
}
