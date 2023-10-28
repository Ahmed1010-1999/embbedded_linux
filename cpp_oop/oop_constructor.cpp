#include <iostream>
using namespace std;  
class area {
private:
    float base ;
    float height;
public:
    //constructor no params
    area(){
        cout<<"hioooooo";
        base=0;
        height=0;
    }
    //paramatrized constructor
    area(float b,float h):base(b),height(h){
    }
    //copy constructor
    area (const area &obj){
        base=obj.base;
        height=obj.height;
    }




    float print(){
        return 0.5*base*height;
    }
    


};
int main(){
    area p1;
    area p2(21,2.4);
    cout<<'\n'<<p2.print();
    area h(p2);
    cout<<'\n'<<h.print();

}
/*
another application on copy_constructor 
#include <iostream>
using namespace std;
class rectangle {
    private:
        float height;
        float weight;
    
    public:
    rectangle(){
        height=0;
        weight=0;
    }
    //paramatrized constructor
    rectangle(float h, float w):height(h),weight(w){
    }
    rectangle(const rectangle &obj){
        height=obj.height;
        weight=obj.weight;
        
    }
    float print(){
        cout<<"\n"<<height<<"\n"<<weight;
        cout<<"\n======================";
    }
};

int main() {
    rectangle g(2.5,2.1);
    rectangle m;
    rectangle h(g);
    rectangle f(m);
    g.print();
    m.print();
    h.print();
    f.print();
    
    return 0;
}
*/