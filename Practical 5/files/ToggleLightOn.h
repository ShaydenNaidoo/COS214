//
// Created by shnai on 2024/10/06.
//

#ifndef UNTITLED1_TOGGLELIGHTON_H
#define UNTITLED1_TOGGLELIGHTON_H

#include "Command.h"
#include "Light.h"
class ToggleLightOn: public Command{
private:
    Light *light;
public:
    ToggleLightOn(Light* light);
    void performAction() override;

};


#endif //UNTITLED1_TOGGLELIGHTON_H
