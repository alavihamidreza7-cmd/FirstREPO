#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<random>
using namespace std;
int main(){
    srand(time(NULL));
    int x=rand()%6+1;
    int y=2;
    _sleep(y*500);
    cout << x;
}