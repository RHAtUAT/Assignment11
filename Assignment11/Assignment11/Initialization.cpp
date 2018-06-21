#include "Header.h"

class People
{
public:

	void setName(string, string);
	string getName();

	void setColor(string);
	string getColor();

	void setAge(int);
	int getAge();

private:

	string firstName;
	string lastName;
	string favColor;
	int personAge;

};

void People::setName(string nameFirst, string nameLast)
{
	firstName = nameFirst;
	lastName = nameLast;
}

string People::getName()
{
	return firstName + " " + lastName;
}

void People::setColor(string color)
{
	favColor = color;
}
string People::getColor()
{
	return favColor;
}

void People::setAge(int age)
{
	personAge = age;
}
int People::getAge()
{
	return personAge;
}