//error detection in hamming code
#include<bits/stdc++.h>
using namespace std;
int data[100],red[10];
int m,r=0,f=1,s,n,ans;
string st;
int main() 
{
   
    cout<<"Enter data:\n";
    cin>>st;
    n=st.length();
    for(int i=1;i<=n;i++)
    {
	    data[i]=int(st[i-1]-'0');  
    }
    f=1;
    r=0;
    while(1)
    {
		if(f>n)
			break;
		f=f*2;
		r++;
    }

    f=1;
    for(int i=1;i<=r;i++)
    {
	for(int j=f;j<=n;j=j+f)
	{
	    for(int k=0;k<f;k++)
	    {
		red[i]^=data[j];
 		j++;
	    }
	}
        f=f*2;
    }
   	for(int i=1;i<=r;i++)
   	{
    	ans+=red[i]*pow(2,i-1);
   	}
   	if(ans==0)
		cout<<"no error found";
    else
   		cout<<"error bit found at bit "<<ans;
}
