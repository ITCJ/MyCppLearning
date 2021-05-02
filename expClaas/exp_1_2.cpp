//task 3
#include <iostream>

using namespace std;

class space {
    private:
        double dim1, dim2;
        double area;
    public:

        space() = default;
        space(double r): dim1(r) {}

        void initArea() {
            int modeCode = 0;
            cout << "chose your type 1.circle 2.rectangle 3.square ";
            while (modeCode != -1)
            {
                cin >> modeCode;

                switch (modeCode)
                {
                case 1:
                    cout << "input the r of circle:" << endl;
                    cin >> dim1;
                    area = dim1*dim1 * 3.1415926;
                    break;
                
                case 2:
                    cout << "input the lenth and width of rectangel:" << endl;
                    cin >> dim1 >> dim2;
                    area = dim1*dim2;
                    break;
                case 3:
                    cout << "input the lenth  of square:" << endl;
                    cin >> dim1;
                    area = dim1*dim1;
                    break;

                default:
                    if (modeCode != -1)
                        cout << "wrong mode, init again, -1 to exit" << endl;
                    break;
                }

                if (modeCode == -1)
                    break;
            }  
        }

    void getArea() {
        cout << "area is: " << area << endl;
    }
};

int main () {
    space s1;

    s1.initArea();
    s1.getArea();

    return 0;
}