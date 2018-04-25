//Austin Alloway
//CSC 205
//Assignment 8: Compute income using array of structures
//calculate each employees total pay and display total pay
//across all employees

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//---------New-Structure-------------------------------------------
struct incomeInfo {
	string emp_id;
	double pay;
	double bonus;
	double totPay;
};

//---------Prototypes----------------------------------------------
void getIncome(incomeInfo[], int);
void compute(incomeInfo[], int);
void display(const incomeInfo[], int, double);
double payroll(incomeInfo[], int);

//---------Main-Function-------------------------------------------
int main(){
	double total; //For use with total payroll
	const int NUM_EMPS = 5;    // Number of employee
	incomeInfo employee[NUM_EMPS]; // Array of structures

	//execute main functions
	getIncome(employee, NUM_EMPS);
	compute(employee, NUM_EMPS);
	total = payroll(employee, NUM_EMPS);
	display(employee, NUM_EMPS, total);

	return 0;
}

//---------New-Function--------------------------------------------
void getIncome(incomeInfo employee[], int NUM_EMPS){
	cout << "Enter pay for " << NUM_EMPS
		<< " employees and their bonus.\n";
	//Gain info on each employee
	for (int index = 0; index < NUM_EMPS; index++)
	{
		// Get employee's ID
		cout << "ID for employee #" << (index + 1);
		cout << ": ";
		cin >> employee[index].emp_id;

		// Get the employee's pay.
		cout << "Pay earned by employee #" << (index + 1);
		cout << ": ";
		cin >> employee[index].pay;

		// Get the employee's bonus.
		cout << "Bonuses earned for employee #";
		cout << (index + 1) << ": ";
		cin >> employee[index].bonus;
		cout << endl;
	}
}

//---------New-Function--------------------------------------------
void compute(incomeInfo employee[], int NUM_EMPS){  //total pay with bonus
	for (int index = 0; index < NUM_EMPS; index++)
		employee[index].totPay = employee[index].pay + employee[index].bonus;
}

//---------New-Function--------------------------------------------
double payroll(incomeInfo employee[], int NUM_EMPS) {
	double payroll = 0;
	for (int index = 0; index < NUM_EMPS; index++) {
		payroll += employee[index].totPay; // Add each employees total pay
	}
	return payroll;
}

//---------New-Function--------------------------------------------
void display(const incomeInfo employee[], int NUM_EMPS, double total){
	system("cls");
	cout << "Here is the total pay for each employee:\n";
	cout << left << fixed << showpoint << setprecision(2);
	cout << setw(15) << "ID" << setw(15) << "PAY";
	cout << setw(15) << "BONUS" << setw(15) << "TOTAL" << endl;

	//Display employee ID, pay, bonus amount, and toal pay
	for (int index = 0; index < NUM_EMPS; index++){
		cout << setw(15) << employee[index].emp_id << setw(15) << employee[index].pay;
		cout << setw(15) << employee[index].bonus << setw(15) << employee[index].totPay << endl;
	}

	//display total pay amount across all employees
	cout << endl << setw(30) << right << "Total Payroll Amount: " << total << endl;
}
