#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[6]={2,4,3,5,1,6};
	int ans=arr[0];
	for(int i=1;i<6;i++)
		ans=min(ans,arr[i]);
	cout<<ans<<endl;
	return 0;
}