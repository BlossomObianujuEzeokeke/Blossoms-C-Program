#include <stdio.h>
#include <cmath>

int main()

{

// INTEGERS, FLOATS, DOUBLES, CHAR
// ----------------ADDING A VARIABLE----------------------------------------->
// int favNum = 90;
// char favChar = 'i';
// ------------------------------------------------------------------------>
// printf("My %s number is %f and, I also like the %c\n", "favorite", 500.567, '$');
// printf("My %s number is %d %s, I also like the %c", "favorite", 500, "and", favChar);

//------------------WORKING WITH NUMBERS----------------------------------->
// printf("My favorite number is %f\n", 8.9);
// printf("%f", 5 / 4.0);

// -----------------ADDING A VARIABLE-------------------------------------->
// int num = 6;
// char charSam [] = "Johnson";
// printf("This is the number %d his name is %s", num, charSam);

// ------------------FUNCTIONS--------------------------------------------->
// printf("%f \n", pow (4, 10) );
// printf("%f \n", sqrt (43) );
// printf("%f \n", ceil(36.335) );
// printf("%f \n", floor(36.335) ); 
// printf("%f", sqrt(24) );

// char favName[] = "Johnson";
// int favSum = 500;
// printf("%s %d\n", favName, favSum);

// ------------CREATING AN EXTRA LINE IN C-------------------------------->
// ------------Sequence \n adds a new line---------------------->
// printf("Print this file and leave a space\n\n");
// printf("Print this file and leave three spaces\n\n\n");
// printf("Print this file and leave four spaces\n\n\n\n");

// ------------Sequence \t adds spaces between words on a line--------------->
// printf("Add a space\t between these words\n");
// printf("Add two spaces\t\t between these words");

// -----------Sequence \" adds double quotes to a word----------------------->
// printf("Print this \"file with the name\" Titi\n"); //This is a comment
// printf("Print this \"file\" with the name \"Titi\". ");

// -----------Sequence \\" adds a slash between two lines-------------------->
// printf("Print this file with the name Sam Titi\\ \n");
// printf("Print this file with the name Titi ");

//------------C OPERATORS. ADDING, SUBTRACTING AND MULTIPLYING VARIABLES------------------>
int x = 20;
int y = 50;
int sum = x + y;
int sub = x - y;
printf("Add these two %i: Subtract these two %d\n", sum, sub);
// printf("Get the power of this %f\n", pow(10, 2) );
// printf("Get the ceiling for this %f\n", ceil(59.52) );
// printf("Get the floor for this %f\n", floor(59.52) );
// printf("Get the square root for this %f\n", sqrt(59) );
// printf("Multiply %i and %d", sum, sub);

//   int sum1 = 100 + 50;        
//   int sum2 = sum1 + 250;      
//   int sum3 = sum2 + sum2;     
//   printf("%d\n", sum1);
//   printf("%d\n", sum2);
//   printf("%d\n", sum3);

//------------DECLARING MULTIPLE VARIABLES------------------------------------>
// int x = 10, y = 15, z = 20;
// printf("Print this %d", x + y + z);

// int x, y, z;
// x = y = z = 50;
// printf("Print this %d", x + y + z);

// --------- C OPERATORS ----------------------------------------------------->
// int femaleStudents = 23;
// int maleStudents = 5;
// printf("This is the number of female students %d ", femaleStudents % maleStudents);

// int x = 5;
// int y = 2;
// printf("%d", x % y);

// --------- INCREMENT(you add ++ to the value)------------>
// int x = 5;
// int y = 10;
// printf("This increases the value of a variable by one %d %d", ++x, ++y);

// float favHome = 20.0115;
// int sumSport = 50;
// printf("This the house %lf, \nthis is the sport %i", ++favHome, ++sumSport );

// --------- INCREMENT(you add - - to the value)------------>
// int x = 10;
// int y = 20;
// printf("%d %d", --x, --y);

// double myHome = 15.555;
// int church = 100;
// printf("This is %f and this is %d", --myHome, --church);

//----------COMPARISON OPERATORS(used to compare two values, True(1) and false(0) ) ----------------->
//   int x = 5;
//   int y = 3;
//   printf("%d", x > y); // returns 1 (true) because 5 is greater than 3

// int x = 3;
//   int y = 3;
//   printf("%d", x == y); // returns 1 (true) because 3 is equal to 3

// int x = 10;
// int y = 20;
//  printf("%d", x != y);  //returns 1 (true) because 10 is not equal to 20

//  int x = 50;
//  int y = 51;
//  printf("%d", x >= y); //returns false (0) because 50 isn't greater than or equal to 51

// -----------GETTING USER INPUT------------------->
// int age;
// printf("Please enter your age:");
// scanf("%d", &age);
// printf("You are %d years old", age);





return 0;
}







