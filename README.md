Motivation:
We know different data types including integer, float, double etc. and we know how to declare variables, take data input. If we want to keep 1, 2, 3 or any number in a variable, then we have to declare a separate variable for each number, which is time-consuming and complicated. To solve this problem there is array. We can store many similar numbers in array easily and use as per need. For example, if we want to write the roll number of the students of a class, then we would have to write one variable for each roll. It is very time consuming and a complicated task. So we use array for all these tasks.

What is an array?
An array is a type of linear data structure. A linear data structure is a structure that is stored sequentially in memory. The data in this structure is arranged serially. There are two types of representation of this linear data structure. One is an array and the other is a linked list. array is basically a data structure where we can store similar data. Similar data means int, float, double, char etc. data cannot be mixed and stored. When declaring the array, its size has to be declared and that means we cannot store more data than this size in the array. If we declare an array of size 100 of int type, maximum 100 ints can be stored in the array. Each data structure has some basic functions of data insert, update, delete, searching, sorting. We will now look at the details


Array Declaration :

We will see how to declare an array in C language. The declaration of the array varies slightly depending on the language, but the basics are the same.
We want to store the rolls of 40 students in an array, so we can declare the array as:

int roll[40];

Here int is the data type. Because of the role, I took int for the number, if it was a fraction, I would have declared an array of float or double data type. After this, since we will work with roll, we have named the array as roll. After that, since we will store the roll of 40 students, I have given the size of the array as 40



Array Initialization : 
We will now see how to store some fixed values in an array
roll[0]=22;
roll[1]=25;  



Above it can be seen that the first index of the array called roll has been assigned a value of 22. Here roll[0] is the first index of the array. The index of the array starts at 0. To access the index of the array in C language, you have to write the name of the array and then the number of the index inside the 3rd bracket. Since we defined the size of the roll array as 40, so the last index of this array will be 39.Element at the last index of the array To assign should be written like this: roll[39]=50;
Array index number and array index value are different things. roll [5]=21; It means to put the value 21 in the 5th index among all the indexes in the array called roll. This is how we can implement the array.


user input:

To work with arrays, you need to know how to use loops. If there is a problem in the loop then it is not possible to work with ARRAY. We can take input in two ways.

scanf ("%d " ,&roll [0])
scanf ("%d " ,&roll[1])
scanf ("%d " ,&roll[2])
..
..
..

we can take input like this. But this process takes a lot of time. So we can easily take inputs using loops.
Input to loop usage:

scanf ("%d ",&numberof students );
for (int i =0;i <numberofstudent;i ++)
{
scanf ( "%d ",& roll [ i ]);
}

The above code takes input inside the loop. The first index of the array will start taking input from 0. After that 1,2,3,4 will continue to take like this.
It is not always necessary to input values at all indexes according to the serial. We can input as per wish.




array print:
We have declared an array of size 40 and put some data in it. Now we can print the data if we want, we can use the data if we want, we can search the data if we need any data. If we want to print the data of the array, we can print the data by running the loop and taking the data input at each index.

for (i =0;i <roll ;i ++)
{
    printf ("%d \n ",roll [i ]);
}

Then from the 0th index of the roll array to the roll-1st index, all the values of the index will be printed one after the other. If we want to print from the end then we have to change the condition inside the loop. We can also print the index of each element through a loop.

Let's see a program to find the average of a number using an array:

#include <stdio.h>
int main() {
  int marks[10], i, n, sum = 0;
  double average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
          

    sum += marks[i];
  }

 average = (double) sum / n;

  printf("Average = %.2lf", average);

  return 0;
}

Some array related problems are given (links of various online sources:
1.Sum of array elements using recursion - GeeksforGeeks
2.Arrays - DS | HackerRank
Many problems and their solutions are here. First try to solve it yourself, if you can't then see the solution : Top 50 Array Coding Problems for Interviews - GeeksforGeeks




