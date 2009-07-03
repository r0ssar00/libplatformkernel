/*
 *  libtagkernel.cp
 *  libtagkernel
 *
 *  Created by Kevin Ross on 03/07/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
#include "libtagkernel.h"
#include "libtagkernelPriv.h"

void libtagkernel::HelloWorld(const char * s)
{
	 libtagkernelPriv *theObj = new libtagkernelPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void libtagkernelPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

