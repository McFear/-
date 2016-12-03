#include <iostream>
#include <math.h>
using namespace std;
double kr(double R){
return 3.14*R*R;
}
double pr(double X,double Y){
return X*Y;
}
double tr(double a,double b,double c){
return sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
}
int main()
   
{
	setlocale(LC_ALL, "Russian");
    double a,b,c;
		int X,Y,R;
	cout<<"Введите a ";

	cin>>a;
	cout<<"Введите b ";
	cin>>b;
    cout<<"Введите c ";
	cin>>c;
	cout<<"Площадь треугольника "<<tr(a,b,c)<< endl;
	cout<<"Радиус ";
	cin>>R;
	cout<<"Площадь круга "<<kr(R)<< endl;
	cout<<"Введите X ";
	cin>>X;
    cout<<"Введите Y ";
	cin>>Y;
	cout<<"Площадь прямоугольника "<<pr(X,Y)<< endl;
		system("pause");
	return 0;
}