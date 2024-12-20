

#include <iostream>
using namespace std;

class Area{
public:
    Area();
    Area(double l, double w): length(l), width(w) {};
    Area(double r): radius(r) {};
    double area_circle(){
        return pi*radius*radius;
    }
    double area_square(){
        return length*length;
    }
    double area_rectangle(){
        return length*width;
    }
    
private:
    double length;
    double width;
    double radius;
    const double pi = 3.14;
};


int main() {
    Area a(3,4);
    cout << a.area_square() << endl;
    cout << a.area_rectangle() << endl;
}
