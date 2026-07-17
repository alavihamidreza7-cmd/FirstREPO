#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<random>
#include<string>
using namespace std;
class SENSOR{
    string sensorType;
    int Action_Interval;
    int* storage=NULL;
    int sensornum=0;
    int Max=0;
    int Min=0;
    int capacity=0;

public:
    static int sensorID;
    void DeterminingMax_Min(void){
        if(sensorType=="Gas Sensor"){
            Max=500;
            Min=0;
        }
        else if(sensorType=="Light Sensor"){
            Max=10000;
            Min=0;

        }
        else if(sensorType=="Temperature Sensor"){
            Max=50;
            Min=-10;
        }
        else{
            Max=90;
            Min=20;
        }
    }
    //Constructores
    SENSOR(string sensortype,int interval,int C){
        sensorType=sensortype;
        DeterminingMax_Min();
        Action_Interval=interval;
        ++sensorID;
        sensornum=sensorID;
        capacity=C;
        storage=new int[capacity];
    }
    //Destructor
    ~SENSOR(){
        cout<<"\nDestructor";
        delete storage;
    }

    void setAction_Interval(int a){
        Action_Interval=a;
    }
    void infoPrinter(void){
        cout << "\nKind of Sensor : "<<sensorType<<endl<<"Desired Interval for receiving Datas : "<<Action_Interval<<" seconds";
        cout <<"\nSensor ID : "<< sensornum;
    }
    void Environment_Simulation(void){
        for(int j=0;j<capacity;++j){
            storage[j]=0;
        }
        for(int i=0;i<capacity;++i){
            int b=rand()%Max;
           // int n=rand()%Min;
            storage[i]=b;
        }
    }
    int LastInfo(void){
        return storage[capacity-1];
    }
    void Printhistory(void){
        for(int l=0;l<capacity;++l){
            cout << endl<<storage[l];
        }
    }

};
int SENSOR::sensorID=0;
int main(){
    SENSOR sensor_3{"Gas Sensor",1,5};
   // SENSOR sensor_3_2{"Humidity Sensor",5,12};
    sensor_3.Environment_Simulation();
    sensor_3.Printhistory();
}