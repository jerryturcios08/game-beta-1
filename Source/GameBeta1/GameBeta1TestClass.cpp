// Fill out your copyright notice in the Description page of Project Settings.

#include "GameBeta1TestClass.h"
#include <iostream>

using namespace std;

// ALL LEVEL 1 Functions in header

void displayLVL1Sum(int a, int b) {
	cout << a << " + " << b << " = x\nWhat is the value of x?";
}

void displayLVL1Subtract(int a, int b){
	cout << a << " - " << b << " = x\nWhat is the value of x?";
}

void displayLVL1Multiply(int a, int b){
	cout << a << " * " << b << " = x\nWhat is the value of x?";
}
void displayLVL1Division(int a, int b){
	cout << a << " / " << b << " = x\nWhat is the value of x?";
}
int getLVL1Sum(int a, int b) {
	return a + b;
}

void displayLVL2Sum(int a, int b) {
	cout << a << " + x = " << b << "\nWhat is the value of x?";
}

void displayLVL2Subtract(int a, int b) {
	cout << a << " - x = " << b << "\nWhat is the value of x?";
}

void displayLVL2Multiply(int a, int b) {
	cout << a << " * x = " << b << "\nWhat is the value of x?";
}
void displayLVL2Division(int a, int b) {
	cout << a << " / x = " << b << "\nWhat is the value of x?";
}
int getLVL2Sum(int a, int b) {
	return a - b;
}

int getLVL2Subtract(int a, int b) {
	return a + b;
}

int getLVL2Multiply(int a, int b) {
	return a / b;
}
int getLVL2Division(int a, int b) {
	a * b;
}

//MAKING LVL2 Headers





int main(){
	int x;
	switch (x){
	case 1:
		displayLVL1Sum;
		break;
	case 2:
		displayLVL1Subtract;
		break;
	case 3:
		displayLVL1Multiply;
		break;
	case 4:
		displayLVL1Division;
		break;
	}
	int n;
	switch (n){
	case 1:
		displayLVL2Sum;
		break;
	case 2:
		displayLVL2Subtract;
		break;
	case 3:
		displayLVL2Multiply;
		break;
	case 4:
		displayLVL2Division;
		break;

	}

}










GameBeta1TestClass::GameBeta1TestClass()
{
	
}

GameBeta1TestClass::~GameBeta1TestClass()
{
}
