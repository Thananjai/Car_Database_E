//car.cpp

#include <iostream>
#include "car.h"
using namespace std;

//Constructor
Car::Car(int c, int m, int id)
{
	createCar(c, m, id);
}

//Create Car
void Car::createCar(int c, int m, int id)
{
	company = c;
	model = m;
	unique_id = id;
}

//get company
int Car::getCompany()
{
	return company;
}

//get model
int Car::getModel()
{
	return model;
}

//get id
int Car::getID()
{
	return unique_id;
}