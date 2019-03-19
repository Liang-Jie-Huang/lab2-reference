#include <string>
using namespace std;

class BMI {
public:
	BMI();
	BMI(int, int);

	void set_height(int);
	void set_weight(int);

	int get_height();
	int get_weight();

	double return_BMI();
	string return_status();

private:
	int _height;
	int _weight;
};
