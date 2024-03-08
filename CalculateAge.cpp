/* Author: Amar Singh */
#include "bits/stdc++.h"
using namespace std;
vector<int> months= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leapyr(int month, int year){
    if(month<=2)
        year--;
    return year/4 - year/100 + year/400;
}
int solve(int date, int month, int year){
    int n1= year*365 + date;

    for(int i=0; i<month-1; i++){
        n1+= months[i];
    }
    n1+= leapyr(month, year);

    return n1;
}

int main(){
    vector<string> d1= {"22","10", "2003"};
    vector<string> d2= {"08","03", "2024"};

    int n1= solve(stoi(d1[0]), stoi(d1[1]), stoi(d1[2]));
    int n2= solve(stoi(d2[0]), stoi(d2[1]), stoi(d2[2]));

    cout<< abs(n2-n1);
}
