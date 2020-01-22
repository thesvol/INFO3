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
#include <string>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <cerrno>
#include <ctime>
#include "MYTASK.H"
#include "TASK3.H"
#include "TASK1.H"

using namespace std;
using namespace TASK1;

string MyTCPserver::myResponse(string input)
{
	int l, alphal;
	if(input[0]=='#')
	{
		sscanf(input.c_str(),"#%d#%d##",&l,&alphal);
		stringstream number;
		number <<"#"<<l<<"#"<<alphal<<"##";
		delete bb_;
		bb_ =new BlackBoxSafe(l,alphal);
		sleep(0);
		return number.str();
	}
	sleep(0);
	return bb_->input(input);
}

MyTCPserver::~MyTCPserver()
{

}

/*Versuch1:
string MyTCPserver::myResponse(string input){
	stringstream ss;
	int x,y;

	if (input.compare(0,3, "PW[")==0){
		return string ("incoming pw");
	}
	else if (input.compare (0,5, "NEWPW")==0){
		return string("Neues Passwort wird generiert");

	}
	return ss.str();
};
*/

//following code provided by Mr Hülse:
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
