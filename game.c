#include <stdio.h>
#include <string.h>

// myheader.h 

void printGame(struct Game* question);

// file1.cpp

#include "myheader.h"

struct Game {
        char firstname[256];
        char lastname[256];
};

void printGame(struct Game* question);
int main()
{
	// call a function in a different cpp file
	int one;
 	int two;
	int three;
	int four;
	int five;
	int six;
	int seven;
	int eight;
	int nine;
	int ten;
        char firstname[256];
        char lastname[256];
        int menu=0;
while(menu != 3)
{
printf("\n\n****** MAIN MENU ******\n");
 printf("\t1.CREATE NEW PLAYER.\n\t2.PLAY.\n\t3.QUIT.\n");
 printf("***************************************\n");
 printf("YOUR CHOICE: ");
 scanf("%d", &menu);

if(menu == 1)
{
  printf("What is your name?\n");
  //fgets(input, 256, stdin);
  scanf("%s", firstname);
  printf("What is your last name?\n");
  //fgets(input, 256, stdin);
  scanf("%s", lastname);

}

if(menu == 2)
{
 printf("What is the next number in the pattern: 2,4,6,8...\n");
  int a = 10;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &one);
        if (one == a)
        {
		printf("Correct answer!\n");
		break;
	}
        else
	{
        	printf("Incorrect answer! Try again!\n");
	}
  }

 printf("What is the next number in the pattern: 7,14,28,35...\n");
   int b = 42;
   while(1)
   {
        //fgets(input, 256, stdin);
        scanf("%d", &two);
        if (two == b)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: 10,20,30,40...\n");
  int c = 50;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &three);
        if (three == c)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: -2.5,-10,-40,-160...\n");
  int d = -640;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &four);
        if (four == d)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: 2,10,50,250...\n");
  int e = 1250;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &five);
        if (five == e)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: 0.8,-4,20,-100...\n");
  int f = 500;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &six);
        if (six == f)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: -3,-9,-27,-81...\n");
  int g = -243;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &seven);
        if (seven == g)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: 1,2,4,8...\n");
  int h = 16;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &eight);
        if (eight == h)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: 4,20,100,500...\n");
  int i = 2500;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &nine);
        if (nine == i)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }

 printf("What is the next number in the pattern: 2,0.5,0.125,0.03125...\n");
  int j = 0.0078125;
  while(1)
  {
        //fgets(input, 256, stdin);
        scanf("%d", &ten);
        if (ten == j)
        {
                printf("Correct answer!\n");
                break;
        }
        else
        {
                printf("Incorrect answer! Try again!\n");
        }
  }
break;
	printf(Rebekah Woo, you got: 10/10 right!\n")
break;
 }
}
}
