#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include "ATarget.hpp"

class ASpell {
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(std::string const &name, std::string const &effects);
        std::string const   &getName() const;
        std::string const   &getEffects() const;
        virtual ASpell      *clone() const = 0;
        void                launch(ATarget const &obj) const;
        virtual ~ASpell();
};

#endif
