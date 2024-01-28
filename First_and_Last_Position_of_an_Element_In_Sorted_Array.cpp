 //First and Last Position of an Element In Sorted Array
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int a,b;
    bool flag1=false;
    bool flag2=false;
    for(int i=0;i<n;i++)
    {
       if(flag1==false)
       {
        if(k==arr[i])
        {
            a=i;
            flag1=true;
        }
       }
       if(flag2==false)
       {
        if(k==arr[n-1-i])
        {
            b=n-i-1;
            flag2=true;     
        }
      }

    }
    if(flag1==false)
                 a=-1;
    if(flag2==false)
                 b=-1;
    return make_pair(a,b);   
}
int main() {
    int a, b;
    vector<int> arr = {1, 2, 3, 5, 5};
    pair<int, int> result = firstAndLastPosition(arr, 5, 5);
    a = result.first;
    b = result.second;
    cout << a << " " << b << endl;

    return 0;
}
