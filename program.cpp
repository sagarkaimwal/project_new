/* i am very hungry today */
#include<iostream>
using namespace std;
int main()
{
	int n,array[1000],c,d;
	cout<<"enter the size of array";
	cin>>n;
	cout <<"enter the element of array ";
	for (c=0;c<n;c++)
	{
		d=c;
		while(d>0&&array[d-1]>array[d])
		{
			int t;
			t=array[d-1];
			array[d-1]=array[d];
			array[d]=t;
			d--;
		}
	}
	cout<<"sorted array in asending order";
	for(c=0;c<n;c++)
	cout<<array[c]<<"\n";
	return 0;

}
