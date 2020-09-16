
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//declared functions
void imperialDimensions(int&, int&, int&);
void metricDimensions(int&, int&, int&);

//declared variables


int main ()
{
	string unit;
	int h = 0, w = 0, l = 0;
	cout << "Metric or Imperial? " << endl;
	cin >> unit;
	
	if (unit == "Imperial" || unit == "imperial") 
	{	
		imperialDimensions(h, w, l);
		int surfaceArea = h * w * l;
		printf("The surface area is %d square inches.", surfaceArea);
	}
	else if (unit == "Metric" || unit == "metric")
	{
		metricDimensions(h, w, l);
		int surfaceArea = h * w * l;
		surfaceArea = surfaceArea * 0.15500031000062;
		printf("The surface area is %d square inches.", surfaceArea);
	}
	

   
   
  
  
   return 0;
}

void imperialDimensions(int &h, int &w, int &l)
{
	int inches;
	int feet;
	
	//height
	cout << "Height " << endl << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;
	int a = feet * 12;
	h = a + inches;
	//cout << h << endl;

	//width
	cout << "Width " << endl << "Feet: ";
	cin >> feet;
	cout <<  "Inches: ";
	cin >> inches;
	a = feet * 12;
	w = a + inches;
	//cout << w << endl;

	//Length
	cout << "Length " << endl << "Feet: ";
	cin >> feet;
	cout <<  "Inches: ";
	cin >> inches;
	a = feet * 12;
	l = a + inches;
	//cout << l << endl;

}

void metricDimensions(int &h, int &w, int &l)
{
	int centimeters;
	int meters;

	//height
	cout << "Height " << endl << "Meters: ";
	cin >> meters;
	cout << "Centimeters: ";
	cin >> centimeters;
	int a = meters * 100;
	h = a + centimeters;
	//cout << h << endl;

	//width
	cout << "Width " << endl << "Meters: ";
	cin >> meters;
	cout << "Centimeters: ";
	cin >> centimeters;
	a = meters * 100;
	w = a + centimeters;
	//cout << w << endl;

	//Length
	cout << "Length " << endl << "Meters: ";
	cin >> meters;
	cout << "Centimeters: ";
	cin >> centimeters;
	a = meters * 100;
	l = a + centimeters;
	//cout << l << endl;

}


