#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,res="";
    cin>>s;

 int a[3]={0,0,0};
       
        for (int i = 0; i <s.length(); i++)
        {
            if (s[i] == '1')
            {
                a[0]++;
            }
            if (s[i] == '2')
            {
                a[1]++;
            }
             if (s[i] == '3')
            {
                a[2]++;
            }
        }


    if (a[0]>0){
        for(int i=0;i<a[0];i++){
            res +="+1";
        }
    }
    if (a[1] > 0)
    {
        for (int i = 0; i < a[1]; i++)
        {
            res += "+2";
        }
    }
    if (a[2] > 0)
    {
        for (int i = 0; i < a[2]; i++)
        {
            res += "+3";
        }
    }
   res.erase(0,1);
  cout<< res <<endl;
  return 0;
}