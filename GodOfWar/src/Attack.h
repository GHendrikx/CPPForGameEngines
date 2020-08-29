#ifndef ATTACK_H
#define ATTACK_H

#include <Godot.hpp>
#include <KinematicBody.hpp>

namespace godot{

    class Attack : public KinematicBody{
        GODOT_CLASS(Attack,KinematicBody);

    public:
        static void _register_methods();
        Attack();
        ~Attack();
        void _init();
        bool attack;
    };

}

#endif