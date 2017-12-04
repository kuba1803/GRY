//
// Created by kuba on 2017-12-04.
//

#ifndef LOCH_CZARNEGO_KLA_ITEM_H
#define LOCH_CZARNEGO_KLA_ITEM_H

#include <string>

class Item {
public:
    Item(const std::string &Name, int GP, int SP=0, int CP=0);
    std::string & getName();
private:
    std::string Name;
    int GP;
    int SP;
    int CP;
/*public:
    virtual void use()=0;*/
};


#endif //LOCH_CZARNEGO_KLA_ITEM_H
