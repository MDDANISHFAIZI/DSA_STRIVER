#include<bits/stdc++.h>
using namespace std;
void extract(int n){
    int rev=0;
    while (n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        
        cout<<lastdigit;
    }
    
}
int main(){

        int n;
        cin>>n;
        
         extract(n);

}