#include <cstring>

class String{
	public:
	String(const char* s): len(std::strlen(s), str(new char[len]){
	
	std::strncpy(str, s, len);
	
	}
	
	String(const String& s ): str(s.str), len(s.len){}

	~String(){

	delete[] str;	

	}
	
	bool operator==(const string& s1, const string& s2){
	
	return strcmp(s1.str, s2.str)
	
	}

	bool operator=(const string& s1, const string& s2){
	
	String

	}
	
	
	int len;
	char* str;
};


int main(){

	//default construct
	string s0;
	
	//Construct and assign from a literal value
	string s1 = "hello";
	s1 ="foo";

	//Copy construct and assign
	string s2 = s1;
	s2 == s1; //s2 ==s1

	s1 ==s1;

	//Order
	s1<s1; 
	
	//object independence
	s2 = "bar";


}




