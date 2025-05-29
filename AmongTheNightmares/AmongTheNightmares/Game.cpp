#include "Game.h"

void Game::Menu() {
    int i = 0;
    std::cout << "Wellcome to AmongTheNightMares" << std::endl;
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
    while (Gaming) {
        rooms[CurrentId].RoomInfo();
        std::cout << "Choose what you want to do:" << std::endl;
        if (rooms[CurrentId].IsEnemy()) {
            std::cout << "You have to kill this nightmare to go on or take items" << std::endl << "1.Fight" << std::endl << "2. Run" << std::endl;
            std::cin >> i;
        }
        else if (rooms[CurrentId].GetWeapon().GetName() != "kek") {
            std::cout << "1. Go on" << std::endl;
            std::cout << "2. Take weapons" << std::endl;
            std::cout << std::endl;
            std::cin >> i;
            if (i == 1) {
                std::cout << "Choose Next Room`s Number:"<< std::endl;
                for (auto& id : rooms[CurrentId].GetIds()) {
                    std::cout << id << std::endl;
                }
                std::cout << std::endl;
                std::cin >> id;
                SetPRId(CurrentId), SetId(id);
            }
            if (i == 2) {
                player.AddItem(rooms[CurrentId].GetWeapon());
                std::cout << "You took: " << rooms[CurrentId].GetWeapon().GetName() << std::endl;
                rooms[CurrentId].GetWeapon().SetName("kek");
            }
        }
        else {
            std::cout << "1. Go on" << std::endl;
            std::cout << std::endl;
            std::cin >> i;
            if (i == 1) {
                std::cout << "Choose Next Room`s Number:" << std::endl;
                for (auto& id : rooms[CurrentId].GetIds()) {
                    std::cout << id << std::endl;
                }
                std::cout << std::endl;
                std::cin >> id;
                SetPRId(CurrentId), SetId(id);
            }
        }
    }
}
void Game::SetPRId(int Id) {
    PrevId = Id;
}

void Game::SetId(int Id) {
    CurrentId = Id;
}
Game::Game() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Устанавливаем красный цвет (4)
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    Menu();
}