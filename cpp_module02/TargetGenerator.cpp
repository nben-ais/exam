#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget*obj) {
    if (obj)
        myMap.insert(std::make_pair(obj->getType(), obj));
}

void TargetGenerator::forgetTargetType(std::string const &type) {
    myMap.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const &type) {
    if (myMap.count(type))
        return myMap[type];
    else
        return NULL;
}

TargetGenerator::~TargetGenerator(){}
