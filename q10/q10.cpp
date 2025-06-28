#include<bits/stdc++.h>
using namespace std;
int main(){
 
    string s;
    set<char>st;
    cin >> s;
    for (char c:s){
        st.insert(c);
        
    }
    
    if(st.size()%2 == 0){
        cout << "CHAT WITH HER!"<<endl;
        return 0;
    }
    if (st.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
            return 0;
    }
}