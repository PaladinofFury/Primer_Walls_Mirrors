/** @file PlainBox.h */

#ifndef PLAIN_BOX_
#define PLAIN_BOX_

// Set the type of data stored in the box
typedef double ItemType;
// Declaration for the class PlainBox
class PlainBox
{
private:
	ItemType item;

public:
	// default constructor
	PlainBox();

	// parameterized constructor
	PlainBox(const ItemType& theItem);

	// method to change the value of the data field
	void setItem(const ItemType& theItem);

	// method to get the value of the data field
	ItemType getItem() const;
};	// end PlainBox
#endif