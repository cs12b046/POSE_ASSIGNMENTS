/*********************************************************
 * Auther : PANKAJ YADAV
 * Email : pp55018@gmail.com
 * Roll No : CS12B046
 *********************************************************/

#include<stdio.h>
#include<malloc.h>
#include<time.h>
#include <unistd.h>

#include "menu.c"
#include "employee.c"
#include "simulate.c"
#include "print_home.c"
#include "table.c"

void simulate();

/*
 * Just main function nothing much just calls simulate function
 */
 
void main()
{
	simulate();
}

/*
 * This function generally simulate cafe and find attendence of 
 * their employees and start working.
 * @param employees : array of employees is they present or not.
 * @param catagorie : catagories of food
 * @param sub_catagorie : sub catagorie of food.
 * @param price : price of some items
 * @param tables: which table is allocated or which are free
 * @param time_taken : time taken to make some item
 * @param i : use for iterate for loop
 * @return nothing
 */

void simulate()
{
	int* employees;
	int* catagorie;
	char** sub_catagorie;
	int* price;
	int* time_taken;
	int* tables;
	int i;
	tables = (int *) malloc(MAX_TABLES*sizeof(int));
	employees = (int *)malloc(MAX_EMPLOYEES*sizeof(int));
	catagorie = (int *) malloc(MAX_ITEMS*sizeof(int));
	sub_catagorie = (char**) malloc(MAX_ITEMS*sizeof(char*));
	
	for(i = 0 ; i < MAX_ITEMS ; i++)
		*(sub_catagorie+i) = (char *)malloc(15*sizeof(char));
	
	price = (int *) malloc(MAX_ITEMS*sizeof(int));
	time_taken = (int *) malloc(MAX_ITEMS*sizeof(int));
	init_items(catagorie ,sub_catagorie,price ,time_taken);
	
	add_item(catagorie ,sub_catagorie,price,time_taken,PIZZA,"XXXX",230,15);
	add_item(catagorie ,sub_catagorie,price,time_taken,PIZZA,"YYYY",120,12);
	add_item(catagorie ,sub_catagorie,price,time_taken,PIZZA,"ZZZZ",340,11);
	add_item(catagorie ,sub_catagorie,price,time_taken,CAKE,"AAAA",300,9);
	add_item(catagorie ,sub_catagorie,price,time_taken,CAKE,"BBBB",170,5);
	add_item(catagorie ,sub_catagorie,price,time_taken,CAKE,"CCCC",390,4);
	add_item(catagorie ,sub_catagorie,price,time_taken,COLDCOFFEE,"DDDD",528,22);
	add_item(catagorie ,sub_catagorie,price,time_taken,COLDCOFFEE,"EEEE",143,17);
	add_item(catagorie ,sub_catagorie,price,time_taken,COLDCOFFEE,"FFFF",347,23);
	
	employees = init_employee(employees);
	tables = init_tables(tables);
	print_cafe_home();
	sleep(2);
	mark_absent(employees,1);
	printf("============ATTENDENCE============\n");
	print_all_employees_status(employees);
	printf("==================================\n");
	sleep(1);
	printf("Total %d are present\n",total_employees(employees));
	sleep(1);
	printf("Lets start working..\n");
	sleep(1);
	print_menu(catagorie ,sub_catagorie,price);
	simulate_ordering(catagorie ,sub_catagorie,price,time_taken);
}




















