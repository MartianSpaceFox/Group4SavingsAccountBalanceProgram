/* README Link: https://docs.google.com/document/d/1gEVdOtlsG8dOnfRC44uR9bXwMupln0YboPaBJzxzF0Y/edit?usp=sharing

Changelog Link: https://docs.google.com/document/d/1LOoU17CiBw73Hgbi9hZqqfspFubfgtvNJZuKnngXeZE/edit?usp=sharing
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//variables below
float startingBal = 0.00;
float annualInterestRate = 0.00;
float monthlyInterestRate;
 
float deposit;
float withdrawal;
float totalBalance;
float interestReceived;
float total;
float newBal;
 
float totalDeposits = 0.00;
float totalWithdrawals = 0.00;
float totalInterest = 0.00;
float endingBal = 0.00;
 
int month = 1, count;
 
//Entering the starting balance
cout << "Enter your starting balance of the account:  $";
cin >> startingBal;
//validation
while (startingBal < 0) {
 cout << "Invalid input. No negative numbers." << endl << "Please input a positive number for your starting balance of the account.";
 cin >> startingBal;
}
newBal = startingBal;
totalBalance = totalBalance + startingBal;
total = total + startingBal;
//Entering the annual interest rate
cout << "Enter the annual interest rate on the account (e.g. .04) : ";
cin >> annualInterestRate;
//validation
while (annualInterestRate < 0) {
 cout << "Invalid input. No negative numbers." << endl << "Please input a positive number for your annual interest rate on the account.";
 cin >> annualInterestRate;
}
monthlyInterestRate = annualInterestRate / 12;
//How many months you want to calculate
cout << "Enter how many months you would like to calculate: ";
cin >> count;
//validation
while (count < 0) {
 cout << "Input invalid. No negative numbers." << endl << "Please input a positive number of months you would like to calculate";
 cin >> count;
}
 
//main loop
while (month <= count) {
 //Enter how much deposit
 cout << endl;
 cout << "Month " << month << endl;
 cout << "-------------" << endl;
 cout << "Enter the total deposit for month " << month << ": ";
 cin >> deposit;
 //validation
 while (deposit < 0 ) {
   cout << "Input invalid. No negative numbers." << endl << "Please input a positive number for the deposit";
   cin >> deposit;
 }
 
 //calculating totalBalance, totalDeposits, and total for interest
 totalDeposits = totalDeposits + deposit;
 totalBalance = totalBalance + deposit;
 total = newBal + (newBal + deposit);
 
 //Enter the withdrawal amount
 cout << "Enter the total amount withdrawn: ";
 cin >> withdrawal;
 //validation
 while (withdrawal < 0 && withdrawal > totalBalance) {
   cout << "Invalid input." << endl <<  "Please input a positive number and a number less than total deposit: ";
   cin >> withdrawal;
 }
 
 //calculating totalWithdrawals, new totalBalance after withdrawal, and total for interest
 totalWithdrawals = totalWithdrawals + withdrawal;
 totalBalance = totalBalance - withdrawal;
 total = total - withdrawal;
  //interest calculation
 interestReceived = (total / 2) * monthlyInterestRate;
 cout << fixed << setprecision(2) << "Interest received this month: $" << interestReceived << endl;
 
 //calculating totalInterest, and totalBalance
 totalInterest = totalInterest + interestReceived;
 totalBalance = totalBalance + interestReceived;
 cout << "Ending monthly balance: $" << totalBalance << endl;
 
 //setting up for next loop Interest
 newBal = totalBalance;
 month = month + 1;
 
}
 
//ending couts
if (count != 3){
string monthName= " Months";
 cout << endl;
 cout << endl;
 cout << "      The Bank of GJZC" << endl;
 cout << "      555 Panther Way, TC Bldg." << endl;
 cout << "      Lake Worth, FL 33460" << endl;
 cout << "_______________________________________" << endl;
 cout << endl;
 cout << count << monthName << " Savings Account Statement " << endl;
 cout << endl;
 cout << "Starting balance:          $" << startingBal << endl;
 cout << "Total deposits:            $" << totalDeposits << endl;
 cout << "Total withdrawals:         $" <<"("<<totalWithdrawals <<")" << endl;
 cout << "Total interest:            $"<< totalInterest << endl;
 cout << "                         __________" << endl;
 cout<< "Ending balance:             $" << totalBalance << endl;
 cout << endl;
 cout << "    Thank you for your business!" << endl;
 

}

else {
cout << endl;
cout << endl;
cout << "      The Bank of GJZC" << endl;
cout << "      555 Panther Way, TC Bldg." << endl;
cout << "      Lake Worth, FL 33460" << endl;
cout << "_______________________________________" << endl;
cout << endl;  
cout << endl << "Quarterly Savings Account Statement" << endl << endl;
cout << "Starting balance:          $" << startingBal << endl;
cout << "Total deposits:            $" << totalDeposits << endl;
cout << "Total withdrawals:         $" <<"("<<totalWithdrawals <<")" << endl;
cout << "Total interest:            $"<< totalInterest << endl;
cout << "                         __________" << endl;
cout<< "Ending balance:             $" << totalBalance << endl;
cout << endl;
cout << "    Thank you for your business!" << endl;
}
return 0;
}
