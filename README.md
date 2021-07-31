# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## General Description

This game was modified off of the base snake game provided by Udacity. The changes made were an added highscore feature, and a difficulty option for the user to choose. The user is prompted once the program begins to play, exit, or view the highscore. If play is selected, the user will use their keyboard to navigate the 'snake' towards the 'food' and pick up points every time the snake meets the food. The snake dies once it hits its body, as every time it eats it grows by one unit. The highest score recorded is saved in a file that can be viewed before/after every game by selecting the appropriate option. 

## Structure

* Controller: 
  * Purpose is to allow users to use their keyboard to move the snake.
* Highscore: 
  * Allows the highest score recorded to be saved.
* Game: 
  * Stores the state of the game in a constant loop so that it is constantly updated.
* GMenu: 
  * Handles input from user.
* Player: 
  * Used for storing information about the score.
* Render: 
  * Used for putting the visuals onto the screen.
* Snake: 
  * Used for keeping track of data of the snake (location, speed, etc)

## Rubric Points Addressed

* Compiling and Testing: 
  * Code executes with no errors.
* Loops, Functinos, I/O: 
  * Functions were created in `highscore.cpp` and `highscore.h` that were executed in `main.cpp`, as well as functions in `game.cpp` involving getting the difficulty for the game. The project also reads data from `highscore.txt` that keeps the highscore at its proper score. The project also asks for user input in `main.cpp` on lines 16, and line 32 with the `game.GetDifficulty()` function. Loops are also used when reading data from `highscore.txt`.
* Object Oriented Programming: 
  * This program uses object oriented programming spefically when using `Snake::SetDiff()` from `snake.cpp`. It updates the reference file with data inputted from the user so that the snake behaves differently based on the difficulty selected. It accesses appropriate specificers for class members so that the behaviours described above may come into effect.
* Memory Management:
  * On line 28 in `snake.cpp` reference is used on `Speed` variable to update
