
#include "Test-Library.h"

Test::Test(){

}

int Test::add(int a, int b){
	int res = a + b;
	sumation += res;
	return res;
}

int Test::getSumation(){
	return sumation;
}
