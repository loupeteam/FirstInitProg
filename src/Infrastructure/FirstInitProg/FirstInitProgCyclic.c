/********************************************************************
 * COPYRIGHT --  
 ********************************************************************
 * Program: FirstInitProg
 * File: FirstInitProgCyclic.c
 * Author: ScismD
 * Created: January 07, 2014
 ********************************************************************
 * Implementation of program FirstInitProg
 ********************************************************************/

#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif


void _CYCLIC FirstInitProgCyclic(void)
{
	// Set our cyclic bit to true once FirstInit cyclic runs
	// This is to tell the init routine if the cyclic has ran
	gTransfer.cyclic = 1;
	
	// DO NOT ADD ANY "OTHER" CYCLIC CODE HERE! //
	if( strcmp(_buildDate, buildDate) != 0 ){
		gTransfer.transfer = 1;
	}
}
