# Employee-payroll
Employee payroll for the staff at delta.

CST 180 Programming Assignment #1   (50 points)             
Purpose:  The purpose of this assignment is to use 
your compiler to create a well-documented C++ 
program that utilizes user interactions, loops, an 
input file, and an output file. 
Specifics:   Using your pay calculation program, 
modify the existing program to handle multiple 
employees, calculate net pay after taxes, and outputs a Payroll Report for your company, Delta 
Technical Services.  
Delta Technical Services has 10 employees and utilizes the pay code strategy that was 
developed within the pay calculation program with the following exceptions.  Paycode ‘M’ gets 
minimum wage, Paycode ‘O’ gets minimum wage + $3.00, and Paycode ‘T’ gets minimum wage 
+ $6.00.     
Your program needs to open and read an input file of employees, pay codes, and hours worked.  
The input file can be found here: payrolldata.txt 
Look at the input file and study the way it is formatted.  Each line of input contains a name, an 
employee ID number, a pay code, and the number of hours worked.  You are not allowed to 
change this file. 
For each record in this file, process/validate the input for each employee and calculate gross 
and net pay based on the following tax rates:  (You should declare a constant for each of these.) 
Fed Tax Rate = 15% 
State Tax Rate = 5% 
Social Security Tax Rate = 7.5% 
Medicare Tax Rate = 1.5% 
Any hours worked over 40 hours should be paid at time and a half. 
Once you have calculated gross pay, apply the above tax rates to calculate net pay. 
You will need to use input validation to confirm that you have a valid paycode and you should 
also check that no employee worked more than 80 hours for the week.  If you encounter an 
invalid record, make sure you acknowledge/highlight the record in your output payroll report. 
Output to your output file, “payroll_report.txt,” a complete report that lists the number of 
employees processed, the total payroll for this pay period (e.g.  How much was paid to all 
employees), and a nicely formatted “check stub” for each employee detailing information 
similar to the following example: 
Here is an example output:  (be creative - use appropriate formatting) 
******************************************************************** 
Paycheck info for employee:  Lane Holden 
Employee Code:                
124578 
Total Hours Worked:           
Payrate:                     
Earnings Before Taxes:      
Federal income tax:       
State income tax:         
Social security tax:      
Medicare tax:             
Earnings After Taxes:               
45 
$    
8.15 
$  387.12 
$   77.43 
$   19.36 
$   29.03 
$     
5.81 
$  255.50 
******************************************************************** 
Step 1:   Develop and document your program by writing pseudocode.   Examine your 
pseudocode for logic errors and correct as needed.   (Do this before you write the program!) 
Step 2:   Study loop and file concepts, specifically how to use input and output files. 
Step 3:   Type your code into your compiler.  Modify your lab 3 program. 
Step 4:   Compile your code and execute.  You may need to fix errors.  Looks at your output and 
make it readable -think about your own check stubs.  Do a test and correct any errors you 
encounter. 
Deliverables:  (Three files) 
Create a turn-in document (.docx or .pdf) for grading containing the following: 
a) Title Page with program description, name, etc. 
b) Pseudocode for program 
c) Source Code (copy and paste from your compiler) 
d) Output file (copy and paste into your turn-in doc) 
Also submit the C++ source code (.cpp file) AND the output report file (.txt) to the Program 1 
Dropbox within the Delta eLearning System.
