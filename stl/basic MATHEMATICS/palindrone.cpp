#include<iostream>
using namespace std;
void palidrome(int n){
    int original=n;
    int revnum=0;
    while (n>0)
    {
        int lastdigit=n%10;
        revnum=(revnum*10) + lastdigit;
        n=n/10;
        }
        if (original==revnum)
        {
            cout<<"true";
        }
        else{
            cout<<"false";
        }
        
    
}
int main(){

    int n;
    cin>>n;
    palidrome(n);


}