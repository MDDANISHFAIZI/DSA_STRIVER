#include<bits/stdc++.h>
using namespace std;
void repeat(int i, int n){
    if (i>n)
    {
        return;
    }
    cout<<"Danish"<<endl;
    repeat(i+1,n);
    
}
int main(){
    int i=1;
    int n;
    cin>>n;
    repeat(i,n);


}
