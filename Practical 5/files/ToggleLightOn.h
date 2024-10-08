//
// Created by shnai on 2024/10/06.
//

#ifndef TOGGLELIGHTON_H
#define TOGGLELIGHTON_H

#include "Command.h"
#include "Light.h"
class ToggleLightOn: public Command{
private:
    Light *light;
public:
    ToggleLightOn(Light* light);
    void performAction() override;
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
};


#endif //TOGGLELIGHTON_H
