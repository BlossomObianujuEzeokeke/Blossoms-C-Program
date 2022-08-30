// #include <stdio.h>
// #include <math.h>

// int main()

// { 
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

// char Monday[50];
// char Tuesday[20];
// char Wednesday[20];

// printf("Enter days of the week:");
// scanf("%s %s %s", &Monday, &Tuesday, &Wednesday);
// printf("Your days of the week are: \n %s\n %s\n %s\n ", Monday, Tuesday, Wednesday);

//-------------------------------------------------------------//
// char color[20];
// char pluralNoun[20];
// char celebrityL[20];
// char celebrityF[20];

// printf("Enter a color:");
// scanf("%s", &color);

// printf("Enter a Plural noun:");
// scanf("%s", pluralNoun);

// printf("Enter a celebrity Name:");
// scanf("%s %s", celebrityL, celebrityF );
 
// printf("Roses are %s\n", color );
// printf("%s are blue\n", pluralNoun );
// printf("I love %s\n %s", celebrityL, celebrityF);

//--------------- ARRAYS --------------------//
// int favName[] = {1, 2, 3, 4, 5};
// printf("%d", favName[3] );

// int house[] = {1, 2, 3};
// printf("%d\n", house[0] );
// printf("%d\n", house[1] );
// printf("%d\n", house[2] );

// char musicType[30] = "Johnson, Peter, Simi";
// printf("%s", musicType);

// char homeBound = '$';
// printf("Enter sign"); 
// scanf("%s", &homeBound); 
// printf("your sign is %s", &homeBound);
 
//----------- CHANGING AN ARRAY ELEMENT ---------//
// int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
// luckyNumbers[0] = 15;
// luckyNumbers[4] = 25;
// printf("%d\n", luckyNumbers[0] );
// printf("%d", luckyNumbers[4] );

//-------------DECLARING A VALUE TO AN ARRAY THAT DOESN'T HAVE ONE---------------//
// int liveToday[10];
// liveToday[1] = 20;
// liveToday[0] = 30;
// printf("%d", liveToday[1]);

//------------------ FAHRENHEIT TO CELSIUS-------------------------//
// #include <stdio.h>
// #include <ctype.h>

// int main(){
//  char unit;
//  float temp;
//  printf("\nIs the temperature in (f) or (c)?: ");
//  scanf("%c", &unit);

//  unit = toupper(unit);

//  if(unit == 'C'){
// printf("The temp is currently c");
//  }

// else if(unit == 'F'){
// printf("The temp is currently f");
// }

// else{
//    printf("%c is not a valid unit of measurement", unit);
// }
//    return 0;
// }

//--------------------------------------------------------------//
// #include <stdio.h>
// #include <ctype.h>

// int main(){
// char unit;
// float temp;

// printf("\nIs the temperature in (F) or (c)? ");
// scanf("%c", &unit);

// unit = toupper(unit);

// if(unit == 'C'){
// printf("\nEnter the temp in Celsius: ");
// scanf("%f", &temp);
// temp = (temp * 9 / 5) )

// }
   // return 0;
// }

//----------------- CREATING A CALCULATOR -----------------//
// #include <stdio.h>
// #include <stdbool.h>

// int main(){
// char operator;
// double num1;
// double num2;
// double result;

// printf("\nEnter an operator(+ - * /): ");
// scanf("%c", &operator);

// printf("\nEnter 1st number: ");
// scanf("%lf", &num1);

// printf("Enter 2nd number: ");
// scanf("%lf", &num2);


// switch(operator){
// case '+':
// result = num1 + num2;
// printf("\nresult: %.2lf", result);
// break;

// case '-':
// result = num1 - num2;
// printf("result: %.2lf", result);
// break;

// case '*':
// result = num1 * num2;
// printf("result: %.2lf", result);
// break;

// default:
// printf("%c is not a valid operator.");
// }
//    return 0;
// }

//------------------ LOGICAL OPERATORS -----------------//
// #include <stdio.h>

// int main(){
// float temp;
 
// if(temp >= 0){
// printf("\nThe weather is good");
// }

// else{
//    printf("\nThe weather is bad");
// }


//    return 0;
// }

//---------- LOGICAL OPERATOR && WITH BOOLEANS ----------//
// #include <stdio.h>
// #include <stdbool.h>

// int main(){

//    float temp = 25;
//    // bool sunny = false;
//    bool sunny = true;

// if(temp >= 0 && temp <= 30 && sunny){
// printf("The weather is great!");
// }

// else{
//    printf("The weather is bad!");
// }

//    return 0;
// }

//---------- LOGICAL OPERATOR || WITH BOOLEANS ----------//
#include <stdio.h>
#include <stdbool.h>

int main(){
float temp = 25.5;
int sunny = true;
 
 if(temp = 25.5 && temp > 0 && sunny){
printf("The weather is great!");
 }

else{
   printf("The weather is bad!");
}
   return 0;
}












  











