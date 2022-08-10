#include <stdio.h>
// #include <cmath>

// int main()
// { 
   
   //------------ FUNCTIONS (calling a function in C) ------------//
//    void myFunction()
//    {
//       printf("I love Jesus!!\n");
//    }

// int main()
// {
//    myFunction();
//    myFunction();

//---------- Add a name parameter of type char (string) to myFunction ---------// 
// void myFunction(char name[]) 
// {
//   printf("Hello %s\n", name);
// }

// int main() 
// {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");

//--------- CALLING A FUNCTION --------//
// void sayHi()
// {
//    int number = 50;
//  printf("Hello User %d\n", number);  
// }

// int main()
// {
//    sayHi();
//    sayHi();

//----------- GIVING INFORMATION TO A FUNCTION ----------//
// void sayHi(char name[])
// {
//    printf("Hello %s\n", name);
// }
// int main()
// {
//    sayHi("Tom");
//    sayHi("Cynthia");
//    sayHi("Marcus");



// void sayHi(int age)
// {
//    printf("Hello you are %d\n", age);
// }

// int main()
// {
//    sayHi(40);
//    sayHi(20);
//    sayHi(30);


void sayHi(char name[], int age, double lace)
{
   printf("Hello %s you are %d years old. Your decimal is %lf\n", name, age, lace);
}

int main()
{
   sayHi("Tom", 42, 2.5);
   sayHi("Cynthia", 50, 4.5);
   sayHi("Marcus", 100, 8.10);


































   



return 0;


}