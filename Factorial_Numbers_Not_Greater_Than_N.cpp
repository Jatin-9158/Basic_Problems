#include<iostream>
#include<vector>
using namespace std;
vector<long long> factorialNumbers(long long n)
{
    vector<long long>arr1;
    long long sum=1;
    for(long long i=1;i<=n;i++)
    {
       sum=sum*i;
       if(sum<=n)
          arr1.push_back(sum);
       else
         break;
    } 
    return arr1;
}
int main()
{
  vector<long long>Contain=factorialNumbers(45);
  for(auto it=Contain.begin();it!=Contain.end();it++)
                                            cout<<*it<<" ";
  return 0;
}
