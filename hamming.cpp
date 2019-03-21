#include<bits/stdc++.h>
using namespace std;
int data[100];
int m,r=0,f=1,s;
string st;
int main() 
{
    cout<<"Enter no of bits:";
    cin>>m;
    for(int i=1;i<100;i++)
	data[i]=-1;
    while(1)
    {
	data[f]=0;
	s=m+r+1;
	if(f>=s)
	    break;
	f=f*2;
	r++;
    }
    int n=m+r;
    cout<<"Enter data:\n";
    cin>>st;
    int j=0;
    for(int i=1;i<=n;i++)
    {
		if(data[i]==-1)
		{
		    data[i]=int(st[j]-'0');
		    j++;
		}    
    }
    f=1;
    for(int i=1;i<=r;i++)
    {
	for(int j=f;j<=n;j=j+f)
	{
	    for(int k=0;k<f;k++)
	    {
		data[f]^=data[j];
 		j++;
	    }
	}
        f=f*2;
    }
    cout<<"hamming code to be sent :\n";
    for(int i=1;i<=n;i++)
    	cout<<data[i];
}
