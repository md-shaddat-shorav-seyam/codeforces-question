#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0,k=0,count=0,i=0;

cin>>n>>k;
int a[n];
for ( i = 0; i < n ; i++)
{
    cin>>a[i];
}
cout<<"\n";
for ( i = 0; i < n; i++)
{
        if(a[k]>=0){
             if(a[i] >= a[k-1] && a[i]>0  ){

        count++;

    }

        }


   
}


cout<<count;

}