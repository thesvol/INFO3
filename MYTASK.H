/*
 * MYTASK.H
 *
 *  Created on: 04.12.2019
 *      Author: ubuntu
 */

#ifndef MYTASK_H_
#define MYTASK_H_

#include <string>
#include <iostream>
#include <arpa/inet.h>
#include "SIMPLESOCKET.H"
#include <stdio.h>
#include "TASK1.H"

using namespace TASK1;

class MyTCPserver: public TCPserver
{

	private:
	int nmb_;
	string pwd_;
	BlackBoxSafe *bb_;
	string myResponse (string input);

	public:
	~MyTCPserver();
	MyTCPserver(int port, int maxDataSizeRecv):TCPserver(port, maxDataSizeRecv)
	{
		bb_=new BlackBoxSafe(5,5);
		cout<<bb_->pwd_<<endl;
	};
};


#endif /* MYTASK_H_ */
