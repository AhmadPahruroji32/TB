//---------------------------Library---------------------------//
#include<GL/glut.h>
//---------------------------Deklarasi Fungsi---------------------------//
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int x, int y);
void initLighting();
//---------------------------variabel yang dapat di akses---------------------------//
bool hidden = false;
float aspect;
//salma
//---------------------------Fungsi Kartesius---------------------------//
void drawCartesius()
{
    glLineWidth(2.0); 
    glBegin(GL_LINES);
    
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-20.0, 0.0, 0.0);
    glVertex3f(20.0, 0.0, 0.0);
    
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, -20.0, 0.0);
    glVertex3f(0.0, 20.0, 0.0);
    
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.0, -20.0);
    glVertex3f(0.0, 0.0, 20.0);
    
    glEnd();
}
//roji
//fungsi membuat meja kursi dan leptop
void mejkurlep(){
//-------------------------------------------Meja--------------------------
//kakai meja 1
	glPushMatrix();
	glTranslatef(14.75f, -2.0f, 8.75f); 
	glScalef(0.5f, 6.0f, 0.5f);  
	glColor3ub(255, 240, 150);
	glutSolidCube(1.0f);  
	glPopMatrix();
//kakai meja 2
	glPushMatrix();
	glTranslatef(10.75f, -2.0f, 8.25f);  
	glScalef(0.5f, 6.0f, 0.5f);  
	glColor3ub(255, 240, 150);  
	glutSolidCube(1.0f);  
	glPopMatrix();
//kakai meja 3
	glPushMatrix();
	glTranslatef(10.5f, -2.0f, 0.10f);  
	glScalef(0.5f, 6.0f, 0.5f);  
	glColor3ub(255, 240, 150);
	glutSolidCube(1.0f);  
	glPopMatrix();
//kakai meja  4
	glPushMatrix();
	glTranslatef(14.5f, -2.0f, 0.10f);  
	glScalef(0.5f, 6.0f, 0.5f);  
	glColor3ub(255, 240, 150);  
	glutSolidCube(1.0f);  
	glPopMatrix();
//papan
// Bawah meja
	glPushMatrix();
	glTranslatef(12.75f, 0.63f, 4.25f);
	glScalef(4.5f, 0.5f, 9.5f);  
	glColor3ub(255, 240, 150);  
	glutSolidCube(1.0f);  
	glPopMatrix();
//-----------------------------------------leptop----------------------
// Body Layar
    glPushMatrix();
    glTranslatef(12.7f, 1.90f, 3.901f);
    glScalef(0.20f, 2.3f, 2.5f);
    glColor3f(0.1f, 0.1f, 0.1f);
    glutSolidCube(1.0f);
    glPopMatrix();
// Layar LCD laptop
    glPushMatrix();
    glTranslatef(12.5f, 1.90f, 3.9f);
    glScalef(0.0f, 1.9f, 2.0f);
    glColor3f(0.0f, 1.0f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
// Body Bawah Laptop
    glPushMatrix();
    glTranslatef(11.8f, 1.0f, 3.9f);
    glScalef(1.8f, 0.25f, 2.5f);
    glColor3f(0.3f, 0.3f, 0.3f);
    glutSolidCube(1.0f);
    glPopMatrix();
// Keyboard Laptop
    glPushMatrix();
    glTranslatef(11.5f, 1.2f, 3.9f);
    glScalef(1.0f, 0.0f, 2.4f);
    glColor3f(0.1f, 0.1f, 0.1f);
    glutSolidCube(1.0f);
    glPopMatrix();
//--------------------------------------------------kursi-----------------------
// kakai kursi  1
    glPushMatrix();
    glColor3ub(48, 52, 59);
    glTranslatef(11.75, -3.5, 5.70);
    glScalef(0.5, 2.9, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();
// kakai kursi  2
    glPushMatrix();
    glColor3ub(48, 52, 59);
    glTranslatef(8.0, -3.5, 5.70);
    glScalef(0.5, 2.9, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();
// kakai kursi  3
    glPushMatrix();
    glColor3ub(48, 52, 59);
    glTranslatef(8.75, -3.5, 2.75);
    glScalef(0.5, 2.8, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();
// kakai kursi  4
    glPushMatrix();
    glColor3ub(48, 52, 59);
    glTranslatef(11.75, -3.5, 2.75);
    glScalef(0.5, 2.8, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();
// Busa (dudukan kursi)
    glPushMatrix();
    glColor3ub(78, 83, 92);
    glTranslatef(10.25, -2.25, 4.25);
    glScalef(4.0, 0.5, 3.5);
    glutSolidCube(1.0);
    glPopMatrix();
// Bawah busa (penyangga)
    glPushMatrix();
    glColor3ub(48, 52, 59);
    glTranslatef(10.25, -2.75, 4.25);
    glScalef(4.0, 0.5, 3.5);
    glutSolidCube(1.0);
    glPopMatrix();
// Sandaran kursi
    glPushMatrix();
    glColor3ub(48, 52, 59);
    glTranslatef(8.0, -1.0, 4.25);
    glScalef(0.5, 4.0, 3.5);
    glutSolidCube(1.0);
    glPopMatrix();
}
//salma
void keyboard(unsigned char key, int x, int y)
{

switch (key)
{
	
	case 'd':
 		glTranslated(1.0, 0.0, 0.0);//geser kanan
 		break;
 	case 'a':
 		glTranslated(-1.0, 0.0, 0.0);//geser kiri
 		break;
 	case 's':
 		glTranslated(0.0, -1.0, 0.0);//geser bawah
 		break;
 	case 'w':
 		glTranslated(0.0, 1.0, 0.0);//geser atas
 		break;
 	case 'q':
 		glTranslated(0.0, 0.0, 1.0);//dalam objek
 		break;
	case 'e':
 		glTranslated(0.0, 0.0, -1.0);//keluar objek
 		break;
 	case 'i':
 		glRotatef(2.0, -1.0, 0.0, 0.0);//rotate atas
		break;
 	case 'k':
 		glRotatef(2.0, 1.0, 0.0, 0.0);//rotate bawah
 		break;
 	case 'j':
  		glRotatef(2.0, 0.0, -1.0, 0.0);//rotate kiri
 		break;
 	case 'l':
  		glRotatef(2.0, 0.0, 1.0, 0.0);//rotate kanan
 		break;
 	case 'b': 
        hidden = !hidden;
        break;
}
	glutPostRedisplay();
}
//Roji
void display(){
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
//-------------------------------------Dingding dan Laintai----------------
// Lantai
	glPushMatrix();
	glTranslatef(2.0f, -5.5f, -1.0f);
	glScalef(27.0f, 1.f, 21.0f); 
	glColor3ub(227, 202, 175);
	glutSolidCube(1.0f);
	glPopMatrix();
// Posisi dan ukuran tembok belakang
// Bagian depan dari tembok belakang
	glPushMatrix();
	glTranslatef(1.5f, 1.0f, -10.5f); 
	glScalef(27.0f, 14.0f, 0.0f);  
	glColor3f(139.0f / 255.0f, 69.0f / 255.0f, 19.0f / 255.0f);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian atas dari tembok belakang
	glPushMatrix();
	glTranslatef(1.5f, 1.0f, -11.5f);  
	glScalef(27.0f, -14.0f, 1.0f);  
	glColor3ub(143, 143, 143);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Posisi dan ukuran tembok kiri
// Bagian depan dari tembok kiri
	glPushMatrix();
	glTranslatef(-11.4f, 1.0f, -1.0f);  
	glScalef(0.0f, 14.0f, 21.0f); 
	glColor3f(139.0f / 255.0f, 69.0f / 255.0f, 19.0f / 255.0f); 
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian atas dari tembok kiri
	glPushMatrix();
	glTranslatef(-12.0f, 1.0f, -1.0f);
	glScalef(1.0f, 14.0f, 22.0f); 
	glColor3ub(143, 143, 143);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Tembok kanan
// Posisi dan ukuran tembok kanan
// Bagian depan dari tembok kanan
	glPushMatrix();
	glTranslatef(14.9f, 1.0f, -5.0f);  
	glScalef(0.0f, 14.0f, 13.0f);  
	glColor3f(139.0f / 255.0f, 69.0f / 255.0f, 19.0f / 255.0f);  
	glutSolidCube(1.0f); 
	glPopMatrix();
// Bagian atas dari tembok kanan
	glPushMatrix();
	glTranslatef(15.5f, 1.0f, -5.5f); 
	glScalef(1.0f, 14.0f, 13.0f);  
	glColor3ub(143, 143, 143);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Posisi dan ukuran tembok kiri
// Bagian depan dari tembok kiri
	glPushMatrix();
	glTranslatef(14.9f, 1.0f, 9.0f);  
	glScalef(0.0f, 14.0f, 2.0f);  
	glColor3f(139.0f / 255.0f, 69.0f / 255.0f, 19.0f / 255.0f);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian atas dari tembok kiri
	glPushMatrix();
	glTranslatef(15.5f, 1.0f, 9.0f); 
	glScalef(1.0f, 14.0f, 2.0f);  
	glColor3ub(143, 143, 143);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Posisi dan ukuran tembok kanan bagian bawah
// Bagian depan dari kanan bawah
	glPushMatrix();
	glTranslatef(14.9f, -2.5f, 4.5f); 
	glScalef(0.0f, 7.0f, 7.0f);  
	glColor3f(139.0f / 255.0f, 69.0f / 255.0f, 19.0f / 255.0f);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian atas dari kanan bawah
	glPushMatrix();
	glTranslatef(15.5f, -2.5f, 4.5f);  
	glScalef(1.0f, 7.0f, 7.0f);  
	glColor3ub(135, 135, 135);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Kanan (Atas)
// Bagian depan dari kanan atas
	glPushMatrix();
	glTranslatef(14.9f, 6.5f, 4.0f);
	glScalef(0.0f, 3.0f, 8.0f);  
	glColor3f(139.0f / 255.0f, 69.0f / 255.0f, 19.0f / 255.0f);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian atas dari kanan atas
	glPushMatrix();
	glTranslatef(15.5f, 6.5f, 4.0f);
	glScalef(1.0f, 3.0f, 8.0f);  
	glColor3ub(143, 143, 143);  
	glutSolidCube(1.0f); 
	glPopMatrix();
//-------------------------------------Jendela 1----------------------------------
// Bagian depan jendela
	glPushMatrix();
	glTranslatef(15.75f, 3.0f, 6.0f);
	glScalef(0.5f, 4.0f, 4.0f);  
	glColor3ub(186, 186, 186);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian belakang jendela
	glPushMatrix();
	glTranslatef(15.25f, 3.0f, 6.0f);  
	glScalef(0.5f, 4.0f, 2.0f);  
	glColor3ub(186, 186, 186);
	glutSolidCube(1.0f);  
	glPopMatrix();
//-------------------------------------------Jendela 2--------------------------
	glPushMatrix();
	glTranslatef(16.5f, 3.0f, 1.0f);
	glScalef(3.0f, 4.0f, 1.0f);
	glColor3ub(176, 176, 176); 
	glutSolidCube(1.0f);
	glPopMatrix();
//salma
//--------------------------------------------	Pintu-------------------
// Bagian atas pintu
	glPushMatrix();
	glTranslatef(-7.75f, 1.0f, -9.75f);  
	glScalef(5.5f, 12.5f, 0.5f);  
	glColor3ub(255, 240, 150);  
	glutSolidCube(1.0f); 
	glPopMatrix();
// Bagian atas aksesoris
	glPushMatrix();
	glTranslatef(-7.75f, 3.5f, -9.4f);
	glScalef(3.5f, 2.5f, 0.5f);
	glColor3ub(163, 131, 91);  
	glutSolidCube(1.0f);  
	glPopMatrix();
// Bagian bawah hiasan
	glPushMatrix();
	glTranslatef(-7.75f, -2.0f, -9.4f); 
	glScalef(3.5f, 2.0f, 0.5f);  
	glColor3ub(163, 131, 91); 
	glutSolidCube(1.0f); 
	glPopMatrix();
// Pegangan pintu
	glPushMatrix();
	glTranslatef(-6.75f, 1.0f, -9.4f);
	glScalef(0.5f, 1.0f, 0.5f);
	glColor3ub(163, 131, 91);  
	glutSolidCube(1.0f); 
	glPopMatrix();
//-----------------------------------------AC------------------------------------
	glPushMatrix();
	glTranslatef(0.5f, 5.5f, -8.5f);
	glScalef(7.0f, 2.0f, 2.0f);
	glColor3ub(255, 255, 255); 
	glutSolidCube(1.0f);
	glPopMatrix();
//Salma
//---------------------------------------lomari baju------------------------------
//badan lemari (depan)
    glPushMatrix();
    glColor3ub(255, 240, 150); 
    glTranslatef(10.5, 0.0, -6.0); 
    glScalef(5.0, 12.0, 0.1);
    glutSolidCube(1.0);
    glPopMatrix();
//sisi kanan lemari
    glPushMatrix();
    glColor3ub(201, 191, 125);
    glTranslatef(13.15, 0.25, -8.0);
    glScalef(0.3, 12.0, 4.0); 
    glutSolidCube(1.0);
    glPopMatrix();
// sisi kiri lemari
    glPushMatrix();
    glColor3ub(201, 191, 125);
    glTranslatef(7.85, 0.25, -8.0); 
    glScalef(0.3, 12.0, 4.0); 
    glutSolidCube(1.0);
    glPopMatrix();
// atas lemari
    glPushMatrix();
    glColor3ub(166, 159, 118); 
    glTranslatef(10.5, 6.0, -8.0); 
    glScalef(5.0, 0.1, 4.0); 
    glutSolidCube(1.0);
    glPopMatrix();
// garis tengah depan
    glPushMatrix();
    glColor3ub(201, 191, 125);
    glTranslatef(9.35, 0.0, -5.9);
    glScalef(0.3, 12.0, 0.1); 
    glutSolidCube(1.0);
    glPopMatrix();
//pegangan Lemari
    glPushMatrix();
    glColor3ub(201, 191, 125); 
    glTranslatef(10.35, 0.5, -5.9); 
    glScalef(0.3, 1.0, 0.1); 
    glutSolidCube(1.0);
    glPopMatrix();
    
    mejkurlep();
  if (hidden) {
        drawCartesius();
    }
    glScalef(scale, scale, scale);
	glFlush();
	glutSwapBuffers();
}
//Roji
//fungsi pencahayaan
void initLighting()
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat lightPos[] = {80.0f, 60.0f, 50.0f, 1.0f};
    GLfloat lightDiffuse[] = {0.8f, 0.8f, 0.8f, 1.0f};
    GLfloat lightSpecular[] = {1.0f, 1.0f, 1.0f, 1.0f};

    glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDiffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpecular);

    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glShadeModel(GL_SMOOTH);
}
//Roji
//fungsi untuk setting viewport
void reshape(int w, int h){
 	 if (h == 0)
        h = 1;
    aspect = (float)w / (float)h;
    glViewport(0, 0, w, h);
 	glMatrixMode(GL_PROJECTION); 
 	glLoadIdentity(); 
 	gluPerspective(30.0, aspect, 1.0, 200.0);
    gluLookAt(0.0, 1.0, 30.0, 0.0, -11.0, 0.0, 0.0, 1.0, 0.0); 
	glTranslatef(0.0, -30.0, -80.0);
 	glMatrixMode(GL_MODELVIEW); 
}
void init(){
 	glEnable(GL_DEPTH_TEST); 
 	glClearColor(0.0, 0.0, 0.0, 1.0);
    initLighting();
}
//salma
//---------------------------Main Program---------------------------//
int main (int argc, char** argv){
 //inisialisasi
	glutInit(&argc, argv);
	glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
	glLoadIdentity(); 
 	glutInitWindowPosition(100, 100); 
 	glutInitWindowSize(800, 600); 
 	glutCreateWindow("Ruang Kerja ");
 	glutDisplayFunc(display); 
 	glutReshapeFunc(reshape); 
 	glutKeyboardFunc(keyboard); 
 	init();
 	glutMainLoop(); 
}
