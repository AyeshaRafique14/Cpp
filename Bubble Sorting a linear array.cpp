#include<iostream>
using namespace std;
int main()
{
	int arr[5]={15,34,53,2,19};
	int n=5;
	int temp;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Your sorted array is \n";
	for(int ptr=1;ptr<=5;ptr++)    //it was not taking index zero to ptr<=4 why? and was giving 0 (zero)
	{                              //in the array 
		cout<<arr[ptr]<<endl;
	}
}
