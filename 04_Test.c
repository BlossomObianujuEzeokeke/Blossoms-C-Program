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


//-----------------------------------------------//
#include <stdio.h>
// #include <stdbool.h>
#include <string.h>

int main()
{
   // double gpa = 3.343948888994324434;
// bool favNum = true; Lin
char favNum[50];


// printf("\\ I like pizza\\\n");
// printf("Do I like pizza? %d I do\n", favNum);
// printf("You are %lf years old", gpa);
// printf("%0.15f", gpa);
// printf("%i", FAVHOUSE);
printf("Enter your name: ");
scanf("%s", &favNum);
// fgets(favNum, 50, stdin );
printf("Your name is %s", favNum);




   return 0;
}

















