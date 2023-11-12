//
// Created by dzevi on 12.11.2023.
//

#ifndef DANTE_IS_SAMOGLOSKA_H
#define DANTE_IS_SAMOGLOSKA_H

#endif //DANTE_IS_SAMOGLOSKA_H

#include <stdbool.h>

bool is_samogloska(char lit) {
    if((lit == 'a') ||(lit == 'e') ||(lit == 'y') ||(lit == 'u') ||(lit == 'i') ||(lit == 'o') || (lit == 'A') ||(lit == 'E') ||(lit == 'Y') ||(lit == 'U') ||(lit == 'I') ||(lit == 'O'))
        return true;
    else
        return false;
}
