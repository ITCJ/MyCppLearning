#include <iostream>

using namespace std;

template<class numType>
class square
{
private:
    numType width;
    numType length;
    numType space;
public:
    square(numType widthI = 0, numType lengthI = 0) {
        width = widthI;
        length = lengthI;
        space = width * length;
    }
    ~square() = default;

    numType spaceO() {
        return space;
    }
};

int main () {
    square<int> sq1(5,5);
    cout << sq1.spaceO() << endl;

    return 0;
}