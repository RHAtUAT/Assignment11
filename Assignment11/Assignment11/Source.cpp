#include "Header.h"
#include "Initialization.cpp"


int main()
{
	People Jay; //Create instance of this class

	//Initialize values
	Jay.setName("Jay", "Manuel");
	Jay.setColor("Blue");
	Jay.setAge(14);

	cout << "Name: " << Jay.getName() << endl;
	cout << "Favorite Color: " << Jay.getColor() << endl;
	cout << "Age: " << Jay.getAge() << endl;

	system("pause");

	return 0;
}

