#ifndef ATTACK_H
#define ATTACK_H

#include <Godot.hpp>
#include <KinematicCollision.hpp>
#include <Kinematicbody.hpp>
#include "GameManager.h"

namespace godot{

    class Attack : public KinematicBody{
        GODOT_CLASS(Attack,KinematicBody);

    public:
        static void _register_methods();
        Attack();
        ~Attack();
        void _init();
        void _ready();
        bool attack;
        void _shootRay();
        void process();
    };

}

#endif