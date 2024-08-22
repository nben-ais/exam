#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) {
    this->name = name;
    this->title = title;
    std::cout << name << ": This looks like another boring day.\n";
}

std::string const &Warlock::getName() const {
    return name;
}

std::string const &Warlock::getTitle() const {
    return title;
}

void    Warlock::setTitle(std::string const &title) {
    this->title = title;
}

void    Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void    Warlock::learnSpell(ASpell *obj) {
    sbook.learnSpell(obj);
}

void    Warlock::forgetSpell(std::string name) {
    sbook.forgetSpell(name);
}

void    Warlock::launchSpell(std::string name, ATarget const &target) {
    if (sbook.createSpell(name))
        sbook.createSpell(name)->launch(target);
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
}
