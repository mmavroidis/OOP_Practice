 #pragma once

#include <iostream>

enum Rank{
	Ace,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
};

enum Suit{
	Hearts,
	Diamonds,
	Clubs,
	Spades,
};


class Card {
public:

Card() = default; 

//Construct and initialize
Card(Rank r, Suit S)
	: bits((unsigned)s <<4 | (unsigned)r
{}

Card(const C){
	bits = C.bits;
}


Rank get_rank() const {
	return (Rank)(0b001111& bits);
}

Suit get_suit() const{
	return (Suit)(0b110000 & bits) >> 4);
}
bool operator==(Card c) const{
	return bits== c.bits;
}

bool operator!=(Card c) const{
	return bits != c.bits;
}

friend bool operator==(Card a, Card B)const{
	return a.bits == b.bits;
}
friend bool operator<=(Card a, Card B)const{
	if(a.get_rank() <= b.get_rank()
		return true;
	else
		return false;
}
friend bool operator>=(Card a, Card B)const{
	if(a.get_rank() >= b.get_rank())
		return true;
	else 
		return false;
}



private:
	unsigned char bits;
};


