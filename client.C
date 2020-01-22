/*
 * client.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */

#include <string>
#include <iostream>
#include <unistd.h> //contains various constants
#include <sstream>
#include <sys/time.h>
#include <fstream>

#include "SIMPLESOCKET.H"

using namespace std;

int main()
{
	srand(time(NULL));
	TCPclient c;
	string host = "localhost";
	string msg;

	//connect to host
	c.conn(host , 2021);

	int versuche; //Anzahl der Versuche
	string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	string tmp; //temporäre Variable zum Zwischenspeichern
	stringstream ss;
	int gebrauchtezeit;
	int alphal; //Alphabetlaenge
	int pwdl; //Passwortlaenge

	cout<<"Insert passwordlength:"<<endl;
	cin>>pwdl;
	cout<<"Insert alphabetlength:"<<endl;
	cin>>alphal;
}

int bruteforce(int length, string alphabet, int alphal, TCPclient connection, string TeildesPwd, int number, int c, bool &pwdfound)
{
	number++;
	string pwd;
	string antwort;

	for(int i=0; i<alphal; i++)
	{
		pwd=TeildesPwd + alphabet[i];
		connection.sendData(pwd);
		c++;
		antwort=connection.receive(26);

		if(antwort=="access accepted")
		{
			pwdfound=1;
			return c;
		}
		else
		{
			//c=bruteforce(int length, string alphabet, int alphal, TCPclient connection, string TeildesPwd, int number, int c, bool&pwdfound);
			if (pwdfound)
			{
				return c;
			}
		}
		sleep(0);

	}
	return c;
}

/*
	int i=0;
	bool goOn=1;
	while(goOn){ // send and receive data
		if((rand() % 20) < i++){
			msg = string("BYEBYE");
			goOn = 0;
		}else{
			msg = string("client wants this");
		}
		cout << "client sends:" << msg << endl;
		c.sendData(msg);
		msg = c.receive(32);
		cout << "got response:" << msg << endl;
		sleep(1);

	}
}
*/

