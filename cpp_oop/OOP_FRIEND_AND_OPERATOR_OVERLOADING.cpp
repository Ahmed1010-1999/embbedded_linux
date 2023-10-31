/*#include <iostream>
using namespace std;
class myclass{
private:
    int a,b; 


public:
    friend int sum(myclass);
    myclass(int v=0,int w=0):a(v),b(w){

    }

};
int sum(myclass et){
    return et.a+et.b;
}
int main(){
    myclass c(1,2);
    cout<<sum(c);

}*/
/*
#include <iostream>
using namespace std;
class classb;
class classa{
private:
    int a; 
    int b;
public:
    classa(int c=0,int d=0):a(c),b(d){
    }
    friend int add(classa,classb);

};
class classb{
    private:
    int f; 
    int ff;
public:
    classb(int c=0,int d=0):f(c),ff(d){
    }
    friend int add(classa,classb);

};
int add(classa et,classb er){
    return et.a+er.f;


}
int main(){
    classa c(3,5);
    classb fff(43,12);
    cout<<add(c,fff)<<endl;


}*/
//class as friend
/*
#include <iostream>
using namespace std;
class classb;
class classa{
private:
    int a; 
    int b;

public:
    classa(int c=0,int d=0):a(c),b(d){
    }
    friend classb;

};
class classb{
    private:
    int f; 
    int ff;
public:
    classb(int c=0,int d=0,classa er=classa()){
        f=c;
        ff=d;
        
        cout<<er.a<<"\n";
        cout<<f+ff;
    }
    void ah(classa de){
        cout<<"\nasa====   "<<de.a;
    }
    

};

int main(){
    classa c(3,5);
    classb fff(43,12,c);
    fff.ah(c);

    


}*/
//return class 
/*
#include <iostream>
using namespace std;
//class classb;
class classa{
private:
    int a; 
    int b;
public:
    classa(int c=0,int d=0):a(c),b(d){
    }
    void prennn(){
        cout<<a;
    }
    friend classa ahmed(classa);

};
classa ahmed(classa er){
    classa f;
    f.a=2*er.a;
    f.b=2*er.b;
    return f;


}

int main(){
    classa c(3,5),j;
    j=ahmed(c);
    j.prennn();


}*/
//overloading operator

#include <iostream>
using namespace std;
class classa{
private:
    int a; 
    int b;
public:
    classa(int c=0,int d=0):a(c),b(d){
    }
    void prennn(){
        cout<<a<<"      "<<b;
    }
    classa operator+(classa er){
        classa t;
        t.a=a+er.a;
        t.b=b+er.b;
        return t;
    }
    

};
int main(){
    classa c(3,2),f(6,5);
    classa g;
    g=c+f;
    g.prennn();
}