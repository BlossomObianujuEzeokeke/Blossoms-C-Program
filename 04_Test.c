// #include <stdio.h>
// #include <cmath>

// int main()
// {

   // char characterName[] = "Stan";
   // double characterAge = 67.989;
   // printf("There once was a man named %s\n", characterName);
   // printf("he was %lf years old.\n", characterAge);

   // characterAge = 30;
   // printf("He really liked the name %s\n", characterName);
   // printf("but did not like being %d\n", characterAge);
   // printf("he did like being %d\n", characterAge);

// char charactername[] = "Samson";
// int favNumber = 50;
// float decimal = 10.5;
// printf("A man named %s just turned: %i, he has %f as his count", charactername, favNumber, decimal);

// ----------- CALLING A FUNCTION INSIDE MAIN()-------------->
// void myFunction() {
// printf("I just \"got\" engaged!\n");
// }

// int main() {
// myFunction();
// myFunction();
// myFunction();

// ----------- CALLING A FUNCTION --------------------------->
// void myFunction()
// { 
//    int sum = 20;
//    printf("This is %d\n", sum );
// }

//    int main()
//    { 
//    myFunction();
//    myFunction();

//---------CALLING FUNCTION FOR FLOAT-------------------------->
// void myFunction()
// {
//  float sum = 25.5;
//    printf("This is a float sum %f\n", sum);
// }

// int main()
// {
//    myFunction();
//    myFunction();

//---------CALLING FUNCTION FOR CHAR -------------------------->
// void myFunction()
// {
// char sum[] = "Johnson";
// printf("His name is %s.\n", sum);
// }

// int main()
// { 
//    myFunction();
//    myFunction();

//------------------ CONSTANTS IN C ---------------------------->
// const int FAVNUM= 50;
// printf("This %d dollars is mine\n", favNum);
// printf("I have over %d cars", favNum);

// const int NUM = 60;
// const float PERSON = 3.58;
// const char CHARACTERS[] = "Johnsons";
// const char FAVOUR = 'p';

// printf("This is a const integer %d\n", NUM);
// printf("This is a const floating value %f\n", PERSON);
// printf("This is a const character value %s\n", CHARACTERS);
// printf("This is a char %c", FAVOUR);

//    return 0;
// }

//------------------- WHILE LOOPS (INT) -------------------//
// #include <stdio.h>
// int main()
// {
// int index = 1;
// while (index <= 5)
// {
// printf("This is %d\n", index);
// index++;
// }
//    return 0;
// }

//-------------------------------------------------------//
// #include <stdio.h>
// int main()
// {
// int index = 5;
// while(index <= 10)
// {
// printf("%d\n", index);
// index++;

// }
// return 0;
// }

//----------------- DO WHILE LOOP ----------------------------//
// #include <stdio.h>
// int main()
// {
//    int index = 6;
//    do{
//       printf("%d\n", index);
//       index++;
//    }
// while(index <=5);

//    return 0;
// }

//------------------ BUILDING A GUESSING GAME ------------------//
// #include <stdio.h>
// int main()
// {
// int secretNumber = 5;
// int guess;

// while(guess != secretNumber)
// {
//    printf("Enter your number:");
//    scanf("%d", &guess);
// }

// printf("You win!");
//    return 0;
// }


//----------------- FINDING THE CIRCUMFERENCE OF A CIRCLE (DOUBLES) --------------//
// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// int main()
// {
// const double PI = 3.515;
// double radius;
// double circumference;
// double area;

// printf("Enter your radius:\n");
// scanf("%lf", &radius);

//formulas 
// circumference = 2 * PI * radius;
// area = PI * radius * radius;

// printf("Circumference: %lf\n", circumference);
// printf("Area: %lf", area);

// return 0;

// }

//---------------- CIRCUMFERENCE OF A CIRCLE (INT) -----------//
// #include <stdio.h>
// int main(){

// const int PI = 5;
// int radius;
// int area;
// int circumference;

// printf("Enter a radius: ");
// scanf("%i", &radius );

// circumference = 2 * PI * radius;
// area = PI * radius * radius;

// printf("Circumference: %i \n", circumference);
// printf("area: %i", area);

//    return 0;
// }

//------------------ INCREMENT/DECREMENT ++ ---------------------//
// #include <stdio.h>
// int main(){
// int x = 5;
// int y = 10;
// int p = 20;
// int q = 30;

// y++;
// x++;
// p--;
// q--;
// printf("%d\n", x);
// printf("%d\n", y);
// printf("%d\n", p);
// printf("%d", q);

// return 0;
// }

//--------------------------//
// #include<stdio.h>

// int main(){
//    char name[20];
//    char home[20];

//    printf("Your name is:");
//    fgets(name, 20, stdin);

//    printf("Your address is:");
//    fgets(home, 20, stdin);

// printf(" Your name is %s", name);
// printf(" Your home  is %s", home);

//    return 0;
// }

//-------------- POINTERS -------------//
// #include<stdio.h>

// int main(){
//    int myAge = 43;
   // double size = 20.05;
//    printf("\nage's memory address: %p", &myAge);

//    return 0;
// }

//------------- EXAMPLE 2 --------------//
// #include <stdio.h>

// int main(){
//    int myAge = 43;
//    int* pAge = &myAge;
//    int * pAge = &myAge;
//    int *pAge = &myAge;

//    printf("\n%d", myAge);
//    printf("\n%p", &myAge);
//    printf("\n%p", &pAge);
//    printf("\n%d", *pAge);
//    printf("\n%d", * pAge);
//    return 0;
// }

//------- EXAMPLE 3 -------//
#include <stdio.h>
int main(){

double gpa = 3.5;
double * pGpa = &gpa;

char grade = 'A';
char *aGrade = &grade;

printf("\n%lf\n", gpa);
printf("%p\n", &gpa);

printf("\n%c\n", grade);
printf("%p\n", &grade);

printf("\n%c", *aGrade);

   return 0;
}


























//  double gpa = 3.343948888994324434;
// bool favNum = true; Lin
// char favNum[50];

// printf("\\ I like pizza\\\n");
// printf("Do I like pizza? %d I do\n", favNum);
// printf("You are %lf years old", gpa);
// printf("%0.15f", gpa);
// printf("%i", FAVHOUSE);
// printf("Enter your name: ");
// scanf("%s", &favNum);
// fgets(favNum, 50, stdin );
// printf("Your name is %s", favNum);






















