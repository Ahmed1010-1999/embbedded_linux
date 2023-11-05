#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
int plus(int a,int b){
    return a+b;

}
long plus(long a,long b){
    return a+b;

}
double plus(double a,double b){
    return a+b;

}*/
/*
note: if we have such 
template <typename R,typename T,typename U>//for different types 
/*T add(T a,T b){
    return a+b;
}
we must but arg with the same type 
or you can make that 
template <typename R,typename T,typename U>//for different types 
/*T add(T a,U b){
    return a+b;
}
or u can ..> add<typeof return and will cast all>
*/

template <typename R,typename T,typename U>//for different types 
/*R add(T a,U b){
    return a+b;
}*/

R max(T a,U b){
    return a>b?a:b;
}
void f(int a,int b){
    cout<<"non_templete\n"<<a+b<<endl;
    

}
template <typename R,typename T,typename U>//for different types 
void f(T a,T b){
    cout<<"templete\n"<<a+b<<endl;


}
template <typename T,typename u>
class FPI {
private:
    T n;
    u h;
public:
    FPI(T a,u b):n(a),h(b){
        
    }
    T get_num(){
        return n+h;
    }

};
//specialization 
template<typename T>
T miin(T a,T b){
    return a+b;
}
template<>
char miin(char a,char b){
    return a;
}

int main(){
    
    cout<<miin('b', 'a');
    /*int i=5,j=6,k;
    long l=10,m=5,n;
    double a=10.55,b=5.5,d;
    //k=add<int,int>(i,a);
    //max<int>(i,a);means // return int template <typename R,typename T,typename U>... R max(T a,U b)
    cout<<typeid(max<double>(i,a)).name();
    */
   /*int x=4,y=2;
   f(x,y);
   f('a','b');
   f(1.2,2);
   f(1,'b');****priority is for non_templete*****/
   //int x=9;
   //FPI<int,double> A(9,2.3);
   //cout<<A.get_num();
}