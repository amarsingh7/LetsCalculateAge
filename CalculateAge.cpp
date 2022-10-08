/* आलस्यं हि मनुष्याणां शरीरस्थो महान् रिपुः।
नास्त्युद्यमसमो बन्धुः कृत्वा यं नावसीदति।। 
*You are only entitled to the ACTION, 
.. NEVER to its fruits*.. 
*You are what you believe in. 
and You become that which you believe YOU can BECOME..*/

/* Author- Amar Singh */

#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

void AgeCalc(ll current_date, ll current_month, ll current_year, ll dob, ll dob_month, ll dob_year);
int main ()
{
 ios::sync_with_stdio(false);
 cin.tie(0); cout.tie(0);
 
 long long current_date, current_month, current_year;
 long long dob, dob_month, dob_year;

 cout << " Enter Current Date, Current Month, Current Year : ";
 cin >> current_date >> current_month >> current_year;
 cout << "\n";
 cout << " Enter Your Date of Birth's Day, Date of Birth's Month, Date of Birth's Year : ";
 cin >> dob >> dob_month >> dob_year;
 cout << "\n";

 AgeCalc( current_date,  current_month, current_year, dob, dob_month,  dob_year);
}

void AgeCalc(ll current_date, ll current_month, ll current_year, ll dob, ll dob_month, ll dob_year)
{
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (dob > current_date) 
    {
        current_date = current_date + month[dob_month - 1];
        current_month = current_month - 1;
    }
    if (dob_month > current_month) 
    {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }
    ll Fdate = current_date - dob;
    ll Fmonth = current_month - dob_month;
    ll Fyear = current_year - dob_year;

    cout << "Present Age- \n Years:" << Fyear << " Months:" << Fmonth << " Days: " << Fdate << "\n";
}
