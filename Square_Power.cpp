#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
           n=abs(n);
           if(n%2==0)
           {
            return myPow((1/x)*(1/x),n/2);
           }
           else
           {
             return (1/x)*myPow((1/x)*(1/x),(n-1)/2);
           }

        }
        if(n==0)
        {
           return 1;
        }
        if(n%2==0)
        {
            return myPow(x*x,n/2);
        }
        else
        {
            return x*myPow(x*x,(n-1)/2);
        }
    }
};
int main()
{
    Solution S;
    int n;
    double x;
    system("cls");
    cout<<"Enter the Number:";
    cin>>x;
    cout<<"Enter the Power:";
    cin>>n;
    cout<<S.myPow(x,n)<<endl;
    Sleep(1000);
    return 0;
}
