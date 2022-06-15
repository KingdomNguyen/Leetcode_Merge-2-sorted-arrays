#include <iostream>
using namespace std;
int main()
{
	int i,j=0,t,k,u;
	int a[3]={1,2,4};
	int b[3]={1,3,4};
	int c[6];
	for(i=0;i<3;++i)
    {
    	if(a[i]==b[i])
    	{
    		c[j]=a[i];
    		c[j+1]=b[i];
    		j +=2;
		}
		else if(a[i]>b[i])
		{ 
		    c[j]=b[i];
		    c[j+1]=a[i];
		    j+=2;
		}
		else if(a[i]<b[i])
		{
			c[j]=a[i];
			c[j+1]=b[i];
			j+=2;
		}
	}
	cout<<"New array: ";
	for(i=0;i<6;++i)
	{
		cout<<c[i]<<" ";
	}
	
}
