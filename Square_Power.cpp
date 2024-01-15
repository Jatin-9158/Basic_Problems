#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {   n=abs(n);
            return (1/x)*myPow(1/x,n-1);
        }
        else if(n==0)
        {
            return 1;
        }
        else
        {
            return x*myPow(x,n-1);
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