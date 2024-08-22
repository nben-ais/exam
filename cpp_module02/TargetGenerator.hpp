#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ASpell.hpp"
#include <map>

class TargetGenerator {
    private:
        TargetGenerator(TargetGenerator const &obj);
        TargetGenerator const&operator=(TargetGenerator const &obj);
        std::map<std::string, ATarget*> myMap;

    public:
        TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
        ~TargetGenerator();
};

#endif