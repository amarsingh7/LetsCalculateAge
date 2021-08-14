# AGE_CALCULATR
Program to calculate exact age of anything.
Here is the code!

________

#include<iostream>
using namespace std;
int days  (int a, int b);
int months (int a, int b);
int years  (int a, int b);
int main ()
{
 int current_date ;
 int current_month;
 int current_year;
 int dob;
 int dob_month;
 int dob_year;
 int date;
 int month;
 int year;
 cout<<" Enter Current Date, Current Month, Current Year : ";
 cin>>current_date >>current_month >>current_year;
 cout<<endl;
 cout<<" Enter Your Date of Birth's Day, Date of Birth's Month, Date of Birth's Year : ";
 cin>>dob >>dob_month >>dob_year;
 cout<<endl;
 date = days(current_date,dob);
 month = months(current_month,dob_month);
 year = years(current_year,dob_year);
 cout<<endl<<endl;
 cout<<" Age is : "<<date<<" Days  " <<month<<" Months "<<" and "<<year<<" Years old "<<endl<<endl;
}
int days  (int a , int b)
{
 return abs(a-b);
}
int months  (int a , int b)
{
 return abs(a-b);
}
int years  (int a , int b)
{
 return abs(a-b);
}
