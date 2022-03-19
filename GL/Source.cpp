#include<GL/glut.h>

#include<GL/glut.h>

void init() {
	//display window color 
	glClearColor(0.4, 0.7, 0.3, 0.0);
	//projection parameter
	glMatrixMode(GL_PROJECTION);
	//2D transformation 
	gluOrtho2D(0.0, 1200, 0.0, 900);
}

void home() {


	//ROOF of HOUSE
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2i(700, 700);
	glVertex2i(800, 700);
	glVertex2i(700, 800);
	glEnd();

	//sky
	glColor3f(0.749, 0.886, 0.972);
	glBegin(GL_POLYGON);
	glVertex2i(0, 300);
	glVertex2i(0, 900);
	glVertex2i(1200, 300);
	glVertex2i(1200, 900);
	glEnd();

	//FIX SKY
	glColor3f(0.749, 0.886, 0.972);
	glBegin(GL_TRIANGLES);
	glVertex2i(600, 600);
	glVertex2i(0, 900);
	glVertex2i(1200, 900);
	glEnd();


	//set roof color
	glColor3f(0.549, 0.160, 0.133);
	glBegin(GL_POLYGON);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();

	// Front roof top
	glColor3f(0.505, 0.101, 0.074);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();

	//front wall
	glColor3f(0.882, 0.678, 0.458);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();

	//side wall 
	glColor3f(0.964, 0.835, 0.694);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();

	//door
	glColor3f(0.5, 0.2, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();

	// Front Door Lock
	glColor3f(0.556, 0.478, 0.121);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(170, 170);
	glEnd();

	// window one
	glColor3f(0.729, 0.643, 0.549);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();

	// window two
	glColor3f(0.729, 0.643, 0.549);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();



	// Entrance Path
	glColor3f(0.3, 0.5, 0.7);
	glLineWidth(3);
	glBegin(GL_POLYGON);
	glVertex2i(150, 100);
	glVertex2i(250, 100);
	glVertex2i(210, 0);
	glVertex2i(40, 0);
	glEnd();

	//fire stick
	glColor3f(0.215, 0.074, 0.066);
	glBegin(GL_POLYGON);
	glVertex2i(100, 500);
	glVertex2i(140, 500);
	glVertex2i(140, 410);
	glVertex2i(100, 350);
	glEnd();

	//sun
	glColor3f(0.941, 0.937, 0);
	glBegin(GL_POLYGON);
	glVertex2i(60, 800);
	glVertex2i(150, 750);
	glVertex2i(210, 840);
	glVertex2i(120, 880);
	glEnd();

	//POOL
	glColor3f(0.384, 0.886, 0.952);
	glBegin(GL_QUADS);
	glVertex2i(850, 200);
	glVertex2i(910, 90);
	glVertex2i(1110, 140);
	glVertex2i(1060, 250);
	glEnd();

	//duck
	glColor3f(0.898, 0.941, 0.278);
	glBegin(GL_QUADS);
	glVertex2i(1000, 140);
	glVertex2i(1040, 140);
	glVertex2i(1040, 180);
	glVertex2i(1000, 180);
	glEnd();

	// duck face
	glColor3f(0.898, 0.941, 0.278);
	glBegin(GL_QUADS);
	glVertex2i(1010, 180);
	glVertex2i(990, 180);
	glVertex2i(990, 200);
	glVertex2i(1010, 200);
	glEnd();

	// duck mouth
	glColor3f(0.921, 0.356, 0.156);
	glBegin(GL_TRIANGLES);
	glVertex2i(990, 196);
	glVertex2i(990, 187);
	glVertex2i(970, 190);
	glEnd();

	//duck eyes
	glColor3f(0, 0, 0);
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2i(999, 190);
	glEnd();

	//tree root
	glColor3f(0.368, 0.176, 0.113);
	glBegin(GL_QUADS);
	glVertex2i(760, 120);
	glVertex2i(800, 120);
	glVertex2i(760, 200);
	glVertex2i(800, 200);
	glEnd();
	//fix the tree root
	glColor3f(0.368, 0.176, 0.113);
	glBegin(GL_TRIANGLES);
	glVertex2i(800, 200);
	glVertex2i(800, 120);
	glVertex2i(760, 160);
	glEnd();
	//the actual tree
	glColor3f(0.082, 0.282, 0.078);
	glBegin(GL_TRIANGLES);
	glVertex2i(720, 200);
	glVertex2i(835, 200);
	glVertex2i(775, 320);
	glEnd();

	//human
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1160, 280);
	glVertex2i(1160, 200);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1160, 280);
	glVertex2i(1120, 240);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1160, 280);
	glVertex2i(1200, 240);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1140, 160);
	glVertex2i(1160, 200);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1180, 160);
	glVertex2i(1160, 200);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1160, 280);
	glVertex2i(1130, 300);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1130, 315);
	glVertex2i(1130, 300);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1130, 315);
	glVertex2i(1150, 340);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1170, 340);
	glVertex2i(1150, 340);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1170, 340);
	glVertex2i(1190, 315);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1190, 300);
	glVertex2i(1190, 315);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1160, 280);
	glVertex2i(1190, 300);
	glEnd();

	//tree decoration 
	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(760, 215);
	glEnd();

	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(780, 225);
	glEnd();

	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(765, 260);
	glEnd();

	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(800, 260);
	glEnd();

	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(810, 210);
	glEnd();

	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(780, 290);
	glEnd();

	glColor3f(0.850, 0.274, 0.125);
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(750, 240);
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	//Initialize glut
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition(100, 100);

	glutInitWindowSize(1200, 900);

	glutCreateWindow("My graphics HW");


	init();
	glutDisplayFunc(home);

	glutMainLoop();

}

