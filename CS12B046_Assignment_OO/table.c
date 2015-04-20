/*********************************************************
 * Auther : PANKAJ YADAV
 * Email : pp55018@gmail.com
 * Roll No : CS12B046
 *********************************************************/
#include<stdio.h>

#define MAX_TABLES 25
#define NOT_OCCUPIED 0
#define OCCUPIED 1
#define NOT_FOR_USE 2
#define ERROR -1
/*
 * This function will initilize tables or it is like it will
 * create MAX_TABLES
 * It returns array of tables
 */

int* init_tables(int* tables)
{
	int i;		//for iterations
	for(i = 0; i < MAX_TABLES; i++)
	{
		tables[i] = NOT_OCCUPIED;
	}
	return tables;
}

/*
 * This function takes tables array and number as input and 
 * it alloat table number to OCCUPIED it checks that is this 
 * for use or is it already occupied.
 */

void alloat_table(int* tables , int number)
{
	if(tables[number] == OCCUPIED)
	{
		printf("Sorry!! Already Occupied.\n");
	}
	else if(tables[number] == NOT_FOR_USE)
	{
		printf("Sorry this table is not for use..\n");
	}
	else
	{
		tables[number] = OCCUPIED;
		printf("Successfully completed..\n");
	}
}

/*
 * This function checks which table is empty and gives that table to coustmer
 * @param tables : array of occupied or not
 * @param i : for iterate for loop
 * @return i : table no alloated to coustmer.
 * MAX_TABLES : maximum number of table present in cafe
 */
int alloat_automatically(int * tables)
{
	int i;
	for(i = 0 ; i< MAX_TABLES ; i++)
	{
		if(tables[i] == NOT_OCCUPIED)
		{
			tables[i] = OCCUPIED;
			return i;
		}
	}
	printf("All seats are full please wait some time..\n");
	return ERROR;
}

/*
 * This function changes the state of table from occupied to non occupied or free
 * @param tables : array of tables
 * @param number : table number
 * NOT_OCCUPIED : table is not occupied
 * NOT_FOR_USE : table is not for use
 * @return nothing
 */

void release_table(int* tables , int number)
{
	if(tables[number] == NOT_OCCUPIED)
	{
		printf("This table is already empty.\n");
	}
	else if(tables[number] == NOT_FOR_USE)
	{
		printf("Sorry this table is not for use..\n");
	}
	else
	{
		tables[number] = NOT_OCCUPIED;
		printf("Table release succussfully..\n");
	}
}

/*
 * This function changes the state of table from occupied or not occupied
 * to not for use
 * @param tables : array of tables
 * @param number : table number
 * @return nothing
 */

void markTable_not_for_use(int* tables , int number)
{
	if(tables[number] == OCCUPIED)
	{
		release_table(tables,number);
	}
	else if(tables[number] == NOT_FOR_USE)
	{
		printf("Already marked as not for use..\n");
	}
	else
	{
		tables[number] == NOT_FOR_USE;
		printf("Successfully maked as not for use..\n");
	}
}

/*
 * This function changes the state of table not for use to not occupied
 * So that next user can use it.
 * @param tables : array of tables
 * @param number : represent table number. 
 * @return nothing
 */

void markTable_for_use(int* tables , int number)
{
	if(tables[number] == NOT_FOR_USE)
	{
		tables[number] = NOT_OCCUPIED;
		printf("Succussfully mark for use..\n");
	}
	else
	{
		printf("This table is already mared for use..\n");
	}
}

/*
 * This function will print state of tables like is it occupied or is it 
 * empty or this table is not for use.
 * @param tables : array of tables
 * @param i : use for iterate for loop 
 * @return nothing
 * @print : state of all tables
 */

void print_all_table_status(int* tables)
{
	int i;
	for(i = 0 ; i < MAX_TABLES ; i++)
	{
		if(tables[i] == OCCUPIED)
		{
			printf("Table No %d is OCCUPIED.\n",i);
		}
		else if(tables[i] == NOT_OCCUPIED)
		{
			printf("Table No %d is NOT OCCUPIED.\n",i);
		}
		else
		{
			printf("Table No %d is NOT FOR USE.\n",i);
		}
	}
}

/*
 * This function will empty all the table.
 * @param tables : array of tables
 * @param i : use for iterate for loop
 * @return nothing
 */

void release_all_tables(int* tables)
{
	int i;
	for(i = 0 ; i< MAX_TABLES ; i++)
	{
		if(tables[i] == OCCUPIED)
		{
			tables[i] == NOT_OCCUPIED;
		}
	}
}


//<---------------------  EOF   --------------------------->

