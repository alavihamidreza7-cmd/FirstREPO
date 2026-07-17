#ifndef RESERVE_H
#define RESERVE_H
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include "Book.h"
#include "Date.h"
using namespace std;
class Reserve{
    string resmanager;
    Date starttinme;
    Date endtime;
    Book *book;
    bool IsBack;
    int fine;
    static int ID;
    Reserve *next;
    int assist;
public:
    //Constructor
    Reserve(string a,Date* b,Date* c,Book* d);
    //Destructor
    ~Reserve();
    //Copy Constructor
    Reserve(const Reserve& other);
    void Setresmanager(string rm);
    void Setstarttime(Date st);
    void Setendtime(Date et);
    void Setbook(Book *b);
    void Setisback(bool ib);


    string  Getresmanager();
    Date  Getstarttime();
    Date  Getendtime();
    Book*  Getbook();
    bool  Getisback();
    int Getfine();
    int GetID();


    void ReservePrinter();
    void ExtendReserve(Date New_Time);
    int CalculatFine(Date today)const;
    void ReturnBook();
    

};
#endif