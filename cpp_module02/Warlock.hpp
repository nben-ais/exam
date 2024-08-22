#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"


class Warlock {
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const &);
        Warlock &operator=(Warlock const &);
        SpellBook   sbook;
    public:
        Warlock(std::string const &name, std::string const &title);
        std::string const &getName() const;
        std::string const &getTitle() const;
        void    setTitle(std::string const &title);
        void    introduce() const;
        void    learnSpell(ASpell *obj);
        void    forgetSpell(std::string name);
        void    launchSpell(std::string name, ATarget const &target);
        ~Warlock();
};

#endif