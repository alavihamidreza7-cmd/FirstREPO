#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include "Book.h"
using namespace std;
Book::Book(string Book_Name,string isbnum,string writer){
    bookname=Book_Name;
    ISBNnum=isbnum;
    writername=writer;

}
Book::Book(const Book& other){
    bookname=other.bookname;
    writername=other.writername;
}
string Book:: getname(){
    return bookname;
}
string Book:: getnumc(){
    return ISBNnum;
}
string Book:: getwritername() const{
    return writername;
}
void Book::setbookname(string name){
    bookname=name;
}
void Book::setwritername(string NAME){
    writername=NAME;
}
void Book::InfoPrinter(void)const{
    cout<<"\nName Of Book : "<<bookname<<"\nID Of Book : "<<ISBNnum<<"\nName Of Book's Writer : "<<writername;
}
void Book::UpdateBookInfor(string New_Book_Name,string New_Writer_Name){
    bookname=New_Book_Name;
    writername=New_Writer_Name;
}