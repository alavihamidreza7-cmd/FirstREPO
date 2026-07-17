#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;
class SENSOR{
    string sensorType;
    int Action_Interval;
    int* storage=NULL;
    int sensornum=0;
public:
    static int sensorID;
    //Constructores
    SENSOR(string sensortype,int interval){
        sensorType=sensortype;
        Action_Interval=interval;
        ++sensorID;
        sensornum=sensorID;
    }
    SENSOR(string type){
        sensorType=type;
        Action_Interval=1;
        ++sensorID;
        sensornum=sensorID;
    }
    
    SENSOR(string TYPE,int Width,int Capable){
        sensorType=TYPE;
        Action_Interval=Width;
        ++sensorID;
        storage=new int[Capable];
        sensornum=sensorID;
    }
    SENSOR(const SENSOR &c){
        sensorType=c.sensorType;
        Action_Interval=c.Action_Interval;
        ++sensorID;
        sensornum=sensorID;
    }
    //Default Constructo
    SENSOR(void){
        sensorType="Electric Sensor";
        Action_Interval=2;
        ++sensorID;
        sensornum=sensorID;
    }
    //Destructor
    ~SENSOR(){
        cout<<"\nDestructor";
    }
    void setAction_Interval(int a){
        Action_Interval=a;
    }
    void infoPrinter(void){
        cout << "\nKind of Sensor : "<<sensorType<<endl<<"Desired Interval for receiving Datas : "<<Action_Interval<<" seconds";
        cout <<"\nSensor ID : "<< sensornum;
    }

};
int SENSOR::sensorID=0;
int main(){
    SENSOR *sensores[10];
    string nn;
    int ii;
    for(int i=0;i<10;++i){
        cout<<i+1<<".Write a name : ";
        cin>>nn;
        cout<<i+1<<".Write an Interval : ";
        cin>>ii;
        sensores[i]=new SENSOR{nn,ii};
    }
    for(int j=0;j<10;++j){
        sensores[j]->infoPrinter();
        delete sensores[j];
    }
    delete sensores;
}