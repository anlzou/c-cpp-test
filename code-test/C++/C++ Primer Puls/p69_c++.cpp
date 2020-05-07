#include<iostream> 
#include<iomanip>
using std::setprecision;
using std::fixed;
using std::scientific;
using std::cout;
using std::endl;

int main(){
	float value1 = 0.1f;
	float value2 = 2.1f;
	value1 -= 0.09f;
	value2 -= 2.09f;
	cout<<setprecision(14)<<fixed;
	cout<<value1-value2<<endl;
	
	cout<<setprecision(5)<<scientific;
	cout<<value1-value2<<endl;
	return 0;
}
