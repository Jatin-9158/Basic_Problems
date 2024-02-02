#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr) {
   int n=arr.size();
   int Mn=INT_MIN;
   for(int i=0;i<n;i++)
   {
      if(i==0)
      {
         if(Mn<arr[i] && arr[i+1]<arr[i])
                                       return i;
      }
      else if(i==n-1)
      {
        if(arr[i-1]<arr[i] && Mn<arr[n-1])
                                       return i;
      }
      else
      {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) 
                                                return i;
   
      }
   }
   return 0;
}
int main()
{
  vector<int>A={1,8,1,5,3};
  cout<<findPeakElement(A);
  return 0;
}
