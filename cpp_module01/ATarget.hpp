#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget {
    protected:
        std::string type;
    public:
        ATarget(std::string const &type);
        std::string const   &getType() const;
        virtual ATarget     *clone() const = 0;
        void                getHitBySpell(ASpell const &obj) const;
        virtual ~ATarget();
};

#endif