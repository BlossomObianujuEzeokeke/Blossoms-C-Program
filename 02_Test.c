// #include <stdio.h>

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


//--------- CALLING A FUNCTION IN MAIN--------//
// void myFunction()
// {
//    printf("Hello world\n");
// }

// int main()
// {
//    myFunction();
//    myFunction();


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


// void favAge(int age)
// {
//    printf("Hello, your age is %d\n", age);
// }

// int main()
// {
//    favAge(50);
//    favAge(350);


// void myFunction(char name[], int age, double lace)
// {
//    printf("Hello %s, your age is %d and, your decimal is %lf\n", name, age, lace);
// }

// int main()
// {
// myFunction("John", 40, 4.56);
// myFunction("Blessing", 50, 8.56);

// void myFunction(float sign)
// {
//    printf("This is a float figure %f\n", sign);
// }

// int main()
// {
//    myFunction(5.67);
//    myFunction(7.67);

//--------- RETURN STATEMENTS ------------//

#include <stdio.h>
 
 double cube(double num)
 { 
return num * num * num;
 }

int main()
{
   printf("Answer is %d", cube(3) );
   return 0;
}














// return 0;


// }