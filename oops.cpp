#include <iostream>
using namespace std; 

class Car{
public:
    string brand;
    int year;

    void display(){
        cout << "Brand: " << brand << " saal: " << year << endl;
    }
};

int main(){

    Car car1;
    car1.brand = "Toyota";
    car1.year = 2006;
    car1.display();
    return 0;
}