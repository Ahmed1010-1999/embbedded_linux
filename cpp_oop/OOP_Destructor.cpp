#include <iostream>
using namespace std ;
class rectangle {
private:
    int w,h;
public:
    rectangle();
    rectangle(int a,int b);
    ~rectangle();
    void print();
    
    
};
rectangle::rectangle(){
        cout<<"000\n";
    }
rectangle::rectangle(int a,int b):h(a),w(b){
        cout<<"a rectangle has been created\n";
        rectangle f;
    }
rectangle::~rectangle(){
        cout<<"\na rectangle has been deleted\n";

    }
void rectangle:: print(){
        cout<<"hi my name is ahmed";
    }

int main(){
    rectangle aa(1,2),c;
    c.print();

}