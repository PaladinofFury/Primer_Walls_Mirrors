/** @file bag_interface.h */
#ifndef BAG_INTERFACE_
#define BAG_INTERFACE_

#include <vector>

template<class ItemType>
class BagInterface
{
public:
	/** Gets the current number of entries in the bag
	@return	The integer number of entries currently in the bag. */
	virtual int getCurrentSize() const = 0;

	/** Sees whether this bag is empty.
	@return	True if the bag is empty, else false. */
	virtual bool isEmpty() const = 0;

	/** Adds a new entry to this bag.
	@post	If successful, newEntry is stored in the bag and
		the count of items in te bag has increased by 1.
	@param	newEntry	The object to be added as a new entry.
	@return	True if addition was successful, else false. */
	virtual bool add(const ItemType& newEntry) = 0;

	/** Removes one occurrence of a given entry from this bag,
		if possible.
	@post	If successful, anEntry has been removed from the bag
		and the count of items in the bag has decreased by 1.
	@param	anEntry		The entry to be removed. */
	virtual bool remove(const ItemType& anEntry) = 0;

	/** Removes all entries from this bag.
	@post	Bag contains no items, and the count of items is 0. */
	virtual void clear() = 0;

	/** Counts the number of times a given entry appreas in this bag.
	@param	anEntry	The entry to be counted.
	@return	The number of times anEntry appears in the bag. */
	virtual int getFrequencyOf(const ItemType& anEntry) const = 0;

	/** Tests whether this bag contains a given entry.
	@param	anEntry	The entry to locate.
	@return	True if the bag contains anEntry, else false. */
	virtual bool contains(const ItemType& anEntry) const = 0;

	/** Empties and then fills a given vector with all entries that
		are in this bag.
	@return	A vector containing copies of all the entries in this bag. */
	virtual std::vector<ItemType> toVector() const = 0;

	/** Destroys this bag and frees its assigned memory. (see C++ Interlude 2) */
	virtual ~BagInterface() {}
};	//	end BagInterface

#endif