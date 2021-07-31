#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "highscore.h"

int main() {
  int Input = 0;
  Hscore hiscore;

  while (1)
  {
    std::cout << "CAPSTONE SNAKE GAME\n" << std::endl;
    std::cout << "Enter either 1 to play, 2 to exit, or 3 to view the high score: " << std::endl;

    std::cin >> Input;

    if (Input == 1)
    {
    

      constexpr std::size_t kFramesPerSecond{60};
      constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
      constexpr std::size_t kScreenWidth{640};
      constexpr std::size_t kScreenHeight{640};
      constexpr std::size_t kGridWidth{32};
      constexpr std::size_t kGridHeight{32};

      Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
      Controller controller;
      Game game(kGridWidth, kGridHeight);
      game.SetDifficulty();
      game.Run(controller, renderer, kMsPerFrame);
      std::cout << "Game has terminated successfully!\n";
      int sc = game.GetScore();
      std::cout << "Score: " << sc << "\n";
      std::cout << "Size: " << game.GetSize() << "\n";

      hiscore.UpdateHSList(sc);
    }
    else if (Input == 2)
    {
      std::cout << "Thank you for playing :)" << std::endl;
      return 0;
    }
    else if (Input == 3)
    {
      std::cout << "The current high score is: " << hiscore.DisplayHS() << std::endl;
    }
    else
    {
      std::cout << "Error: invalid number\n\n" << std::endl;
    }
    
  }



  return 0;
}