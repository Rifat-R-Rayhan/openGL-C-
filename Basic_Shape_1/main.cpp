#include <iostream>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

static GLfloat spin = 0.0;


void house(){
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	//House(bottom)
	glColor3f (0.8, 0.8, 0.8);

	glVertex3f(0.05f, 0.25f, 0.0f);
	glVertex3f(0.35f, 0.25f, 0.0f);
	glVertex3f(0.35f, 0.35f, 0.0f);
	glVertex3f(0.05f, 0.35f, 0.0f);

	glColor3f (1.0, 0.3, 0.0);

	glVertex3f(0.04f, 0.25f, 0.0f);
	glVertex3f(0.36f, 0.25f, 0.0f);
	glVertex3f(0.36f, 0.23f, 0.0f);
	glVertex3f(0.04f, 0.23f, 0.0f);

	//Door
	glColor3f (0.6, 0.4, 1.0);

	glVertex3f(0.17f, 0.25f, 0.0f);
	glVertex3f(0.23f, 0.25f, 0.0f);
	glVertex3f(0.23f, 0.32f, 0.0f);
	glVertex3f(0.17f, 0.32f, 0.0f);

	//Window
	glColor3f (0.6, 0.4, 1.0);

	glVertex3f(0.085f, 0.265f, 0.0f);
	glVertex3f(0.125f, 0.265f, 0.0f);
	glVertex3f(0.125f, 0.305f, 0.0f);
	glVertex3f(0.085f, 0.305f, 0.0f);

    glColor3f (0.6, 0.4, 1.0);

	glVertex3f(0.275f, 0.265f, 0.0f);
	glVertex3f(0.315f, 0.265f, 0.0f);
	glVertex3f(0.315f, 0.305f, 0.0f);
	glVertex3f(0.275f, 0.305f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_TRIANGLES); //Begin triangle coordinates
	//House (top)
	glColor3f (1.0, 0.3, 0.0);

	glVertex3f(0.04f, 0.35f, 0.0f);
	glVertex3f(0.36f, 0.35f, 0.0f);
	glVertex3f(0.20f, 0.4f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}

void field(){

    glBegin(GL_QUADS);
    //Field
	glColor3f (0.0, 0.5, 0.0);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 0.6f, 0.0f);
	glVertex3f(0.0f, 0.6f, 0.0f);

	glEnd();
}

void road(){
    //campus road
    glBegin(GL_QUADS);
	glColor3f (0.2, 0.2, 0.2);

	glVertex3f(0.0f, 0.45f, 0.0f);
	glVertex3f(1.0f, 0.45f, 0.0f);
	glVertex3f(1.0f, 0.55f, 0.0f);
	glVertex3f(0.0f, 0.55f, 0.0f);

	glEnd();

	//house road
	glBegin(GL_QUADS);
	glColor3f (0.3, 0.3, 0.3);

	glVertex3f(0.85f, 0.0f, 0.0f);
	glVertex3f(0.95f, 0.0f, 0.0f);
	glVertex3f(0.95f, 0.45f, 0.0f);
	glVertex3f(0.85f, 0.45f, 0.0f);

	glEnd();
}

void river(){
    glBegin(GL_QUADS);

	glColor3f (0.0, 0.3, 0.7);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.8f, 0.0f, 0.0f);
	glVertex3f(0.8f, 0.2f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);

	glEnd();
}

void river_bank(){
    glBegin(GL_QUADS);

	glColor3f (0.2, 0.2, 0.2);

	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(0.8f, 0.2f, 0.0f);
	glVertex3f(0.8f, 0.18f, 0.0f);
	glVertex3f(0.0f, 0.18f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f (0.2, 0.2, 0.2);

	glVertex3f(0.78f, 0.0f, 0.0f);
	glVertex3f(0.8f, 0.0f, 0.0f);
	glVertex3f(0.8f, 0.2f, 0.0f);
	glVertex3f(0.78f, 0.2f, 0.0f);

	glEnd();
}

float  counter=0.08;
void boat(){
   /* glLoadIdentity();
    counter=counter-0.0001;
    glTranslated(counter,-1.0,0.0);*/

    glBegin(GL_QUADS);

	//boat
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.2f, 0.06f, 0.0f);
	glVertex3f(0.4f, 0.06f, 0.0f);
	glVertex3f(0.4f, 0.09f, 0.0f);
	glVertex3f(0.2f, 0.09f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	//boat
	glColor3f(0.0f, 0.7f, 0.7f);
	glVertex3f(0.2f, 0.03f, 0.0f);
	glVertex3f(0.4f, 0.03f, 0.0f);
	glVertex3f(0.4f, 0.06f, 0.0f);
	glVertex3f(0.2f, 0.06f, 0.0f);

	glEnd();

    glBegin(GL_QUADS);

	//BOAT(front)
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.1f, 0.11f, 0.0f);
	glVertex3f(0.2f, 0.06f, 0.0f);
	glVertex3f(0.2f, 0.09f, 0.0f);
	glVertex3f(0.1f, 0.11f, 0.0f);

	glEnd();

	    glBegin(GL_QUADS);

	//BOAT(front)
	glColor3f(0.0f, 0.7f, 0.7f);
	glVertex3f(0.1f, 0.01f, 0.0f);
	glVertex3f(0.2f, 0.03f, 0.0f);
	glVertex3f(0.2f, 0.06f, 0.0f);
	glVertex3f(0.1f, 0.01f, 0.0f);

	glEnd();

	//BOAT(back)
	glBegin(GL_QUADS);


	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.4f, 0.06f, 0.0f);
	glVertex3f(0.5f, 0.11f, 0.0f);
	glVertex3f(0.5f, 0.11f, 0.0f);
	glVertex3f(0.4f, 0.09f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);


	glColor3f(0.0f, 0.7f, 0.7f);
	glVertex3f(0.4f, 0.06f, 0.0f);
	glVertex3f(0.5f, 0.01f, 0.0f);
	glVertex3f(0.5f, 0.01f, 0.0f);
	glVertex3f(0.4f, 0.03f, 0.0f);

	glEnd();

	//BOAT(up)
	glBegin(GL_TRIANGLES);


	glColor3f(0.7f, 1.0f, 1.0f);
	glVertex3f(0.25f, 0.07f, 0.0f);
	glVertex3f(0.35f, 0.07f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);

	glEnd();

	//BOAT(up)
	glBegin(GL_TRIANGLES);


	glColor3f(0.7f, 1.0f, 1.0f);
	glVertex3f(0.25f, 0.03f, 0.0f);
	glVertex3f(0.35f, 0.03f, 0.0f);
	glVertex3f(0.3f, 0.01f, 0.0f);

	glEnd();
}


void tree(){

    //Tree(bottom)
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.055f, 0.365f, 0.0f);
	glVertex3f(0.065f, 0.365f, 0.0f);
	glVertex3f(0.065f, 0.4f, 0.0f);
	glVertex3f(0.055f, 0.4f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.09f, 0.552f, 0.0f);
	glVertex3f(0.1f, 0.552f, 0.0f);
	glVertex3f(0.1f, 0.57f, 0.0f);
	glVertex3f(0.09f, 0.57f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.33f, 0.552f, 0.0f);
	glVertex3f(0.34f, 0.552f, 0.0f);
	glVertex3f(0.34f, 0.57f, 0.0f);
	glVertex3f(0.33f, 0.57f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.61f, 0.552f, 0.0f);
	glVertex3f(0.62f, 0.552f, 0.0f);
	glVertex3f(0.62f, 0.57f, 0.0f);
	glVertex3f(0.61f, 0.57f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.84f, 0.552f, 0.0f);
	glVertex3f(0.85f, 0.552f, 0.0f);
	glVertex3f(0.85f, 0.57f, 0.0f);
	glVertex3f(0.84f, 0.57f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	//Tree(top)
    glBegin(GL_TRIANGLES);

	glColor3f (0.0, 1.0, 0.0);

	glVertex3f(0.03f, 0.4f, 0.0f);
	glVertex3f(0.09f, 0.4f, 0.0f);
	glVertex3f(0.06f, 0.45f, 0.0f);

	glColor3f (0.0, 1.0, 0.0);

	glVertex3f(0.03f, 0.425f, 0.0f);
	glVertex3f(0.09f, 0.425f, 0.0f);
	glVertex3f(0.06f, 0.475f, 0.0f);

	glEnd(); //End triangle coordinates

    glBegin(GL_TRIANGLES);

	glColor3f (0.0, 1.0, 0.0);

	glVertex3f(0.08f, 0.557f, 0.0f);
	glVertex3f(0.11f, 0.557f, 0.0f);
	glVertex3f(0.095f, 0.6f, 0.0f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f (0.0, 1.0, 0.0);

    glVertex3f(0.32f, 0.557f, 0.0f);
	glVertex3f(0.35f, 0.557f, 0.0f);
	glVertex3f(0.335f, 0.6f, 0.0f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f (0.0, 1.0, 0.0);

    glVertex3f(0.6f, 0.557f, 0.0f);
	glVertex3f(0.63f, 0.557f, 0.0f);
	glVertex3f(0.615f, 0.6f, 0.0f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f (0.0, 1.0, 0.0);

    glVertex3f(0.83f, 0.557f, 0.0f);
	glVertex3f(0.86f, 0.557f, 0.0f);
	glVertex3f(0.845f, 0.6f, 0.0f);

	glEnd();
}

void car(){

    /*glLoadIdentity();
    counter=counter-0.001;
    glTranslated(counter,-0.5,0.0);*/
    //car(bottom)
    glBegin(GL_POLYGON);
    glColor3f (0.0, 0.0, 1.0);

    glVertex3f(0.5f, 0.47f, 0.0f);
	glVertex3f(0.7f, 0.47f, 0.0f);
	glVertex3f(0.7f, 0.52f, 0.0f);
	glVertex3f(0.5f, 0.52f, 0.0f);

	glEnd();

	//car(top)
    glBegin(GL_POLYGON);
    glColor3f (0.3, 0.0, 1.0);

    glVertex3f(0.55f, 0.52f, 0.0f);
	glVertex3f(0.65f, 0.52f, 0.0f);
	glVertex3f(0.63, 0.54f, 0.0f);
	glVertex3f(0.58f, 0.54f, 0.0f);

	glEnd();


	//wheel(left);
	float th;
    glBegin(GL_POLYGON);
    glColor3f (1.0, 0.0, 0.0);

    for(int i=0; i<360; i++){
        th = i*3.1416/180;
        glVertex3f(0.55+0.015*cos(th), 0.472+0.015*sin(th), 0);
    }


	glEnd();

	//wheel(right);
    float r;
    glBegin(GL_POLYGON);
    glColor3f (1.0, 0.0, 0.0);

    for(int i=0; i<360; i++){
        r = i*3.1416/180;
        glVertex3f(0.65+0.015*cos(r), 0.472+0.015*sin(r), 0);
    }


	glEnd();
}

void building1(){
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.95, 0.95, 0.95);

	glVertex3f(0.05f, 0.6f, 0.0f);
	glVertex3f(0.15f, 0.6f, 0.0f);
	glVertex3f(0.15f, 0.95f, 0.0f);
	glVertex3f(0.05f, 0.95f, 0.0f);

	glEnd();

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.95, 0.95, 0.95);

	glVertex3f(0.8f, 0.6f, 0.0f);
	glVertex3f(0.9f, 0.6f, 0.0f);
	glVertex3f(0.9f, 0.95f, 0.0f);
	glVertex3f(0.8f, 0.95f, 0.0f);

	glEnd();



}

void building2(){
    //left(B_ROOM_b)
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.0, 1.0);

	glVertex3f(0.15f, 0.68f, 0.0f);
	glVertex3f(0.35f, 0.68f, 0.0f);
	glVertex3f(0.35f, 0.9f, 0.0f);
	glVertex3f(0.15f, 0.9f, 0.0f);

	glEnd();

	//window
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.3, 0.7);

	glVertex3f(0.2f, 0.78f, 0.0f);
	glVertex3f(0.3f, 0.78f, 0.0f);
	glVertex3f(0.3f, 0.85f, 0.0f);
	glVertex3f(0.2f, 0.85f, 0.0f);

	glEnd();

	//(Y_ROOF)
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.15f, 0.725f, 0.0f);
	glVertex3f(0.35f, 0.725f, 0.0f);
	glVertex3f(0.37f, 0.745f, 0.0f);
	glVertex3f(0.17f, 0.745f, 0.0f);

	glEnd();

	//(B_ROOM_s)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.0, 1.0);

	glVertex3f(0.15f, 0.66f, 0.0f);
	glVertex3f(0.35f, 0.66f, 0.0f);
	glVertex3f(0.35f, 0.7f, 0.0f);
	glVertex3f(0.15f, 0.7f, 0.0f);

	glEnd();

	// (Y_ROOF)
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.15f, 0.66, 0.0f);
	glVertex3f(0.35f, 0.66f, 0.0f);
	glVertex3f(0.37f, 0.68f, 0.0f);
	glVertex3f(0.17f, 0.68f, 0.0f);

	glEnd();

	// (R_ROOM)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.0, 0.0);

	glVertex3f(0.15f, 0.6f, 0.0f);
	glVertex3f(0.35f, 0.6f, 0.0f);
	glVertex3f(0.35f, 0.66f, 0.0f);
	glVertex3f(0.15f, 0.66f, 0.0f);

	glEnd();

	//(Pillar 1)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.28f, 0.6f, 0.0f);
	glVertex3f(0.3f, 0.6f, 0.0f);
	glVertex3f(0.3f, 0.67f, 0.0f);
	glVertex3f(0.28f, 0.67f, 0.0f);

	glEnd();

	//(Pillar 2)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.2f, 0.6f, 0.0f);
	glVertex3f(0.22f, 0.6f, 0.0f);
	glVertex3f(0.22f, 0.67f, 0.0f);
	glVertex3f(0.2f, 0.67f, 0.0f);

	glEnd();



	//right(B_ROOM_b)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.0, 1.0);

	glVertex3f(0.6f, 0.68f, 0.0f);
	glVertex3f(0.8f, 0.68f, 0.0f);
	glVertex3f(0.8f, 0.9f, 0.0f);
	glVertex3f(0.6f, 0.9f, 0.0f);

	glEnd();

	//window
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.3, 0.7);

	glVertex3f(0.65f, 0.78f, 0.0f);
	glVertex3f(0.75f, 0.78f, 0.0f);
	glVertex3f(0.75f, 0.85f, 0.0f);
	glVertex3f(0.65f, 0.85f, 0.0f);

	glEnd();


	//(Y_ROOF)
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.6f, 0.725f, 0.0f);
	glVertex3f(0.8f, 0.725f, 0.0f);
	glVertex3f(0.78f, 0.745f, 0.0f);
	glVertex3f(0.58f, 0.745f, 0.0f);

	glEnd();

	//(B_ROOM_s)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.0, 1.0);

	glVertex3f(0.6f, 0.66f, 0.0f);
	glVertex3f(0.8f, 0.66f, 0.0f);
	glVertex3f(0.8f, 0.7f, 0.0f);
	glVertex3f(0.6f, 0.7f, 0.0f);

	glEnd();

	// (Y_ROOF)
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 0.0);

	glVertex3f(0.6f, 0.66f, 0.0f);
	glVertex3f(0.8f, 0.66f, 0.0f);
	glVertex3f(0.78f, 0.68f, 0.0f);
	glVertex3f(0.58f, 0.68f, 0.0f);

	glEnd();


	// (R_ROOM)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.0, 0.0);

	glVertex3f(0.6f, 0.6f, 0.0f);
	glVertex3f(0.8f, 0.6f, 0.0f);
	glVertex3f(0.8f, 0.66f, 0.0f);
	glVertex3f(0.6f, 0.66f, 0.0f);

	glEnd();

	//(Pillar 1)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.73f, 0.6f, 0.0f);
	glVertex3f(0.75f, 0.6f, 0.0f);
	glVertex3f(0.75f, 0.67f, 0.0f);
	glVertex3f(0.73f, 0.67f, 0.0f);

	glEnd();

	//(Pillar 2)
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.65f, 0.6f, 0.0f);
	glVertex3f(0.67f, 0.6f, 0.0f);
	glVertex3f(0.67f, 0.67f, 0.0f);
	glVertex3f(0.65f, 0.67f, 0.0f);

	glEnd();



}

void stairs(){
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.6, 0.6, 0.6);

	glVertex3f(0.35f, 0.6f, 0.0f);
	glVertex3f(0.6f, 0.6f, 0.0f);
	glVertex3f(0.58f, 0.66f, 0.0f);
	glVertex3f(0.37f, 0.66f, 0.0f);

	glEnd();

	glBegin(GL_LINE_LOOP); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.353f, 0.61f, 0.0f);
	glVertex3f(0.595f, 0.61f, 0.0f);
	glVertex3f(0.59f, 0.62f, 0.0f);
	glVertex3f(0.357f, 0.62f, 0.0f);

	glEnd();

    glBegin(GL_LINE_LOOP); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.36f, 0.63f, 0.0f);
	glVertex3f(0.588f, 0.63f, 0.0f);
	glVertex3f(0.585f, 0.64f, 0.0f);
	glVertex3f(0.365f, 0.64f, 0.0f);

	glEnd();

    glBegin(GL_LINE_LOOP); //Begin quadrilateral coordinates
	glColor3f (1.0, 1.0, 1.0);

	glVertex3f(0.367f, 0.65f, 0.0f);
	glVertex3f(0.581f, 0.65f, 0.0f);
	glVertex3f(0.578f, 0.66f, 0.0f);
	glVertex3f(0.373f, 0.66f, 0.0f);

	glEnd();
}

void wall(){

    //right
    glBegin(GL_POLYGON); //Begin quadrilateral coordinates
	glColor3f (1.0, 0.0, 0.0);


	glVertex3f(0.6f, 0.6f, 0.0f);
	glVertex3f(0.6f, 0.66f, 0.0f);
	glVertex3f(0.58f, 0.68f, 0.0f);
	glVertex3f(0.58f, 0.66f, 0.0f);

	glEnd();

	//left
    glBegin(GL_POLYGON); //Begin quadrilateral coordinates
	glColor3f (1.0, 0.0, 0.0);


	glVertex3f(0.35f, 0.6f, 0.0f);
	glVertex3f(0.35f, 0.66f, 0.0f);
	glVertex3f(0.37f, 0.68f, 0.0f);
	glVertex3f(0.37f, 0.66f, 0.0f);

	glEnd();
}

void backWall(){
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.0, 0.0);

	glVertex3f(0.37f, 0.67f, 0.0f);
	glVertex3f(0.58f, 0.67f, 0.0f);
	glVertex3f(0.58f, 0.93f, 0.0f);
	glVertex3f(0.37f, 0.93f, 0.0f);

	glEnd();

	//window
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.7, 0.7);

	glVertex3f(0.415f, 0.71f, 0.0f);
	glVertex3f(0.455f, 0.71f, 0.0f);
	glVertex3f(0.455f, 0.75f, 0.0f);
	glVertex3f(0.415f, 0.75f, 0.0f);

	glEnd();

    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.7, 0.7);

	glVertex3f(0.495f, 0.71f, 0.0f);
	glVertex3f(0.535f, 0.71f, 0.0f);
	glVertex3f(0.535f, 0.75f, 0.0f);
	glVertex3f(0.495f, 0.75f, 0.0f);

	glEnd();

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.7, 0.7);

	glVertex3f(0.415f, 0.79f, 0.0f);
	glVertex3f(0.455f, 0.79f, 0.0f);
	glVertex3f(0.455f, 0.83f, 0.0f);
	glVertex3f(0.415f, 0.83f, 0.0f);

	glEnd();

    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.7, 0.7);

	glVertex3f(0.495f, 0.79f, 0.0f);
	glVertex3f(0.535f, 0.79f, 0.0f);
	glVertex3f(0.535f, 0.83f, 0.0f);
	glVertex3f(0.495f, 0.83f, 0.0f);

	glEnd();

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.7, 0.7);

	glVertex3f(0.415f, 0.87f, 0.0f);
	glVertex3f(0.455f, 0.87f, 0.0f);
	glVertex3f(0.455f, 0.91f, 0.0f);
	glVertex3f(0.415f, 0.91f, 0.0f);

	glEnd();

    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.7, 0.7, 0.7);

	glVertex3f(0.495f, 0.87f, 0.0f);
	glVertex3f(0.535f, 0.87f, 0.0f);
	glVertex3f(0.535f, 0.91f, 0.0f);
	glVertex3f(0.495f, 0.91f, 0.0f);

	glEnd();
}

void backWallAdd(){
    glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.3, 1.0);

	glVertex3f(0.35f, 0.68f, 0.0f);
	glVertex3f(0.37f, 0.68f, 0.0f);
	glVertex3f(0.37f, 0.9f, 0.0f);
	glVertex3f(0.35f, 0.9f, 0.0f);

	glEnd();

	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	glColor3f (0.0, 0.3, 1.0);

	glVertex3f(0.58f, 0.68f, 0.0f);
	glVertex3f(0.6f, 0.68f, 0.0f);
	glVertex3f(0.6f, 0.9f, 0.0f);
	glVertex3f(0.58f, 0.9f, 0.0f);

	glEnd();
}

void sun(){

    float r;
    //glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    glEnable(GL_NORMALIZE);

    GLfloat ambientColor[] = {0.2f, 0.2f, 0.2f, 1.0f};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);

    //Add positioned light
	GLfloat lightColor0[] = {0.5f, 0.5f, 0.5f, 1.0f}; //Color (0.5, 0.5, 0.5)
	GLfloat lightPos0[] = {0.57f, 0.96f, 0.0f, 1.0f}; //Positioned at (4, 0, 8)
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);

	//Add directed light
	GLfloat lightColor1[] = {1.0f, 1.0f, 1.0f, 1.0f}; //Color (0.5, 0.2, 0.2)
	GLfloat lightPos1[] = {0.2f, 0.9f, 0.0f, 0.0f};
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    glRotatef(360.0f, 0.1f, 0.1f, 0.0f);
    for(int i=0; i<360; i++){
        r = i*3.1416/180;
        glVertex3f(0.55+0.03*cos(r), 0.96+0.03*sin(r), 0);
    }

    glEnd();

}

void spinSun(void)
{
   spin = -.60;
			glutPostRedisplay();
			glRotatef(spin, 0.8, 0.8, 1.0);
}


void display()
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);

    field();

    road();

    river();

    river_bank();

    glPushMatrix();
    boat();
    glPopMatrix();

    house();

	tree();

	glPushMatrix();
    car();
    glPopMatrix();

	glPushMatrix();
    sun();
    glPopMatrix();

    building1();

    stairs();

    wall();

    backWall();

    backWallAdd();

    building2();

    glFlush();
}


void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int a=0;
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 's':
                {
                    if(a==0)
                {
		            glutIdleFunc(spinSun);
		             a=1;
                }

         else
         {
              glutIdleFunc(NULL);
              a=0;
         }
         }
			case 'k':
			{


			glRotatef(-10, 0.0, 0.0, 1.0);
			       break;
			}
            case 'i':
                glRotatef(3, 0.0, 0.0, 1.0);
                break;

	  default:
			break;
	}
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Rifat_1448");
init ();
glutDisplayFunc(display);
glutIdleFunc(display);
glutKeyboardFunc(my_keyboard);

glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
