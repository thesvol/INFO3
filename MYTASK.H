/*
 * MYTASK.H
 *
 *  Created on: 04.12.2019
 *      Author: ubuntu
 */

#ifndef MYTASK_H_
#define MYTASK_H_

#include <iostream>
#include <arpa/inet.h>
#include "SIMPLESOCKET.H"
#include <stdio.h>
#include "TASK1.H"


class MyTCPserver: public TCPserver{
public:
	~MyTCPserver();
	MyTCPserver(int port, int maxDataSizeRecv):
		TCPserver(port, maxDataSizeRecv){
		bb_=new BlackBoxSafe(5,5);
		cout<<bb_->pwd_<<endl;
	}
protected:
	int nmb_;
	string pwd_;
	BlackBoxSafe *bb_;
	virtual string myResponse (string input);
};



#endif /* MYTASK_H_ */
