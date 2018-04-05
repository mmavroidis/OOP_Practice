//Mavroidis Mavroidis 
#pragma once

#include <cassert>
#include <iosfwd>

enum Type {
	Standard,
	Joker,
};

enum Rank {
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

enum Suit {
	Spades,
	Clubs,
	Diamonds,
	Hearts,
};

enum Color {
	Red,
	Black,
};

class Card {
private:
	unsigned char bits;

public:
	
	Card() = default;

	//Default type is 0 for standard, 1 means joker. 
	Card(Type typ=0, Color col=0, Rank rnk, Suit st)
		: bits((unsigned)typ << 7 |	
			   (unsigned)col << 6 |	
			   (unsigned)st << 4 |	
			   (unsigned)rnk			
		);
	{ }

	
	Card(const Card& c) { this->bits = c.bits; }


	operator=(const Card& c) { this->bits = c.bits; }
	//Getters 
	Type getType() const { return (Type)((0b10000000 & bits) >> 7); }
	Color getColor() const { return (Color)((0b01000000 & bits) >> 6);
	Suit getSuit() const { return (Suit)((0b110000 & bits) >> 4); }
	Rank getRank() const { return (Rank)(0b001111 & bits); }

	friend std::ostream& operator<<(std::ostream& s, Card& c) {
		if (getType())
			s << "Standard Card: " << getRank() << ", Suit: " << getSuit() << "\n\";
		else s << "Joker Card: " << getColor() << "\n";
		return s;
	}
};
