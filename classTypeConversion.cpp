#include <iostream>
using namespace std;

class Kilometer{
    public :
        int kilometer;
        Kilometer(int kilometer){
            this->kilometer = kilometer;
        }

        void display(){
            cout << " Kilometer = " << kilometer << endl;
        }
};

class Meter{
    public :
        int meter;
        Meter(Kilometer &km){
            this->meter = km.kilometer*1000;
        }

        void display (){
            cout << " meter = " << meter << endl;

        }
};

int main(){
    Kilometer km(1);
    Meter meter = km;
    km.display();
    meter.display();
}