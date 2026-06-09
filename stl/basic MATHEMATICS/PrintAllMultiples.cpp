#include<bits/stdc++.h>
using namespace std;
void Printallmultiple(int n){
    vector<int>vec;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            vec.push_back(i);
        }
        
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    
}
int main(){
    int n;
    cin>>n;
    Printallmultiple(n);
}