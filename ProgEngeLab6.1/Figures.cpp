#include "Figures.h"

void Piramide::input_sides()
{
	cout << "Input sides:" << endl;
	sides.resize(6);
	for (int i = 0; i < 6; i++) {
		cin >> sides[i];
	}
}
double Piramide::full_square() {
	double s = 0;
	s += square_triangle(sides[0], sides[1], sides[2]);
	s += square_triangle(sides[1], sides[3], sides[4]);
	s += square_triangle(sides[2], sides[3], sides[5]);
	s += square_triangle(sides[0], sides[4], sides[5]);

	return s;
}
double Piramide::volume()
{
	return height * square_triangle(sides[0], sides[1], sides[2]) / 3;
}
Piramide::Piramide(double height, vector<double> sides) : Figures(height, sides) {
}

double Half_Piramide::full_square()
{
	double s = square_triangle(sides[0], sides[1], sides[2]);
	s += square_triangle(sides[3], sides[4], sides[5]);
	s += square(sides[0], sides[6], sides[3], sides[7]);
	s += square(sides[1], sides[7], sides[4], sides[8]);
	s += square(sides[2], sides[8], sides[5], sides[6]);
	return s;
}
double Half_Piramide::volume()
{
	double s1 = square_triangle(sides[0], sides[1], sides[2]);
	double s2 = square_triangle(sides[3], sides[4], sides[5]);
	return height * (s1 + s2 + sqrt(s1 * s2)) / 3;
}
void Half_Piramide::input_sides() {
	cout << "Input sides:" << endl;
	sides.resize(9);
	for (int i = 0; i < 9; i++) {
		cin >> sides[i];
	}
}
Half_Piramide::Half_Piramide(double height, vector<double> sides) : Figures(height, sides) {
}


double Prisma::full_square()
{
	double ans = 2 * square_triangle(sides[0], sides[1], sides[2]);
	for (int i = 0; i < 3; i++) {
		ans += square(sides[i], sides[3], sides[i], sides[3]);
	}
	return ans;
}
double Prisma::volume()
{
	return height * square_triangle(sides[0], sides[1], sides[2]);
}
void Prisma::input_sides() {
	cout << "Input sides:" << endl;
	sides.resize(4);
	for (int i = 0; i < 4; i++) {
		cin >> sides[i];
	}
}
Prisma::Prisma(double height, vector<double> sides) : Figures(height, sides) {
}
Prisma::Prisma() : Figures() { input_sides(); };


double Figures::square_triangle(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
double Figures::square(double a, double b, double c, double d)
{
	double p = (a + b + c + d) / 2;
	return sqrt((p - a) * (p - b) * (p - c) * (p - d));
}