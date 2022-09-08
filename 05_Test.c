//-------- CALLING A FUNCTION IN MAIN -----------//
// #include <stdio.h>

// void myBirthday()
// {
// printf("\nHello my birthday is today!");
// printf("\nHello my birthday is today!");
// printf("\nHello my birthday is today!");
// }

// int main(){
// myBirthday();
// myBirthday();
// myBirthday();
//    return 0;
// }

//-------------- CALLING A FUNCTION IN MAIN EXAMPLE 2 ----------//
// #include <stdio.h>

// void myHome(char name[], int age, double gpa)
// {
//    printf("\n%s lives in London, she is %d years old and, her gpa is %.2lf", name, age, gpa);
//    printf("\n%s lives in London, she is %d years old and, her gpa is %.2lf", name, age, gpa);
//    printf("\n%s lives in London, she is %d years old and, her gpa is %.2lf", name, age, gpa);
// }

// int main(){
//    myHome("Blossom", 32, 3.8);
//    myHome("Blossom", 32, 3.8);
//    myHome("Blossom", 32, 3.8);
// }

//------------- UPPERCASE AND LOWERCASE WITH STRINGS --------------//
// #include <stdio.h>
// #include <string.h>

// int main(){
// char name1[] = "Blossom";
// char name2[] = "Ezeokeke";

// printf("\n%s", strlwr(name1) );
// printf("\n%s", strupr(name2) );
// printf("\n%s", strcat(name1, name2) );
// printf("\n%s", strncat(name2, name1, 4) );
// printf("\n%s", strcpy(name2, name1) );

// printf("\n%s", strset(name2, '?') );
// printf("\n%s", strnset(name2, '$', 4) );
// printf("\n%s", strrev(name1) );
//    return 0;
// }

//--------- FOR LOOPS(INCREMENT) --------//
// #include <stdio.h>

// int main(){

// for(double myFav = 1.5; myFav <= 5.5; myFav++)
// for(int index = 1; index <= 10; index++)
// {
// printf("\n%lf", myFav);
// printf("\n%d", index);
// }  
//    return 0;
// }

//-------- FOR LOOPS(DECREMENT) ----------//
// #include <stdio.h>

// int main(){
// for(int i = 0; i <= 32; i++ ){ 
// for(int i = 1; i <= 10; i+= 2 )
// for(int i = 10; i >= 1; i-- )
// for(int i = 10; i >= 1; i--)
// printf("%d\n", i);
// }
//    return 0;
// }

//-------- PRINT YES FIVE TIMES USING FOR LOOP ---------//
// #include <stdio.h>
// int main(){
// for(i = 0; i <= 5; i++)
// {
// printf("Yes\n");
// }
//    return 0;
// }

//---------- WHILE LOOP -----------//
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char name[25];
// printf("\nWhat is your name? ");
// fgets(name, 25, stdin);
// name[strlen(name) - 1] = '\0';

// while(strlen(name) == 0)
// {
// printf("\nYou did not enter your name");
// printf("\nWhat is your name? ");
// fgets(name, 25, stdin);
// }

// printf("\nHello %s", name);
//    return 0;
// }

//------------- WHILE LOOP(INCREMENT) ------------------//
// #include <stdio.h>
// int main(){
// int i = 0;
// while(i <= 10)
// {
// printf("%d\n", i);
// i++;
// }
//    return 0;
// }

//------------- WHILE LOOP(DECREMENT) ------------------//
// #include <stdio.h>
// int main(){
// int i = 32;
// while(i >= 0){
// printf("%d", i);
// }
//    return 0;
// }

//---------- INCREMENT AND DECREMENT -----------------//
// #include <stdio.h>
// int main(){
// int i = 20;
// i++;
// i--;
// printf("%d", i);

//    return 0;
// }

//-------- DO WHILE LOOP ----------//
// #include <stdio.h>
// int main()
// {
//    int i = 7;
// do{
// printf("%d", i);

// } while (i < 6); //while (i < 4);
//    return 0;
// }
//
//-----------------------------------------//
// #include <stdio.h>
// int main(){
// int i = 1;
// do{
// printf("%d\n", i);
// i++;
// }while (i < 5);
   // return 0;
// }

//----------------------------------------------//
// #include <stdio.h>
// int main(){
// int number = 0;
// int sum = 0;

// do{
// printf("Enter a number above 0: ");
// scanf("%d", &number);
// if(number > 0)
// {
//    sum += number;
// }
// }while(number > 0);
// return 0;
// }

//---------- CONTINUE AND BREAKS ------------//
// #include <stdio.h>
// int main(){
// for(int i = 0; i < 10; i++)
// {
// if(i == 4)
// {
// break;
// continue;
// }

// printf("\n%d", i);
// }
//    return 0;
// }

//-----------------------------------------//
//------ DECREMENT I -------//
// #include <stdio.h>
// int main(){
// int i = 9;
// printf("%d", --i);

//  return 0;
// }

//------ INCREMENT I -------//
// #include <stdio.h>
// int main(){
// int i = 9;
// printf("%d", ++i);

//  return 0;
// }

//-------- ARRAYS -----------//
// #include <stdio.h>
// int main(){ 
//    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};          
// printf("$%.2lf", prices[3]);
//    return 0;
// }

//---------SECOND EXAMPLE -------//
// #include <stdio.h>
// int main(){
// double price[5];
// price[0] = 10.5;
// price[1] = 20.5;
// price[2] = 30.5;
// price[3] = 40.5;
// price[4] = 50.5;

// printf("$%.2lf", price[3]);

//    return 0;
// }

//--------- LOOPING THROUGH AN ARRAY ---------//
// #include <stdio.h>
// int main(){ 
// int myNumbers[] = {25, 50, 75, 100, 110, 150, 170};

// for(int i = 0; i < 7; i++) 
// {
//   printf("$%.2d\n", myNumbers[i]);

// }
// return 0;
// }

//------- 2D ARRAYS (EXAMPLE 1) --------//
// #include <stdio.h>
// #include <string.h>
// int main(){

// char nums[3][2] = {
//                   {1, 2},
//                   {4, 5},
//                   {7, 8},
                  
//                  };
// printf("%d", nums[0][1]);

// return 0;
// }

//--------- EXAMPLE 2 --------//
// #include <stdio.h>
// #include <string.h>
// int main(){

// char nums[3][3] = {
//                   {1, 2, 3},
//                   {4, 5, 6},
//                   {7, 8, 9},
                  
//                  };
// printf("%d %d %d\n", nums[0][0], nums[0][1], nums[0][2]);
// printf("%d %d %d\n", nums[1][0], nums[1][1], nums[1][2]);
// printf("%d %d %d\n", nums[2][0], nums[2][1], nums[2][2]);

//    return 0;
// }

//----- CREATING AN ARRAY OF STRINGS -------//
// #include <stdio.h>
// int main(){

// char greetings[] = "Hello world";
// greetings[4] = 'j';
// printf("%s", greetings);

//   return 0;
// }

//-------- SECOND EXAMPLE -----//
#include<stdio.h>
int main(){
  
char cars[1][3] = {
                 {"Mustang", "Corvette", "Toyota"}
                  };

printf("%c", cars[0]);
  
  return 0;
}








