//Mavroidis Mavroidis
#pragma once

#include <cassert>
#include <iosfwd>
#include <vector>


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
	int id;

public:
	
	Card(int n): id(n){ }

	virtual ~Card() = default;
	
	virtual Card* clone() = 0;
	int getID() const {
	 return id;
	 }
};


class StandardCard : public Card {
private:
	
	Rank rank;
	Suit suit;

public:
	
	StandardCard(int n, Rank r, Suit s): Card(n), rank(r), suit(s){ }	  

	Card* clone() override {
		 return new StandardCard(*this);
	 }
	
	//Getters 
	Rank getRank() const { 
		return rank;
	 }
	Suit getSuit() const {
		 return suit;
	 }
};


class JokerCard : public Card {
private:

	Color color;

public:
	
	JokerCard(int n, Color c): Card(n), color(c){ }

	Card* clone() override {
		 return new JokerCard(*this);
	 }
	
	// Getter
	Color getColor() const {
		 return color;
	 }
};

class Deck : std::vector<Card*> {
public:
	
	Deck(std::initializer_list<Card*> list): std::vector<Card*>(list){ }


	Deck(const Deck& d) {
		for (Card* c : d)
			push_back(c->clone());
	}

	~Deck() {
		for (Card* c : *this)
			delete c;
	}
};
