#include<bits/stdc++.h>
using namespace std;
void dq(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(9);
    for (int i = 0; i < dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    
}
int main(){
    dq();
}