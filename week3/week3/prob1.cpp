#include <iostream>

class setValue {
public:
	int x, y;
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
};

int setValue::getX() {
	return x;
}

int setValue::getY() {
	return y;
}

void setValue::setX(int input) {
	x = input;
}

void setValue::setY(int input) {
	y = input;
}

int main(void) {
	setValue obj;
	obj.setX(33);
	obj.setY(44);

	std::cout << "X = " << obj.getX() << " , Y =" << obj.getY() << std::endl;
	system("pause");
	return 0;
}