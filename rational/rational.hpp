/*
Rational.hpp
Mavroidis Mavroidis
*/
#include <cmath>
#include<iosfwd>

class rational{


	public:

	int gcd(int x, int y){
		if(y ==0){return x;}
		else{ gcd(y,x%y);}
		}
	// Constructor with check for division by 0 
	rational(int numer, int denom)
		:n(numer/gcd(numer,denom), d(denom/gcd(numer,denom){
		if (d == 0)
		throw std::logic_error("Can not have a 0 in the denominator");
	}
	
	bool operator==(const rational& L, const rational& r){
		if((L.n*r.d) == (L.d*r.n))
			return true;
		else return false;
	}
	bool operator!=(const rational& L, const rational& r){
		return!(L==r);
	}
	
	bool operator<(const rational& L, const rational& r){
		if((L.n*r.d)<(L.d*r.n))
			return true;
		else return false;
	}
	bool operator>(const rational& L, const rational& r){
		return (r<L);
	}
	bool operator<=(const rational& L, const rational& r){
		return !(L>r);
	}
	bool operator>=(const rational& L, const rational& r){
		return !(L<r);
	}
	rational& operator+(const rational& L, const rational& r){
		rational rat;
		
		if(l.d==r.d){
			rat.n= L.n+r.n;
			rat.d= l.d;
		}
		else{
			rat.n= (L.n*r.d)+(r.n*L.d);
			rat.d= L.d*r.d;
		}
		return rat;
}
	rational& operator-(const rational& L, const rational& r){}
	rational& operator*(const rational& L, const rational& r){}
	rational& operator/(const rational& L, const rational& r){}
	
	std::istream& operator>>(std::istream& stream, const rational& inp){}
	std::ostream& operator<<(std::ostream& stream, const rational& outp){}


	private: 
	int n,d;
}
