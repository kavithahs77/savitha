/*
 * ComStack_Types.h
 *
 *  Created on: 11-Jun-2019
 *      Author: Admin
 */


#ifndef COMSTACK_TYPES_H_

#define COMSTACK_TYPES_H_

#include "ComStack_cfg.h"

#include "Std_Types.h"

typedef uint8 PduIdType ;

typedef uint8 PduLengthType;

typedef struct DATA

{

	uint8* SduDataPtr;

	PduLengthType SduLength;





	}

PduInfoType;



typedef uint8 PNCHandleType;

typedef enum

{

	TP_STMIN ,

	TP_BS,

	TP_BC,



}

TPParameterType ;

typedef enum

{

	BUFREQ_OK,

	BUFREQ_E_NOT_OK,

	BUFREQ_E_BUSY,

	BUFREQ_E_OVFL,





	}

BufReq_ReturnType ;





typedef enum

{

	TP_DATACONF ,

	TP_DATARETRY ,

	TP_CONFPENDING,

	}

TpDataStateType ;

typedef enum

{

	ICOM_SWITCH_E_OK,



}IcomSwitch_ErrorType;



#endif /* COMSTACK_TYPES_H_ */
