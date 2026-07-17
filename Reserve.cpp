#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include "Book.h"
#include "Date.h"
#include "Reserve.h"
using namespace std;
Reserve::Reserve(string a,Date* b,Date* c,Book* d): resmanager(a),starttinme(*b),endtime(*c),book(d){
    ++ID;
    assist=ID;
}
Reserve::~Reserve(){
    --ID;
    assist=ID;
    delete book;
    
}
Reserve::Reserve(const Reserve& other){
    resmanager=other.resmanager;
    starttinme=other.starttinme;
    endtime=other.endtime;
    book=other.book;
    IsBack=other.IsBack;
    fine;
    ++ID; 
    assist=ID;
}
void Reserve::Setresmanager(string rm){
    resmanager=rm;
}
void Reserve::Setstarttime(Date st){
    starttinme=st;
}
void Reserve::Setendtime(Date et){
    endtime=et;
}
void Reserve::Setbook(Book *b){
    book=b;
}
void Reserve:: Setisback(bool ib){
    IsBack=ib;
}
string Reserve::Getresmanager(){
    return resmanager;
}
Date Reserve::Getstarttime(){
    return starttinme;
}
Date Reserve::Getendtime(){
    return endtime;
}
Book* Reserve::Getbook(){
    return book;
}
bool Reserve::Getisback(){
    return IsBack;
}
int Reserve::Getfine(){
    return fine;
}
int Reserve::GetID(){
    return assist;
}
void Reserve::ReservePrinter(){
    cout<<"\nReserve Manager : "<<resmanager<<"Cost For Paying : "<<fine<<"ID : "<<assist;
}
void Reserve::ExtendReserve(Date New_Time){
    endtime=New_Time;
}
int Reserve:: CalculatFine(Date today)const{
    int x=endtime.DaysBetweenThem(today);
    return x;
}
void Reserve::ReturnBook(){
    IsBack=true;
}
