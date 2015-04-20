/*********************************************************
 * Auther : PANKAJ YADAV
 * Email : pp55018@gmail.com
 * Roll No : CS12B046
 *********************************************************/

#include<stdio.h>
#include<string.h>

#define AVAILABLE 1
#define NOT_AVAILABLE 0
#define MAX_ITEMS 100

#define PIZZA 1
#define CAKE 2
#define COLDCOFFEE 3

#define UNDEFINED -1
#define TOTAL_CATAGORIES 3

/*
 * This function initilize all items and mark as undefined
 * @param catagorie : catagorie of food
 * @param sub_catagorie : sub catagorie of food
 * @param price : price of items
 * @param time_taken : time taken to make this item
 * @return nothing
 */

void init_items(int* catagorie , char** sub_catagorie , int* price , int* time_taken)
{
	int i;
	for(i = 0 ; i< MAX_ITEMS ; i++)
	{
		catagorie[i] = UNDEFINED;
		strcpy(sub_catagorie[i],"UNDEFINED");
		price[i] = UNDEFINED;
		time_taken[i] = UNDEFINED;
	}
}

/*
 * This function is used for adding items into menu
 * @param cat : catagorie of food
 * @param sub_cat : sub catagorie of food
 * @param price_ : price of items
 * @param time : time taken to make this item
 * @return nothing
 */

void add_item(int* catagorie , char** sub_catagorie , int* price , int* time_taken , 
      int cat , char* sub_cat, int price_ , int time){
      int i;
      for(i = 0 ; i < MAX_ITEMS ; i++)
      {
      		if(catagorie[i] == UNDEFINED)
      		{
      			catagorie[i] = cat;
			strcpy(sub_catagorie[i],sub_cat);
			price[i] = price_;
			time_taken[i] = time;
			return;
      		}
      }
}

/*
 * This function is used for deleting item from menu
 * @param cat : catagorie of food
 * @param sub_cat : sub catagorie of food
 * @param price : price of items
 * @param time_taken : time taken to make this item
 * @return nothing
 */

void delete_item(int* catagorie , char** sub_catagorie ,int* price ,
      int* time_taken , int cat , char* sub_cat ){
	int i;
	for(i = 0 ; i < MAX_ITEMS ; i++)
	{
		if(catagorie[i] == cat && strcmp(sub_catagorie[i],sub_cat)==0)
		{
			catagorie[i] = UNDEFINED;
			strcpy(sub_catagorie[i],"UNDEFINED");
			price[i] = UNDEFINED;
			time_taken[i] = UNDEFINED;
		}
	}
}

/*
 * This function is used for printing menu
 * @param catagorie : catagorie of food
 * @param sub_catagorie : sub catagorie of food
 * @param price : price of items
 * @return nothing
 */

void print_menu(int* catagorie , char** sub_catagorie , int* price)
{
	int i,j;
	for(i = 1 ; i <= TOTAL_CATAGORIES ; i++)
	{
		if(i == PIZZA)
		{
			printf("PIZZAS:\n");
		}
		if(i == CAKE)
		{
			printf("CAKES:\n");
		}
		if(i == COLDCOFFEE)
		{
			printf("COLD COFFEES:\n");
		}
		
		for(j = 0 ; j < MAX_ITEMS ; j++)
		{
			if(catagorie[j] == i)
			{
				printf("%s\t%d\n",sub_catagorie[j],price[j]);
			}	
		}
	}
}




















