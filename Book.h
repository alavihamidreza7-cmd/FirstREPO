#ifndef BOOK_H
#define BOOK_H
#include<iostream>
using namespace std;
class Book{
    string bookname;
    string ISBNnum;
    string writername;
public:
    //Construcotres
    Book(string Book_Name,string isbnum,string writer);
    
    //Copy Constructor
    Book(const Book& other);
    //Getter Functions
    string getname();
    string getnumc();
    string getwritername()const;
    //Setter Functions
    void setbookname(string name);
    void setwritername(string NAME);
    void InfoPrinter(void)const;
    void UpdateBookInfor(string New_Book_Name,string New_Writer_Name);
};
#endif