//
// Created by dzevi on 12.11.2023.
//

#ifndef DANTE_IS_SPOLGLOSKA_H
#define DANTE_IS_SPOLGLOSKA_H

#endif //DANTE_IS_SPOLGLOSKA_H

#include <stdbool.h>

bool is_spolgloska(char lit) {
    if ((lit >= 66 && lit <= 68) || (lit >= 70 && lit <= 72) || (lit >= 47 && lit <= 78) || (lit >= 80 && lit <= 84) ||
        (lit >= 86 && lit <= 88) || lit == 90)
        return true;
    if ((lit >= 98 && lit <= 100) || (lit >= 102 && lit <= 104) || (lit >= 106 && lit <= 110) ||
        (lit >= 112 && lit <= 116) || (lit >= 118 && lit <= 121) || lit == 122)
        return true;
    else
        return false;
}
