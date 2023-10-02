#include<stdlib.h>

int customersId;
int bookingId;

void updateMetaData();

typedef struct RoomTypeS RoomType;
typedef struct CustomerDetails CustomerDetail;
typedef struct BookingDetails BookingDetail;
typedef struct CheckInOutDetails CheckInOutDetail;
typedef struct RoomDetails RoomDetail;
typedef struct BillBookDetails BillBookDetail;

struct RoomTypeS
{
	int fare;
	char *type;
};

// ALL STRUCTS FOR GETTING INPUT & STORE IN FILES
struct CustomerDetails // STRUCTURE DECLARATION
{
	int customer_id;
	char *firstName, *lastName, *address;
};

struct BookingDetails // STRUCTURE DECLARATION
{
	int booking_id, customer_id, no_of_person, room_id;
	char *booking_date, *stay_start_date, *stay_end_date;
};

struct CheckInOutDetails // STRUCTURE DECLARATION
{
	int id;
	char *status;
};

struct RoomDetails // STRUCTURE DECLARATION
{
	int room_no, floor_no, isAc, extra_bed;
	char *room_type, *description;
};

struct BillBookDetails // STRUCTURE DECLARATION
{
	int id, no_of_days;
	float total_bill;
	char *customer_name;
};

// constructor for RoomType struct
RoomType *Object_new(int fare, char *type)
{
	RoomType *p = malloc(sizeof(RoomType));
	p->fare = fare;
	p->type = type;
	return p;
}

// constructor for CustomerDetail struct
CustomerDetail *Object_new_customer(char *firstName, char *lastName, char *address)
{
	CustomerDetail *p = malloc(sizeof(CustomerDetail));
	p->customer_id = customersId + 1;
	p->firstName = firstName;
	p->lastName = lastName;
	p->address = address;

	customersId++;
	updateMetaData();

	return p;
}

// constructor for BookingDetail struct
BookingDetail *Object_new_booking(int customer_id, int no_of_person,int room_id, char *booking_date, char *stay_start_date, char *stay_end_date)
{
	BookingDetail *p = malloc(sizeof(BookingDetail));
	p->booking_id = bookingId + 1;
	p->customer_id = customer_id;
	p->room_id = room_id;
	p->no_of_person = no_of_person;
	p->booking_date = booking_date;
	p->stay_start_date = stay_start_date;
	p->stay_end_date = stay_end_date;

	bookingId++;
	updateMetaData();

	return p;
}

// constructor for CheckInOutDetail struct
CheckInOutDetail *Object_new_check(int id, char *status)
{
	CheckInOutDetail *p = malloc(sizeof(CheckInOutDetail));
	p->id = id;
	p->status = status;
	return p;
}

// constructor for RoomDetail struct
RoomDetail *Object_new_room(int room_no, int floor_no, int isAc, int extra_bed, char *room_type, char *description)
{
	RoomDetail *p = malloc(sizeof(RoomDetail));
	p->room_no = room_no;
	p->floor_no = floor_no;
	p->isAc = isAc;
	p->extra_bed = extra_bed;
	p->room_type = room_type;
	p->description = description;
	return p;
}

// constructor for BillBookDetail struct
BillBookDetail *Object_new_bill(int id, int no_of_days, float total_bill, char *customer_name)
{
	BillBookDetail *p = malloc(sizeof(BillBookDetail));
	p->id = id;
	p->no_of_days = no_of_days;
	p->total_bill = total_bill;
	p->customer_name = customer_name;
	return p;
}
