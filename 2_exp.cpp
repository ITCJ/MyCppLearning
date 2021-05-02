/** 
 * 带符号 无符号 整数 加、减、乘 溢出判断
 * 源代码 运行结果截图
 * 
 * 使用int 模拟short运算，
 * 使用long long 模拟int运算
 * 重载判断
 * 
 * 平台 amd64 mingw64 -std=c++17
 * 测试数据
 * 
 */

#include <iostream>
#include <limits>
#include <string>

using namespace std;

template <class numType>
class nums {
    public:
        nums(): operateNum(0) {};;;;;;;;;;;;;;;
        nums(numType inputNum): operateNum(inputNum) {}
        ~nums() {}

        void getNum(nums &num) {
            numType in_num;
            cin >> in_num;
            num.operateNum = in_num;
        }
    
        // add
        nums addCheck(nums num1, nums num2) {
            return add(num1.operateNum, num2.operateNum);
        }
        nums add(int num1, int num2) {
            nums sum;
            sum.operateNum = num1 + num2;

            if ((num1<0 && num2<0 && sum.operateNum>0) ||
                 (num1>=0 && num2>=0 && sum.operateNum<0))
            {
                sum.overFlow = 1;
            } else
            {
                sum.overFlow = 0;
            }
            
            return sum;
        }
        nums add(unsigned int num1, unsigned int num2) {
            nums sum;
            sum.operateNum = num1 + num2;

            if (sum.operateNum < num1)
            {
                sum.overFlow = 1;
            } else 
            {
                sum.overFlow = 0;
            }
            
            return sum;
        }

        // sub
        nums subCheck(nums num1, nums num2) {
            return sub(num1.operateNum, num2.operateNum);
        }
        nums sub(int num1, int num2) {
            nums sum;
            sum = add(num1, -num2);
            
            return sum;
        }
        nums sub(unsigned num1, unsigned num2) {
            nums sum;
            sum.operateNum = num1 - num2;

            if (num1 < num2)
            {
                sum.overFlow = 1;
            }
            
            return sum;
        }

        // mul
        nums mulCheck(nums num1, nums num2) {
            return mul(num1.operateNum, num2.operateNum);
        }
        nums mul(int num1, int num2) {
            nums sum;
            sum.operateNum = num1*num2;
            if ( !(!num1 || num1 == sum.operateNum/num2))
            {
                sum.overFlow = 1;
            }
            
            return sum;
        }
        nums mul(unsigned int num1, unsigned int num2) {
            nums sum;
            sum.operateNum = num1*num2;
            if (sum.operateNum<num1 || sum.operateNum<num2)
            {
                sum.overFlow = 1;
            }
            
        }

        void overFlowCheck() {
            if (this->overFlow == 1)
            {
                cout << "result = " << this->operateNum << endl;
                cout << "!!! over flow !!!" << endl;
            } else {
                cout << "result = " << this->operateNum << endl;
                cout << "result safe." << endl;
            }
            
        }
    private:
        numType operateNum;
        int overFlow = 0;
};

void systemCheck() {
    string cutLine(15, '-');
    cout << cutLine << "system test" << cutLine << endl;
    
    int int_test = 0xffffffff;
    cout << "signed int \t\t=\t" << int_test << endl; // print -1
    cout << "unsigned int \t\t=\t" << (unsigned int)int_test << "\tdiv by 2 is " << (unsigned int)int_test/2 << endl; 
    cout << endl;

    long long int longlong_test = 0xffffffffffffffff;
    cout << "signed long long\t=\t" << longlong_test << endl;
    cout << "unsigned long long\t=\t" << (unsigned long long)longlong_test << "\tdiv by 2 is " << (unsigned long long)longlong_test/2 << endl; 
    cout << endl;

    unsigned int sysWidthTest = numeric_limits<unsigned int>::max();
    if(sysWidthTest != 0xffffffff) {
        cout << "!!! invalid platform !!!" << endl;
    }
    cout << cutLine << "test finished" << cutLine << endl;
}

int main () {
    systemCheck();

    nums<int> sum, num1, num2;
    num1.getNum(num1);
    num2.getNum(num2);

    // sum = sum.addCheck(num1, num2);
    // sum.overFlowCheck();

    // sum = sum.subCheck(num1, num2);
    // sum.overFlowCheck();

    sum = sum.mulCheck(num1, num2);
    sum.overFlowCheck();

    return 0;
}