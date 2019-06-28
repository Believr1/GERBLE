#ifndef _STUDENT_H_  
#define _STUDENT_H_
#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student
{
private:
	int number;
	string name;
	string sex;
	int age;
	string address;
	int mark;
	
public:
	student(int nu,string na, string se, int ag, string ad, int ma);
	void setstudent(int nu,string na, string se, int ag, string ad, int ma);
	string getname() const { return name; }
	string getsex() const { return sex; }
	int getage() const { return age; }
	string getaddress() const { return address; }
	int getmark() const { return mark; }
	int getnumber() const { return number; }
	void print();


     

};
#endif 