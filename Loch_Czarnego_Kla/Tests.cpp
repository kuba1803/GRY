//
// Created by kuba on 2017-12-05.
//

#include "Tests.h"

int Tests::roll(int m, int d) {
    int tmp=0;
    for (int i=0;i<m;i++)tmp+=1+rd()%d;
    return tmp;
}
