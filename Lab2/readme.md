資工系計算機程式設計實習Lab 2



 



1.     
(Currency exchange) Write a
program that prompts the user to enter the exchange rate from currency in U.S.
dollars (USD) to new Taiwan dollars (NTD), Prompt the user to enter 0 to
convert from USD to NTD and 1 to convert from NTD to USD. Prompt the user to
enter the amount in USD or NTD to convert it to NTD or USD, respectively. Here
is a sample run:



 



Enter the exchange rate from USD to NTD: 31.2



Enter 0 to convert USD to NTD and 1 vice versa: 0



Enter the USD amount: 100



$100.0 USD is 3120 NTD.



 



2.     
(Separating Digits in an Integer) Write
a program that inputs one five-digit number, separates the number into its
individual digits and prints the sum of the digits. For example, 



Input: 93215



Output: The sum of the digits is 20.



[Hint: Use combinations of integer division and the remainder
operation.]



 



3.     
(Points
in triangle) Suppose a right triangle is placed in a plane. The right-angle
point is placed at (0, 0), and the other two points are placed at (200, 0) and
(0, 100). Write a program that prompts the user to enter a point with x- and
y-coordinates and determines whether the point is inside the triangle.



 



Here
are the sample runs:



Enter a
point’s x- and y-coordinates: 100.5  25.5



The
point is in the triangle



Enter a
point’s x- and y-coordinates: 100.5  50.5



The
point is not in the triangle



 



4.     
(Palindrome
Tester) A palindrome is a number or a text phrase that reads the same backward
as forward. For example, each of the following five-digit integers is a
palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a
five-digit integer and determines whether or not it is a palindrome. [Hint: Use
the division and remainder operators to separate the number into its individual
digits.]



 



 



5.     
The
body mass index(BMI) can be calculated as follows:





Create a BMI calculator
application that reads the user’s weight in kilograms and height in meters,
then calculates and displays the user’s body mass index. Also, the application
should display the following information so the user can evaluate his/her BMI:



 



BMI VALUES



Underweight:  less than 18.5



Normal:      between 18.5 and 24.9



Overweight:   between 25 and 29.9



Obese:       30 or greater



 



6.     
Given a directed line from point p0(x0, y0) to
p1(x1, y1), you can use the following condition to decide whether a point
p2(x2, y2) is on the left of the line, on the right, or on the same line:





Write a program that prompts the user to enter the coordinates for the
three points p0, p1, and p2. Display whether p2 is on the left of the line from
p0 to p1, on the right, or on the same line. Here are some sample runs:



Enter the coordinate (x, y) for p0: 4.4 
2



Enter the coordinate (x, y) for p1: 6.5 
9.5



Enter the coordinate (x, y) for p2: -5 
4



(-5.0, 4.0) is on the left side of the line from (4.4, 2.0) to (6.5, 9.5)



 



Enter the coordinate (x, y) for p0: 1 
1



Enter the coordinate (x, y) for p1: 5 
5



Enter the coordinate (x, y) for p2: 2 
2



(2.0, 2.0) is on the line from (1.0, 1.0) to (5.0, 5.0)



 



 



 



 



 



7.     
Zeller’s congruence is an algorithm developed by
Christian Zeller to calculate the day of the week. The formula is





where



l   h is the day of the week
(0: Saturday, 1:Sunday, 2:Monday, 3:Tuesday, 4:Wednesday, 5:Thursday, and
6:Friday).



l   q is the day of the month



l   m is the month (3:March,
4:April, …, 12:December). January and February are counted as months 13 and 14
of the previous year.



l         
j is .



l   k is the year of the
century (i.e., year % 100).



Note all
divisions in this problem perfrom an integer division. Write a program that
prompts the user to enter a year, month, and day of the month, and display the
name of the day of the week. 



[Hint:
January and February are counted as 13 and 14 in the formula, so you need to
convert the user input 1 to 13 and 2 to 14 for the month and change the year to
the previous year. For example, if the user enters 1 for m and 2015 for year, m
will be 13 and year will be 2014 used in the formula.]



 



Here
are some sample runs:



Enter
year: 2015



Enter
month (1-12): 1



Enter
the day of the month (1-31): 25



Day of
the week is Sunday



 



Enter
year: 2012



Enter
month (1-12): 5



Enter
the day of the month (1-31): 12



Day of
the week is Saturday



 



 



 



 



 



 



 



8.     
Write
a program that prompts the user to enter the center coordinates and radii of
two circles and determines whether the second circle is inside the first or
overlaps with the first as shown in the following figures:








 
  
 
 
  
  
 



 

 



 



 



 



 



 



 






[Hint:
circle2 is inside circle1 if the distance between the two center <=r1-r2 and
circle2 overlaps circle1 if the distance between the two center <= r1+r2]



Here
are the sample runs:



 



Enter
circle1’s center x-, y-coordinates, and radius: 0.5  5.1  13



Enter
circle2’s center x-, y-coordinates, and radius: 1  1.7 
4.5



Circle2
is inside circle1.



 



Enter
circle1’s center x-, y-coordinates, and radius: 3.4  5.7 
5.5



Enter
circle2’s center x-, y-coordinates, and radius: 6.7  3.5  3



Circle2
is overlap circle1.



 



Enter
circle1’s center x-, y-coordinates, and radius: 3.4  5.5  1



Enter
circle2’s center x-, y-coordinates, and radius: 5.5  7.2  1



Circle2
does not overlap circle1.



 



 



 



 



 
