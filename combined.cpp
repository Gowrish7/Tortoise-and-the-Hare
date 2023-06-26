#include<stdio.h>
#include<string.h>
#include<GL/glut.h>
float x2,c2,d2;
float y2,z2,cloud2;
int count2;
int count3=0;
float x3,a3;
float cloud3;
float p3,q3,r3;
float x4;
float y4,z4,cloud4;
float s4,t4;
int count4=0;
void output(char *s){
int k;
for(k=0;k<strlen(s);k++)
  glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
}
void timer2(int v)
{
if(z2==2)
{
//y=y;
z2=z2;
}
else{
//y+=0.5;
z2+=0.25;
}
//cloud moving logic
if(cloud2==10){
	cloud2=cloud2;
}
else{
	cloud2+=0.01;
}

//tortoise timer
if(d2==1.5)
{
	d2=d2;
}
else
{

	d2+=0.05;
	
}




//for hare
if(c2==10)
c2=10.0;
else{
	int i;
	for(i=0;i<999999999;i++);
	c2+=0.5;
	count2++;
}
//x+=0.5;
glutPostRedisplay();
glutTimerFunc(100,timer2,0);
}
void timer3(int v)
{
if(p3==2)
{
//y=y;
p3=p3;
}
else{
//y+=0.5;
p3+=0.25;
}

//cloud moving logic
if(cloud3==10){
	cloud3=cloud3;
}
else{
	cloud3+=0.01;
}
//for tortoise
//if(d==5)
//{
//d+=5.0;
//}
//else
//{
//d+=0.1;
//glutPostRedisplay();
//glutTimerFunc(100,timer,0);
//}

//if(d==1.5)
//{
// d=d;
//}
//else{
// d+=0.1;
//}


a3+=0.05;

//for hare
if(q3==5){
x3=5.0;
if(r3<3){
r3+=0.25;
count3++;
}
else{
r3=r3;
}
}else{
q3+=0.5;
x3+=0.5;
}

glutPostRedisplay();
glutTimerFunc(100,timer3,0);

//after stop

}
void timer4(int v)
{
//if(z==2)
//{
//y=y;
//z=z;
//}
//else{
//y+=0.5;
//z+=0.25;
//}

//for tortoise
//if(d==5)
//{
//d+=5.0;
//}
//else
//{
//d+=0.1;
//glutPostRedisplay();
//glutTimerFunc(100,timer,0);
//}


//cloud moving logic
if(cloud4==10){
	cloud4=cloud4;
}
else{
	cloud4+=0.01;
}

//toroise logic
if(s4==6)
{
	s4=s4;
}
else
{
	count4++;
	s4+=0.04;
}

//for hare
if(t4==5)
t4=5.0;
else
t4+=0.03;
x4+=0.2;
glutPostRedisplay();
glutTimerFunc(100,timer4,0);
}
void display1()
{
int k;
char s[50];
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,0.0);
char str1[]="MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING";
glPushMatrix();
glRasterPos3f(3.0,9.0,0.0);
for(k=0;k<strlen(str1);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[k]);
glPopMatrix();
glFlush();

glColor3f(0.0,0.0,0.0);
char str2[]="MOODABIDRI,MANGALORE";
glPushMatrix();
glRasterPos3f(4.3,8.5,0.0);
for(k=0;k<strlen(str2);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,1.0,1.0);
char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
glPushMatrix();
glRasterPos3f(3.0,7.5,0.0);
for(k=0;k<strlen(str3);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,1.0);
char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
glPushMatrix();
glRasterPos3f(3.5,7.0,0.0);
for(k=0;k<strlen(str4);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[k]);
glPopMatrix();
glFlush();

glColor3f(58.8,29.4,0.0);
char str5[]="MINI PROJECT";
glPushMatrix();
glRasterPos3f(4.5,6.0,0.0);
for(k=0;k<strlen(str5);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[k]);
glPopMatrix();
glFlush();

glColor3f(58.8,29.4,0.0);
char str6[]="ON";
glPushMatrix();
glRasterPos3f(4.9,5.5,0.0);
for(k=0;k<strlen(str6);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[k]);
glPopMatrix();
glFlush();

glColor3f(0.72, 0, 0.61);
char str7[]="SLOW AND STEADY WINS THE RACE";
glPushMatrix();
glRasterPos3f(3.6,5.0,0.0);
for(k=0;k<strlen(str7);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[k]);
glPopMatrix();
glFlush();

glColor3f(0.0,0.0,0.0);
char str8[]="TEAM MEMBERS";
glPushMatrix();
glRasterPos3f(0.5,4.0,0.0);
for(k=0;k<strlen(str8);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str9[]="GOWRISH G KAMATH- 4MT20CS065";
glPushMatrix();
glRasterPos3f(0.5,3.5,0.0);
for(k=0;k<strlen(str9);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str10[]="K P VENKATESH- 4MT20CS079";
glPushMatrix();
glRasterPos3f(0.5,3.0,0.0);
for(k=0;k<strlen(str10);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[k]);
glPopMatrix();
glFlush();

glColor3f(0.0,0.0,0.0);
char str11[]="UNDER THE GUIDENCE OF";
glPushMatrix();
glRasterPos3f(7.5,4.0,0.0);
for(k=0;k<strlen(str11);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str12[]="SUNITHA N V";
glPushMatrix();
glRasterPos3f(7.5,3.5,0.0);
for(k=0;k<strlen(str12);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str13[]="ASSISTANT PROFESSOR";
glPushMatrix();
glRasterPos3f(7.5,3.0,0.0);
for(k=0;k<strlen(str13);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str14[]="DEPT OF CSE";
glPushMatrix();
glRasterPos3f(7.5,2.5,0.0);
for(k=0;k<strlen(str14);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[k]);
glPopMatrix();
glFlush();
}
void display2()
{
//sky
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.29, 0.86, 0.97);
glBegin(GL_POLYGON);
glVertex2i(0,10);
glVertex2i(10,10);
glVertex2i(10,6);
glVertex2i(0,6);
glEnd();



//later left cloud
//cloud-1-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.5+cloud2,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.0+cloud2,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.2+cloud2,8.8,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();



//left cloud
//cloud-1-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(2.5+cloud2,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.9+cloud2,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(2.2+cloud2,8.8,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();


//right cloud
//cloud-2-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(7.5+cloud2,8.9,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-2 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(7.9+cloud2,8.7,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-2 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(8.2+cloud2,9,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();




//sun
glColor3f(0.99, 0.72, 0.07);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(5.5,6+z2,0);
glRotatef(x2,1,1,0);
glutSolidSphere(0.9,100,50);
glPopMatrix();
//glFlush();
glEnd();
 

  
  
//greenland
glColor3f(0.09, 0.46, 0.13);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(10,0);
glVertex2i(10,6);
glVertex2i(0,6);
glEnd();



  //mountain-1
glColor3f(0.59, 0.49, 0.33);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2i(3,8);
glVertex2i(6,6);
//glVertex2i(0,6);
glEnd();

//grills-1
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(1,6);
glVertex2f(1.25,6);
glVertex2f(1.25,6.5);
glVertex2f(1,6.5);
glEnd();

//grill-2
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(3,6);
glVertex2f(3.25,6);
glVertex2f(3.25,6.5);
glVertex2f(3,6.5);
glEnd();

//grill-3
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(5,6);
glVertex2f(5.25,6);
glVertex2f(5.25,6.5);
glVertex2f(5,6.5);
glEnd();


//tree-1
glColor3f(0.13, 0.1, 0.02);
glBegin(GL_POLYGON);
glVertex2f(0.5,6);
glVertex2f(0.75,6);
glVertex2f(0.75,6.5);
glVertex2f(0.5,6.5);
glEnd();
//tree-top
glColor3f(0.02, 0.29, 0.07);
glBegin(GL_POLYGON);
glVertex2f(0.25,6.5);
glVertex2f(1,6.5);
glVertex2f(0.6,7);
glEnd();

//mountain-2
glColor3f(0.59, 0.49, 0.33);
glBegin(GL_POLYGON);
glVertex2i(5,6);
glVertex2i(8,8);
glVertex2i(11,6);
//glVertex2i(4,6);
glEnd();

//grill-3
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(7,6);
glVertex2f(7.25,6);
glVertex2f(7.25,6.5);
glVertex2f(7,6.5);
glEnd();

//grill-4
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(9,6);
glVertex2f(9.25,6);
glVertex2f(9.25,6.5);
glVertex2f(9,6.5);
glEnd();

//grill line
glLineWidth(2.0);
glBegin(GL_LINES);
glVertex2f(1, 6.25);
glVertex2f(9, 6.25);
glEnd();

//tree-1
glColor3f(0.13, 0.1, 0.02);
glBegin(GL_POLYGON);
glVertex2f(9.5,6);
glVertex2f(9.75,6);
glVertex2f(9.75,6.5);
glVertex2f(9.5,6.5);
glEnd();
//tree-top
glColor3f(0.02, 0.29, 0.07);
glBegin(GL_POLYGON);
glVertex2f(9.25,6.5);
glVertex2f(10,6.5);
glVertex2f(9.6,7);
glEnd();

//mountain-
//glColor3f(0.74,0.56,0.56);
//glBegin(GL_POLYGON);
//glVertex2i(8,6);
//glVertex2i(10,8);
//glVertex2i(10,6);
//glVertex2i(8,6);
//glEnd();

//cloud
//glColor3f(0.0,0.0,1.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
//glTranslatef(2+c,8,0);
//glScalef(1.0,1.0,1.0);
//glutSolidSphere(1,100,50);
//glPopMatrix();
//glFlush();
//glEnd();

//glColor3f(0.0,0.0,1.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
//glTranslatef(c,8,0);
//glScalef(-1.0,1.0,1.0);
//glutSolidSphere(1,100,50);
//glPopMatrix();
//glFlush();
//glEnd();

//road
glColor3f(0.38, 0.35, 0.36);
glBegin(GL_POLYGON);
glVertex2i(0,2);
glVertex2i(10,2);
glVertex2i(10,4);
glVertex2i(0,4);
glEnd();

//road-details
glColor3f(1, 0, 0);
glBegin(GL_POLYGON);
glVertex2i(1.75,2);
glVertex2f(2,2);
glVertex2f(2,4);
glVertex2i(1.75,4);
glEnd();

//hare head
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.6+c2,2.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.2,100,50);
glPopMatrix();
glEnd();
//hare eyes left
glColor3f(70, 0, 0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.7+c2,2.6,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//hare eyes right
glColor3f(70, 0, 0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.7+c2,2.4,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//hare body
glColor3f(1, 1, 1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(1+c2,2.5,1);
//glRotatef(x,1,1,0);
glutSolidSphere(0.5,50,30);
glPopMatrix();
//glFlush();
//glEnd();


//tortoise head
glColor3f(0.01, 0.15, 0.03);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.5+d2,3.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.2,100,50);
glPopMatrix();
glEnd();
//tortoise eyes left
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.65+d2,3.6,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//tortoise eyes right
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.65+d2,3.4,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//tortoise-body
glColor3f(0.01, 0.15, 0.03);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1+d2,3.5,0);
glutWireSphere(0.5,100,100);
glColor3f(0.66, 0.66, 0.66);
glutWireSphere(0.45,8,8);
glPopMatrix();


//start instruction
glColor3f(0.0,1.0,0.0);
glPushMatrix();
glTranslatef(1.5,5.0,0.0);
glScalef(0.0015,0.0015,1.0);
output("S");
glPopMatrix();
glPushMatrix();
glTranslatef(1.5,4.8,0.0);
glScalef(0.0015,0.0015,1.0);
output("T");
glPopMatrix();
glPushMatrix();
glTranslatef(1.5,4.6,0.0);
glScalef(0.0015,0.0015,1.0);
output("A");
glPopMatrix();
glPushMatrix();
glTranslatef(1.5,4.4,0.0);
glScalef(0.0015,0.0015,1.0);
output("R");
glPopMatrix();
glPushMatrix();
glTranslatef(1.5,4.2,0.0);
glScalef(0.0015,0.0015,1.0);
output("T");
glPopMatrix();

glFlush();
}
void display3()
{
//sky
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.29, 0.86, 0.97);
glBegin(GL_POLYGON);
glVertex2i(0,10);
glVertex2i(10,10);
glVertex2i(10,6);
glVertex2i(0,6);
glEnd();


//later left cloud
//cloud-1-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.5+cloud3,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.0+cloud3,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.2+cloud3,8.8,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();



//left cloud
//cloud-1-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(2.5+cloud3,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.9+cloud3,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(2.2+cloud3,8.8,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();


//right cloud
//cloud-2-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(7.5+cloud3,8.9,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-2 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(7.9+cloud3,8.7,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-2 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(8.2+cloud3,9,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();


//sun
glColor3f(0.99, 0.72, 0.07);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(5.5,6+p3,0);
glRotatef(x3,1,1,0);
glutSolidSphere(0.9,100,50);
glPopMatrix();
//glFlush();
glEnd();
 

 
 
//greenland
glColor3f(0.09, 0.46, 0.13);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(10,0);
glVertex2i(10,6);
glVertex2i(0,6);
glEnd();



  //mountain-1
glColor3f(0.59, 0.49, 0.33);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2i(3,8);
glVertex2i(6,6);
//glVertex2i(0,6);
glEnd();

//grills-1
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(1,6);
glVertex2f(1.25,6);
glVertex2f(1.25,6.5);
glVertex2f(1,6.5);
glEnd();

//grill-2
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(3,6);
glVertex2f(3.25,6);
glVertex2f(3.25,6.5);
glVertex2f(3,6.5);
glEnd();

//grill-3
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(5,6);
glVertex2f(5.25,6);
glVertex2f(5.25,6.5);
glVertex2f(5,6.5);
glEnd();


//tree-1
glColor3f(0.13, 0.1, 0.02);
glBegin(GL_POLYGON);
glVertex2f(0.5,6);
glVertex2f(0.75,6);
glVertex2f(0.75,6.5);
glVertex2f(0.5,6.5);
glEnd();
//tree-top
glColor3f(0.02, 0.29, 0.07);
glBegin(GL_POLYGON);
glVertex2f(0.25,6.5);
glVertex2f(1,6.5);
glVertex2f(0.6,7);
glEnd();

//mountain-2
glColor3f(0.59, 0.49, 0.33);
glBegin(GL_POLYGON);
glVertex2i(5,6);
glVertex2i(8,8);
glVertex2i(11,6);
//glVertex2i(4,6);
glEnd();

//grill-3
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(7,6);
glVertex2f(7.25,6);
glVertex2f(7.25,6.5);
glVertex2f(7,6.5);
glEnd();

//grill-4
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(9,6);
glVertex2f(9.25,6);
glVertex2f(9.25,6.5);
glVertex2f(9,6.5);
glEnd();

//grill line
glLineWidth(2.0);
glBegin(GL_LINES);
glVertex2f(1, 6.25);
glVertex2f(9, 6.25);
glEnd();

//tree-1
glColor3f(0.13, 0.1, 0.02);
glBegin(GL_POLYGON);
glVertex2f(9.5,6);
glVertex2f(9.75,6);
glVertex2f(9.75,6.5);
glVertex2f(9.5,6.5);
glEnd();
//tree-top
glColor3f(0.02, 0.29, 0.07);
glBegin(GL_POLYGON);
glVertex2f(9.25,6.5);
glVertex2f(10,6.5);
glVertex2f(9.6,7);
glEnd();

//mountain-
//glColor3f(0.74,0.56,0.56);
//glBegin(GL_POLYGON);
//glVertex2i(8,6);
//glVertex2i(10,8);
//glVertex2i(10,6);
//glVertex2i(8,6);
//glEnd();

//cloud
//glColor3f(0.0,0.0,1.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
//glTranslatef(2+c,8,0);
//glScalef(1.0,1.0,1.0);
//glutSolidSphere(1,100,50);
//glPopMatrix();
//glFlush();
//glEnd();

//glColor3f(0.0,0.0,1.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
//glTranslatef(c,8,0);
//glScalef(-1.0,1.0,1.0);
//glutSolidSphere(1,100,50);
//glPopMatrix();
//glFlush();
//glEnd();

//road
glColor3f(0.38, 0.35, 0.36);
glBegin(GL_POLYGON);
glVertex2i(0,2);
glVertex2i(10,2);
glVertex2i(10,4);
glVertex2i(0,4);
glEnd();






//hare head
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.6+q3,2.5+r3,0);
glRotatef(0,1,1,0);
glutWireSphere(0.2,100,50);
glPopMatrix();
glEnd();
//hare eyes left
glColor3f(70, 0, 0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.7+q3,2.6+r3,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//hare eyes right
glColor3f(70, 0, 0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.7+q3,2.4+r3,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//hare------rakesh
glColor3f(1, 1, 1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(1+q3,2.5+r3,0);//1+c,d,0
//glRotatef(x,1,1,0);
glutSolidSphere(0.5,50,30);
glPopMatrix();















//tortoise head
glColor3f(0.01, 0.15, 0.03);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.5+a3,3.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.2,100,50);
glPopMatrix();
glEnd();
//tortoise eyes left
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.65+a3,3.6,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//tortoise eyes right
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.65+a3,3.4,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();

//tortoise
glColor3f(0.01, 0.15, 0.03);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(1+a3,3.5,0);//1+d,3.5,0
//glRotatef(x,1,1,0);
glutWireSphere(0.5,100,100);
glColor3f(0.66, 0.66, 0.66);
glutWireSphere(0.45,8,8);

glPopMatrix();
//glFlush();
//glEnd();
if(count3>11){
glColor3f(1.0,0.0,0.0);
glPushMatrix();
glTranslatef(6.5,5.0,0.0);
glScalef(0.0015,0.0015,1.0);
output("Let's wait here");
glPopMatrix();
glPushMatrix();
glTranslatef(6.5,4.8,0.0);
glScalef(0.0015,0.0015,1.0);
output("for some time");
glPopMatrix();
}
glFlush();
}
void display4()
{
//sky
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.29, 0.86, 0.97);
glBegin(GL_POLYGON);
glVertex2i(0,10);
glVertex2i(10,10);
glVertex2i(10,6);
glVertex2i(0,6);
glEnd();


//later left cloud
//cloud-1-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.5+cloud4,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.0+cloud4,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-0.2+cloud4,8.8,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();



//left cloud
//cloud-1-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(2.5+cloud4,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.9+cloud4,8.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-1 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(2.2+cloud4,8.8,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();


//right cloud
//cloud-2-rightcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(7.5+cloud4,8.9,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-2 leftcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(7.9+cloud4,8.7,0);
glRotatef(0,1,1,0);
glutWireSphere(0.45,100,50);
glPopMatrix();
glEnd();
//cloud-2 topcloud
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(8.2+cloud4,9,0);
glRotatef(0,1,1,0);
glutWireSphere(0.5,100,50);
glPopMatrix();
glEnd();






//sun
glColor3f(0.99, 0.72, 0.07);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(5.5,8.5,0);
glRotatef(x4,1,1,0);
glutSolidSphere(0.9,100,50);
glPopMatrix();
//glFlush();
glEnd();
  
//greenland
glColor3f(0.09, 0.46, 0.13);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(10,0);
glVertex2i(10,6);
glVertex2i(0,6);
glEnd();


  //mountain-1
glColor3f(0.59, 0.49, 0.33);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2i(3,8);
glVertex2i(6,6);
//glVertex2i(0,6);
glEnd();

//grills-1
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(1,6);
glVertex2f(1.25,6);
glVertex2f(1.25,6.5);
glVertex2f(1,6.5);
glEnd();

//grill-2
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(3,6);
glVertex2f(3.25,6);
glVertex2f(3.25,6.5);
glVertex2f(3,6.5);
glEnd();

//grill-3
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(5,6);
glVertex2f(5.25,6);
glVertex2f(5.25,6.5);
glVertex2f(5,6.5);
glEnd();

//tree-1
glColor3f(0.13, 0.1, 0.02);
glBegin(GL_POLYGON);
glVertex2f(0.5,6);
glVertex2f(0.75,6);
glVertex2f(0.75,6.5);
glVertex2f(0.5,6.5);
glEnd();
//tree-top
glColor3f(0.02, 0.29, 0.07);
glBegin(GL_POLYGON);
glVertex2f(0.25,6.5);
glVertex2f(1,6.5);
glVertex2f(0.6,7);
glEnd();

//mountain-2
glColor3f(0.59, 0.49, 0.33);
glBegin(GL_POLYGON);
glVertex2i(5,6);
glVertex2i(8,8);
glVertex2i(11,6);
//glVertex2i(4,6);
glEnd();

//grill-3
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(7,6);
glVertex2f(7.25,6);
glVertex2f(7.25,6.5);
glVertex2f(7,6.5);
glEnd();

//grill-4
glColor3f(0.19, 0.05, 0.09);
glBegin(GL_POLYGON);
glVertex2f(9,6);
glVertex2f(9.25,6);
glVertex2f(9.25,6.5);
glVertex2f(9,6.5);
glEnd();

//grill line
glLineWidth(2.0);
glBegin(GL_LINES);
glVertex2f(1, 6.25);
glVertex2f(9, 6.25);
glEnd();

//tree-1
glColor3f(0.13, 0.1, 0.02);
glBegin(GL_POLYGON);
glVertex2f(9.5,6);
glVertex2f(9.75,6);
glVertex2f(9.75,6.5);
glVertex2f(9.5,6.5);
glEnd();
//tree-top
glColor3f(0.02, 0.29, 0.07);
glBegin(GL_POLYGON);
glVertex2f(9.25,6.5);
glVertex2f(10,6.5);
glVertex2f(9.6,7);
glEnd();

//mountain-
//glColor3f(0.74,0.56,0.56);
//glBegin(GL_POLYGON);
//glVertex2i(8,6);
//glVertex2i(10,8);
//glVertex2i(10,6);
//glVertex2i(8,6);
//glEnd();

//cloud
//glColor3f(0.0,0.0,1.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
//glTranslatef(2+c,8,0);
//glScalef(1.0,1.0,1.0);
//glutSolidSphere(1,100,50);
//glPopMatrix();
//glFlush();
//glEnd();

//glColor3f(0.0,0.0,1.0);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
//glTranslatef(c,8,0);
//glScalef(-1.0,1.0,1.0);
//glutSolidSphere(1,100,50);
//glPopMatrix();
//glFlush();
//glEnd();

//road
glColor3f(0.38, 0.35, 0.36);
glBegin(GL_POLYGON);
glVertex2i(0,2);
glVertex2i(10,2);
glVertex2i(10,4);
glVertex2i(0,4);
glEnd();

//road-details
glColor3f(1, 1, 1);
glBegin(GL_POLYGON);
glVertex2i(9.75,2);
glVertex2f(7,2);
glVertex2f(7,4);
glVertex2i(9.75,4);


glEnd();

//hare
glColor3f(1, 1, 1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(-3+t4,2.5,0);
//glRotatef(x,1,1,0);
glutWireSphere(0.5,50,30);
glPopMatrix();
//glFlush();
//glEnd();

//hare head
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-2.4+t4,2.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.2,100,50);
glPopMatrix();
glEnd();
//hare eyes left
glColor3f(70, 0, 0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-2.3+t4,2.6,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//hare eyes right
glColor3f(70, 0, 0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-2.3+t4,2.4,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//hare body
glColor3f(1, 1, 1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(-3+t4,2.5,1);
//glTranslatef(-3+c,2.5,0);
//glRotatef(x,1,1,0);
glutSolidSphere(0.5,50,30);
glPopMatrix();
//glFlush();
//glEnd();



//tortoise head
glColor3f(0.01, 0.15, 0.03);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.5+s4,3.5,0);
glRotatef(0,1,1,0);
glutWireSphere(0.2,100,50);
glPopMatrix();
glEnd();
//tortoise eyes left
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.65+s4,3.6,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//tortoise eyes right
glColor3f(1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1.65+s4,3.4,0);
glRotatef(0,1,1,0);
glutWireSphere(0.035,100,50);
glPopMatrix();
glEnd();
//tortoise-body
glColor3f(0.01, 0.15, 0.03);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(1+s4,3.5,0);
glutWireSphere(0.5,100,100);
glColor3f(0.66, 0.66, 0.66);
glutWireSphere(0.45,8,8);
glPopMatrix();

if(count4>100){
glColor3f(1.0,0.0,0.0);
glPushMatrix();
glTranslatef(1.5,1.0,0.0);
glScalef(0.0015,0.0015,1.0);
output("Moral of the story: 'Slow and steady wins the race'");
glPopMatrix();
}

glFlush();
}
void display5()
{
int k;
char s[50];
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0,1.0,0.0);
char str7[]="THANK YOU";
glPushMatrix();
glRasterPos3f(4.5,5.0,0.0);
for(k=0;k<strlen(str7);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[k]);
glPopMatrix();
glFlush();
}


void key(unsigned char key,int x,int y)
{
if(key=='A'||key=='a')
{
	x2=0;c2=0;d2=0;y2=0;z2=0;cloud2=0;count2=0;
	glutDisplayFunc(display2);
}
if(key=='B'||key=='b')
{
	count3=0;x3=0;a3=0;cloud3=0;p3=0;q3=0;r3=0;
glutDisplayFunc(display3);
}
if(key=='C'||key=='c')
{
	x4=0;y4=0;z4=0;cloud4=0;s4=0;t4=0;count4=0;
	glutDisplayFunc(display4);

}
if(key=='D'||key=='d')
{
	glutDisplayFunc(display5);

}

}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1200,800);
  //glutWindowPosition(50,100);
  glutCreateWindow("Slow and steady wins the race");
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0,10,0,10);
  glClearColor(0, 0.75, 0.55,0);
  glutDisplayFunc(display1);
  glutKeyboardFunc(key);
  timer2(0);
  timer3(0);
  timer4(0);
  glutFullScreen();
  glutMainLoop();
  return 0;
}
