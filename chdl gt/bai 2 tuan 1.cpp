#include <bits/stdc++.h>

using namespace std;

struct point{
	double x;
	double y;
};



void input (point &s){
	cin >> s.x;
	cin >> s.y;
}

point intersection(point a , point b , point c , point d , int *check){
	point inter;
	double a1 = b.y - a.y;
	double b1 = a.x - b.x;
	double c1 = a1*(a.x) + b1*(a.y);
	
	double a2 = d.y - c.y;
	double b2 = c.x - d.x;
	double c2 = a2*(c.x) + b2*(c.y);
	
	double determinant = a1*b2 - a2*b1;
	
	if (determinant == 0){
		*check == 0;
	}
	else {
		double x = (b2*c1 - b1*c2)/determinant;
		double y = (a1*c2 - a2*c1)/determinant;
		inter.x = x;
		inter.y = y;
		return inter;
		*check == 1;
	}
}

int main(){
	point a , b , c , d;
	input(a); input (b); input(c); input(d);
	point intersect;
	int check;
	intersect = intersection(a , b , c , d , &check);
	if(check == 1){
		cout << intersect.x << intersect.y;
	}
	else if (b.x - a.x == d.x - c.x && b.y - a.y == d.y - c.y)
	{
		cout << "No";
	}
	else 
	{
		cout << "Many";
	}
	return 0;
}
