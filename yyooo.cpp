#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	cout<< "enter a number  ";
	cin>>i;
	while(i>1)
	{
		if(i%2==1)
		{
			i=(i*3)+1;
		}
		if(i%2==0)
		{
			i=i/2;
		}
		cout<<i<<endl;
	}
}