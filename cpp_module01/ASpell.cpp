#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) {
    this->name = name;
    this->effects = effects;
}
std::string const   &ASpell::getName() const{
    return name;
}
std::string const   &ASpell::getEffects() const{
    return effects;
}

void    ASpell::launch(ATarget const &obj) const{
    obj.getHitBySpell(*this);
}

ASpell::~ASpell() {
    
}