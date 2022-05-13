#include<iostream>
using namespace std;



class hayvan{
private:
	string renk;
public:
	hayvan(string renk):renk(renk){}

	hayvan(){}
};





class kedi:public hayvan{
private:
	bool meow;
public:
	bool getmeow(){
		return meow;
	}
	kedi(string renk,bool meow):hayvan(renk),meow(meow){}//	BURAYA DİKKAT!!!!!!!!!!!!!!!!!!!
	

};

int main(int argc, char const *argv[])
{
	
	return 0;
}






