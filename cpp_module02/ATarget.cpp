#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string const &type) {
    this->type = type;
}

std::string const &ATarget::getType() const {
    return type;
}

void    ATarget::getHitBySpell(ASpell const &obj) const{
    std::cout << type << " has been " << obj.getEffects() << "!\n";
}

ATarget::~ATarget(){}
