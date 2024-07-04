#include <iostream>
#include <string.h>
using namespace std;
template<class t>
class my_Array{
    private:
    int size;
    t *ptr;
    int len;

    public:
    my_Array(int size){
        this->size=size;
        ptr=new t[size];
        len=0;
    }
    my_Array(my_Array &other){
        size=other.size;
        len=other.len;
        ptr=new t[size];
        
    }
    
    ~my_Array() {
        delete[] ptr; // Destructor to free allocated memory
    }
    bool isEmpty(){
            return len==0; 
    }
    bool isFull(){
        return len==size;
    }
    void append(int item){
        if (!isFull()){
            *(ptr+len)=item;
            len++;
        }
    }
    void insert(int index, int val) {
    if (isFull()) {
        return;
    }
    if (index < 0 || index > len) {
        return;
    }
    for (int i = len; i > index; --i) {
        ptr[i] = ptr[i - 1];
    }
    ptr[index] = val;
    len++;
    }

    my_Array(const my_Array &other){
        size=other.size;
        len=other.len;

    }
    void Delete(int index){
        if (index>len){
            return;
        }
        while(index<len){
            *(ptr+index)=*(ptr+index+1);
            index++;
        }
        len--;
        
    }

    void fill(){
        int no_of_items;
        cout<<"how many items\n";
        cin>>no_of_items;
        if(no_of_items>size){
            return;
        }
        else{
            for (int i = 0; i < no_of_items; i++){
                cout<<"enter item no  " <<i+1<<"   pls "<<endl;
                cin>>*(ptr+i);
                len++;
                
            }
            
        }
        
    }
    int search(int key){
        int index=0;
        while(index<len){
            if(*(ptr+index)==key){
                return index;
            }
            index++;
        }
        return -1;
    }
    void Enlarge(int new_size){
        if(new_size<size){
            return;
        }
        size=new_size;
        
        t *old = ptr;
        ptr = new t[new_size];
        int index=0;
        while(index<len){
            *(ptr+index)=*(old+index);
            index++;
        }
        delete []old;
    }

    int getLength(){
        return len;
    }
    int getSize(){
        return size;
    }
    void display(){
        int m=0;
        cout<<"\narray is \n";
        while(m<len){
            cout<<*(ptr+m)<<"    ";  
            m++;
            }
    }
    void merge (my_Array &otherr){
        int msize=size+otherr.getSize();
        Enlarge(msize);
        int index=0;
       for (int i = 0; i < otherr.len; ++i) {
            ptr[len + i] = otherr.ptr[i];
        }
        len += otherr.len;
    }
    
};
int main(){
    //copy constructor is in intial moment
    //my_Array <int> p(3);
    my_Array <int> p(3);
    my_Array <int> q(3);
    p.fill();
    q.fill();
    //p.display();
    p.merge(q);
    p.display();
    
    //p.append(5);
    //p.Delete(4);
    
    // p.Enlarge(5);
    // p.fill();
    // p.display();
    // cout<<"\n"<<p.getSize();
    //cout<<"\nppppp   "<<p.search(6);
}