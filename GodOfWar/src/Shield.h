#ifndef SHIELD_H
#define SHIELD_H

#include <Godot.hpp>
#include <KinematicBody.hpp>
#include <GameManager.h>


namespace godot {

    class Shield : public Node{
        GODOT_CLASS(Shield,KinematicBody);

    public:
        static void _register_methods();
        Shield();
        ~Shield();
        void _init();
        bool defend;
    };
}
#endif