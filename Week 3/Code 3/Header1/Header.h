 #include <iostream>
 using namespace std;

namespace myHeader{

class HeaderExample {
public:
	HeaderExample();
	int add(int x,int y);
	double add(double x, double y);
	float add(float x, float y);
	~HeaderExample();
	string getString(){
		cout<<"In Class"<<endl;
	}
};
}
