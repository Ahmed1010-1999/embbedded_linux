#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    vector<int>v;
    vector<int>v2;
    vector<int>v3;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n ;
    int y;
    int m;
    //cout<<"enter your array_size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        //cout<<"put the[ "<<i<<" ]"<<endl;
        cin>>y;
        v.push_back(y);
        
    }
    copy(v.begin(), v.end(), back_inserter(v3)); 
    sort(v3.begin(),v3.end());
    //cout<<"the number of queries  ";
    cin>>y;
    int s=y;
    //for(;y>0;y--)
    v2.resize(s+1);
    for (;s>0;s--){
        //cout<<"enter the number you wanna search"<<endl;
        cin>>v2[s];
        
        
    }
        
    
    for(;y>0;y--){
        m=v2[y];
        //cout<<"m =   "<<m<<endl;
        auto i=find_if(v.begin(),v.end(),[&m](int num){return m==num;});
        if (i!=v.end()){
            cout<<endl<<"yes   "<<(i-v.begin())+1<<endl;
            
        }
        else{
            
            auto d=lower_bound(v3.begin(), v3.end(),m);
            
            cout<<endl<<"no  "<<(d-v3.begin())+1<<endl;
            /* 9
2 4 6 8 9 10 13 15 15 
3
11
14
7
 */
            
        }
        
    }
      
}
