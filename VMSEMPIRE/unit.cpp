/*
Unit.cpp
Mavroidis Mavroidis 

Class for various units

*/

#include "unit.hpp"
#include <cassert>
#include <iostream>


bool Army::SpecMoveAction(const SpecialMove cmd) {
	switch (cmd){

	case NOFUNC: {
		break;
	}
	case armyAttk: {
		std::cout << "Army Attack" << std::endl;
		break;
	}

	case EXPLORE: {
		std::cout << "Explore" << std::endl;
		break;
	}

	case SENTRY: {
		std::cout << "Sentry" << std::endl;
		break;
	}

	case FILL: {
		std::cout << "Invalid" << std::endl;
		break;
	}

	case LAND: {
		std::cout << "Invalid" << std::endl;
		break;
	}

	case REPAIR: {
		std::cout << "Repair" << std::endl;
		break;
	}

	case RANDOM: {
		std::cout << "Random" << std::endl;
		break;
	}

	case LoadArmy: {
		std::cout << "Army Load" << std::endl;
		break;
	}

	case WFTRANSPORT: {
		std::cout << "WF Transport" << std::endl;
		break;
	}
	case MOVE_N: {
		std::cout << "Move N" << std::endl;
		break;
	}
	case MOVE_NE: {
		std::cout << "Move NE" << std::endl;
		break;
	}
	case MOVE_E: {
		std::cout << "Move E" << std::endl;
		break;
	}
	case MOVE_SE: {
		std::cout << "Move SE" << std::endl;
		break;
	}
	case MOVE_S: {
		std::cout << "Move S" << std::endl;
		break;
	}
	case MOVE_SW: {
		std::cout << "Move SW" << std::endl;
		break;
	}
	case MOVE_W: {
		std::cout << "Move W" << std::endl;
		break;
	}
	case MOVE_NW: {
		std::cout << "Move NW" << std::endl;
		break;
	}
	default: {
		std::cout << "Error unknown cmd" << std::endl;
		break;
	}
	};
}
bool Unit::Land() {

}

bool Unit::Random(){

}

bool Unit::Sentry(){

}

bool Unit::Explore(){

}

bool Unit::Repair(){

}

bool Unit::WFTransport(){

}

bool Unit::Move(const UnitMove D){

}

bool Unit::LoadArmy() {
	assert(this->type == ARMY);
}

bool Unit::armyAttk() {
	assert(this->type == ARMY);
}

bool Fighter::SpecMoveAction(const SpecialMove cmd){

}

bool Submarine::SpecMoveAction(const SpecialMove cmd) {

}

bool Patrol::SpecMoveAction(const SpecialMove cmd){
	
}

bool Destroyer::SpecMoveAction(const SpecialMove cmd){

}

bool Transport::SpecMoveAction(const SpecialMove cmd){

}

bool Carrier::SpecMoveAction(const SpecialMove cmd){

}

bool Satellite::SpecMoveAction(const SpecialMove cmd) {

}
bool Battleship::SpecMoveAction(const SpecialMove cmd){

}
