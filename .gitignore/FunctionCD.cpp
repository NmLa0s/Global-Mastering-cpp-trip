#include <iostream>
using std::cout;
using std::endl;
bool boolean_f(int x, int y){
	return (x == y);}
void bf_check(){
	cout << "Enter an Integer: ";
	int x, y;
	std::cin >> x;
	cout << "Enter another Integer: ";
	std::cin >> y;
	cout << std::boolalpha;
	/*cout << x << " and " << y << " are equal?: ";
	cout << boolean_f(x, y) << "\n";*/
	if (boolean_f(x, y)) { cout<<"true"<<"\n"; }
	else { cout<<"false"<<"\n"; }}
int main(){
	cout << "int:\t" << sizeof(int) << " Bytes" <<endl;
	cout << "bool:\t" << sizeof(bool) << " Bytes" <<endl;
	cout << "float:\t" << sizeof(float) << " Bytes" <<endl;
	cout << "short:\t" << sizeof(short) << " Bytes" <<endl;
	cout << std::boolalpha;
  //cout<< "IsBool:\t" << "   " << true << "\n";
	bool b1 = 10, b2 = 0;
	cout << "b1_Val:\t" << b1 << "\n";
	cout << "b2_Val:\t" << b2 << "\n";
	bf_check();
	system("pause");
	return 0;}
