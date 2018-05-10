/*
Unit.hpp
Mavroidis Mavroidis 
Create and handles the various units that are within vms 

*/

#pragma once

#include <iosfwd>
#include <algorithm>


class Unit
{
public:
	
	Unit(Player playr, UnitType t, int BTime, int Health, int Str, int Move, int Rang, int Capac)
		: player(playr), type(t), Build(BTime), HP(Health), Str(Str), Moves(Move), Rng(Rang), Cap(Capac)
	{}

	virtual bool SpecMoveAction(const SpecialMove cmd) = 0;

	Player getPlayer(){
		
		return player;
	}

	int getBuildTime(){
		
		return Build;
	}

	int getHP(){
		
		return HP;
	}

	int getStrength(){
		
		return Str;
	}

	int getMoves(){
		
		return Moves;
	}

	int getRange(){

		return Rng;
	}

	int getCapacity(){

		return Cap;
	}

	void setPlayer(const Player playr){

		this->player = playr;
	}

	void setBuildTime(const int BTime){
		
		this->Build = BTime;
	}

	void setHP(const int Health){

		this->HP = Health;
	}

	void setStrength(const int Str){

		this->Str = Str;
	}

	void setMoves(const int Move){

		this->Moves = Move;
	}

	void setRange(const int Rang){

		this->Rng = Rang;
	}

	void setCapacity(const int Capac){

		this->Cap = Capac;
	}

private:

	Player player;		
	UnitType type;	

	int Build;		
	int Str;		
	int HP;				
	int Moves;			
	int Rng;			
	int Cap;		

protected:

	bool Random();
	bool Sentry();
	bool Fill();
	bool Land();
	bool Explore();
	bool LoadArmy();
	bool armyAttk();
	bool Repair();
	bool WFTransport();
	bool Move(const UnitMove Dir);
};


class Army : public Unit
{
	Army(Player playr, std::pair<int, int> loc)
		: Unit(playr, ARMY, 5, 1, 1, 1, 0, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};


class Fighter : public Unit
{
	Fighter(Player playr, std::pair<int, int> loc)
		: Unit(playr, FIGHTER, 10, 1, 1, 8, 32, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};


class Patrol : public Unit
{
	Patrol(Player playr, std::pair<int, int> loc)
		: Unit(playr, PATROL, 15, 1, 1, 4, 0, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};

class Destroyer : public Unit
{
	Destroyer(Player playr, std::pair<int, int> loc)
		: Unit(playr, DESTROYER, 20, 1, 3, 2, 0, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};

class Submarine : public Unit
{
	Submarine(Player playr, std::pair<int, int> loc)
		: Unit(playr, SUBMARINE, 20, 3, 2, 2, 0, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};

class Transport : public Unit
{
	Transport(Player playr, std::pair<int, int> loc)
		: Unit(playr, TRANSPORT, 30, 1, 1, 2, 0, 6), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};

class Carrier : public Unit
{
	Carrier(Player playr, std::pair<int, int> loc)
		: Unit(playr, CARRIER, 30, 1, 8, 2, 0, 8), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};


class Battleship : public Unit
{
	Battleship(Player playr, std::pair<int, int> loc)
		: Unit(playr, BATTLESHIP, 40, 2, 10, 2, 0, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;

	std::pair<int, int> loc;
};

class Satellite : public Unit
{
	Satellite(Player playr, std::pair<int, int> loc)
		: Unit(playr, SATELLITE, 50, 0, 1, 10, 500, 0), loc(loc)
	{}

	bool SpecMoveAction(const SpecialMove cmd) override;


	std::pair<int, int> loc;
};

enum Player{
	
	Unknown,
	User,
	Comp
};

enum UnitType{
	
	ARMY,
	FIGHTER,
	PATROL,
	DESTROYER,
	SUBMARINE,
	TRANSPORT,
	CARRIER,
	BATTLESHIP,
	SATELLITE,
	NUMOBJECTS,
	NOPIECE
};

enum UnitMove{
	
	NORTH,
	NORTHEAST,
	EAST,
	SOUTHEAST,
	SOUTH,
	SOUTHWEST,
	WEST,
	NORTHWEST
};


enum SpecialMove{
	
	NOFUNC,
	RANDOM,
	SENTRY,
	FILL,
	LAND,
	EXPLORE,
	LoadArmy,
	armyAttk,
	TTLOAD,
	REPAIR,
	WFTRANSPORT,
	MOVE_N,
	MOVE_NE,
	MOVE_E,
	MOVE_SE,
	MOVE_S,
	MOVE_SW,
	MOVE_W,
	MOVE_NW
};

enum SpecMoveAction{
	
	Attack,
	Sleep,
	Wait,
	Delete,
};







