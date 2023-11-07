#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

void max_of_sub_arrs(deque<int>& deqma, int noe, int san);
int main() {
    int m;
    int num_of_query;
    cin>>num_of_query;
    deque<int> dq;
    for (int q = 0; q < num_of_query; q++){
        int num_of_element,sub_arr_n;
        cin>>num_of_element>>sub_arr_n;
        int s=num_of_element;
        
        for (;num_of_element>0;num_of_element-- ){
            cin>>m;
            dq.push_back(m);
        }
        
        max_of_sub_arrs(dq,s,sub_arr_n);
        for (;s>0;s--){
            cin>>m;
            dq.pop_back();
        }
        num_of_query=num_of_query-1;

    }
}
void max_of_sub_arrs(deque<int>&deqma,int noe,int san){
    int m=noe-san+1;
    for (int i=0;i<m;i++){
        auto it=deqma.begin();
        cout<<*max_element(it+i,it+i+san)<<' ';
    }
    cout << endl;  // Print a new line after each query's output

}
