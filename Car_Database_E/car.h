#pragma once
//car.h
#ifndef CAR_H
#define CAR_H

class Car
{
	private:
		int company;
		int model;
		int unique_id;
	public:
		//Car Constructor
		Car(int c, int m, int id);
		//Create Car
		void createCar(int c, int m, int id);
		//Print Company
		int getCompany();
		int getModel();
		int getID();
};

#endif