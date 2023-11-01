//author Ahmed Atia
#include <iostream>
using namespace std;
class unary{
private:
    int a,b;
public:
    unary(int f=0,int ff=0){
        a=f;
        b=ff;
    }
    unary operator++(){
        unary t;
        a++;
        b++; 
        t=*this;
        return t;
        
    }
    //postfix cause (int) so when we call u have to deal and this idea in your brain
    unary operator++(int){
        unary t;
        t=*this;
        a++;
        b++; 
        return t;
        
    } 
    //ratinal operator
    int operator==(unary nb){
        return (a==nb.a)&&(b==nb.b);


    }
    void show(){
        cout<<"\nfvalue =  "<<a<<"   svalue=  "<<b<<"\n";
    }


};

int main(){
    unary bb(1,2),k,r;
    r=bb++;
    k=++bb;
    //r=bb++;
    
    
    cout<<(r==k)<<".....";
    k.show();
    r.show();
    bb.show();
}
