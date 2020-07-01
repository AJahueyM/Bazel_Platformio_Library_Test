
#include "test-library.h"

Test::Test(){

}

int Test::sum(int a, int b){
	int res = a + b;
	sumation += res;
	return res;
}

int Test::getSumation(){
	return sumation;
}
