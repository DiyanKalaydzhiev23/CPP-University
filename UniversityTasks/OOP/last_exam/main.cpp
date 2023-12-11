#include <iostream>
#include <vector>
#include <memory>
#include "DevilPorcini.h"
#include "NormalPorcini.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;


template <typename MushroomType> MushroomType cook_mushroom(MushroomType mushroom) {
    mushroom.cook_mushroom();

    return mushroom;
}


vector<shared_ptr<Porcini>> create_container() {
    vector<shared_ptr<Porcini>> container;

    container.push_back(make_shared <NormalPorcini> ());
    container.push_back(make_shared <NormalPorcini>());
    container.push_back(make_shared <DevilPorcini> ("grape"));
    container.push_back(make_shared <NormalPorcini>());

    return container;
}


int main() {

    vector<shared_ptr<Porcini>> container = create_container();

    for (const auto& mushroom : container) {
        mushroom -> cook_mushroom();

        if (mushroom -> poisonous) {
            break;
        }
    }

    cout << endl;

    cook_mushroom(DevilPorcini("orange"));
    cook_mushroom(NormalPorcini());

    return 0;
}
