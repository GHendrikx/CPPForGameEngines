#ifndef PLAYER_H
#define PLAYER_H

#include <Godot.hpp>
#include <MeshInstance.hpp>
#include <Position3D.hpp>
#include "Shield.h"
#include "Attack.h"
#include "GameManager.h"
#include <Node.hpp>
#include <Spatial.hpp>

namespace godot
{

class Shield;
class Attack;
    class Player : public MeshInstance
    {
    GODOT_CLASS(Player,Spatial);

    public:
        Player();
        ~Player();
        void _init();
        void _ready();
        void _process(float delta);
        static void _register_methods();

        //rotate the mesh
        void _rotate(float degrees);
        void _attack();
        void _defend();
        Attack* attack;
        Shield* shield;
        private:
            float speed;
    };
}
#endif /*PLAYER_H*/