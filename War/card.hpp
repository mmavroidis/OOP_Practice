/*Mavroidis Mavroidis 
1/25/2018
Practice
Card.hpp
*/
#pragma once

//Enumeration for Rank and Suit
enum Rank
{
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
	King
};

enum Suit
{
	Hearts,
	Diamonds,
	Clubs,
	Spades
};


class Card 
{
	Card(Rank r, Suit s) :rank(r), suit(s){}

	private:
	Rank rank;
	Suit suit;
};
