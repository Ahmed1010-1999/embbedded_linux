//author Ahmed Atia
#include <iostream>
using namespace std;
class binary{
private:
    int a,b;
public:
    binary (int f=0,int ff=0){
        a=f;
        b=ff;
    }
    binary operator+(binary &m){
        binary s;
        s.a=m.a +a;
        s.b=m.b +b;
        return s;


    } 
    binary operator+(int k){
        binary f;
        f.a=k +a;
        f.b=k+b;
        return f;


    }

    void print(){
        cout<<a<<"    "<<b;
    }
    friend binary operator+(int k,binary er );
    friend istream& operator>>(istream &input ,binary &er);
    friend ostream& operator<<(ostream &out,binary er);
    

};
binary operator+(int k,binary er){
        binary f;
        f.a=k +er.a;
        f.b=k+er.b;
        return f;
}
istream& operator>>(istream &input ,binary &er){
    cout<<"real =  "<<endl;
    input>>er.a;
    cout<<"img =  "<<endl;
    input>>er.b;
    return input;
    

}
ostream& operator<<(ostream &out,binary er){
    out<<"complex is = "<<er.a;
    out<<" + i"<<er.b;
    return out;

    


}
int main(){
    binary h(1,2),g(2,3),c;
    c=h+g;
    cout<<"===========\n"<<endl;
    c.print();
    cout<<"\n===========\n"<<endl;
    c=h+5;
    c.print();
    cout<<"\n===========\n"<<endl;
    c=10+h;
    c.print();
    cout<<"\n===========\n"<<endl;

    cin>>c;
    cout<<c;


}
