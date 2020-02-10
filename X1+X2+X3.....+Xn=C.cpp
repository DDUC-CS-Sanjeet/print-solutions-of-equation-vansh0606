#include<iostream>
using namespace std;
void print(int n ,int C)
{
	int arr[n],sum=0,j=1;
	for(int i=0;i<n;i++)
    	arr[i]=0;
	while(j>0)
	{	bool c=true;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==(C+1))
			{
				arr[i]=0;
				if(i==n-1)
				{
					c=false;
					break;
				}
			arr[i+1]++;
	       }sum+=arr[i];
         }   
	   if(c==false)
		break;
	   if(sum==C)
	  {
	   for(int i=n-1;i>=0;i--)
	    if(i>0)
		cout<<arr[i]<<"+";
		else
		cout<<arr[i];
		cout<<" = "<<C<<endl;  
	  }
	  arr[0]++;
    }
}int main()
{
	int n ,C;
	cout<<"ENTER NUM OF DIGITS "<<endl;
	cin>>n;
	cout<<"ENTER SUM "<<endl;
	cin>>C;
	print(n,C);
	return 0;
}
