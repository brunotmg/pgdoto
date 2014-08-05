
#include <stdlib.h>
#include <GL/glut.h>
#include <cstdio>

using namespace std;
//variaveis para numeros das janelas
int wing, winp = 0; 

int main(int argc,char** argv) {

	// initialise glut
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH);
	glutInitWindowSize(640,480);

	glutInitWindowPosition(0,100);

	// create window 1
	wing = glutCreateWindow("Gourand");
	//glutDisplayFunc(display1)

	glutInitWindowPosition(640,100);

	winp = glutCreateWindow("Phong");
	//glutDisplayFUnc(display2)



	// set the function to use to draw our scene
	//glutDisplayFunc();

	// set the function to handle changes in screen size
	//glutReshapeFunc();
	
	//vai cuidar dos eventos do mouse
	//glutMouseFunc();
	//glutMotionFunc();

	//funcao para eventos do teclado
	//glutKeyboardFunc();



	// run our custom initialisation
	//OnInit();

	// set the function to be called when we exit
	//atexit(OnExit);

	// this function runs a while loop to keep the program running.
	glutMainLoop();


	return 0;
}