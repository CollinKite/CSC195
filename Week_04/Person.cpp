#include "Person.h"
#include <string.h>

Person::Person() {
	memset(this->name, '\0', sizeof(this->name));
}