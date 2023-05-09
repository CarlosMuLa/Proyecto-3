#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <string.h>
typedef struct
{
	int accesorios1;  // 1 lentes   2 gorra  3 Corbata 4 collar  5 diadema  
	int accesorios2; // 0 nada  1 lentes   2 gorra  3 Corbata 4 collar  5 diadema
	short cabello;  // 1 rojo  2 cafe  3 rubio  4 negro
	short vello;   // 1 barba  2 parche(menton)  3 mostacho  4 nada
	char piel;    //M moreno   G guero
	char sexo;   //  H hombre   M mujer
	ALLEGRO_BITMAP* foto;
	


}J1;
typedef struct
{
	int accesorios1;  // 1 lentes   2 gorra  3 Corbata 4 collar  5 diadema
	int accesorios2; // 0 nada  1 lentes   2 gorra  3 Corbata 4 collar  5 diadema
	short cabello;  // 1 rojo  2 cafe  3 rubio  4 negro
	short vello;   // 1 barba  2 parche(menton)  3 mostacho  4 nada
	char piel;    //M moreno   G guero
	char sexo;   //  H hombre   M mujer
	char foto[6];

}J2;
J1 personaje_1_1 = { 1,4, 1, 4, 'G', 'M'};
//J1 personaje_2_1 = { 5, 1,2, 4, 'M', 'M', "2.jpg"};
//J1 personaje_3_1 = { 4,0, 1, 4, 'G', 'M', "3.jpg"};
//J1 personaje_5_1 = { 5,0, 3, 4, 'G', 'M', "5.jpg"};
//J1 personaje_6_1 = { 2,1, 2, 4, 'G', 'H',"6.jpg"};
//J1 personaje_7_1 = { 3, 0,2, 1, 'G', 'H' ,"7.jpg"};
//J1 personaje_8_1 = { 3,0, 4, 2, 'M', 'H' ,"8.jpg"}; 
//J1 personaje_9_1 = { 1,3, 2, 3, 'G', 'H',"9.jpg"};
//J1 personaje_10_1 = { 2,0, 1, 4, 'G', 'H',"10.jpg"};
//J2 personaje_1_2 = { 1,4, 1, 4, 'G', 'M',"1.jpg" };
//J2 personaje_2_2 = { 5, 1,2, 4, 'M', 'M', "2.jpg" };
//J2 personaje_3_2 = { 4,0, 1, 4, 'G', 'M', "3.jpg" };
//J2 personaje_5_2 = { 5,0, 3, 4, 'G', 'M', "5.jpg" };
//J2 personaje_6_2 = { 2,1, 2, 4, 'G', 'H',"6.jpg" };
//J2 personaje_7_2 = { 3, 0,2, 1, 'G', 'H' , "7.jpg" };
//J2 personaje_8_2 = { 3,0, 4, 2, 'M', 'H' ,"8.jpg" }; 
//J2 personaje_9_2 = { 1,3, 2, 3, 'G', 'H',"9.jpg" };
//J2 personaje_10_2 = { 2,0, 1, 4, 'G', 'H', "10.jpg" };



