#include<bits/stdc++.h>
using namespace std;
void vector_learning(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(3);
    vec.emplace_back(9);//this is faster than pushback.
   
    
    // we can have vector having pairs

    // vector<pair<int,int>>v;
    // v.emplace_back(3,4);
    // v.emplace_back(1,1);
    // v.emplace_back(4,2);
    // v.emplace_back(6,9);
    // vector<int>v(4,100);//{100,100,100,100}
  

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    //one of the another way to access the eliments in vector is with iterators.iterators just see the addresseas and helps to fetch from there.
      vector<int>::iterator it=vec.begin();
      cout<<*it;
      cout<<endl;
      it++;
      cout<<*it;
      cout<<endl;
      
      for (auto it=vec.begin(); it != vec.end(); it++)
      {
        cout<<*it<<" ";
      }

      //there is something called as v.end which will see from the end back
      vector<int>::iterator it=vec.end();
      //to remove
      vec.erase(vec.begin());
      //to insert

      vector<int>v(2,10);
      v.insert(v.begin(),10);
      v.insert(v.begin()+1,2,2);
      //size
      cout<<v.size();
      //for all clear
      v.clear();
    


}

int main(){
    vector_learning();
    return 0;
}