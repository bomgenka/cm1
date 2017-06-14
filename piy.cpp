#include <iostream>
#include <string>

using namespace std;

class product{
protected:
	string name;
	int datai;
	int datax;
public:
	product(){
	name = "piy";
	datai = 0;
	datax = 50;
	}
	virtual void chack() {
    if (datai < datax)
	cout << "ploxo" << endl;
	else 
	cout << "noramlo" << endl;	
	}
};

class ovosh:public product{
public:
	int colich;
	void chack() {
	cout << "i tak soidet"<< endl;
	}
	friend ostream& operator << (ostream& out, ovosh& piy){
	cout << "Вот что есть. " << piy.name << " " << piy.datai << " " << piy.datax << " " << piy.colich << endl;
	}
	
	friend istream& operator >> (istream& in, ovosh& piy){
	cout << "Введите данные: название, срок годности, время хранения ( в днях) ";
	cin >> piy.name >> piy.datai >> piy.datax >> piy.colich;
	}
};
	
class napitoc:public product{
public:
	int V;
	void chack() {
	cout << "Vsegda normal"<< endl;
	}
	friend ostream& operator << (ostream& out, napitoc& piy){
	cout << "Вот что есть. " << piy.name << " " << piy.datai << " " << piy.datax << " " << piy.V << endl;
	}
	
	friend istream& operator >> (istream& in, napitoc& piy){
	cout << "Введите данные: название, срок годности, время хранения ( в днях) ";
	cin >> piy.name >> piy.datai >> piy.datax >> piy.V;
	}	
 
};
int main(){
napitoc p;
cin >> p;
cout << p;
p.chack();

ovosh i;
cin >> i;
cout << i;
i.chack();
return 0;
}


