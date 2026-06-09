#include<bits/stdc++.h>
using namespace std;
bool palindrone(string str,int start,int end){
    // M A D A M
    if (start>=end)
    {
        return true;
    }
    if (str[start]!=str[end])
    {
        return false;
    }
    return palindrone(str,start+1,end-1);
    
}
int main(){
    string s;
    cin>>s;
    if (palindrone(s,0,s.length()-1))
    {
        cout<<"palindrone";
    }
    else{
        cout<<"Not palindrone";
    }
    
    

}