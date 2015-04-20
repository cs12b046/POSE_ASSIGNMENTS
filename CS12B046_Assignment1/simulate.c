/*********************************************************
 * Auther : PANKAJ YADAV
 * Email : pp55018@gmail.com
 * Roll No : CS12B046
 *********************************************************/

#include<stdio.h>
#include<time.h>
#include <unistd.h>

/*
 * This function take different kind of food and price of them and time taken by them.
 * and try to simulate that how to rum cafe
 * @param number1 : one random number to identify catagorie of food
 * @param number2 : one random number to identify subcatagorie of food.
 * @param i : toen number
 * @param total_price : To find the total bill of user
 * @param total_wait_time : To find how much time the user have to wait
 * @param total_earning  : To find that how much you earn today
 * @param available : An array that told us to how many are indivisual items are present.
 * @param catagorie : catagorie of food like is that pizza or cold coffee or cake
 * @param sub_catagorie : sub catagorie of food like name of food
 * @param price : price of that item
 * @param time_taken  :how much time will take for prepairing this item
 * @return nothing
 */
 
void simulate_ordering(int* catagorie,char** sub_catagorie,int* price,int* time_taken)
{
	int number1,number2;
	int i=1;
	int total_price;
	int total_wait_time;
	int total_earning=0;
	int available[]={10,10,10,10,10,10,10,10,10};
	while(1)
	{
		total_price = 0;
		total_wait_time = 0;
		printf("===========MENU===========\n");
		printf("ITEM             : TOTAL REM.\n");
		printf("PIZZA XXXX       : %d\n",available[0]);
		printf("PIZZA YYYY       : %d\n",available[1]);
		printf("PIZZA ZZZZ       : %d\n",available[2]);
		printf("CAKE AAAA        : %d\n",available[3]);
		printf("CAKE BBBB        : %d\n",available[4]);
		printf("CAKE CCCC        : %d\n",available[5]);
		printf("COLD COFFEE DDDD : %d\n",available[6]);
		printf("COLD COFFEE EEEE : %d\n",available[7]);
		printf("COLD COFFEE FFFF : %d\n",available[8]);
		printf("==========================\n");
		sleep(3);
		if(available[0]+available[1]+available[2]+available[3]+available[4]+available[5]+available[6]+
		   available[7]+available[8] == 0){
		   printf("No item Left..\n");
		   sleep(1);
		   printf("Total earning : Rs %d\n ",total_earning);
		   sleep(1);
		   printf("Time for closing..\n");
		   return;
		}
		printf("===========BILL===========\n");
		printf("Token No:- %d Table No:-%d\n",i,(i-1)%25+1);
		number1 = rand()%3+1;
		number2 = rand()%3+1;
		
		if(number1 == PIZZA)
		{
			if(number2 == 1)
			{
				if(available[0] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("PIZZA XXXX :%d\n",price[0]);
				total_price += price[0];
				total_earning += total_price;
				total_wait_time += time_taken[0];
				available[0] -= 1;
			}
			if(number2 == 2)
			{
				if(available[1] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("PIZZA YYYY :%d\n",price[1]);
				total_price += price[1];
				total_earning += total_price;
				total_wait_time += time_taken[1];
				available[1] -= 1;
			}
			if(number2 == 3)
			{
				if(available[2] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("PIZZA ZZZZ :%d\n",price[2]);
				total_price += price[2];
				total_earning += total_price;
				total_wait_time += time_taken[2];
				available[2] -= 1;
			}
		}
		
		if(number1 == CAKE)
		{
			if(number2 == 1)
			{
				if(available[3] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("CAKE AAAA :%d\n",price[3]);
				total_price += price[3];
				total_earning += total_price;
				total_wait_time += time_taken[3];
				available[3] -= 1;
			}
			if(number2 == 2)
			{
				if(available[4] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("CAKE BBBB :%d\n",price[4]);
				total_price += price[4];
				total_earning += total_price;
				total_wait_time += time_taken[4];
				available[4] -= 1;
			}
			if(number2 == 3)
			{
				if(available[5] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("CAKE CCCC :%d\n",price[5]);
				total_price += price[5];
				total_earning += total_price;
				total_wait_time += time_taken[5];
				available[5] -= 1;
			}
		}
		
		if(number1 == COLDCOFFEE)
		{
			if(number2 == 1)
			{
				if(available[6] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("COLD COFFEE DDDD :%d\n",price[6]);
				total_price += price[6];
				total_earning += total_price;
				total_wait_time += time_taken[6];
				available[6] -= 1;
			}
			if(number2 == 2)
			{
				if(available[7] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("COLD COFFEE EEEE :%d\n",price[7]);
				total_price += price[7];
				total_earning += total_price;
				total_wait_time += time_taken[7];
				available[7] -= 1;
			}
			if(number2 == 3)
			{
				if(available[8] < 1)
				{
					printf("Order Not present Sorry..\n");
					printf("Please check menu..\n");
					sleep(2);
					continue;
				}
				printf("COLD COFFEE FFFF :%d\n",price[8]);
				total_price += price[8];
				total_wait_time += time_taken[8];
				total_earning += total_price;
				available[8] -= 1;
			}
		}
		printf("Total Price :- %d\n",total_price);
		printf("Waiting time:-%d\n",total_wait_time);
		printf("==========================\n");
		i++;
	}
}



