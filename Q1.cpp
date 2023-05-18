// CPP program to answer queries for frequencies
// in O(1) time.
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> hm;

void countFreq(int a[], int n)
{
	// Insert elements and their
	// frequencies in hash map.
	for (int i=0; i<n; i++)
		hm[a[i]]++;
}

// Return frequency of x (Assumes that
// countFreq() is called before)
int query(int x)
{
	return hm[x];
}

// Driver program
int main()
{
	int a[] = {1, 3, 2, 4, 2, 1};
	int n = sizeof(a)/sizeof(a[0]);
	countFreq(a, n);
	cout << query(2) << endl;
	cout << query(3) << endl;
	cout << query(5) << endl;
	return 0;
}
