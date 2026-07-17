#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include "Date.h"
using namespace std;
Date::Date(int x,int y,int z){
    day=x;
    month=y;
    year=z;
}
Date::Date(const Date& other){
    day=other.day;
    month=other.month;
    year=other.year;
}
Date::Date(){
    year=0;
    month=0;
    day=0;
}
void Date::InfoPrinter()const{
    cout<<year<<"/"<<month<<"/"<<day<<"/";
}
Date& Date::SetAndGet(int d,int m,int y){
    day=d;
    month=m;
    year=y;
    return *this;
}
int Date::DaysBetweenThem(const Date& second)const{
    int answer=0;
    int ye=0;
    int mo=0;
    int da=0;
    if(year>second.year){
        ye=(year-second.year)*360;
        mo=(mo-second.month)*30;
        da=day-second.day;
        answer=ye+mo+da;
    }
    else{
        ye=(second.year-year)*360;
        mo=(second.month-month)*30;
        da=second.day-day;
        answer=ye+mo+da;
    }
    return answer;
}