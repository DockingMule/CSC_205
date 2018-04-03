//Austin Alloway
//CSC 205
//Assignment 6: Class Test Scores
//Compute each student's test scores, class average, and student's ID
//of those who score over 80

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Function prototypes
double findAverage(const int[], int);
void getData(string[], int[], int);
void calculate(const int[], int[], int[], int, int);
int findHigh(const string[], const int[], int);
void display(string[], int[], int[], int[], int, int, int);

int main()
{
	//declare variables
	const int NUM_STUDENTS = 5;
	const int NUM_Q = 50;
	int average;
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


	return 0;
}

//------------------------NEW-FUNCTION------------------------------------

void getData(string id[], int correct[], int NUM_STUDENTS) {
	cout << "Enter ID's for " << NUM_STUDENTS
		<< " students and the amount of questions correct on test.\n";
	for (int i = 0; i < NUM_STUDENTS; i++) {
		cout << "Student's ID                : ";
		cin >> id[i];
		cout << "Number of correct answers  : ";
		cin >> correct[i];
	}
	return;
}

//------------------------NEW-FUNCTION------------------------------------

void calculate(const int correct[], int incorrect[], int score[], int NUM_Q, int NUM_STUDENTS) {
	for (int i = 0; i < NUM_STUDENTS; i++) {
		incorrect[i] = (NUM_Q - correct[i]);
		score[i] = (2 * correct[i]);
	}
	return;
}

//------------------------NEW-FUNCTION------------------------------------

double findAverage(const int score[], int NUM_STUDENTS) {
	double average;
	int scoreSum;
	for (int i = 0; i < NUM_STUDENTS; i++) {
		scoreSum += score[i];
	}
	average = (scoreSum / NUM_STUDENTS);
	return average;
}

//------------------------NEW-FUNCTION------------------------------------

int findHigh(const string id[], const int score[], int NUM_STUDENTS) {
	int highScore = 0;
	for (int i = 0; i < NUM_STUDENTS; i++) {
		if (score[i] > highScore)
			highScore = score[i];
	}
	return highScore;
}

//------------------------NEW-FUNCTION------------------------------------

void display(string id[], int correct[], int incorrect[], int score[], int average, int high, int NUM_STUDENTS)
{
	// Display each employee's gross pay.
	system("cls");
	cout << fixed << showpoint << setprecision(2);
	cout << "ID       Correct Answers     Incorrect Answers       Score" << endl << endl;
	for (int index = 0; index < NUM_STUDENTS; index++)
		cout << id[index] << setw(8) << correct[index] << setw(12) << incorrect[index]
		<< setw(8) << score[index] << endl;

	return;
}