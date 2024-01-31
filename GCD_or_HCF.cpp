#include<iostream>
using namespace std;
int calcGCD(int n, int m){
    if(n==0 || m==0)
                return 0;
    else
    {
       int Dividend,Quotient,Remainder,Divisor;
       if(n>m)
       {
         Divisor=n/m;
         Dividend=n;
         Quotient=m;
       }
       else
       {
         Divisor=m/n;
         Dividend=m;
         Quotient=n;
       }
       Remainder=(Dividend-(Quotient*Divisor));
       if(Remainder==0)
       {
           return Quotient;
       }
       else
       {
          Dividend=Quotient;
          Quotient=Remainder;
          calcGCD(Dividend,Quotient);
       }
    }
}
int main()
{
  int n,m;
  cin>>n>>m;
  calcGCD(n,m);
  return 0;
}
