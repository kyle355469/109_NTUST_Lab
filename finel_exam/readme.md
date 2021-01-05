Final exam
1. Declare a structure with two members real and imaginary of type double for
complex numbers. Write a function named add_complex to add two complex
numbers (both complex structures) and return the result (another complex
structure). Write a test program that prompts the user to enter two complex
numbers and show the sum of the two input complex numbers. Here is a sample
run:
Enter two complex number: 4.3+2.1i 6.2+1.5i
The sum is 10.5+3.6i
2. (Coin Change) You are given coins of different denominations and a total amount
of money amount. Write a function to compute the fewest number of coins that
you need to make up that amount. If that amount of money cannot be made up
by any combination of the coins, return -1.
You may assume that you have an infinite number of each kind of coin.
 Input : Kind of coins : 3
 Coins of different denominations : 1 2 5
 Amount : 11
Output : 3
Input : Kind of coins : 1
 Coins of different denominations : 2
 Amount : 3
Output : -1
3. (Guess the Number) Write a C program that plays the game of “guess the
number” as follows : Your program need to random a four-digits number to be
guessed and each digit cannot be duplicated.
When the player makes a guess, your program need to provide a hint with the
following info:
 The number of “A”, which are digits in the guess that are in the correct
position.
 The number of “B”, which are digits in the guess that are in your answer but
are located in the wrong position. Specifically, the “B” digits in the guess that
could be rearranged such that they become “A”.
If the player’s guess is incorrect , return the hint for your friend’s guess until the 
player finally gets the number. And your program need to ask player whether to
play again.
Example:
If the answer is 7298
Input : Guess the number in four-digits : 2222
Output : Cannot be duplicated!
Input : Guess the number in four-digits : 7384
Output : 1A1B
Input : Guess the number in four-digits : 7298
Output : Excellent!
Input : Would you like to play again ( y or n ) ? n
Output : Gameover.
4. (Maximum Gap) Given an unsorted array , find the maximum difference between
the successive elements in its sorted form. Return 0 if the array contain less than
2 elements.
Note : You may assume all elements in the array are non-negative integers .
Example1 :
Input : 3 6 9 1
Output:
The sorted form of the array is : 1,3,6,9
position (2,3) and position (3,4) has maximum difference 3.
Example2 :
Input: 10
Output:
The sorted form of the array is : 10
The array contains less than 2 elements , therefore return 0 .
5. Convert a non-negative integer (num) to its English words representation.
Constraints : up to ten digits number
Example 1:
Input : num = 123
Output: "One Hundred Twenty Three”
Example 2:
Input : num = 12345
Output : "Twelve Thousand Three Hundred Forty Five”
Example 3:
Input : num = 1234567
Output : "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty
Seven”
Example 4:
Input : num = 1234567891
Output : "One Billion Two Hundred Thirty Four Million Five Hundred Sixty Seven
Thousand Eight Hundred Ninety One"
