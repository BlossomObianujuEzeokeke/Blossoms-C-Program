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


//-------------- GIVING INFORMATION TO A FUNCTION -----------------//
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

//------------------- RETURN STATEMENTS ------------------// 
//  double cube(double num)
//  { 
// return num * num * num;
//  }

// int main()
// {
//    printf("Answer is %f", cube(3.0) );
//    return 0;
// }

//------------------------------------------//
// #include <stdio.h>

// int favNum(int x, int y)
// {
//    return x + y;
// }

// int main()
// { 
//    int result = favNum(5, 6);
// printf("Your answer is %d", result );
// return 0;
// }

//----------------------------------------------//
// #include <stdio.h>
// int favSum(int x, int y, int z)
// {
//    return x ^ y * z;
// }

// int main()
// {
//    int answer = favSum(5, 20, 4);
//    printf("Your answer is %d", answer);
//    return 0;
// }

//---------------------------------------------//
// #include <stdio.h>
// int favSum(int x)
// {
//    return 20 * x - 5;
// }

// int main()
// {
//    printf("Your answer is: %d", favSum(10) );
// }

//---------------------------------------------------------------//

// #include <stdio.h>
// int favSum(int x, int y)
// {
//    return y ^ 20 * x - 5;
// }

// int main()
// {
//    int answer = favSum(30, 5);
//    printf("Your answer is: %d", answer);
//    return 0;
// }

//---------------ADDING AND INT TO A DOUBLE/FLOAT----------------//
// #include <stdio.h>
// double favSum(int x, double y)
// {
//    return x + y;
// }

// int main()
// {
//    printf("Your answer is: %lf", favSum(5, 10.25) );
//    return 0;
// }

//--------------------- GREATER THAN (GREATER THAN) --------------//
// #include <stdio.h>
// int favSum(int x)
// {
//    return x > 10; 
// }

// int main()
// {
//    printf("Your answer is: %d", favSum(5) );
//    return 0;
// }

//-------------------------- IF STATEMENTS ----------------------------------//
// int main()
// { 
//   int myNum = 10;
  
//   if (myNum > 0)
//     printf("The value is a positive number.");
//   else if (myNum < 0)
//     printf("The value is a negative number.");
//   else
//     printf("The value is 0.");
    
//   return 0;
// }



//-----------BUILDING A MAX FUNCTION-------------//
// #include <stdio.h>
// int max(int num1, int num2) {
//   int result;
//   if(num1 > num2){
//     result = num2;
//   }
//   return result;
// }

// int main(){
//   printf("%d", max(40, 10) );
//   return 0;
// }

//-----------DOUBLE WITH MAX FUNCTION--------------//
// #include <stdio.h>
// double max(double num1, double num2)
//  {
//   double result;
//   if(num1 > num2){ result = num1; }
//   else{result = num2; }
//   return result;
  
// }

// int main(){
//   printf("%lf", max(40.25, 10.20) );
//   return 0;
// }


#include <stdio.h>
double max(double num1, double num2)
{
int answer;
if (num1 > num2){answer = num1;}
else{answer = num2;}
return answer;
}































// return 0;


// }



































