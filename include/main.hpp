#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <iostream>


static int WIDTH = 640;
static int HEIGHT = 480;
double PI = 3.1415;
double trans = 0;
float rotatex = 0, rotatey = 0, mousex = 0, mousey = 0;
bool dragging = false;
int keyArr[350];