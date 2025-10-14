#include<iostream>
using namespace std;

#include<ftxui/screen/screen.hpp>
#include<ftxui/screen/color.hpp>
#include<ftxui/component/component.hpp>
#include<ftxui/component/screen_interactive.hpp>

using namespace ftxui;


int main(int argc, char const *argv[])
{
    auto pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fixed(10)
    );

    int x = 0;
    int y = 0;

    auto& pixel = pantalla.PixelAt(10, 10);
    pixel.blink = true;
    pixel.background_color = Color::Blue;
    pixel.foreground_color = Color::Red;
    pixel.character = 'o';

    pantalla.Print();


    return 0;
}

