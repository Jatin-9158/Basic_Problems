#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main ()
{
 string n1,n2;
 cin>>n1;
 cin>>n2;
 sort(n1.begin(),n1.end());
 sort(n2.begin(),n2.end());
 if(n1==n2)
        cout<<"True";
 else
  cout<<"False";
return 0;
}
