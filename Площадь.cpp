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
	cout<<"������� a ";

	cin>>a;
	cout<<"������� b ";
	cin>>b;
    cout<<"������� c ";
	cin>>c;
	cout<<"������� ������������ "<<tr(a,b,c)<< endl;
	cout<<"������ ";
	cin>>R;
	cout<<"������� ����� "<<kr(R)<< endl;
	cout<<"������� X ";
	cin>>X;
    cout<<"������� Y ";
	cin>>Y;
	cout<<"������� �������������� "<<pr(X,Y)<< endl;
		system("pause");
	return 0;
}