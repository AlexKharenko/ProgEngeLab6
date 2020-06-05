#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Figures
{
protected:
	double height;
	vector<double> sides;
	double square_triangle(double, double, double);
	double square(double, double, double, double);
public:
	Figures(double height, vector<double> sides) :height(height), sides(sides) {};
	Figures() {
		cout << "Input height:";
		cin >> height;
	};
	virtual double full_square() = 0;
	virtual double volume() = 0;
	virtual void input_sides() = 0;
};

class Piramide : public Figures
{
public:
	void input_sides();
	double full_square();
	double volume();
	Piramide(double, vector<double>);
	Piramide() :Figures() { input_sides(); };
};
class Prisma : public Figures
{
public:
	void input_sides();
	Prisma(double, vector<double>);
	Prisma();
	double full_square();
	double volume();
};

class Half_Piramide : public Figures
{
public:
	void input_sides();
	Half_Piramide(double, vector<double>);
	double full_square();
	double volume();
	Half_Piramide() :Figures() { input_sides(); };
};

