#include<iostream>
using namespace std;
void print1(int n){
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
int main(){
     int n;
    cin>>n;
   
    print1(n);
    

}