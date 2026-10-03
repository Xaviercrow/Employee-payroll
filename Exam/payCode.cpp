// Programmer Name:  Madisyn 
// Date Written:  09/19
// Description: Takes in emp number, and pay code to times hours by pay to calculate total pay. also hows ovetime wokred and overtime pay.
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

//define constant for Michigan minimum wage here.  Constants should be global.
const double miWage = 13.75;

int main()
{	
    //  Define some variables to gather user input and calc pay
    ifstream infile;
    ofstream outfile;
   int empNum;
   char payCode;
   double hoursWorked;
   double payRate;
   double totalPay;
   double overtimeHours;

    //  Prompt for employee number and pay code
    infile.open("payrolldata.txt");
    if(!infile)
    {
        cout << "file open failure";
    }
    

    
}