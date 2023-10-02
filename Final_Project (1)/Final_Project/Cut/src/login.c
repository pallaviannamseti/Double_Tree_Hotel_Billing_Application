#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void clear();
int login()
{
	int a=0;
	clear();
	char uname[10];
	char pword[10];
	char user[10] = "admin";
	char pass[10] = "admin";
	do
	{
		printf("\n ");
		printf("\n                             ***                                    ***                              ");
		printf("\n                            *****                                  *****                                ");
		printf("\n                           ********                               ********                              ");
		printf("\n                          * ****** *                             * ****** *                              ");
		printf("\n                          * ****** *                             * ****** *                              ");
		printf("\n                           * **** *                               * **** *                          ");
		printf("\n                             | |                                    | |                          ");
		printf("\n                             | |                                    | |                          ");
		printf("\n                             | |                                    | |                       ");
		printf("\n                             ***                                    ***                         ");
		printf("\n  ***********************         WELCOME TO DOUBLE TREE HOTEL            ******************  ");

	
		printf("\n  **************************  LOGIN FORM  ****************************************************  ");
		printf(" \n                       ENTER USERNAME:-");
		scanf("%s",&uname);
		printf(" \n                       ENTER PASSWORD:-");
		scanf("%s",&pword);
		if (strcmp(uname, user) == 0 && strcmp(pword, pass) == 0)
		{
			printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");
			break;
		}
		else
		{
			printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");

		}
	} while (a <= 6);
	if (a > 6)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

	}
	
}
