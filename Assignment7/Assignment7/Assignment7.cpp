//Austin Alloway
//CSC 205
//Assignment 7: Class Test Scores
//Compute each student's test scores, class average, and student's ID
//of those who score over 80 (using pointers).

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Function prototypes
double findAverage(const int *, int);
void getData(string *, int *, int);
void calculate(const int *, int *, int *, int, int);
int findHigh(const string *, const int *, int);
void display(string *, int *, int *, int *, double, int, int);

//-----------------------MAIN-FUNCTION------------------------------------
int main()
{
	//declare variables
	const int NUM_STUDENTS = 4;
	const int NUM_Q = 50;
	double average;
	int high;

	//declare arrays
	string id[NUM_STUDENTS];       //Students ID's
	int correct[NUM_STUDENTS];     //Number of questions correct per student
	int incorrect[NUM_STUDENTS];   //Number of questions wrong per student
	int score[NUM_STUDENTS];       //Stores each students test scores

	getData(id, correct, NUM_STUDENTS);
	calculate(correct, incorrect, score, NUM_Q, NUM_STUDENTS);
	average = findAverage(score, NUM_STUDENTS);
	high = findHigh(id, score, NUM_STUDENTS);
	display(id, correct, incorrect, score, average, high, NUM_STUDENTS);
	cout << endl;

	return 0;
}

//------------------------NEW-FUNCTION------------------------------------

//gain students ID and number of correct answers from user
void getData(string *idPtr, int *correctPtr, int NUM_STUDENTS) {
	cout << "Enter ID's for " << NUM_STUDENTS
		<< " students and the amount of questions correct on test.\n";
	for (int i = 0; i < NUM_STUDENTS; i++) {
		cout << "Student's ID                : ";
		cin >> *(idPtr + i);
		cout << "Number of correct answers  : ";
		cin >> *(correctPtr + i);
	}
	return;
}

//------------------------NEW-FUNCTION------------------------------------

//calculate each students score and amount of questions wrong
void calculate(const int *correctPtr, int *incorrectPtr, int *scorePtr, int NUM_Q, int NUM_STUDENTS) {
	for (int i = 0; i < NUM_STUDENTS; i++) {
		*(incorrectPtr + i) = (NUM_Q - *(correctPtr + i));
		*(scorePtr + i) = (2 * *(correctPtr + i));
	}
	return;
}

//------------------------NEW-FUNCTION------------------------------------

//calulate the class average test grade
double findAverage(const int *scorePtr, int NUM_STUDENTS) {
	double average;
	int sum = 0;
	for (int i = 0; i < NUM_STUDENTS; i++) {
		sum += *(scorePtr + i);
	}
	average = (sum / NUM_STUDENTS);
	return average;
}

//------------------------NEW-FUNCTION------------------------------------

//Find the highest grade in the class
int findHigh(const string *idPtr, const int *scorePtr, int NUM_STUDENTS) {
	int highScore = 0;
	for (int i = 0; i < NUM_STUDENTS; i++) {
		if (*(scorePtr + i) > highScore)
			highScore = *(scorePtr + i);
	}
	return highScore;
}

//------------------------NEW-FUNCTION------------------------------------

//final outputs
void display(string *idPtr, int *correctPtr, int *incorrectPtr, int *scorePtr,
	double average, int high, int NUM_STUDENTS) {

	//Display Grades of each student
	system("cls");
	cout << fixed << showpoint << setprecision(2);
	cout << left << setw(13) << "ID" << setw(20) << "Correct Answers" <<
		setw(20) << "Incorrect Answers" << setw(20) << "Score" << endl << endl;
	for (int index = 0; index < NUM_STUDENTS; index++) {
		cout << left << setw(20) << *(idPtr + index) << setw(21) << *(correctPtr + index) << setw(12) << *(incorrectPtr + index)
			<< setw(10) << *(scorePtr + index) << endl;
	}

	//Display highest and average grades
	cout << endl << "Test Score Average       : " << average << endl;
	cout << "Highest Test Score       : " << high << endl << endl;

	//Display all grades over 80 and ID's
	cout << setw(10) << " " << "Scores above 80" << endl << endl;
	cout << setw(10) << " " << setw(10) << "ID" << setw(10) << "Score" << endl << endl;
	for (int i = 0; i < NUM_STUDENTS; i++) {
		if (*(scorePtr + i) > 80) {
			cout << setw(10) << " " << setw(10) << *(idPtr + i) << setw(10) << *(scorePtr + i) << endl;
		}
	}
	return;
}