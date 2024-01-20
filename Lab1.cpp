#include <iostream> //allows use of this library
#include <cmath> //allows use of math functions
/* Nathaniel Allen 09/18/2020 
The purpose of this program is to take the square root of a number
by using biscetion */

using namespace std;

float num, high, low, guess, answer, tol; //declaration of the variables that will be used

int main()
{
   cout << "Enter number: ";// INPUT displays text
   cin >> num;//takes in the number that user will enter
   
   low = 1.0; high = num; tol = 0.00001;//low & margin given value, high equals user input
   while(fabs(high-low)>tol){//repeats operation while difference is greater than margin
       guess = (high + low)/2.0;//assignment calculation repeats
       cout << " high: " << high << " low: " << low << " guess: " << guess << endl;
       answer = (guess * guess);
       
       if(answer>num){high=guess;}
       
       else
       
       if(answer<num){low=guess;}
       
       else{low=guess; high=guess;}
   }
   cout << "The square root is " << guess << endl;//OUTPUT
   
   return 0;
}
