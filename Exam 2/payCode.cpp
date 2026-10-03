// Programmer Name:  Madisyn 
// Date Written:  09/19
// Description: Takes in emp number, and pay code to times hours by pay to calculate total pay. also hows ovetime wokred and overtime pay.
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

//define constant for Michigan minimum wage here.  Constants should be global.
const double miWage = 13.75;
const double fedTax = 0.15;
const double satTax = 0.05;
const double socsec = 0.075;
const double medTax = 0.015;

int main()
{	
    //  Define some variables to gather user input and calc pay
    ifstream infile;
    ofstream outfile;

    string filename;
    string fName;
    string lName;

   int empNum;
   char payCode;
   double hoursWorked;
   double payRate;
   double totalPay;
   double overtimeHours;
   double taxedPay;
    double fedTaxFee;
    double staTaxFee;
    double socsecFee;
    double medTaxFee;
    int employeecount = 0;
    double totalPayroll = 0;
    
    //  Prompt for employee number and pay code
    cout << "Enter the filename";
    cin >> filename;

    infile.open(filename);
    if (!infile)
    {
        cout << "could not open file." << endl;
        return 1;
    }
    outfile.open("payroll_report.txt");
    if (!outfile)
    {
        cout << "cound not create payroll report." << endl;
        return 1;
    }
    

    while (infile >> fName >> lName >> empNum >> payCode >> hoursWorked)
    {
    

         if(payCode == 'M' || payCode == 'T' || payCode == 'O' || payCode == 'm' || payCode == 't' || payCode == 'o')
    {
    
        //everything is good to go
    
	    
        
        //set pay rate based on criteria use nested ifs or a switch structure
        //construct logical expression(s) that evaluates pay code and sets pay rate accordingly.
         if (payCode == 'M' || payCode == 'm')
         {
            payRate = miWage;
         }
         else if (payCode == 'O' || payCode == 'o')
         {
            payRate = miWage + 3;
         }
         else if (payCode == 'T' || payCode == 't')
         {
            payRate = miWage + 6;
         }
        
         
    
    }
    else
    {
        //Houston we have a problem.  Issue error message for invalid pay code and end program
        outfile << "Invalid pay code for " 
        << fName << " " << lName << endl;
        outfile << endl;
        continue;
    }
    if (hoursWorked > 80)
    {
        outfile << " invaild hours for "
        << fName << " " << lName << endl;
        continue;
    }
    
     if (hoursWorked > 40)
    {
        overtimeHours = hoursWorked - 40;
        totalPay = (40 * payRate) + (overtimeHours * payRate * 1.5);
    }
    else
    {
        overtimeHours = 0;
        totalPay = hoursWorked * payRate;
    }
     
    fedTaxFee = totalPay * fedTax;
    staTaxFee = totalPay * satTax;
    socsecFee = totalPay * socsec;
    medTaxFee = totalPay * medTax;
    taxedPay = totalPay - fedTaxFee - staTaxFee - socsecFee - medTaxFee;
    employeecount ++;
    totalPayroll += taxedPay;
    
        outfile << setprecision(2) << fixed;
        outfile << fName << " " << lName << endl;
        outfile << empNum << endl;
        outfile << payCode << endl;
        outfile << hoursWorked << endl;
        outfile << " Total Pay : $" << totalPay << endl;
        outfile << " Fed Tax : $" << fedTaxFee << endl;
        outfile << " State Tax : $" << staTaxFee << endl;
        outfile << " Med Tax : $" << medTaxFee << endl;
        outfile << " Social Security : $" <<socsecFee << endl;
        outfile << " Taxed Pay : $" << taxedPay << endl;
        outfile << endl;
        
    }
    outfile << "employees processed : " << employeecount << endl;
    outfile << "Total Payroll :" << totalPayroll << endl; 
    infile.close();
    outfile.close();



    exit(0);
    
}