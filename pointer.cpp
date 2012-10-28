#include<iostream>
using namespace std;
int main()
{
	int *ptr;	// a pointer
	int n;
	cout<<"Enter the number of values you want to enter\t";
	cin>>n;
	ptr = new int[n];	// now ptr can store 5 integer values only
	if(ptr==0)
	 cout<<"Error: Memory could not be allocated";
	else
	{
		for(int i=0;i<n;i++)
		{
			cout<<"Enter Value no."<<i+1<<"\t";
			cin>>ptr[i];
		}
		for(int i=0;i<n;i++)
		{	
			cout<<"Value "<<i+1<<" is "<<ptr[i]<<"\n";
		}
		delete [] ptr;
	}
 return 0;
}
