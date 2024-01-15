// Program Uses Memoization Technique Not Good Solution For This Case But Be a Good Solution For Fibbonacci Series Problem
#include<iostream>
int Factorial(int n)
{   int Fact[n];
    for(int i=0;i<n;i++)
    {
        Fact[i]=-1;
    }
    if(n<=1)
    {
        Fact[n]=1;
        return 1;
    }
    else
    {
        if(Fact[n-1]==-1)
        {
            Fact[n-1]=Factorial(n-1);
        }
        return n*Fact[n-1];
        
        
    }
}
int main()
{
    int Number;
    std::cout<<"Enter the Factorial Number:"<<std::endl;
    std::cin>>Number;
    std::cout<<"Factorial of "<<Number<<" is: "<<Factorial(Number);
}
