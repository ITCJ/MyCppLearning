#include <iostream>

using namespace std;

class Circle {
    private:
        double radius;
        double area;
    public:
        Circle(double radiusI): radius(radiusI) {}
        ~Circle() = default;

        double getArea() {
            area = radius * radius * 3.1415926;
            return area;
        }
};

int main () {
    Circle c1(10);
    cout << c1.getArea() << endl;
    
    return 0;
}