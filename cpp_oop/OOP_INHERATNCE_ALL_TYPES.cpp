//author Ahmed Atia
//#include <iostream>
//using namespace std;
/*class parent {
    private:
    char name[20];
    int age;
    public:
    void set_par(){
        cout<<"enter your name "<<endl;
        cin>>name;
        cout<<"enter your age "<<endl;
        cin>>age;

    }
    void display_p(){
        cout << endl <<"age: "<< age << "\nName: " << name <<endl;

    }

};
class child : public parent{
    private:
    char course[50]; 
    int fee; 
    public:
        void set_s() 
    { 
        set_par(); 
        cout << "Enter the Course Name:"; 
        cin >> course; 
        cout << "Enter the Course Fee:"; 
        cin >> fee; 
    } 
  
    void display_s() 
    { 
        display_p(); 
        cout <<"Course: "<< course << "\nFee: " << fee << endl; 
    } 

};*/

//int main(){ 
    /*child er;
    er.set_s();
    er.display_s();
*/

//}

#include<iostream> 
using namespace std; 
class A 
{ 
	protected: 
	int a; 
	
	public: 
		void set_A() 
		{ 
			cout<<"Enter the Value of A="; 
			cin>>a; 
			
		} 
		void disp_A() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 


class B: public A 
{ 
	int b,p; 
	
	public: 
		void set_B() 
		{ 
			set_A(); 
			cout<<"Enter the Value of B="; 
			cin>>b; 
		} 
		
		void disp_B() 
		{ 
			disp_A(); 
			cout<<endl<<"Value of B="<<b; 
		} 
		
		void cal_product() 
		{ 
			p=a*b; 
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p; 
		} 
		
}; 

main() 
{ 
	
	B _b; 
	_b.set_B(); 
	_b.cal_product(); 
	
	return 0; 
	
}

// Example: 
/*
#include<iostream> 
using namespace std; 
class A 
{ 
	protected: 
	int a; 
	
	public: 
		void set_A(int x) 
		{ 
			a=x;			 
		} 
	
		void disp_A() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 

class B: public A 
{ 
	int b,p; 
	
	public: 
		void set_B(int x,int y) 
		{ 
			set_A(x); 
			b=y; 
		} 
		
		void disp_B() 
		{ 
			disp_A(); 
			cout<<endl<<"Value of B="<<b; 
		} 
		
		void cal_product() 
		{ 
			p=a*b; 
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p; 
		} 
		
}; 

main() 
{ 
	B _b; 
	_b.set_B(4,5); 
	_b.cal_product(); 
	
	return 0; 
}*/
// C++ program to explain 
// multiple inheritance 
/*#include <iostream> 
using namespace std; 

// first base class 
class Vehicle { 
public: 
	Vehicle() { cout << "This is a Vehicle\n"; } 
}; 

// second base class 
class FourWheeler { 
public: 
	FourWheeler() 
	{ 
		cout << "This is a 4 wheeler Vehicle\n"; 
	} 
}; 

// sub class derived from two base classes 
class Car : public Vehicle, public FourWheeler { 
}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes. 
	Car obj; 
	return 0; 
}
*/
// Example: 
/*
#include<iostream> 
using namespace std; 

class A 
{ 
			protected: 
			int a; 
	
			public: 
				void set_A() 
				{ 
						cout<<"Enter the Value of A="; 
						cin>>a; 
		
				} 

				void disp_A() 
				{ 
						cout<<endl<<"Value of A="<<a; 
				} 
}; 

class B: public A 
{ 
		protected: 
				int b; 
			
		public: 
				void set_B() 
				{ 
					cout<<"Enter the Value of B="; 
					cin>>b; 
				} 

		
				void disp_B() 
				{ 
					cout<<endl<<"Value of B="<<b; 
				} 
}; 

class C: public B 
{ 
	int c,p; 
		
	public: 
		void set_C() 
		{ 
				cout<<"Enter the Value of C="; 
				cin>>c; 
		} 
		
		void disp_C() 
		{ 
				cout<<endl<<"Value of C="<<c; 
		} 
	
			void cal_product() 
			{ 
				p=a*b*c; 
				cout<<endl<<"Product of "<<a<<" * "<<b<<" * "<<c<<" = "<<p; 
			} 
}; 

main() 
{ 
	
	C _c; 
	_c.set_A(); 
	_c.set_B(); 
	_c.set_C(); 
	_c.disp_A(); 
	_c.disp_B(); 
	_c.disp_C(); 
	_c.cal_product(); 
	
	return 0; 
	
}
*/
// C++ program to implement 
// Multilevel Inheritance 
/*#include <iostream> 
using namespace std; 

// base class 
class Vehicle { 
public: 
	Vehicle() { cout << "This is a Vehicle\n"; } 
}; 

// first sub_class derived from class vehicle 
class fourWheeler : public Vehicle { 
public: 
	fourWheeler() 
	{ 
		cout << "Objects with 4 wheels are vehicles\n"; 
	} 
}; 
// sub class derived from the derived base class fourWheeler 
class Car : public fourWheeler { 
public: 
	Car() { cout << "Car has 4 Wheels\n"; } 
}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes. 
	Car obj; 
	return 0; 
}
*/
