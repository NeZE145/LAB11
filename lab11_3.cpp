#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cmath>
using namespace std ;

int main(){
    ifstream source;
    source.open("score.txt");
    int a=0;
    double sum=0.00,SD=0,mean=0;
    string line;
    
    while(getline(source,line)){
        sum = sum + stold(line);
        a++;
        mean=sum/a;
        
    }
    source.clear();
    source.seekg(0, source.beg);
    while(getline(source,line)){
        SD = SD + pow(stold(line)-mean,2);
    }


    

    double devi = sqrt(SD/a);
    source.close();
    cout << "Number of data = "<<a<<endl;
    cout << "Meam = "<<setprecision(3)<< mean<<endl;
    cout << "Standard deviation = "<<devi ;
    return 0;




}