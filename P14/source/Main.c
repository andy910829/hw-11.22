#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(int grades[][EXAMS], int pupils, int tests);
int maximum(int grades[][EXAMS], int pupils, int tests);
double average(int setofgrades[], int tests);
void printarray(int grades[][EXAMS], int pupils, int tests);

int main(void)
{
	int student;
	const int studentgrades[STUDENTS][EXAMS] = { {77,68,86,73},
											     {96,87,89,78},
											     {70,90,86,81} 
											    };
	printf("The array is:\n");
	printarray(studentgrades, STUDENTS, EXAMS);

	printf("\n\nLowest grades: %d\nHighest grade: %d\n",
		minimum(studentgrades,STUDENTS, EXAMS),
		maximum(studentgrades,STUDENTS, EXAMS));
	for (student = 0; student < STUDENTS; student++) 
	{
		printf("The average grade for student %d is %.2f\n",
			student,average(studentgrades[student], EXAMS));
	}
	system("pause");
	return 0;
}

int minimum(int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int lowGrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}
	return lowGrade;
}

int maximum(int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int highGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade) 
			{
				highGrade = grades[i][j];
			}
		}
	}
	return highGrade;
}

double average(const int setofgrades[], int tests)
{
	int i;
	int total = 0;

	for (i = 0; i < tests; i++)
	{
		total += setofgrades[i];
	}
	return(double)total / tests;
}

void printarray(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;

	printf("               [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d]", i);
		for (j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}