/*********************************************************
 * Auther : PANKAJ YADAV
 * Email : pp55018@gmail.com
 * Roll No : CS12B046
 *********************************************************/
#include <stdio.h>

#define PRESENT 1
#define ABSENT 0
# define MAX_EMPLOYEES 10

/*
 * This  function initialize the attendence of all the employees as present
 * This function take array of employees and mark them present
 * It will return the same array of employees.
 */
 
int* init_employee(int* employees)
{
	//int  employees[MAX_EMPLOYEES];
	int i;
	for(i = 0 ; i < MAX_EMPLOYEES ; i++)
	{
		employees[i] =  PRESENT;
	}
	return employees;
}

/*
 * This function will take employees as array and take input as their id number
 * and mark that employee as absent if id number of an employee is velid.
 * @param employees : array containg their attendence
 * @return employees : array cntaining their attendence
 */
 
int* mark_absent(int* employees , int id)
{
	if(id < MAX_EMPLOYEES)
	{
		employees[id] = ABSENT;
	}
	else
	{
		printf("No such employee exist..\n");
	}
	return employees;
}
/*
 * This function will take employees as input and return that 
 * How many are they present.
 * @param employees : array of employees attendence
 * @return counter :  How many employees are present
 */

int total_employees(int* employees )
{
	int counter = 0;
	int i;
	for(i = 0 ; i < MAX_EMPLOYEES ; i++)
	{
		if(employees[i] == PRESENT)
		{
			counter++;
		}
	}
	return counter;
}

/*
 * This function will print the status of employees attendence
 * @param id : employees id, it is a integer
 * @param employees : array of employees attendence
 */
void print_all_employees_status(int* employees)
{
	int id;
	for(id = 0 ; id < MAX_EMPLOYEES ; id++)
	{
		if(employees[id] == ABSENT)
		{
			printf("Employee %d is ABSENT\n",id);
		}
		else
		{
			printf("Employee %d is PRESENT\n",id);
		}
	}
}


















