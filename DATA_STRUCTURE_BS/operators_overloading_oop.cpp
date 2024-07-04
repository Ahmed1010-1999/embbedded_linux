#include <iostream>
#include <string.h>
using namespace std;
class complexNum{
    private:
    int real;
    int img;
    public:
    complexNum(int a=0,int b=0){
        real=a;
        img=b;
        
    }
    complexNum operator+(complexNum other){
        complexNum f;
        f.real=real+other.real;
        f.img=img+other.img;
        return f;
    }
    complexNum operator-(complexNum other){
        complexNum f;
        f.real=real-other.real;
        f.img=img-other.img;
        return f;
    }
     complexNum operator-(){
        //complexNum f;
        real=-real;
        img=-img;
        return *this;
        
     }
     complexNum operator*(int n){
         complexNum f;
         f.real=real*n;
         f.img=img*n;
         return f;
     }
    
    complexNum operator++(int){
        complexNum temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
    complexNum operator++(){
        complexNum f;
        f.real=++real;
        f.img=++img;
        return *this;
    }
    bool operator!(){
        return real==0&&img==0;
    }
    
    void print(){
        cout<<real<<"   "<<img<<"\n";
    }
    complexNum operator+=(complexNum f){
        real+=f.real;
        img+=f.img;
        return *this;
    }
    int operator==(complexNum f){
        return(real==f.real&&img==f.img);
    }
    complexNum operator+(int n){
        complexNum f;
        f.real=n+real;
        f.img=n+img;
        return f;
    }
    complexNum operator*=(int n){
        real*=n;
        img*=n;
        return *this;
    }
    friend complexNum operator*(int n ,complexNum nn);
};
complexNum operator*(int n ,complexNum nn){
    complexNum f;
    f.real=nn.real*n;
    f.img=nn.real*n;
    return f;
}
int main(){
    complexNum c1(10,12),c2(30,45);
    complexNum c3;
    //int m=c1==c2;
    c3=c2;
    c3.print();
    c3*=3;
    // c3=c1++;
    c3.print();
}
