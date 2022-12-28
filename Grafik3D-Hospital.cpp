#include <glut.h> //deklarasi library freeglut

float fx = 2.5, fy = 2, fz = 1.5; // koordinat posisi yang memandang (from where)
float tx = 0, ty = 0, tz = 0; // koordinat tujuan pandang (to where)
float yp = 0; //float sudut = 0;

void LV()
{
	gluLookAt(fx, fy, fz, // melihat dari mana
		tx, ty, tz, // melihat ke mana
		0, 1, 0); // up vector
	GLfloat light_position[] = { 0, 50, 100, 0.0 }; // Posisi sumber cahaya
	glLightfv(GL_LIGHT0, GL_POSITION, light_position); //untuk cahaya
	glBlendFunc(GL_SRC_ALPHA, GL_ONE); //menggabungkan warna
	glEnable(GL_LIGHTING); //pencahayaan
	glEnable(GL_LIGHT0); //pencahayaan
	glEnable(GL_DEPTH_TEST);//efek 3d
	glEnable(GL_COLOR_MATERIAL); //mewarnai benda 
}

void halaman() { //fungsi untuk halaman
	glPushMatrix(); //mengembalikan titik tengah posisi koordinat
	glColor3ub(107, 142, 35); //untuk pewarnaan
	glTranslatef(0, -1, 0); //untuk menggeser objek
	glRotatef(90, 1, 0, 0); //untuk merotasikan objek
	glScalef(5, 5, 0); //untuk memperbesar atau memperkecil objek
	glutSolidCube(5); //untuk menggambar kubus
	glPopMatrix(); 
}

void jendela() { //fungsi menggambar jendela
	glColor3ub(255, 255, 255);
	glScalef(1, 2, 1);
	glutSolidCube(0.2);
}

void pintu() { //fungsi menggambar pintu
	glColor3ub(205, 92, 92);
	glScalef(1, 2.65, 0.5);
	glutSolidCube(0.3);
}

void tiang() { //fungsi menggambar tiang
	glColor3ub(128, 128, 128);
	glScalef(0.8, 8, 0.7);
	glutSolidCube(0.1);
}

void spanduk() { //fungsi menggambar spanduk
	glColor3ub(255, 255, 255);
	glScalef(1.5, 1.5, 0.5);
	glutSolidCube(0.3);
}

void simbol() { //fungsi menggambar simbol
	glColor3ub(255, 0, 0);
	glutSolidCube(0.1);
}

void RumahSakit() //fungsi keseluruhan gambar RumahSakit
{
	glPushMatrix(); //gedung kiri bawah
	glColor3ub(178, 34, 34);
	glTranslatef(0, 0, -0.15);
	glScalef(1.5, 0.8, 0.7);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //pembatas 
	glColor3ub(128, 128, 128);
	glTranslatef(0, 0.4, 0);
	glScalef(1.5, 0.1, 1.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //gedung kiri atas
	glColor3ub(178, 34, 34);
	glTranslatef(0, 0.8, 0);
	glScalef(1.5, 0.7, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //atap kiri
	glColor3ub(128, 128, 128);
	glTranslatef(0, 1.2, 0);
	glScalef(1.5, 0.2, 1.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //gedung tengah
	glColor3ub(128, 0, 0);
	glTranslatef(1.2, 0.85, 0);
	glScalef(1, 2.5, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //atap atas
	glColor3ub(128, 128, 128);
	glTranslatef(1.2, 2, 0);
	glScalef(1, 0.2, 1.2);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //gedung kanan
	glColor3ub(178, 34, 34);
	glTranslatef(2.4, 0.35, 0);
	glScalef(1.5, 1.5, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix(); //atap kanan
	glColor3ub(128, 128, 128);
	glTranslatef(2.4, 1.2, 0);
	glScalef(1.5, 0.2, 1.2);
	glutSolidCube(1);
	glPopMatrix();

	//jendela gedung kiri
	glPushMatrix();
	glTranslatef(0.5, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.15, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.2, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.55, 0.8, 0.41);
	jendela();
	glPopMatrix();

	//jendela gedung tengah
	glPushMatrix(); 
	glTranslatef(1.05, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.4, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.05, 1.5, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.4, 1.5, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.05, 0.1, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.4, 0.1, 0.41);
	jendela();
	glPopMatrix();

	//jendela gedung kanan
	glPushMatrix();
	glTranslatef(1.9, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.25, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.6, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.95, 0.8, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.9, 0.1, 0.41);
	jendela();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.95, 0.1, 0.41);
	jendela();
	glPopMatrix();

	//pintu gedung kanan
	glPushMatrix(); //kiri
	glTranslatef(2.25, 0, 0.45);
	pintu();
	glPopMatrix();

	glPushMatrix(); //kanan
	glTranslatef(2.56, 0, 0.45);
	pintu();
	glPopMatrix();

	//tiang
	glPushMatrix(); //kanan
	glTranslatef(0.5, -0.03, 0.5);
	tiang();
	glPopMatrix();

	glPushMatrix(); //kiri
	glTranslatef(-0.5, -0.03, 0.5);
	tiang();
	glPopMatrix();

	//pintu gedung kiri
	glPushMatrix(); //kiri
	glTranslatef(-0.16, 0, 0.15);
	pintu();
	glPopMatrix();

	glPushMatrix(); //kanan
	glTranslatef(0.15, 0, 0.15);
	pintu();
	glPopMatrix();

	//spanduk
	glPushMatrix();
	glTranslatef(2.4, 1.5, 0.5);
	spanduk();
	glPopMatrix();

	//simbol
	glPushMatrix();
	glTranslatef(2.4, 1.5, 0.58);
	glScalef(2, 1, 0.5);
	simbol();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.4, 1.5, 0.58);
	glScalef(1, 2, 0.5);
	simbol();
	glPopMatrix();

	halaman(); //memanggil fungsi halaman
}

void display() //fungsi menampilkan objek untuk ditampilkan
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //membersihkan layar backround menjadi warna hitam
	glLoadIdentity(); 
	LV();
	RumahSakit();
	glutSwapBuffers();
}

void reshape(int w, int h) //untuk menggambar
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75, (GLsizei)w / (GLsizei)h, 1, 300);
	glMatrixMode(GL_MODELVIEW);
}

void timer(int value) //putaran
{
	yp += 10;
	if (yp >= 360) {
		yp = 0;
	}
	glutPostRedisplay();
	glutTimerFunc(100, timer, 0); //10 ms - 1000/10 = 100 fps
}

void myKeyboard(unsigned char key, int x, int y) //untuk melihat objek menggunakan keyboard
{
	switch (key)
	{
	case 'w':
		fy += 2;
		break;
	case 's':
		fy -= 2;
		break;
	case 'a':
		fx -= 2;
		break;
	case 'd':
		fx += 2;
		break;
	case 'o':
		fz -= 2;
		break;
	case 'l':
		fz += 2;
		break;
	case 27:
		exit(0);
		break;
	}
}

void SpecialKey(int key, int x, int y) //untuk menggeser layar menggunakan Special keyboard
{
	switch (key)
	{
	case GLUT_KEY_PAGE_UP:
		tz -= 2;
		break;
	case GLUT_KEY_PAGE_DOWN:
		tz += 2;
		break;
	case GLUT_KEY_RIGHT:
		tx += 2;
		break;
	case GLUT_KEY_LEFT:
		tx -= 2;
		break;
	case GLUT_KEY_UP:
		ty += 2;
		break;
	case GLUT_KEY_DOWN:
		ty -= 2;
		break;
	}
}

int main(int argc, char* argv) //fungsi main untuk nge run
{
	glutInit(&argc, &argv); //menginisialisasi glut
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(50, 30); //posisi window di layar komputer anda
	glutInitWindowSize(900, 600); //ukuran window di layar komputer anda
	glutCreateWindow("UAS KGV4 - Rhisa Adika Putri [191401119]"); //judul window
	glClearColor(0, 50, 50, 1); //pewarnaan pada layar
	glOrtho(-2, 2, -2, 2, -2, 2); //koorinat 3 dimensi ( -x, x, -y, y, -z, z)
	glutDisplayFunc(display); //memanggil dan menginisialisasi fungsi display
	glutReshapeFunc(reshape); //memanggil dan menginisialisasi fungsi reshape
	glutKeyboardFunc(myKeyboard); //memanggil dan menginisialisasi fungsi keyboard
	glutSpecialFunc(SpecialKey); //memanggil dan menginisialisasi fungsi special keyboard
	glutTimerFunc(1, timer, 0); //memanggil dan menginisialisasi fungsi timer
	glutMainLoop(); //melakukan perulangan terus ketika layar dijalankan atau di run
}