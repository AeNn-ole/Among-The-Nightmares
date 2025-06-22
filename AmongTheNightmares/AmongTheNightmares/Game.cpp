#include "Game.h"

void Game::Menu() {
    int i = 0;
    std::cout << "Wellcome to AmongTheNightMares" << std::endl;
    std::cout << "This is a game about a little boy who is afraid of his nightmares to the endless horror. Mom always reassured him before going to bed, reading a book with fairy tales and including a music box, but that night everything went wrong.  The terrible monsters took these things, and you find yourself in a dark empty house, and you have to find them, overcoming your fears. Your good friends will help you with this - soft toys that will become your weapon against nightmares." << std::endl;
    bool Menu = true;
    while (Menu) {
        std::cout << std::endl << "Choose:" << std::endl << "1. Start Game" << std::endl << "2. Exit" << std::endl;
        std::cin >> i;
        if (i == 1) {
            Run();
        }
        if (i == 2) {
            Menu = false;
        }
        else {
            std::cout << "Wrong number. Try 1 or 2." << std::endl;
        }
    }
}
void Game::Run() {
    loader.LoadLocation(location, rooms);
    bool Gaming = true;
    int i = 0;
    int id = 0;
    std::cout << "You wake up from the knock of branches through the window. The rings of thunder are heard. There is pouring rain." << std::endl;
    while (Gaming) {
        rooms[current_id].RoomInfo();
        std::cout << "Choose what you want to do:" << std::endl;
        if (rooms[current_id].IsEnemy()) {
            std::cout << "You have to kill this nightmare to go on or take items" << std::endl << "1. Fight" << std::endl  << "2. Take fear"<< std::endl << "3. Run" << std::endl;
            std::cin >> i;
            if (i == 1) {
                Gaming = rooms[current_id].GetEnemy().Fight(player);
            }
            if (i == 2) {
                Gaming = rooms[current_id].GetEnemy().TakeFear(player);
                std::cout << "You met face to face with a nightmare, and he disappeared." << std::endl;
            }
            if (i == 3) {
                std::cout << "Choose Next Room`s Number:" << std::endl;
                for (auto& id : rooms[current_id].GetIds()) {
                    std::cout << id << std::endl;
                }
                std::cout << std::endl;
                std::cin >> id;
                SetPRId(current_id), SetId(id);
            }
        }
        else if (rooms[current_id].GetWeapon().GetName() != "kek") {
            std::cout << "1. Go on" << std::endl;
            std::cout << "2. Take weapons" << std::endl;
            std::cout << std::endl;
            std::cin >> i;
            if (i == 1) {
                std::cout << "Choose Next Room`s Number:"<< std::endl;
                for (auto& id : rooms[current_id].GetIds()) {
                    std::cout << id << std::endl;
                }
                std::cout << std::endl;
                std::cin >> id;
                SetPRId(current_id), SetId(id);
            }
            if (i == 2) {
                player.AddItem(rooms[current_id].GetWeapon());
                std::cout << "You took: " << rooms[current_id].GetWeapon().GetName() << std::endl;
                rooms[current_id].GetWeapon().SetName("kek");
            }
            
        }
        else {
            std::cout << "1. Go on" << std::endl;
            std::cout << "2. Status" << std::endl;
            std::cout << std::endl;
            std::cin >> i;
            if (i == 1) {
                std::cout << "Choose Next Room`s Number:" << std::endl;
                for (auto& id : rooms[current_id].GetIds()) {
                    std::cout << id << std::endl;
                }
                std::cout << std::endl;
                std::cin >> id;
                SetPRId(current_id), SetId(id);
            }
            if (i == 2) {
                player.Status();
            }
        }
    }
}
void Game::SetPRId(int Id) {
    prev_id = Id;
}

void Game::SetId(int Id) {
    current_id = Id;
}
Game::Game() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Устанавливаем красный цвет (4)
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    Menu();
}