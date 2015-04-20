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
#define TOTAL_CATAGORIE 3

#define UNDEFINED -1

//typedef struct Item_ Item;
typedef struct Item_{
	int catagorie;
	char sub_catagorie[15];
	int time_taken;
	double price;
	int availability;
}Item;

/*
 * This function initilize all the items to not defined
 * @param items : array of items
 * @param i : use it for 'for' loop
 * @return items : array of items
 */
Item* init_item(Item* items)
{
	int i;
	for(i = 0 ; i < MAX_ITEMS ; i++)
	{
		items[i].catagorie = UNDEFINED;
		strcpy(items[i].sub_catagorie,"UNDEFINED");
		items[i].time_taken = UNDEFINED;
		items[i].price = UNDEFINED;
		items[i].availability = NOT_AVAILABLE;
	}
	return items;
}
/*
 * This function will add item in menu
 * @param i : use it for 'for' loop
 * @param items : array of items
 * @param catagorie : catagorie of item
 * @param sub_catagorie : sub catagorie of food
 * @param time_taken : time taken to make this item.
 * @param price : price of this item
 * @return items : array of items
 */
Item* add_item(Item* items ; int catagorie ; char* sub_catagorie ; int time_taken ; double price)
{
	int i;
	for(i = 0 ; i < MAX_ITEMS ; i++)
	{
		if(items[i].catagorie == UNDEFINED)
		{
			items[i].catagorie = catagorie;
			strcpy(items[i].sub_catagorie,sub_catagorie);
			items[i].time_taken = time_taken;
			items[i].price = price;
			items[i].availability = AVAILABLE;
			return items;	
		}
	}
	printf("Sorry!! No memory to add this item..\n");
	return items;
}

/*
 * This function will mark some item to available
 * @param i : use it for 'for' loop
 * @param items : array of items
 * @param catagorie : catagorie of item
 * @param sub_catagorie : sub catagorie of food
 * @return items : array of items
 */

Item* mark_item_available(Item* items ; int catagorie ; char* sub_catagorie )
{
	int i;
	for(i = 0 ; i < MAX_ITEMS ; i++)
	{
		if(items[i].catagorie == catagorie && strcmp(items[i].sub_catagorie,sub_catagorie)==0)
		{
			items[i].availability = AVAILABLE;
		}
	}
}

/*
 * This function will mark some item to unavailable
 * @param i : use it for 'for' loop
 * @param items : array of items
 * @param catagorie : catagorie of item
 * @param sub_catagorie : sub catagorie of food
 * @return items : array of items
 */

Item* mark_item_unavailable(Item* items ; int catagorie ; char* sub_catagorie)
{
	int i;
	for(i = 0 ; i < MAX_ITEMS ; i++)
	{
		if(items[i].catagorie == catagorie && strcmp(items[i].sub_catagorie,sub_catagorie)==0)
		{
			items[i].availability = NOT_AVAILABLE;
		}
	}
}

/*
 * This function will delete some item from menu
 * @param i : use it for 'for' loop
 * @param items : array of items
 * @param catagorie : catagorie of item
 * @param sub_catagorie : sub catagorie of food
 * @return items : array of items
 */

Item* delete_item(Item* items ; int catagorie ; char* sub_catagorie)
{
	int i;
	for(i = 0 ; i < MAX_ITEMS ; i++)
	{
		if(items[i].catagorie == catagorie && strcmp(items[i].sub_catagorie,sub_catagorie)==0)
		{
			items[i].catagorie = UNDEFINED;
			strcpy(items[i].sub_catagorie,"UNDEFINED");
			items[i].time_taken = UNDEFINED;
			items[i].price = UNDEFINED;
			items[i].availability = NOT_AVAILABLE;
		}
	}
}

/*
 * This function will use to print menu
 * @param i : use it for 'for' loop
 * @param j : use it for nested 'for' loop
 * @param items : array of items
 * @return nothing
 */

void print_menu(Item* items)
{
	int i,j;
	for(i = 0 ; i < TOTAL_CATAGORIE ; i++)
	{
		if(i == PIZZA)
		{
			printf("PIZZAS:\n");
		}
		else if(i == CAKE)
		{
			printf("CAKES:\n");
		}
		else
		{
			printf("COLD COFFEES:\n");
		}
		
		for(j = 0 ; j < MAX_ITEMS ; j++)
		{
			if(items[j].catagorie == i && items[j].availability == AVAILABLE)
			{
				printf("%s\t%lf\n",items[i].sub_catagorie,items[i].price);
			}	
		}
	}
}


























