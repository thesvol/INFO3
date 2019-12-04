/*
 * MYTASK.H
 *
 *  Created on: 04.12.2019
 *      Author: ubuntu
 */

#ifndef MYTASK_H_
#define MYTASK_H_


#include "SIMPLESOCKET.H"

class MyTCPserver: public TCPserver{
public:
	MyTCPserver(int port, int maxDataSizeRecv):
		TCPserver(port, maxDataSizeRecv){
		;;
	}
protected:
	virtual string myResponse (string input);
};



#endif /* MYTASK_H_ */
