#include <iostream>
#include <string>

using namespace std;

class score {
    // friend std::istream &read(std::istream&, score&);
    
    public:
    score() = default;
    score(unsigned int val): scoreVal(val) {}

    void judgeGrade();
    
    private:
    unsigned int scoreVal = 0;
    string grade = "未知";

};

istream &read(istream&, score&);

inline void score::judgeGrade() {
    unsigned int scoreLevel = this->scoreVal;
    string &gradeLevel = this->grade;
    scoreLevel /= 10;

    switch (scoreLevel)
    {
    case 10:
    case 9:
        gradeLevel = "优";
        break;

    case 8:
        gradeLevel = "良";
        break;
    case 7:
    case 6:
        gradeLevel = "中";   
        break;
    case 0:
        gradeLevel = "!!!可能未输入成绩!!!";
        break;
    default:
        gradeLevel = "差";
        break;
    }

    cout << gradeLevel << endl;

}

int main () {
    score user1(91);
    user1.judgeGrade();

    return 0;
}