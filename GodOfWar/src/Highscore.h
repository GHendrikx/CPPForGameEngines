#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <Godot.hpp>
#include <Control.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>

namespace godot{
class Highscore : public Control{
    GODOT_CLASS(Highscore, Control)

        public:
            Highscore();
            ~Highscore();

            static void _register_methods();

            void _init();
            void _set_highscore(int score);
            void _get_highscore();
    };
}
#endif