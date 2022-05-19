#pragma once
#include "Reservation.h"
#include "Feedback.h"
#define size 2
class Customer
{
private:
	int customerId;
	char name[20];
	char nic[12];
	char email[30];
	char address[50];
	int noOfRes;
	Reservation *res[size];
	Feedback *fdback[size];

public:
	Customer();
	Customer(int cid, const char cname[], const char cNic[], const char cEmail[], const char cAddress[], int nRes);
	void addReservation(Reservation*r);//As the multiplicity 0..*
	void displayCustomer();
	void displayCustomerName();
	void validate();
	~Customer();

};


Reservation.h
#pragma once
#include "Customer.h"
#include "Receipt.h"
#include "HotelHall.h"
class Reservation
{
private:
	char reservationId[10];
	Customer* customer;
	Receipt* Rec;
	HotelHall* hall[3];

public:
	Reservation();
	Reservation(const char rId[], Customer*cus, Receipt*rpt);
	double calTotal();//
	void displayReservation();
	void addHall(HotelHall*hall1, HotelHall* hall2, HotelHall* hall3);
	void displayReservationCustomer();
	void displayAvailability();
	~Reservation();

};
