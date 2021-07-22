/*
 * SAE_J1939_Enum_NAME.h
 *
 *  Created on: 15 juli 2021
 *      Author: Daniel Mårtenssons
 */

#ifndef SAE_J1939_ENUMS_SAE_J1939_ENUM_NAME_H_
#define SAE_J1939_ENUMS_SAE_J1939_ENUM_NAME_H_

typedef enum {
	/* Manufacturer code */
	MANUFACTURER_CODE_SONCEBOZ = 0x147,
	MANUFACTURER_CODE_GRAYHILL = 0x126,
	/* Industry group */
	INDUSTRY_GROUP_GLOBAL = 0x0,
	INDUSTRY_GROUP_ON_HIGHWAY = 0x1,
	INDUSTRY_GROUP_AGRICULTURAL_AND_FORESTRY = 0x2,
	INDUSTRY_GROUP_CONSTRUCTION = 0x3,
	INDUSTRY_GROUP_MARINE = 0x4,
	INDUSTRY_GROUP_INDUSTRIAL_CONTROL_PROCESS = 0x5,
	INDUSTRY_GROUP_RESERVED_6 = 0x6,
	INDUSTRY_GROUP_RESERVED_7 = 0x7,
	/* Function */
	FUNCTION_AUXILIARY_VALVES_CONTROL= 0x81,
	FUNCTION_VDC_MODULE = 0x87,
	ARBITRARY_ADDRESS_CAPABLE_NOT_CAPABLE = 0x0,
	ARBITRARY_ADDRESS_CAPABLE_CAPABLE = 0x1
	/* Add more here */
}ENUM_NAME_CODES;

#endif /* SAE_J1939_ENUMS_SAE_J1939_ENUM_NAME_H_ */