//Kyle Luster
//This is my own work
//Lucky Seven1 1-13-2020

#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <utility>
#include <fstream>

using namespace std;

int main() {

    //Part 1
    //Objective: Write a program that reads in 5 integers and prints the largest and the smallest of the group.

    cout << "Part 1" << endl;

    
    //The user inputs five integers
    int a, b, c, d, e;
    cout <<"Enter 5 integers: ";
    cin >> a>> b>> c>> d>> e;

    //The largest integer is determined
    int largest, smallest;

    if(a > b)largest = a;
    else largest = b;

    if(c > largest)largest = c;

    if(d > largest)largest = d;

    if(e > largest)largest = e;

    cout<<"The largest number is " << largest << endl;

    //The smallest integer is determined
    if(a < b)smallest = a;
    else smallest = b;

    if(c < smallest)smallest = c;

    if(d < smallest)smallest = d;

    if(e < smallest)smallest = e;

    cout<<"The smallest number is " << smallest << endl;
    //Part 2
    //Objective: Write a program that calculates and prints the sum of the first 50 positive integers that are multiples of 7.

cout << "Part 2" << endl;

int sum = 0;

for (int i = 1; i<=50; i++) {

//The value i is multiplied by seven until the value i equals fifty. 
//The previous sum is then added to the new product, resulting in the cumulative sum.
sum = sum + (i*7);

}
//The cumulative sum is displayed.
cout << "the sum is: " << sum << endl;

    //Part 3
    //Objective: Write a program that calculates and prints the first 10 terms of the factorial sequence.


cout << "Part 3" << endl;

int product = 1;
for (int i = 1; i <= 10; i++) {

//The mathmatical action of 10! is taking place
product = product*i;

}

//10! is displayed as a product
cout << "the product is: " << product << endl;

    //part 4
    //Objective: Write a program that reads in a string and determines whether it is a palindrome.

cout << "Part 4" << endl;


//The user is asked to enter a string.
cout << "enter a string: ";
string s;
cin >> s;

 int low=0;
 int high=s.length()-1;

bool isPalindrome = true;


//The string is evaluated to either be a palendrome or not.
while (low < high)
{
    if(s[low] != s[high])
    {
        isPalindrome = false;
        break;
    }

    low++;
    high--;
}

//The result is displayed.
if (isPalindrome)
cout << s << " is a palindrome" << endl;

else
cout << s << " is not a palindrome" << endl;

    //Part 5
    //Objective: Write a program that reads in a positive integer and determines whether it is a prime number.

cout << "Part 5" << endl;


//The user is asked to input an integer
cout << "Enter a positive integer: ";
int p;
cin >> p;

bool isPrime = true;

//The integer is evaluated to either be prime or not
for (int i=2; i <= sqrt(p); i++) {

    if (p%i==0) 
    {
     isPrime = false;
    }
   

}

//The result is displayed as prime or not prime.
if (isPrime)
cout << p << " is prime" << endl;

else
cout << p << " is not prime" << endl;


    //part 6
    //Objective: Write a program that creates an array of integers using an initialization list and calculates and displays the average of the values.

cout << "Part 6" << endl;


//An array is arbitrarily filled with integers
int arr [] = {4,7,1,9,80,-44,4,-233,999,34};


//The number of items in the list is determined
int numItems = sizeof(arr)/sizeof(int);


cout << "There are " << numItems << " in the list" << endl;

//The total and the average are counted and displayed.
int total = 0; 
int i = 0;
while (i < numItems) 
{
    total = total + arr[i];
    i++;
}
cout << "total is: " << total << endl;
cout << "average = " << total / double(numItems) << endl;


    //part 7
    //Objective: Write a program that gets a positive integer n from the user and creates an array of n. 
    //The program should read strings from a file, fill the array with the first n strings, and print the string with the most characters.

cout << "Part 7" << endl;


ifstream fin("/Users/KyleLuster/Desktop/OOP/In class work/myinput.in");

//The file is being searched for.
//If the file is not found, the compiler will say so.
if (!fin)
{
    cerr << "file not found...";
    exit(2);
}

//The user specifies how many strings they wish to read from the file.
 int numStrings;
 cout << "Enter the number of strings to read: ";
 cin >> numStrings;
 
 //create an array at runtime
 string* strArr = new string[numStrings];

//Each string is being found sequentially
string str;
i = 0;
while(i < numStrings)
{
    fin >> strArr[i];
    i++;
}

//The character count of each string is being found and the largest string is output
string max = strArr[0];
for (int i = 0; i < numStrings; i++)
{
    if (strArr[i].size() > max.size()) max = strArr[i];
}
cout << max << endl;


    return 0;
}