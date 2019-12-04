/*
 * MYTASK.C
 *
 *  Created on: 04.12.2019
 *      Author: ubuntu
 */
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include "MYTASK.H"
#include "TASK3.H"
#include "TASK1.H"

/*string MyTCPserver::myResponse(string input){
	std::stringstream ss;
	int x,y;
	TASK3::ShootResult result;

	if(input.compare(0,6,"COORD[")== 0){
		if (2!=sscanf(input.c_str(),"COORD[%d,%d]",&x,&y)){
	}
		if( (x<1)||(y<1)||(x>10)||(y>10)){
			return string("RES[-2]");
		}

		result = (TASK3::ShootResult) (rand()%6);
		ss<<"RES["<<result<<"]";
		return ss.str();
};
	if(input.compare(0,7,"NEWGAME")==0){
		return string ("OK");
	};
	return string("UNKNOWN COMMAND");
}*/

string MyTCPserver::myResponse(string input){
	std::stringstream ss;
	int x,y;

	if (input.compare(0,3, "PW[")==0){
		return string ("incoming pw");
	}
	else if (input.compare (0,5, "NEWPW")==0){
		return string("Neues Passwort wird generiert");

	}
	return ss.str();
};


/*string MyTCPserver::myResponse(string input){
	std::stringstream ss;
	int x,y;
	TASK1::BlackBoxUnsafe result;

	if(input.compare(strPWD){
		if (2!=sscanf(input.c_str(),"pwd[%d,%d]",&x,&y)){
	}
		if( (x<1)||(y<1)||(x>10)||(y>10)){
			return string("RES[-2]");
		}

		result = (TASK1::BlackBoxUnsafe) (rand()%6);
		ss<<"RES["<<result<<"]";
		return ss.str();
};
	if(input.compare(0,7,"NEWGAME")==0){
		return string ("OK");
	};
	return string("UNKNOWN COMMAND");
}*/
