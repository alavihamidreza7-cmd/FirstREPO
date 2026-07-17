#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<string.h>
using namespace std;
class Date{
    int day;
    int month;
    int year;
public:
    Date(int x,int y,int z);
    Date(const Date& other);
    Date();
    Date& SetAndGet(int d,int m,int y);
    void InfoPrinter()const;
    int DaysBetweenThem(const Date& second)const;
};
#endif