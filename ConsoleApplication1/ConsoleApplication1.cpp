// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "please enter the first number" << endl;
	cin >> a;
	cout << "please enter the second number" << endl;
	cin >> b;
	cout << "please enter the third number" << endl;
	cin >> c;
	// a'nın b ve c arasında olup olmadığını kontrol et
	//b....a....c ya da c....a.....b
	if (a<c && a>b || a<b && a>c) {
		cout << "a is the between b and c." << endl;
	}
	else {
		cout << "a is not the betwwen b and c." << endl;

	}
	// a'nın b'ye eşit aynı zamanda c'den küçük olup olmadığını kontrol et.
	if (a == b && a < c) {
		cout << "a is the equal to b and less than c." << endl;
	}
	else {
		cout << "a is not equal to b and not less than c." << endl;

	}
	//a'nın b'den veya c'den büyük olup olmadığını kontrol et.
	if (a > b || a > c) {
		cout << "a is bigger than b or c." << endl;

	}
	else {
		cout << "a is not bigger than b or c" << endl;
	}
	//üç sayının birbirine eşit olup olmadığını kontrol et.
	if (a == b && a == c) {
		cout << "this three numbers are equals to each others." << endl;

	}
	else {
		cout << "this three numbers are ot equals to each others." << endl;
	}
}

