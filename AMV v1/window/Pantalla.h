#define SDL_MAIN_HANDLED
#ifndef PANTALLA_H_
#define PANTALLA_H_
#include "SDL2/SDL.h"
namespace clasePantalla{

class Pantalla{
private:
  SDL_Window *m_ventana;
  SDL_Renderer *m_render;
  SDL_Texture *m_textura;
  Uint32 *m_buffer;
public:
  const int SCREEN_WIDHT = 800;
  const int SCREEN_HEIGHT = 600;
public:
  Pantalla();
  bool init();
  bool processEvents();
  void close();
  void update();
  void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
};
}

#endif
