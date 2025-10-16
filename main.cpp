#include <GL/glut.h>
#include<iostream>
void draw(){
glClearColor(1.0,1.0,1.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);
glViewport(0,0,250,250);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,500.0,0.0,500.0);
glColor3f(1.0,1.0,0.0);
glRectf(0.0,0.0,500.0,500.0);
glutSwapBuffers()
}


int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutCreateWindow("OpenGL Viewport Example");

glutDisplayFunc(draw);
glutMainLoop();
return 0;
}
