//Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
    auto it=arr.begin();
    for(int i=0;i<arr.size();i++)
    {
        if(i<=m)
        {   it++;
            continue;
           
        }
        else
        {
           break;
           
        }
    }
    reverse(it,arr.end());        
}
//Sample Input
int main()
{
  vector<int>arr={1,2,3,5,64,4};
  reverseArray(arr,4);
  for(auto it=arr.begin();it!=arr.end();it++)
  {
       cout<<*it<<" ";
  }
}
