#include <iostream>
#include <vector>
#include "Cleric.h"
using namespace std;

int main() {
    int n;
    cout<< "Wybierz iloma bohaterami chcialbys zagrac(1-4)"<<endl;
    cin>>n;
    vector<Character> charcaterList;
    for(int i =0;i<n;i++){
        cout<<"Wybiezsz ";
        if(i==0)cout<<"pierwszego";
        if(i==1)cout<<"drugiego";
        if(i==2)cout<<"trzeciego";
        if(i==3)cout<<"czwartego";
        cout<<" bohatera :"<<endl;


    }
    return 0;
}