#include<iostream>
#include<string>
using namespace std;
class Account{
    int remainder=0;
    string Name;
    string *Skiils;
public:
    //constructores
    
   /* Account(int r,string n){
        remainder=r;
        Name=n;
        
    }
    Account(){
        Name="Saderat Bank";
        remainder=0;
    }*/
   //Another Constructor
   Account(string Choosen_n) :Name{Choosen_n}{
    ;
   }
    void setname(string newname){
        Name=newname;
    }
    int Subtraction(int spending){
        remainder+=spending;
        return remainder;
    }
    int Addition(int income){
        remainder+=income;
        return remainder;
    }
    string getname(){
        return Name;
    }
    //Copy Constructor
    Account(Account& other){
        ;
    }
    
    //Destructores
    ~Account(){
        cout<<"\nPerforming of Destructor";
    }
    

};
int main(){
    Account s("Saderat Bank");
    string newName;
    int track=0;
    cout<<"What do you do with your Bank Account?? ";
    cin>>track;
    int  slh=0;
    int &y=track;
    int &x=slh;
    
   // cout<<endl<<"What Name do you Switch for YOur Bank Account?? ";
    //getline(cin,newName);
    //if(newName!=" "){
      //  s.setname(newName);
    //}
    
    track=s.Addition(track);
    cout<<endl<<track;
    cout<<endl<<s.getname();

}