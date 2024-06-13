#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"


GLfloat angleX = 0.0;
GLfloat angleY = 2.0;
int lastMouseX;
int lastMouseY;

GLuint texture1;
GLuint texture2;
GLuint texture3;
GLuint texture4;
GLuint texture5;
GLuint texture6;
GLuint texture7;
GLuint texture8;


void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int);
void loadTexture(const char* texturePath);



int main (int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(400, 300);
    glutInitWindowSize(800, 800);
    glutCreateWindow("PROJECT 3D");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();

}

void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
	glClearColor(0.2, 0.2, 0.2, 1.0);
	//TEKSTUR 1
    int width, height, channels;
    unsigned char* image = stbi_load("E:\BTS.jpg", &width, &height, &channels, STBI_rgb_alpha);
    if (image == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture1);
    glBindTexture(GL_TEXTURE_2D, texture1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
    stbi_image_free(image);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 2
    int width2, height2, channels2;
    unsigned char* image2 = stbi_load("E:\pasir.jpg", &width2, &height2, &channels2, STBI_rgb_alpha);
    if (image2 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture2);
    glBindTexture(GL_TEXTURE_2D, texture2);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
    stbi_image_free(image2);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 3
    int width3, height3, channels3;
    unsigned char* image3 = stbi_load("E:\gambar4.jpg", &width3, &height3, &channels3, STBI_rgb_alpha);
    if (image3 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture3);
    glBindTexture(GL_TEXTURE_2D, texture3);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
    stbi_image_free(image3);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 4
    int width4, height4, channels4;
    unsigned char* image4 = stbi_load("E:\images.jpeg", &width4, &height4, &channels4, STBI_rgb_alpha);
    if (image4 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture4);
    glBindTexture(GL_TEXTURE_2D, texture4);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width4, height4, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
    stbi_image_free(image4);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 5
    int width5, height5, channels5;
    unsigned char* image5 = stbi_load("E:\gambar5.jpg", &width5, &height5, &channels5, STBI_rgb_alpha);
    if (image5 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture5);
    glBindTexture(GL_TEXTURE_2D, texture5);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width5, height5, 0, GL_RGBA, GL_UNSIGNED_BYTE, image5);
    stbi_image_free(image5);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 6
    int width6, height6, channels6;
    unsigned char* image6 = stbi_load("E:\dog.jpg", &width6, &height6, &channels6, STBI_rgb_alpha);
    if (image6 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture6);
    glBindTexture(GL_TEXTURE_2D, texture6);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width6, height6, 0, GL_RGBA, GL_UNSIGNED_BYTE, image6);
    stbi_image_free(image6);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 7
    int width7, height7, channels7;
    unsigned char* image7 = stbi_load("E:\gambar7.jpg", &width7, &height7, &channels7, STBI_rgb_alpha);
    if (image7 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture7);
    glBindTexture(GL_TEXTURE_2D, texture7);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width7, height7, 0, GL_RGBA, GL_UNSIGNED_BYTE, image7);
    stbi_image_free(image7);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //TEKSTUR 8
    int width8, height8, channels8;
    unsigned char* image8 = stbi_load("E:\gambar8.jpg", &width8, &height8, &channels8, STBI_rgb_alpha);
    if (image8 == NULL) {
        printf("Error loading texture 1\n");
        exit(1);
    }
    glGenTextures(1, &texture8);
    glBindTexture(GL_TEXTURE_2D, texture8);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width8, height8, 0, GL_RGBA, GL_UNSIGNED_BYTE, image8);
    stbi_image_free(image8);

    // Parameter Tekstur yang digunakan
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    // Posisi Cahaya
    GLfloat light_position[] = { 10.0, 10.0, 10.0, 1.0 };
    GLfloat light_ambient[] = { 0.1, 0.1, 0.1, 1.0 };
    GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    glEnable(GL_LIGHT1);
    GLfloat light1_position[] = { -10.0, 10.0, 10.0, 1.0 };
    GLfloat light1_diffuse[] = { 0.5, 0.5, 0.5, 1.0 };

    glLightfv(GL_LIGHT1, GL_POSITION, light1_position);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light1_diffuse);

    // Penggunaan warna dengan cahaya
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);


}



void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //DINDING DEPAN
    glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture8);
    glBegin(GL_QUADS);
    glColor3ub(224, 224, 206); // Warna putih untuk menghindari efek warna
    glTexCoord2f(1.0f, 0.0f); glVertex3f(-30.0, 50.0, 3.0);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(-30.0, -30.0, 3.0);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(30.0, -30.0, 3.0);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(30.0, 50.0, 3.0);
    glEnd();
    glDisable(GL_TEXTURE_2D);

    //DINDING BELAKANG
    glBegin(GL_QUADS);
    glColor3ub(53,56,54);
    glVertex3f(-30.0, 50.0, -3.0);
    glVertex3f(-30.0, -30.0, -3.0);
    glVertex3f(30.0, -30.0, -3.0);
    glVertex3f(30.0, 50.0, -3.0);
    glEnd();

    //DINDING ATAS
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, 50.0, -3.0);
     glVertex3f(-30.0, 50.0, 3.0);
     glVertex3f(30.0, 50.0, 3.0);
     glVertex3f(30.0, 50.0, -3.0);
     glEnd();

     //DINDING BAWAH
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, -30.0, -3.0);
     glVertex3f(-30.0, -30.0, 3.0);
     glVertex3f(30.0, -30.0, 3.0);
     glVertex3f(30.0, -30.0, -3.0);
     glEnd();

     //DINDING KANAN
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(30.0, 50.0, 3.0);
     glVertex3f(30.0, -30.0, 3.0);
     glVertex3f(30.0, -30.0, -3.0);
     glVertex3f(30.0, 50.0, -3.0);
     glEnd();

     //DINDING KIRI
     glBegin(GL_QUADS);
     glColor3ub(119, 128, 121);
     glVertex3f(-30.0, 50.0, -3.0);
     glVertex3f(-30.0, -30.0, -3.0);
     glVertex3f(-30.0, -30.0, 3.0);
     glVertex3f(-30.0, 50.0, 3.0);
     glEnd();

     //pondasi
     glBegin(GL_QUADS); //depan
     glColor3ub(255, 255, 255);
     glVertex3f(-27.0, 50.0, 3.5);
     glVertex3f(-27.0, 48.5, 3.5);
     glVertex3f(30.0, 48.5, 3.5);
     glVertex3f(30.0, 50.0, 3.5);
     glEnd();

     glBegin(GL_QUADS); //atas bawah
     glColor3ub(255, 255, 255);
     glVertex3f(-27.0, 48.5, 3.5);
     glVertex3f(-27.0, 48.5, 3.0);
     glVertex3f(30.0, 48.5, 3.0);
     glVertex3f(30.0, 48.5, 3.5);
     glEnd();

     glBegin(GL_QUADS); //atas
     glColor3ub(255, 255, 255);
     glVertex3f(-27.0, 50.0, 3.5);
     glVertex3f(-27.0, 50.0, 3.0);
     glVertex3f(30.0, 50.0, 3.0);
     glVertex3f(30.0, 50.0, 3.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex3f(30.0, 50.0, 3.5);
     glVertex3f(30.0, 48.5, 3.5);
     glVertex3f(30.0, 48.5, 3.0);
     glVertex3f(30.0, 50.0, 3.0);
     glEnd();


     //DINDING KIRI
     //depan
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, 50.0, 60.0);
     glVertex3f(-30.0, -30.0, 60.0);
     glVertex3f(-27.0, -30.0, 60.0);
     glVertex3f(-27.0, 50.0, 60.0);
     glEnd();

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, 50.0, 60.0);
     glVertex3f(-27.0, 50.0, 60.0);
     glVertex3f(-27.0, 50.0, 3.0);
     glVertex3f(-30.0, 50.0, 3.0);
     glEnd();

     //dinding belakang
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, 50.0, 3.0);
     glVertex3f(-30.0, -30.0, 3.0);
     glVertex3f(-27.0, -30.0, 3.0);
     glVertex3f(-27.0, 50.0, 3.0);
     glEnd();

     //dinding kiri
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, 50.0, 60.0);
     glVertex3f(-30.0, -30.0, 60.0);
     glVertex3f(-30.0, -30.0, 3.0);
     glVertex3f(-30.0, 50.0, 3.0);
     glEnd();

     //dinding kanan
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture8);
     glBegin(GL_QUADS);
     glColor3ub(224, 224, 206); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(-27.0, 50.0, 60.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(-27.0, -30.0, 60.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(-27.0, -30.0, 3.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(-27.0, 50.0, 3.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);

     //pondasi
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); //depan
     glVertex3f(-26.5, 50.0, 60.0);
     glVertex3f(-26.5, 48.5, 60.0);
     glVertex3f(-26.5, 48.5, 3.0);
     glVertex3f(-26.5, 50.0, 3.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); //bawah
     glVertex3f(-27.0, 48.5, 60.0);
     glVertex3f(-26.5, 48.5, 60.0);
     glVertex3f(-26.5, 48.5, 3.0);
     glVertex3f(-27.0, 48.5, 3.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); //atas
     glVertex3f(-27.0, 50.0, 60.0);
     glVertex3f(-26.5, 50.0, 60.0);
     glVertex3f(-26.5, 50.0, 3.0);
     glVertex3f(-27.0, 50.0, 3.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);
     glVertex3f(-27.0, 50.0, 60.0);
     glVertex3f(-27.0, 48.5, 60.0);
     glVertex3f(-26.5, 48.5, 60.0);
     glVertex3f(-26.5, 50.0, 60.0);
     glEnd();


     //ALAS (LANTAI)
     //depan
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, -30.0, 60.0);
     glVertex3f(30.0, -30.0, 60.0);
     glVertex3f(30.0, -27.0, 60.0);
     glVertex3f(-30.0, -27.0, 60.0);
     glEnd();

     //belakang
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(30.0, -30.0, 60.0);
     glVertex3f(30.0, -30.0, 3.0);
     glVertex3f(30.0, -27.0, 3.0);
     glVertex3f(30.0, -27.0, 60.0);
     glEnd();

     //belakang
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, -30.0, 3.0);
     glVertex3f(30.0, -30.0, 3.0);
     glVertex3f(30.0, -27.0, 3.0);
     glVertex3f(-30.0, -27.0, 3.0);
     glEnd();

     //atas bawah
     glBegin(GL_QUADS);
     glColor3ub(53,56,54);
     glVertex3f(-30.0, -30.0, 60.0);
     glVertex3f(30.0, -30.0, 60.0);
     glVertex3f(30.0, -30.0, 3.0);
     glVertex3f(-30.0, -30.0, 3.0);
     glEnd();

     //atas atas
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture7);
     glBegin(GL_QUADS);
     glColor3ub(82, 49, 15); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(-30.0, -27.0, 60.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(30.0, -27.0, 60.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(30.0, -27.0, 3.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(-30.0, -27.0, 3.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);


     //SOFA
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, -12.0, 18.0); //atas kiri
     glVertex3f(-20.0, -26.5, 18.0);//bawah kiri
     glVertex3f(20.0, -26.5, 18.0);//bawah kanan
     glVertex3f(20.0, -12.0, 18.0); //atas kanan
     glEnd();

     //depan
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, 3.0, 4.0); //atas kiri
     glVertex3f(-20.0, -26.5, 4.0);//bawah kiri
     glVertex3f(20.0, -26.5, 4.0);//bawah kanan
     glVertex3f(20.0, 3.0, 4.0); //atas kanan
     glEnd();

     //sofa kanan
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(20.0, -12.0, 18.0); //atas kiri
     glVertex3f(20.0, -26.5, 18.0);//bawah kiri
     glVertex3f(20.0, -26.5, 4.0);//bawah kanan
     glVertex3f(20.0, -12.0, 4.0); //atas kanan
     glEnd();

     //sofa kiri
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, -12.0, 18.0); //atas kiri
     glVertex3f(-20.0, -26.5, 18.0);//bawah kiri
     glVertex3f(-20.0, -26.5, 4.0);//bawah kanan
     glVertex3f(-20.0, -12.0, 4.0); //atas kanan
     glEnd();

     //alas sofa
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(20.0, -12.0, 18.0);
     glVertex3f(-20.0, -12.0, 18.0);
     glVertex3f(-20.0, -12.0, 4.0);
     glVertex3f(20.0, -12.0, 4.0);
     glEnd();

     glBegin(GL_QUADS);//2
     glColor3ub(161, 149, 149);
     glVertex3f(18.0, -11.0, 17.0);
     glVertex3f(-18.0, -11.0, 17.0);
     glVertex3f(-18.0, -11.0, 4.0);
     glVertex3f(18.0, -11.0, 4.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(161, 149, 149);
     glVertex3f(18.0, -11.0, 17.0);
     glVertex3f(18.0, -12.0, 17.0);
     glVertex3f(18.0, -12.0, 4.0);
     glVertex3f(18.0, -11.0, 4.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(161, 149, 149);
     glVertex3f(-18.0, -11.0, 17.0);
     glVertex3f(-18.0, -12.0, 17.0);
     glVertex3f(-18.0, -12.0, 4.0);
     glVertex3f(-18.0, -11.0, 4.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(161, 149, 149);
     glVertex3f(-18.0, -11.0, 17.0);
     glVertex3f(-18.0, -12.0, 17.0);
     glVertex3f(18.0, -12.0, 17.0);
     glVertex3f(18.0, -11.0, 17.0);
     glEnd();

     //sandaran sofa
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, 3.0, 7.0); //atas kiri
     glVertex3f(-20.0, -26.5, 7.0);//bawah kiri
     glVertex3f(20.0, -26.5, 7.0);//bawah kanan
     glVertex3f(20.0, 3.0, 7.0); //atas kanan
     glEnd();

     //kanan2
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(20.0, 3.0, 7.0); //atas kiri
     glVertex3f(20.0, -12.0, 7.0);//bawah kiri
     glVertex3f(20.0, -12.0, 4.0);//bawah kanan
     glVertex3f(20.0, 3.0, 4.0); //atas kanan
     glEnd();

     //kiri2
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, 3.0, 7.0); //atas kiri
     glVertex3f(-20.0, -12.0, 7.0);//bawah kiri
     glVertex3f(-20.0, -12.0, 4.0);//bawah kanan
     glVertex3f(-20.0, 3.0, 4.0); //atas kanan
     glEnd();

     //alas sandaran
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49); // COKLAT MUDA
     glVertex3f(20.0,3.0, 7.0);
     glVertex3f(-20.0, 3.0, 7.0);
     glVertex3f(-20.0, 3.0, 4.0);
     glVertex3f(20.0, 3.0, 4.0);
     glEnd();

     glBegin(GL_QUADS); //2
     glColor3ub(161, 149, 149);
     glVertex3f(-18.0, 2.0, 8.0);
     glVertex3f(-18.0, -27.5, 8.0);
     glVertex3f(18.0, -27.5, 8.0);
     glVertex3f(18.0, 2.0, 8.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(161, 149, 149);
     glVertex3f(18.0, 2.0, 8.0);
     glVertex3f(18.0, -27.5, 8.0);
     glVertex3f(18.0, -27.5, 4.0);
     glVertex3f(18.0, 2.0, 4.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(161, 149, 149);
     glVertex3f(-18.0, 2.0, 8.0);
     glVertex3f(-18.0, -27.5, 8.0);
     glVertex3f(-18.0, -27.5, 4.0);
     glVertex3f(-18.0, 2.0, 4.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(161, 149, 149);
     glVertex3f(-18.0, 2.0, 8.0);
     glVertex3f(-18.0, 2.0, 4.0);
     glVertex3f(18.0, 2.0, 4.0);
     glVertex3f(18.0, 2.0, 8.0);
     glEnd();

     //SANDARAN SAMPING SOFA
     //samping kanan
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(20.0, -6.0, 7.0); //atas kiri
     glVertex3f(20.0, -12.0, 7.0);//bawah kiri
     glVertex3f(20.0, -12.0, 13.0);//bawah kanan
     glVertex3f(20.0, -6.0, 13.0); //atas kanan
     glEnd();

     //samping kiri
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, -6.0, 7.0); //atas kiri
     glVertex3f(-20.0, -12.0, 7.0);//bawah kiri
     glVertex3f(-20.0, -12.0, 13.0);//bawah kanan
     glVertex3f(-20.0, -6.0, 13.0); //atas kanan
     glEnd();

     //samping kiri2
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-19.0, -6.0, 7.0); //atas kiri
     glVertex3f(-19.0, -12.0, 7.0);//bawah kiri
     glVertex3f(-19.0, -12.0, 13.0);//bawah kanan
     glVertex3f(-19.0, -6.0, 13.0); //atas kanan
     glEnd();

     //depan kiri atas
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, -6.0, 13.0); //atas kiri
     glVertex3f(-20.0, -12.0, 13.0);//bawah kiri
     glVertex3f(-19.0, -12.0, 13.0);//bawah kanan
     glVertex3f(-19.0, -6.0, 13.0); //atas kanan
     glEnd();

     //samping kanan2
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(19.0, -6.0, 7.0); //atas kiri
     glVertex3f(19.0, -12.0, 7.0);//bawah kiri
     glVertex3f(19.0, -12.0, 13.0);//bawah kanan
     glVertex3f(19.0, -6.0, 13.0); //atas kanan
     glEnd();

     //depan kanan atas
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(20.0, -6.0, 13.0); //atas kiri
     glVertex3f(20.0, -12.0, 13.0);//bawah kiri
     glVertex3f(19.0, -12.0, 13.0);//bawah kanan
     glVertex3f(19.0, -6.0, 13.0); //atas kanan
     glEnd();

     //atas kanan
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(20.0, -6.0, 13.0); //atas kiri
     glVertex3f(19.0, -6.0, 13.0);//bawah kiri
     glVertex3f(19.0, -6.0, 7.0);//bawah kanan
     glVertex3f(20.0, -6.0, 7.0); //atas kanan
     glEnd();

     //atas kiri
     glBegin(GL_QUADS);
     glColor3ub(51, 50, 49);
     glVertex3f(-20.0, -6.0, 13.0); //atas kiri
     glVertex3f(-19.0, -6.0, 13.0);//bawah kiri
     glVertex3f(-19.0, -6.0, 7.0);//bawah kanan
     glVertex3f(-20.0, -6.0, 7.0); //atas kanan
     glEnd();


     //KESET
     //bawah
     glBegin(GL_QUADS);
     glColor3ub(191, 176, 176);
     glVertex3f(-12.0, -26.9, 48.0);
     glVertex3f(12.0, -26.9, 48.0);
     glVertex3f(12.0, -26.9, 21.0);
     glVertex3f(-12.0, -26.9, 21.0);
     glEnd();

     //atas
     glBegin(GL_QUADS);
     glColor3ub(191, 176, 176);
     glVertex3f(-12.0, -25.3, 48.0);
     glVertex3f(12.0, -25.3, 48.0);
     glVertex3f(12.0, -25.3, 21.0);
     glVertex3f(-12.0, -25.3, 21.0);
     glEnd();

     //depan
     glBegin(GL_QUADS);
     glColor3ub(191, 176, 176);
     glVertex3f(-12.0, -26.9, 48.0);
     glVertex3f(12.0, -26.9, 48.0);
     glVertex3f(12.0, -25.3, 48.0);
     glVertex3f(-12.0, -25.3, 48.0);
     glEnd();

     //belakang
     glBegin(GL_QUADS);
     glColor3ub(191, 176, 176);
     glVertex3f(-12.0, -26.9, 21.0);
     glVertex3f(12.0, -26.9, 21.0);
     glVertex3f(12.0, -25.3, 21.0);
     glVertex3f(-12.0, -25.3, 21.0);
     glEnd();

     //kanan
     glBegin(GL_QUADS);
     glColor3ub(191, 176, 176);
     glVertex3f(12.0, -26.9, 21.0);
     glVertex3f(12.0, -26.9, 48.0);
     glVertex3f(12.0, -25.3, 48.0);
     glVertex3f(12.0, -25.3, 21.0);
     glEnd();

     //kiri
     glBegin(GL_QUADS);
     glColor3ub(191, 176, 176);
     glVertex3f(-12.0, -26.9, 21.0);
     glVertex3f(-12.0, -26.9, 48.0);
     glVertex3f(-12.0, -25.3, 48.0);
     glVertex3f(-12.0, -25.3, 21.0);
     glEnd();


     //BINGKAI 1
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-20.0, 30.0, 4.0);
     glVertex3f(-20.0, 15.0, 4.0);
     glVertex3f(-5.0, 15.0, 4.0);
     glVertex3f(-5.0, 30.0, 4.0);
     glEnd();

     //depan
    glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
    glBindTexture(GL_TEXTURE_2D, texture1);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // Warna putih untuk menghindari efek warna
    glTexCoord2f(1.0f, 0.0f); glVertex3f(-20.0, 30.0, 6.0);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(-20.0, 15.0, 6.0);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-5.0, 15.0, 6.0);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-5.0, 30.0, 6.0);
    glEnd();
    glDisable(GL_TEXTURE_2D);

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-20.0, 30.0, 4.0);
     glVertex3f(-5.0, 30.0, 4.0);
     glVertex3f(-5.0, 30.0, 6.0);
     glVertex3f(-20.0, 30.0, 6.0);
     glEnd();

     //tutup bawah
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-20.0, 15.0, 4.0);
     glVertex3f(-5.0, 15.0, 4.0);
     glVertex3f(-5.0, 15.0, 6.0);
     glVertex3f(-20.0, 15.0, 6.0);
     glEnd();

     //tutup kiri
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-5.0, 30.0, 4.0);
     glVertex3f(-5.0, 15.0, 4.0);
     glVertex3f(-5.0, 15.0, 6.0);
     glVertex3f(-5.0, 30.0, 6.0);
     glEnd();

     //tutup kanan
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-20.0, 30.0, 4.0);
     glVertex3f(-20.0, 15.0, 4.0);
     glVertex3f(-20.0, 15.0, 6.0);
     glVertex3f(-20.0, 30.0, 6.0);
     glEnd();

     //BINGKAI 2
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-2.5, 28.0, 4.0);
     glVertex3f(-2.5, 18.0, 4.0);
     glVertex3f(1.0, 18.0, 4.0);
     glVertex3f(1.0, 28.0, 4.0);
     glEnd();

     //depan
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture2);
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(-2.5, 28.0, 6.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(-2.5, 18.0, 6.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(1.0, 18.0, 6.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(1.0, 28.0, 6.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-2.5, 28.0, 4.0);
     glVertex3f(1.0, 28.0, 4.0);
     glVertex3f(1.0, 28.0, 6.0);
     glVertex3f(-2.5, 28.0, 6.0);
     glEnd();

     //tutup bawah
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-2.5, 18.0, 4.0);
     glVertex3f(1.0, 18.0, 4.0);
     glVertex3f(1.0, 18.0, 6.0);
     glVertex3f(-2.5, 18.0, 6.0);
     glEnd();

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(1.0, 28.0, 4.0);
     glVertex3f(1.0, 18.0, 4.0);
     glVertex3f(1.0, 18.0, 6.0);
     glVertex3f(1.0, 28.0, 6.0);
     glEnd();

     //tutup kanan
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(-2.5, 28.0, 4.0);
     glVertex3f(-2.5, 18.0, 4.0);
     glVertex3f(-2.5, 18.0, 6.0);
     glVertex3f(-2.5, 28.0, 6.0);
     glEnd();

     //BINGKAI 3
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 30.0, 4.0);
     glVertex3f(3.5, 25.0, 4.0);
     glVertex3f(6.5, 25.0, 4.0);
     glVertex3f(6.5, 30.0, 4.0);
     glEnd();

     //depan
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture3);
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(3.5, 30.0, 6.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(3.5, 25.0, 6.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(6.5, 25.0, 6.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(6.5, 30.0, 6.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 30.0, 4.0);
     glVertex3f(6.5, 30.0, 4.0);
     glVertex3f(6.5, 30.0, 6.0);
     glVertex3f(3.5, 30.0, 6.0);
     glEnd();

     //tutup bawah
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 25.0, 4.0);
     glVertex3f(6.5, 25.0, 4.0);
     glVertex3f(6.5, 25.0, 6.0);
     glVertex3f(3.5, 25.0, 6.0);
     glEnd();

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(6.5, 30.0, 4.0);
     glVertex3f(6.5, 25.0, 4.0);
     glVertex3f(6.5, 25.0, 6.0);
     glVertex3f(6.5, 30.0, 6.0);
     glEnd();

     //tutup kanan
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 30.0, 4.0);
     glVertex3f(3.5, 25.0, 4.0);
     glVertex3f(3.5, 25.0, 6.0);
     glVertex3f(3.5, 30.0, 6.0);
     glEnd();

     //BINGKAI 4
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 22.0, 4.0);
     glVertex3f(3.5, 15.0, 4.0);
     glVertex3f(6.5, 15.0, 4.0);
     glVertex3f(6.5, 22.0, 4.0);
     glEnd();

     //depan
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture4);
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(3.5, 22.0, 6.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(3.5, 15.0, 6.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(6.5, 15.0, 6.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(6.5, 22.0, 6.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 22.0, 4.0);
     glVertex3f(6.5, 22.0, 4.0);
     glVertex3f(6.5, 22.0, 6.0);
     glVertex3f(3.5, 22.0, 6.0);
     glEnd();

     //tutup bawah
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 15.0, 4.0);
     glVertex3f(6.5, 15.0, 4.0);
     glVertex3f(6.5, 15.0, 6.0);
     glVertex3f(3.5, 15.0, 6.0);
     glEnd();

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(6.5, 22.0, 4.0);
     glVertex3f(6.5, 15.0, 4.0);
     glVertex3f(6.5, 15.0, 6.0);
     glVertex3f(6.5, 22.0, 6.0);
     glEnd();

     //tutup kanan
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(3.5, 22.0, 4.0);
     glVertex3f(3.5, 15.0, 4.0);
     glVertex3f(3.5, 15.0, 6.0);
     glVertex3f(3.5, 22.0, 6.0);
     glEnd();

     //BINGKAI 5
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(9.0, 30.0, 4.0);
     glVertex3f(9.0, 15.0, 4.0);
     glVertex3f(20.0, 15.0, 4.0);
     glVertex3f(20.0, 30.0, 4.0);
     glEnd();

     //depan
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture5);
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(9.0, 30.0, 6.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(9.0, 15.0, 6.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(20.0, 15.0, 6.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(20.0, 30.0, 6.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(9.0, 30.0, 4.0);
     glVertex3f(20.0, 30.0, 4.0);
     glVertex3f(20.0, 30.0, 6.0);
     glVertex3f(9.0, 30.0, 6.0);
     glEnd();

     //tutup bawah
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(9.0, 15.0, 4.0);
     glVertex3f(20.0, 15.0, 4.0);
     glVertex3f(20.0, 15.0, 6.0);
     glVertex3f(9.0, 15.0, 6.0);
     glEnd();

     //tutup atas
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(9.0, 30.0, 4.0);
     glVertex3f(9.0, 15.0, 4.0);
     glVertex3f(9.0, 15.0, 6.0);
     glVertex3f(9.0, 30.0, 6.0);
     glEnd();

     //tutup kanan
     glBegin(GL_QUADS);
     glColor3ub(28, 52, 97);
     glVertex3f(20.0, 30.0, 4.0);
     glVertex3f(20.0, 15.0, 4.0);
     glVertex3f(20.0, 15.0, 6.0);
     glVertex3f(20.0, 30.0, 6.0);
     glEnd();


     //LEMARI
     //belakang
     glBegin(GL_QUADS);
     glColor3ub(77, 42, 18);
     glVertex3f(-25.0, 1.0, 35.0);
     glVertex3f(-25.0, -30.0, 35.0);
     glVertex3f(-25.0, -30.0, 25.0);
     glVertex3f(-25.0, 1.0, 25.0);
     glEnd();

     //depan
     glBegin(GL_QUADS);
     glColor3ub(77, 42, 18);
     glVertex3f(-19.0, 1.0, 35.0);
     glVertex3f(-19.0, -30.0, 35.0);
     glVertex3f(-19.0, -30.0, 25.0);
     glVertex3f(-19.0, 1.0, 25.0);
     glEnd();

     //samping kanan
     glBegin(GL_QUADS);
     glColor3ub(77, 42, 18);
     glVertex3f(-25.0, 1.0, 35.0);
     glVertex3f(-25.0, -30.0, 35.0);
     glVertex3f(-19.0, -30.0, 35.0);
     glVertex3f(-19.0, 1.0, 35.0);
     glEnd();

     //samping kiri
     glBegin(GL_QUADS);
     glColor3ub(77, 42, 18);
     glVertex3f(-25.0, 1.0, 25.0);
     glVertex3f(-25.0, -30.0, 25.0);
     glVertex3f(-19.0, -30.0, 25.0);
     glVertex3f(-19.0, 1.0, 25.0);
     glEnd();

     //penutup atas
     glBegin(GL_QUADS);
     glColor3ub(77, 42, 18);
     glVertex3f(-25.0, 1.0, 35.0);
     glVertex3f(-19.0, 1.0, 35.0);
     glVertex3f(-19.0, 1.0, 25.0);
     glVertex3f(-25.0, 1.0, 25.0);
     glEnd();


     //LACI
     //Laci lemari 1
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-16.0, -1.0, 34.0);
     glVertex3f(-16.0, -8.0, 34.0);
     glVertex3f(-16.0, -8.0, 26.0);
     glVertex3f(-16.0, -1.0, 26.0);
     glEnd();

     // kanan
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -1.0, 34.0);
     glVertex3f(-19.0, -8.0, 34.0);
     glVertex3f(-16.0, -8.0, 34.0);
     glVertex3f(-16.0, -1.0, 34.0);
     glEnd();

     //kiri
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -1.0, 26.0);
     glVertex3f(-19.0, -8.0, 26.0);
     glVertex3f(-16.0, -8.0, 26.0);
     glVertex3f(-16.0, -1.0, 26.0);
     glEnd();

     //tutup bawah
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -8.0, 34.0);
     glVertex3f(-16.0, -8.0, 34.0);
     glVertex3f(-16.0, -8.0, 26.0);
     glVertex3f(-19.0, -8.0, 26.0);
     glEnd();

     //ganggang
     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-15.9, -4.0, 28.0);
     glVertex3f(-15.9, -5.0, 28.0);
     glVertex3f(-15.9, -5.0, 32.0);
     glVertex3f(-15.9, -4.0, 32.0);
     glEnd();

     //laci 2
     //depan
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-18.0, -10.0, 34.0);
     glVertex3f(-18.0, -17.0, 34.0);
     glVertex3f(-18.0, -17.0, 26.0);
     glVertex3f(-18.0, -10.0, 26.0);
     glEnd();

     //samping kanan
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -10.0, 34.0);
     glVertex3f(-19.0, -17.0, 34.0);
     glVertex3f(-18.0, -17.0, 34.0);
     glVertex3f(-18.0, -10.0, 34.0);
     glEnd();

     //samping kiri
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -10.0, 26.0);
     glVertex3f(-19.0, -17.0, 26.0);
     glVertex3f(-18.0, -17.0, 26.0);
     glVertex3f(-18.0, -10.0, 26.0);
     glEnd();

     //atas
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -10.0, 34.0);
     glVertex3f(-18.0, -10.0, 34.0);
     glVertex3f(-18.0, -10.0, 26.0);
     glVertex3f(-19.0, -10.0, 26.0);
     glEnd();

     //ganggang
     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-17.9, -13.0, 28.0);
     glVertex3f(-17.9, -14.0, 28.0);
     glVertex3f(-17.9, -14.0, 32.0);
     glVertex3f(-17.9, -13.0, 32.0);
     glEnd();

     //laci 3
     //depan
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-17.0, -19.0, 34.0);
     glVertex3f(-17.0, -26.0, 34.0);
     glVertex3f(-17.0, -26.0, 26.0);
     glVertex3f(-17.0, -19.0, 26.0);
     glEnd();

     //kanan
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -19.0, 34.0);
     glVertex3f(-19.0, -26.0, 34.0);
     glVertex3f(-17.0, -26.0, 34.0);
     glVertex3f(-17.0, -19.0, 34.0);
     glEnd();

     //kiri
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -19.0, 26.0);
     glVertex3f(-19.0, -26.0, 26.0);
     glVertex3f(-17.0, -26.0, 26.0);
     glVertex3f(-17.0, -19.0, 26.0);
     glEnd();

     //bawah
     glBegin(GL_QUADS);
     glColor3ub(158, 138, 108);
     glVertex3f(-19.0, -26.0, 34.0);
     glVertex3f(-17.0, -26.0, 34.0);
     glVertex3f(-17.0, -26.0, 26.0);
     glVertex3f(-19.0, -26.0, 26.0);
     glEnd();

     //ganggang
     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-16.9, -22.0, 28.0);
     glVertex3f(-16.9, -23.0, 28.0);
     glVertex3f(-16.9, -23.0, 32.0);
     glVertex3f(-16.9, -22.0, 32.0);
     glEnd();


     //RAK GANTUNG 1
     //atas
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, -10.0, 43.0);
     glVertex3f(-23.0, -10.0, 43.0);
     glVertex3f(-23.0, -10.0, 56.0);
     glVertex3f(-30.0, -10.0, 56.0);
     glEnd();

     //bawah
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, -12.0, 43.0);
     glVertex3f(-23.0, -12.0, 43.0);
     glVertex3f(-23.0, -12.0, 56.0);
     glVertex3f(-30.0, -12.0, 56.0);
     glEnd();

     //kanan
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, -10.0, 43.0);
     glVertex3f(-30.0, -12.0, 43.0);
     glVertex3f(-23.0, -12.0, 43.0);
     glVertex3f(-23.0, -10.0, 43.0);
     glEnd();

     //kiri
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, -10.0, 56.0);
     glVertex3f(-30.0, -12.0, 56.0);
     glVertex3f(-23.0, -12.0, 56.0);
     glVertex3f(-23.0, -10.0, 56.0);
     glEnd();

     //depan
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-23.0, -10.0, 43.0);
     glVertex3f(-23.0, -12.0, 43.0);
     glVertex3f(-23.0, -12.0, 56.0);
     glVertex3f(-23.0, -10.0, 56.0);
     glEnd();

     //RAK GANTUNG 2
     //atas
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 3.0, 37.0);
     glVertex3f(-23.0, 3.0, 37.0);
     glVertex3f(-23.0, 3.0, 50.0);
     glVertex3f(-30.0, 3.0, 50.0);
     glEnd();

     //bawah
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 1.0, 37.0);
     glVertex3f(-23.0, 1.0, 37.0);
     glVertex3f(-23.0, 1.0, 50.0);
     glVertex3f(-30.0, 1.0, 50.0);
     glEnd();

     //kanan
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 3.0, 37.0);
     glVertex3f(-30.0, 1.0, 37.0);
     glVertex3f(-23.0, 1.0, 37.0);
     glVertex3f(-23.0, 3.0, 37.0);
     glEnd();

     //kiri
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 3.0, 50.0);
     glVertex3f(-30.0, 1.0, 50.0);
     glVertex3f(-23.0, 1.0, 50.0);
     glVertex3f(-23.0, 3.0, 50.0);
     glEnd();

     //depan
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-23.0, 3.0, 37.0);
     glVertex3f(-23.0, 1.0, 37.0);
     glVertex3f(-23.0, 1.0, 50.0);
     glVertex3f(-23.0, 3.0, 50.0);
     glEnd();

     //RAK GANTUNG 3
     //atas
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 14.0, 43.0);
     glVertex3f(-23.0, 14.0, 43.0);
     glVertex3f(-23.0, 14.0, 56.0);
     glVertex3f(-30.0, 14.0, 56.0);
     glEnd();

     //bawah
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 12.0, 43.0);
     glVertex3f(-23.0, 12.0, 43.0);
     glVertex3f(-23.0, 12.0, 56.0);
     glVertex3f(-30.0, 12.0, 56.0);
     glEnd();

     //kanan
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 14.0, 43.0);
     glVertex3f(-30.0, 12.0, 43.0);
     glVertex3f(-23.0, 12.0, 43.0);
     glVertex3f(-23.0, 14.0, 43.0);
     glEnd();

     //kiri
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-30.0, 14.0, 56.0);
     glVertex3f(-30.0, 12.0, 56.0);
     glVertex3f(-23.0, 12.0, 56.0);
     glVertex3f(-23.0, 14.0, 56.0);
     glEnd();

     //depan
     glBegin(GL_QUADS);
     glColor3ub(107, 105, 101);
     glVertex3f(-23.0, 14.0, 43.0);
     glVertex3f(-23.0, 12.0, 43.0);
     glVertex3f(-23.0, 12.0, 56.0);
     glVertex3f(-23.0, 14.0, 56.0);
     glEnd();

     //LAMPU
     //alas lampu
     glBegin(GL_QUADS);
     glColor3ub(54,27,5);
     glVertex3f(27.0, -26.9, 8.0);
     glVertex3f(23.0, -26.9, 8.0);
     glVertex3f(23.0, -26.9, 15.0);
     glVertex3f(27.0, -26.9, 15.0);
     glEnd();

     glBegin(GL_QUADS);//kanan
     glColor3ub(54,27,5);
     glVertex3f(27.0, -26.4, 8.0);
     glVertex3f(27.0, -26.4, 15.0);
     glVertex3f(27.0, -26.9, 15.0);
     glVertex3f(27.0, -26.9, 8.0);
     glEnd();

     glBegin(GL_QUADS);//kiri
     glColor3ub(54,27,5);
     glVertex3f(23.0, -26.9, 8.0);
     glVertex3f(23.0, -26.9, 15.0);
     glVertex3f(23.0, -26.4, 15.0);
     glVertex3f(23.0, -26.4, 8.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(54,27,5);//depan
     glVertex3f(27.0, -26.4, 15.0);
     glVertex3f(27.0, -26.9, 15.0);
     glVertex3f(23.0, -26.9, 15.0);
     glVertex3f(23.0, -26.4, 15.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(54,27,5);//belakang
     glVertex3f(27.0, -26.4, 8.0);
     glVertex3f(27.0, -26.9, 8.0);
     glVertex3f(23.0, -26.9, 8.0);
     glVertex3f(23.0, -26.4, 8.0);
     glEnd();

     glBegin(GL_QUADS);//penutup
     glColor3ub(54,27,5);
     glVertex3f(27.0, -26.4, 15.0);
     glVertex3f(23.0, -26.4, 15.0);
     glVertex3f(23.0, -26.4, 8.0);
     glVertex3f(27.0, -26.4, 8.0);
     glEnd();

     //TIANG LAMPU
     glBegin(GL_QUADS);//kiri
     glColor3ub(54,27,5);
     glVertex3f(24.7, 13.0, 12.0);
     glVertex3f(24.7, -26.44, 12.0);
     glVertex3f(24.7, -26.4, 11.0);
     glVertex3f(24.7, 13.0, 11.0);
     glEnd();

     glBegin(GL_QUADS);//kanan
     glColor3ub(54,27,5);
     glVertex3f(25.7, 13.0, 12.0);
     glVertex3f(25.7, -26.4, 12.0);
     glVertex3f(25.7, -26.9, 11.0);
     glVertex3f(25.7, 13.0, 11.0);
     glEnd();

     glBegin(GL_QUADS);//depan
     glColor3ub(54,27,5);
     glVertex3f(25.7, 13.0, 12.0);
     glVertex3f(25.7, -26.4, 12.0);
     glVertex3f(24.7, -26.4, 12.0);
     glVertex3f(24.7, 13.0, 12.0);
     glEnd();

     glBegin(GL_QUADS);//belakang
     glColor3ub(54,27,5);
     glVertex3f(25.7, 13.0, 11.0);
     glVertex3f(25.7, -26.4, 11.0);
     glVertex3f(24.7, -26.4, 11.0);
     glVertex3f(24.7, 13.0, 11.0);
     glEnd();

     //BOLA LAMPU
     glBegin(GL_QUADS);//alas
     glColor3ub(245, 245, 5);
     glVertex3f(29.0, 8.0, 8.0);
     glVertex3f(21.0, 8.0, 8.0);
     glVertex3f(21.0, 8.0, 15.0);
     glVertex3f(29.0, 8.0, 15.0);
     glEnd();

     glBegin(GL_QUADS);//kiri
     glColor3ub(245, 245, 5);
     glVertex3f(23.5, 17.0, 8.0);
     glVertex3f(21.0, 8.0, 8.0);
     glVertex3f(21.0, 8.0, 15.0);
     glVertex3f(23.5, 17.0, 15.0);
     glEnd();

     glBegin(GL_QUADS);//kanan
     glColor3ub(245, 245, 5);
     glVertex3f(26.5, 17.0, 8.0);
     glVertex3f(29.0, 8.0, 8.0);
     glVertex3f(29.0, 8.0, 15.0);
     glVertex3f(26.5, 17.0, 15.0);
     glEnd();

     glBegin(GL_QUADS);//depan
     glColor3ub(245, 245, 5);
     glVertex3f(26.5, 17.0, 15.0);
     glVertex3f(29.0, 8.0, 15.0);
     glVertex3f(21.0, 8.0, 15.0);
     glVertex3f(23.5, 17.0, 15.0);
     glEnd();

     glBegin(GL_QUADS);//belakang
     glColor3ub(245, 245, 5);
     glVertex3f(26.5, 17.0, 8.0);
     glVertex3f(28.0, 8.0, 8.0);
     glVertex3f(21.0, 8.0, 8.0);
     glVertex3f(23.5, 17.0, 8.0);
     glEnd();

     glBegin(GL_QUADS);//penutup
     glColor3ub(245, 245, 5);
     glVertex3f(26.5, 17.0, 15.0);
     glVertex3f(23.5, 17.0, 15.0);
     glVertex3f(23.5, 17.0, 8.0);
     glVertex3f(26.5, 17.0, 8.0);
     glEnd();


     //POT BUNGA ATAU MINIATUR
     glBegin(GL_QUADS);//1 alas
     glColor3ub(227, 164, 86);
     glVertex3f(-26.0, 3.1, 42.0);
     glVertex3f(-24.0, 3.1, 42.0);
     glVertex3f(-24.0, 3.1, 45.0);
     glVertex3f(-26.0, 3.1, 45.0);
     glEnd();

     glBegin(GL_QUADS);//kiri
     glColor3ub(61, 103, 112);
     glVertex3f(-26.0, 6.0, 45.0);
     glVertex3f(-26.0, 3.0, 45.0);
     glVertex3f(-24.0, 3.0, 45.0);
     glVertex3f(-24.0, 6.0, 45.0);
     glEnd();

     glBegin(GL_QUADS);//kanan
     glColor3ub(61, 103, 112);
     glVertex3f(-26.0, 6.0, 42.0);
     glVertex3f(-26.0, 3.0, 42.0);
     glVertex3f(-24.0, 3.0, 42.0);
     glVertex3f(-24.0, 6.0, 42.0);
     glEnd();

     glBegin(GL_QUADS);//depan
     glColor3ub(61, 103, 112);
     glVertex3f(-24.0, 6.0, 42.0);
     glVertex3f(-24.0, 3.0, 42.0);
     glVertex3f(-24.0, 3.0, 45.0);
     glVertex3f(-24.0, 6.0, 45.0);
     glEnd();

     glBegin(GL_QUADS);//belakang
     glColor3ub(61, 103, 112);
     glVertex3f(-26.0, 6.0, 42.0);
     glVertex3f(-26.0, 3.0, 42.0);
     glVertex3f(-26.0, 3.0, 45.0);
     glVertex3f(-26.0, 6.0, 45.0);
     glEnd();

     glBegin(GL_QUADS);//2 ALAS
     glColor3ub(227, 164, 86);
     glVertex3f(-25.5, 3.1, 41.0);
     glVertex3f(-24.0, 3.1, 41.0);
     glVertex3f(-24.0, 3.1, 39.0);
     glVertex3f(-25.5, 3.1, 39.0);
     glEnd();

     glBegin(GL_QUADS);//kiri
     glColor3ub(179, 89, 120);
     glVertex3f(-25.5, 8.0, 41.0);
     glVertex3f(-25.5, 3.0, 41.0);
     glVertex3f(-24.0, 3.0, 41.0);
     glVertex3f(-24.0, 8.0, 41.0);
     glEnd();

     glBegin(GL_QUADS);//kanan
     glColor3ub(179, 89, 120);
     glVertex3f(-25.5, 8.0, 39.0);
     glVertex3f(-25.5, 3.0, 39.0);
     glVertex3f(-24.0, 3.0, 39.0);
     glVertex3f(-24.0, 8.0, 39.0);
     glEnd();

     glBegin(GL_QUADS);//depan
     glColor3ub(179, 89, 120);
     glVertex3f(-24.0, 8.0, 39.0);
     glVertex3f(-24.0, 3.0, 39.0);
     glVertex3f(-24.0, 3.0, 41.0);
     glVertex3f(-24.0, 8.0, 41.0);
     glEnd();

     glBegin(GL_QUADS);//belakang
     glColor3ub(179, 89, 120);
     glVertex3f(-25.5, 8.0, 39.0);
     glVertex3f(-25.5, 3.0, 39.0);
     glVertex3f(-25.5, 3.0, 41.0);
     glVertex3f(-25.5, 8.0, 41.0);
     glEnd();

     //BUNGA POT 1
     glBegin(GL_QUADS);//daun 1
     glColor3ub(129, 196, 27);
     glVertex3f(-25.5, 10.0, 44.3);
     glVertex3f(-25.5, 6.0, 44.3);
     glVertex3f(-25.5, 6.0, 44.3);
     glVertex3f(-25.5, 10.0, 43.9);
     glEnd();

     glBegin(GL_QUADS);//daun 2
     glColor3ub(129, 196, 27);
     glVertex3f(-25.5, 11.0, 43.2);
     glVertex3f(-25.5, 6.0, 43.2);
     glVertex3f(-25.5, 6.0, 43.2);
     glVertex3f(-25.5, 11.0, 43.8);
     glEnd();

     glBegin(GL_QUADS);//daun 3
     glColor3ub(129, 196, 27);
     glVertex3f(-25.5, 8.0, 42.8);
     glVertex3f(-25.5, 6.0, 42.8);
     glVertex3f(-25.5, 6.0, 43.1);
     glVertex3f(-25.5, 8.0, 43.1);
     glEnd();

     glBegin(GL_QUADS);//daun 4
     glColor3ub(129, 196, 27);
     glVertex3f(-25.5, 10.0, 42.6);
     glVertex3f(-25.5, 6.0, 42.6);
     glVertex3f(-25.5, 6.0, 42.6);
     glVertex3f(-25.5, 10.0, 42.3);
     glEnd();

     glBegin(GL_QUADS);//daun 5
     glColor3ub(129, 196, 27);
     glVertex3f(-25.5, 8.0, 43.8);
     glVertex3f(-25.5, 6.0, 43.8);
     glVertex3f(-25.5, 6.0, 43.5);
     glVertex3f(-25.5, 8.0, 43.5);
     glEnd();

     glBegin(GL_QUADS);//bunga 1
     glColor3ub(196, 56, 27);
     glVertex3f(-25.5, 8.6, 43.8);
     glVertex3f(-25.5, 7.8, 43.8);
     glVertex3f(-25.5, 7.8, 43.5);
     glVertex3f(-25.5, 8.6, 43.5);
     glEnd();

     glBegin(GL_QUADS);//bunga 2
     glColor3ub(196, 56, 27);
     glVertex3f(-25.5, 8.6, 42.8);
     glVertex3f(-25.5, 7.8, 42.8);
     glVertex3f(-25.5, 7.8, 43.1);
     glVertex3f(-25.5, 8.6, 43.1);
     glEnd();

     glBegin(GL_QUADS);//bunga 3
     glColor3ub(196, 56, 27);
     glVertex3f(-25.4, 11.3, 43.5);
     glVertex3f(-25.4, 10.8, 43.5);
     glVertex3f(-25.4, 10.8, 43.8);
     glVertex3f(-25.4, 11.3, 43.8);
     glEnd();

     glBegin(GL_QUADS);//bunga 4
     glColor3ub(196, 56, 27);
     glVertex3f(-25.4, 10.3, 44.2);
     glVertex3f(-25.4, 9.8, 44.2);
     glVertex3f(-25.4, 9.8, 43.9);
     glVertex3f(-25.4, 10.3, 43.9);
     glEnd();

     glBegin(GL_QUADS);//bunga 5
     glColor3ub(196, 56, 27);
     glVertex3f(-25.4, 10.3, 42.5);
     glVertex3f(-25.4, 9.8, 42.5);
     glVertex3f(-25.4, 9.8, 42.3);
     glVertex3f(-25.4, 10.3, 42.3);
     glEnd();

     //BUNGA POT 2
     glBegin(GL_QUADS);//daun 1
     glColor3ub(39, 150, 33);
     glVertex3f(-25.2, 12.0, 40.3);
     glVertex3f(-25.2, 7.7, 40.3);
     glVertex3f(-25.2, 7.7, 40.1);
     glVertex3f(-25.2, 12.0, 40.1);
     glEnd();

     glBegin(GL_QUADS);//daun 2
     glColor3ub(39, 150, 33);
     glVertex3f(-25.2, 15.0, 40.4);
     glVertex3f(-25.2, 7.7, 40.4);
     glVertex3f(-25.2, 7.7, 40.6);
     glVertex3f(-25.2, 15.0, 40.6);
     glEnd();

     glBegin(GL_QUADS);//daun 3
     glColor3ub(39, 150, 33);
     glVertex3f(-25.2, 14.0, 39.9);
     glVertex3f(-25.2, 7.7, 39.9);
     glVertex3f(-25.2, 7.7, 39.7);
     glVertex3f(-25.2, 14.0, 39.7);
     glEnd();

     //MINIATUR GANTUNG
     glBegin(GL_QUADS);//1
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 22.0, 19.0);
     glVertex3f(-26.8, 21.5, 19.0);
     glVertex3f(-26.8, 21.5, 15.0);
     glVertex3f(-26.8, 22.0, 15.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 17.5, 19.0);
     glVertex3f(-26.8, 17.0, 19.0);
     glVertex3f(-26.8, 17.0, 15.0);
     glVertex3f(-26.8, 17.5, 15.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 22.0, 19.0);
     glVertex3f(-26.8, 17.0, 19.0);
     glVertex3f(-26.5, 17.0, 19.0);
     glVertex3f(-26.5, 22.0, 19.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 22.0, 15.0);
     glVertex3f(-26.8, 17.0, 15.0);
     glVertex3f(-26.5, 17.0, 15.0);
     glVertex3f(-26.5, 22.0, 15.0);
     glEnd();

     glBegin(GL_QUADS);//2
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 18.0);
     glVertex3f(-26.8, 18.5, 18.0);
     glVertex3f(-26.8, 18.5, 22.0);
     glVertex3f(-26.8, 19.0, 22.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 14.5, 18.0);
     glVertex3f(-26.8, 14.0, 18.0);
     glVertex3f(-26.8, 14.0, 22.0);
     glVertex3f(-26.8, 14.5, 22.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 18.0);
     glVertex3f(-26.8, 14.0, 18.0);
     glVertex3f(-26.5, 14.0, 18.0);
     glVertex3f(-26.5, 19.0, 18.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 22.0);
     glVertex3f(-26.8, 14.0, 22.0);
     glVertex3f(-26.5, 14.0, 22.0);
     glVertex3f(-26.5, 19.0, 22.0);
     glEnd();

     glBegin(GL_QUADS);//3
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 16.0);
     glVertex3f(-26.8, 18.5, 16.0);
     glVertex3f(-26.8, 18.5, 12.0);
     glVertex3f(-26.8, 19.0, 12.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 14.5, 16.0);
     glVertex3f(-26.8, 14.0, 16.0);
     glVertex3f(-26.8, 14.0, 12.0);
     glVertex3f(-26.8, 14.5, 12.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 16.0);
     glVertex3f(-26.8, 14.0, 16.0);
     glVertex3f(-26.5, 14.0, 16.0);
     glVertex3f(-26.5, 19.0, 16.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 12.0);
     glVertex3f(-26.8, 14.0, 12.0);
     glVertex3f(-26.5, 14.0, 12.0);
     glVertex3f(-26.5, 19.0, 12.0);
     glEnd();

     glBegin(GL_QUADS);//4
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 22.0, 21.0);
     glVertex3f(-26.8, 21.5, 21.0);
     glVertex3f(-26.8, 21.5, 25.0);
     glVertex3f(-26.8, 22.0, 25.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 17.5, 21.0);
     glVertex3f(-26.8, 17.0, 21.0);
     glVertex3f(-26.8, 17.0, 25.0);
     glVertex3f(-26.8, 17.5, 25.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 22.0, 21.0);
     glVertex3f(-26.8, 17.0, 21.0);
     glVertex3f(-26.5, 17.0, 21.0);
     glVertex3f(-26.5, 22.0, 21.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 22.0, 25.0);
     glVertex3f(-26.8, 17.0, 25.0);
     glVertex3f(-26.5, 17.0, 25.0);
     glVertex3f(-26.5, 22.0, 25.0);
     glEnd();

     glBegin(GL_QUADS);//5
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 24.0);
     glVertex3f(-26.8, 18.5, 24.0);
     glVertex3f(-26.8, 18.5, 28.0);
     glVertex3f(-26.8, 19.0, 28.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 14.5, 24.0);
     glVertex3f(-26.8, 14.0, 24.0);
     glVertex3f(-26.8, 14.0, 28.0);
     glVertex3f(-26.8, 14.5, 28.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 24.0);
     glVertex3f(-26.8, 14.0, 24.0);
     glVertex3f(-26.5, 14.0, 24.0);
     glVertex3f(-26.5, 19.0, 24.0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(000,000,000);
     glVertex3f(-26.8, 19.0, 28.0);
     glVertex3f(-26.8, 14.0, 28.0);
     glVertex3f(-26.5, 14.0, 28.0);
     glVertex3f(-26.5, 19.0, 28.0);
     glEnd();

     //FOTO
     //depan
     glEnable(GL_TEXTURE_2D);  // Aktifkan tekstur
     glBindTexture(GL_TEXTURE_2D, texture6);
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255); // Warna putih untuk menghindari efek warna
     glTexCoord2f(1.0f, 0.0f); glVertex3f(-26.0, -4.0, 48.0);
     glTexCoord2f(1.0f, 1.0f); glVertex3f(-24.0, -10.0, 48.0);
     glTexCoord2f(0.0f, 1.0f); glVertex3f(-24.0, -10.0, 52.0);
     glTexCoord2f(0.0f, 0.0f); glVertex3f(-26.0, -4.0, 52.0);
     glEnd();
     glDisable(GL_TEXTURE_2D);

     glBegin(GL_QUADS);//belakang
     glColor3ub(000, 000, 000);
     glVertex3f(-26.1, -4.0, 48.0);
     glVertex3f(-24.1, -10.0, 48.0);
     glVertex3f(-24.1, -10.0, 52.0);
     glVertex3f(-26.1, -4.0, 52.0);
     glEnd();

     glBegin(GL_QUADS);//sandaran foto
     glColor3ub(000, 000, 000);
     glVertex3f(-25.1, -6.7, 48.0);
     glVertex3f(-25.9, -10.0, 48.0);
     glVertex3f(-25.9, -10.0, 52.0);
     glVertex3f(-25.1, -6.7, 52.0);
     glEnd();






    glFlush();
    glutSwapBuffers();
}

//setting viewport
void reshape(int w, int h){
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, w / h, 1.0, 400.0);
    glTranslatef(0.0, -5.0, -100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

}

void shadow(){
    glDisable(GL_LIGHTING);
    glBegin(GL_QUADS);
    glColor4f(0,1,0,0);
    glVertex3f(-1.80, -0.15, 1.70);
    glVertex3f(1.75, -0.15, 1.75);
    glVertex3f(1.75, -0.15, 1.8);
    glVertex3f(-2.2, -0.15, -2.2);
    glEnd();
    glEnable(GL_LIGHTING);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'd':
    case 'D':
        glTranslatef(1.0, 0.0, 0.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-1.0, 0.0, 0.0);
        break;
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 1.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -1.0);
        break;
    case 'l':
    case 'L':
        glRotatef(.5, 0.0, 1.0, 0.0);
        break;
    case 'r':
    case 'R':
        glRotatef(-.5, 0.0, 1.0, 0.0);
        break;
    case 'u':
    case 'U':
        glRotatef(1.0, 1.0, 0.0, 0.0);
        break;
    case 'j':
    case 'J':
        glRotatef(-1.0, 1.0, 0.0, 0.0);
        break;
    }
    display();
}
void mouse(int x, int y){
    int deltaX = x - lastMouseX;
    int deltaY = y - lastMouseY;

    angleY += deltaX = 0.1;
    angleX -= deltaY = 0.1;

    lastMouseX = x;
    lastMouseY = y;

    display();
}

void mouseButton(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        lastMouseX = x;
        lastMouseY = y;
        glutMotionFunc(mouse);
    }
    else if(button == GLUT_LEFT_BUTTON && state == GLUT_UP){
        glutMotionFunc(NULL);
    }
}
