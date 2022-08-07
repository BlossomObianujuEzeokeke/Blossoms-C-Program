#include <stdio.h>
#include <math.h>

int main()

{ 
// THIS IS INT SECTION //
   // int a = 3;
   // float b = 2.12;
   // char c = '$';
   // double d = 325.057685;


// THIS IS THE LIBRARY\PRINT SECTION  //
   // printf("Hello Harry\n");
   // printf("This is an integer %d\n", a);
   // printf("This is a float %f\n", b);
   // printf("This is a character %c\n", c);
   // printf("This is a double %f\n", d);
   // printf("This is a string %s",)

//--------------BUILDING A BASIC CALCULATOR--------------//
// int num1;
// int num2;
// printf("Enter first number: ");
// scanf("%d", &num1);
// printf("Enter second number: ");
// scanf("%d", &num2);

// printf("Answer: %d", num1 + num2);

// ----------------------------------------------------//
// double num1;
// double num2;
// printf("Enter your first number:");
// scanf("%lf", &num1);
// printf("Enter your second number:");
// scanf("%lf", &num2);

// printf("Answer: %lf", num1 + num2);

//----------------BUILDING A MAD LIBS GAME (FGETS)---------------------//
// char schoolName[50];
// printf("Enter your School name:");
// fgets(schoolName, 50, stdin);
// printf("Your school is %s", schoolName);

// char Monday[50];
// char Tuesday[20];
// char Wednesday[20];

// printf("Enter days of the week:");
// fgets( Monday, 50, stdin);
// fgets(Tuesday, 20, stdin);
// fgets(Wednesday, 20, stdin);
// printf("Your days of the week are: \n %s\n %s\n %s\n ", Monday, Tuesday, Wednesday);

char Monday[50];
char Tuesday[20];
char Wednesday[20];

printf("Enter days of the week:");
scanf("%s %s %s", &Monday, &Tuesday, &Wednesday);
printf("Your days of the week are: \n %s\n %s\n %s\n ", Monday, Tuesday, Wednesday);






//-------------------------------------------------------------//
// char color[20];
// char pluralNoun[20];
// char celebrity[20];

// printf("Enter a color:");
// scanf("%s", &color);

// printf("Enter a Plural noun:");
// scanf("%s", pluralNoun);

// printf("Enter a celebrity Name:");
// scanf("%s", celebrity);
 
// printf("Roses are %s\n", color );
// printf("%s are blue\n", pluralNoun );
// printf("I love %s", celebrity);






   


  
   return 0;

}
