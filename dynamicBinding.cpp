#include <iostream>
using namespace std;

class A{
    public:
        void display(){
            cout << "Class A display function." << endl; 
        }
};

class B : public A{
     public:
        void display(){
            cout << "Class B display function." << endl; 
        }
};

int main(){
    A *a;
    B b;
    a = &b;
    a->display(); // calls display function of class A because of static binding.
                // To call class b display function, use virtual keyword i.e dynamic binding.
    return 0;
}