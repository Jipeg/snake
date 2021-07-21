#include <time.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/freeglut.h>
#include <iostream>

using namespace std;

void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0, 1.0, 0.0);
  glBegin(GL_LINES);
  glVertex2f(50,50);
  glVertex2f(100,200);
  glEnd();

  glFlush();
}

int main(int argc, char **argv) {
  const int w = 640, h = 480;
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(w, h);
  glutCreateWindow("Test");
  glClearColor(0, 1.0, 1.0, 1);  //цвет фона
  glMatrixMode(GL_PROJECTION);
  //glLoadIdentity();
  gluOrtho2D(0, w, 0, h);

  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}