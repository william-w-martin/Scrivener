/*
 * AttributeModifier.h
 *
 *  Created on: Nov 29, 2016
 *      Author: jinieren
 */

#ifndef SRC_ATTRIBUTEMODIFIER_H_
#define SRC_ATTRIBUTEMODIFIER_H_

#include "Attribute.h"
#include <string>

class AttributeModifier {
	Attribute modifiedAttribute;
	int value;

public:
	AttributeModifier(Attribute,int);

	int getValue();
};

#endif /* SRC_ATTRIBUTEMODIFIER_H_ */
