#include<bits/stdc++.h>
using namespace std;
void armstrong(int n){
    int check=n;
    int answer=0;
    while (n>0)
    {
        int lastdigit=n%10;
        answer=answer+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
   if (check==answer)
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
    armstrong(n);
   
    
}
