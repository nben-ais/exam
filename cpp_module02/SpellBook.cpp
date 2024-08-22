#include "SpellBook.hpp"

SpellBook::SpellBook() {}

void    SpellBook::learnSpell(ASpell *obj){
    if (obj)
        myMap.insert(std::make_pair(obj->getName(), obj));
}

void SpellBook::forgetSpell(std::string const &name){
        myMap.erase(name);
}

ASpell* SpellBook::createSpell(std::string const &name) {
    if (myMap.count(name))
        return myMap[name];
    else
        return NULL;
}

SpellBook::~SpellBook(){}
