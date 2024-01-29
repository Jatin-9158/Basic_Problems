#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int Min_No=INT_MAX;
	int Max_No=INT_MIN;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]<Min_No)
		{
			Min_No=arr[i];
		}
		if(arr[i]>Max_No)
		{
			Max_No=arr[i];
		}
	}
	int sum=Min_No+Max_No;
	return sum;
}
int main()
{
 int arr[4]={2,4,3,54};
 std::cout<<sumOfMaxMin(arr,4);
 return 0;
}
