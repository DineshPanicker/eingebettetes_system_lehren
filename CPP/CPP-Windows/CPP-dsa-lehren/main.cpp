#include <iostream>

using namespace std;

void printitems(int n)
{
	for(int i=0;i<n;i++)
		cout<<i<<endl;
	for(int j=0;j<n;j++)
		cout<<j<<endl;
		//in diesem algo, du verstehen das ist O(2n) aber das ist O(n) weil zwei for loop im succession ist O(n)
}

int main()
{
	printitems(10);
	return 0;
}