//HASHING QUESTION NO. 3

//Cumulative Sum Query

// make a prefix sum array of size n. Which has sum till i’th index. So for a range sum=r - (l-1)
// Time complexity : O(n+q)
// Space complexity : O(n)


#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	int ran[q][2];
	for(int i=0;i<n;i++)
	{
		cin>>ran[i][0]>>ran[i][1];
	}
	vector<int> prefixSum(n,0);
	for(int i=0;i<n;i++)
	{
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
	int a=0;
	while(a!=q)
	{
		cout<<(prefixSum[ran[a][1]])-(prefixSum[ran[a][0]-1])<<endl;
		a++;
	}
	return 0;
}