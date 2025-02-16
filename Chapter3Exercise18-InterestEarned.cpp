/*
File Name: Chapter3Exercise18-InterestEarned.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write a program that asks for the principal, the interest rate, and the
number of times the interest is compunded. It should display a report
similar to:
Interest Rare: 4.25%
Times Compounded: 12
Principal: $1000.00
Interest: $43.34
Amount in Savings: $1043.34
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	
	cout << fixed<<setprecision(2)<<"Input your interest rate: ";
	double interest_rate = 0;
	cin >> interest_rate; 
	interest_rate = interest_rate / 100;
	cout << "Input the times your interest will compound: ";
	double compound = 0;
	cin >> compound;
	cout << "Input your principal: $";
	double principal = 0;
	cin >> principal;
	double inner = 1 + (interest_rate / compound);
	double amount = principal * (pow(inner, compound));
	cout << "Your total amount in savings is $" << amount;








	
}


