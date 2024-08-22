#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook {
    private:
        SpellBook(SpellBook const &obj);
        SpellBook const&operator=(SpellBook const &obj);
        std::map<std::string, ASpell *> myMap;

    public:
        SpellBook();
        void learnSpell(ASpell *obj);
        void forgetSpell(std::string const &obj);
        ASpell* createSpell(std::string const &name);
        ~SpellBook();
};

#endif