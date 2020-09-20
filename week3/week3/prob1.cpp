#include <iostream>

class setValue {
public:
	int x, y;
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	void printXY(int x, int y);
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

void setValue::printXY(int x, int y) {
	std::cout << "X = " << x << " , Y =" << y << std::endl;
}

int main(void) {
	setValue obj;
	obj.setX(33);
	obj.setY(44);

	obj.printXY(obj.getX, obj.getY);
	system("pause");
	return 0;
}