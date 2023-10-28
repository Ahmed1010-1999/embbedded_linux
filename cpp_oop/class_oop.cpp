#include <iostream>
#include <string.h>
using namespace std;
/*
class car{
private:
    char name[15];
    char color[10];
    int max_speed;
    int model;
public:
    void set_name(char n[]){
        strcpy(name,n);

    }
    void set_color(char n[]){
        strcpy(color,n);

    }
    void set_max_speed(int m ){
      max_speed=m;  
    }
    void set_model(int m){
        model=m;
    }
    char* get_name(){
        return name;

    }
     char* get_color(){
        return color;


    }
    int get_max_speed(){
      return max_speed ;
    }
    int get_model(){
      return model ; 
    }
    void print(){
        cout<<"name = "<<get_name()<<"\n color= "<<color
        <<"\n max_speed= "<<max_speed<<"\n model= "<<model;
    }
    

};*/
//new class 
class traingle{
private:
    float base; 
    float height;
public: 
    void set_base_height(float b,float h){
       base=b;
       height=h;
    }
    float area(){
        return 0.5*base*height;
    }
    void print (){
        cout<<"area=  "<<area();
    }

};
int main(){
    traingle x;
    x.set_base_height(6,10);
    x.area();
    x.print();
    
}