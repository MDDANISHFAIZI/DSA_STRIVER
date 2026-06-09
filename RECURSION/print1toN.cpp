#include<iostream>
using namespace std;
void asnum(int i,int n){
if (i>n)
{
    return;
}
cout<<i<<endl;
asnum(i+1,n);

}
int main(){
    int i=1;
    
    int n;
    cin>>n;
    asnum(i,n);
}