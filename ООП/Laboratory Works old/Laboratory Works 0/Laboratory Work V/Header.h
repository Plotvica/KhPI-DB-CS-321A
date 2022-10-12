#include <iostream>
#include <ctime>



using namespace std;


void inputCheker();

class SUMM {
private:
	float x, y, s = 0;
public:
	void set(const float&x0, const float&y0);
	void print() const;
	void summa();
	SUMM(const float& x0 = 0, const float& y0 = 0);

	
};


