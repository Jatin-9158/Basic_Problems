//  Range Between 1 and 45 Stairs
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climb[46]={1,1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
     int climbStairs(int n) {

        if (n == 0 || n == 1) {
            return 1;
        } else {
            if (climb[n - 1] == -1) {
                climb[n - 1] = climbStairs(n - 1);
            }
            if (climb[n - 2] == -1) {
                climb[n - 2] = climbStairs(n - 2);
            }
            return climb[n - 1] + climb[n - 2];
        }
    }
};
int main ()
{
 Solution obj;
 cout<<obj.climbStairs(4);
return 0;
}
