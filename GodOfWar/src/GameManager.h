#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <Godot.hpp>
#include <Node.hpp>
#include "Player.h"
#include "EntityManager.h"

namespace godot{
    class Player;
    class EntityManager;
    class GameManager : public Node{
        GODOT_CLASS(GameManager,Node);

    public:
        
        void _init();
        static void _register_methods();
        GameManager();
        ~GameManager();
        void _process();
        static GameManager* instance;
        static EntityManager* entitymanager;
        static Player* player;
    };
}
#endif /*!GAMEMANAGER_H*/