#include"student.h"
using namespace std;
student::student(int nu,string na, string se, int ag, string ad, int ma) :number(nu),name(na), sex(se), age(ag), address(ad), mark(ma){}
void student::setstudent(int nu,string na, string se, int ag, string ad, int ma)
{
	number = nu;
	name = na;
	sex = se;
	age = ag;
	address = ad;
	mark = ma;
}
void student::print()
{
	cout << number << setw(6) << name << setw(6) << sex << setw(6) << age << setw(6) << address << setw(6) << mark << endl;
}