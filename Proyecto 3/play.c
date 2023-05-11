#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>
#include "Personajes.h"


play(ALLEGRO_DISPLAY* display, ALLEGRO_EVENT_QUEUE* queue, ALLEGRO_TIMER* timer, ALLEGRO_FONT* font, ALLEGRO_MOUSE_CURSOR* cursor, ALLEGRO_BITMAP* fondo, ALLEGRO_SAMPLE_INSTANCE* click, bool running)
{
	al_install_keyboard();
	personaje_1_1.foto = al_load_bitmap("11.jpg");
	personaje_2_1.foto = al_load_bitmap("2.jpg");
	personaje_3_1.foto = al_load_bitmap("3.jpg");
	personaje_5_1.foto = al_load_bitmap("5.jpg");
	personaje_6_1.foto = al_load_bitmap("6.jpg");
	personaje_7_1.foto = al_load_bitmap("7.jpg");
	personaje_8_1.foto = al_load_bitmap("8.jpg");
	personaje_9_1.foto = al_load_bitmap("9.jpg");
	personaje_10_1.foto = al_load_bitmap("10.jpg");
	personaje_1_2.foto = al_load_bitmap("11.jpg");
	personaje_2_2.foto = al_load_bitmap("2.jpg");
	personaje_3_2.foto = al_load_bitmap("3.jpg");
	personaje_5_2.foto = al_load_bitmap("5.jpg");
	personaje_6_2.foto = al_load_bitmap("6.jpg");
	personaje_7_2.foto = al_load_bitmap("7.jpg");
	personaje_8_2.foto = al_load_bitmap("8.jpg");
	personaje_9_2.foto = al_load_bitmap("9.jpg");
	personaje_10_2.foto = al_load_bitmap("10.jpg");
	J1 matriz1[3][3] = { {personaje_1_1,personaje_5_1,personaje_7_1},{personaje_2_1,personaje_6_1,personaje_9_1},{personaje_3_1,personaje_7_1,personaje_10_1} };
	J2 matriz2[3][3] = { {personaje_1_2,personaje_5_2,personaje_7_2},{personaje_2_2,personaje_6_2,personaje_9_2},{personaje_3_2,personaje_7_2,personaje_10_2} };
	bool playing = true;
	J1 seleccion;
	J2 seleccion2;
	int turno = 1;
	while (playing)
	{
		ALLEGRO_EVENT event;
		al_wait_for_event(queue, &event);
		al_register_event_source(queue, al_get_mouse_event_source());
		int mouseX = event.mouse.x;
		int mouseY = event.mouse.y;
		if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			playing = false;

		}
		if (turno == 1)
		{
			ALLEGRO_EVENT event;
			al_wait_for_event(queue, &event);
			al_register_event_source(queue, al_get_mouse_event_source());
			int mouseX = event.mouse.x;
			int mouseY = event.mouse.y;
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
			{
				al_play_sample_instance(click);
				playing = false;
				break;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 205 && mouseX < 507 && mouseY > 170 && mouseY < 410)
			{
				al_play_sample_instance(click);
				seleccion = personaje_1_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 205 && mouseX < 507 && mouseY > 457 && mouseY < 700)
			{
				al_play_sample_instance(click);
				seleccion = personaje_2_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 205 && mouseX < 507 && mouseY > 745 && mouseY < 1000)
			{
				al_play_sample_instance(click);
				seleccion = personaje_3_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 570 && mouseX < 870 && mouseY > 170 && mouseY < 410)
			{
				al_play_sample_instance(click);
				seleccion = personaje_5_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 570 && mouseX < 870 && mouseY > 457 && mouseY < 700)
			{
				al_play_sample_instance(click);
				seleccion = personaje_6_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 570 && mouseX < 870 && mouseY > 745 && mouseY < 1000)
			{
				al_play_sample_instance(click);
				seleccion = personaje_7_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 920 && mouseX < 1230 && mouseY > 170 && mouseY < 410)
			{
				al_play_sample_instance(click);
				seleccion = personaje_8_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 920 && mouseX < 1230 && mouseY > 457 && mouseY < 700)
			{
				al_play_sample_instance(click);
				seleccion = personaje_9_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 920 && mouseX < 1230 && mouseY > 745 && mouseY < 1000)
			{
				al_play_sample_instance(click);
				seleccion = personaje_10_1;
				turno = 2;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_AXES)
			{
				if (mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(0, 0, 0), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(0, 0, 0));
					al_draw_text(font, al_map_rgb(0, 0, 0), 86, 20, 0, "Jugador 1 selecciona tu personaje");
					al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);//
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);//
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);//
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);//
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);//
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);//
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
					al_flip_display();
				}
				else if (mouseX > 205 && mouseX < 507 && mouseY > 170 && mouseY < 410)//1
				{
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 205 && mouseX < 507 && mouseY > 457 && mouseY < 700)//2
				{
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 205 && mouseX < 507 && mouseY > 745 && mouseY < 1000)//3
				{
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 570 && mouseX < 870 && mouseY > 170 && mouseY < 410)//5
				{
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 570 && mouseX < 870 && mouseY > 457 && mouseY < 700)//6
				{
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 570 && mouseX < 870 && mouseY > 745 && mouseY < 1000)//7
				{
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 920 && mouseX < 1230 && mouseY > 170 && mouseY < 410)//8
				{
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 920 && mouseX < 1230 && mouseY > 457 && mouseY < 700)//9
				{
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 920 && mouseX < 1230 && mouseY > 745 && mouseY < 1000)//10
				{
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}


				else
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
					al_draw_text(font, al_map_rgb(0, 0, 0), 86, 20, 0, "Jugador 1 selecciona tu personaje");
					al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
					al_flip_display();
				}
			}
		}
		else if (turno == 2)
		{
			ALLEGRO_EVENT event;
			al_wait_for_event(queue, &event);
			al_register_event_source(queue, al_get_mouse_event_source());
			int mouseX = event.mouse.x;
			int mouseY = event.mouse.y;
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
			{
				al_play_sample_instance(click);
				playing = false;
				break;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 205 && mouseX < 507 && mouseY > 170 && mouseY < 410)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_1_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 205 && mouseX < 507 && mouseY > 457 && mouseY < 700)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_2_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 205 && mouseX < 507 && mouseY > 745 && mouseY < 1000)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_3_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 570 && mouseX < 870 && mouseY > 170 && mouseY < 410)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_5_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 570 && mouseX < 870 && mouseY > 457 && mouseY < 700)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_6_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 570 && mouseX < 870 && mouseY > 745 && mouseY < 1000)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_7_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 920 && mouseX < 1230 && mouseY > 170 && mouseY < 410)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_8_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 920 && mouseX < 1230 && mouseY > 457 && mouseY < 700)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_9_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 920 && mouseX < 1230 && mouseY > 745 && mouseY < 1000)
			{
				al_play_sample_instance(click);
				seleccion2 = personaje_10_2;
				turno = 3;
			}
			if (event.type == ALLEGRO_EVENT_MOUSE_AXES)
			{
				if (mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(0, 0, 0), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(0, 0, 0));
					al_draw_text(font, al_map_rgb(0, 0, 0), 86, 20, 0, "Jugador 2 selecciona tu personaje");
					al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_1_2.foto, 208, 180, 0);//
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_2_2.foto, 208, 467, 0);//
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_2.foto, 208, 755, 0);//
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_2.foto, 573, 180, 0);//
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_2.foto, 573, 467, 0);//
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_2.foto, 573, 755, 0);//
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_2.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_2.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_2.foto, 923, 755, 0);
					al_flip_display();
				}
				else if (mouseX > 205 && mouseX < 507 && mouseY > 170 && mouseY < 410)//1
				{
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 205 && mouseX < 507 && mouseY > 457 && mouseY < 700)//2
				{
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 205 && mouseX < 507 && mouseY > 745 && mouseY < 1000)//3
				{
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 570 && mouseX < 870 && mouseY > 170 && mouseY < 410)//5
				{
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 570 && mouseX < 870 && mouseY > 457 && mouseY < 700)//6
				{
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 570 && mouseX < 870 && mouseY > 745 && mouseY < 1000)//7
				{
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 920 && mouseX < 1230 && mouseY > 170 && mouseY < 410)//8
				{
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 920 && mouseX < 1230 && mouseY > 457 && mouseY < 700)//9
				{
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}
				else if (mouseX > 920 && mouseX < 1230 && mouseY > 745 && mouseY < 1000)//10
				{
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 0, 0), 15);
					al_flip_display();
				}


				else
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
					al_draw_text(font, al_map_rgb(0, 0, 0), 86, 20, 0, "Jugador 2 selecciona tu personaje");
					al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
					al_flip_display();
				}
			}
		}
		else if (turno == 3)
		{
			char pregunta1[100];
			int puntos1 = 0;
			int puntos2 = 0;
			int cont = 0;
			ALLEGRO_EVENT event;
			al_wait_for_event(queue, &event);
			al_register_event_source(queue, al_get_mouse_event_source());
			al_register_event_source(queue, al_get_keyboard_event_source());
			int mouseX = event.mouse.x;
			int mouseY = event.mouse.y;
			int pregunta = 0;
			int turnoo = 1;
			while (turnoo == 1)
			{
				ALLEGRO_EVENT event;
				al_wait_for_event(queue, &event);
				al_register_event_source(queue, al_get_mouse_event_source());
				al_register_event_source(queue, al_get_keyboard_event_source());
				int mouseX = event.mouse.x;
				int mouseY = event.mouse.y;
				if (event.type == ALLEGRO_EVENT_KEY_UP)
				{
					int keycode = event.keyboard.keycode;
					if (keycode >= ALLEGRO_KEY_A && keycode <= ALLEGRO_KEY_Z)
					{
						char character = 'a' + (keycode - ALLEGRO_KEY_A);
						pregunta1[cont] = character;
						cont = cont + 1;
					}
					if (keycode >= ALLEGRO_KEY_0 && keycode <= ALLEGRO_KEY_9)
					{
						char characters = '0' + (keycode - ALLEGRO_KEY_0);
						pregunta1[cont] = characters;
						cont = cont + 1;
						al_flip_display();
					}
					if (keycode == ALLEGRO_KEY_ENTER)
					{
						if (pregunta == 0)
						{
							printf("0");

							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz1[i][j].sexo)
									{
										matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos1=puntos1+1;

									}
								}
								al_flip_display();
							}
						}
						if (pregunta == 1)
						{
							printf("1");
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz1[i][j].piel)
									{
										matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos1 = puntos1 + 1;

									}
								}
							}
						}
						if (pregunta == 2)
						{
							printf("2");
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz1[i][j].vello)
									{
										matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos1 = puntos1 + 1;

									}
								}
							}
						}
						if (pregunta == 3)
						{
							printf("3");
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz1[i][j].cabello)
									{
										matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos1 = puntos1 + 1;

									}
								}
							}
						}
						if (pregunta == 4)
						{
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz1[i][j].accesorios1 || pregunta1[1] == matriz1[i][j].accesorios2)
									{
										printf("4");
										matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos1 = puntos1 + 1;
									}
								}
							}
						}
						for (int i = 0; i < 20; i++)
						{
							if (pregunta1[i] = !'\0')
							{
								cont = 0;
								pregunta1[i] = '\0';
							}
							else
							{
								break;
							}
						}
						turnoo = 2;
						al_flip_display();
					}
					
				}




				if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
				{
					al_play_sample_instance(click);
					playing = false;
					break;
				}
				if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 1738 && mouseX < 1756 && mouseY>100 && mouseY < 130)
				{
					al_play_sample_instance(click);
					if (pregunta + 1 > 4)
					{
						pregunta = 0;
						al_flip_display();
					}
					else
					{
						pregunta = pregunta + 1;
					}
					al_flip_display();
				}
				

				if (event.type == ALLEGRO_EVENT_MOUSE_AXES)
				{

					if (mouseX > 1738 && mouseX < 1756 && mouseY>100 && mouseY < 130)
					{
						al_draw_line(43, 43, 55, 43, al_map_rgb(0, 0, 0), 10);
						al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(0, 0, 0));
						al_draw_text(font, al_map_rgb(0, 0, 0), 1250, 20, 0, "Jugador 1 selecciona tu pregunta");
						al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
						al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);//
						al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);//
						al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);//
						al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);//
						al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);//
						al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);//
						al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
						al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
						al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
						al_draw_filled_triangle(1738, 102, 1757, 116, 1738, 130, al_map_rgb(3, 153, 83));
						al_draw_filled_rectangle(1433, 187, 1890, 280, al_map_rgb(255, 255, 255));
						al_draw_text(font, al_map_rgb(0, 0, 0), 1440, 190, 0, pregunta1);
						if (pregunta == 0)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Sexo");
						}
						else if (pregunta == 1)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Color de Piel");
						}
						else if (pregunta == 2)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Vello Facial");
						}
						else if (pregunta == 3)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Cabello");
						}
						else if (pregunta == 4)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Accesorio");
						}
						al_flip_display();
					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 0)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Sexo");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 1)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Color de piel");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 2)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Vello Facial");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 3)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Cabello");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 4)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Accesorio");

					}

				}

				else
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
					al_draw_text(font, al_map_rgb(0, 0, 0), 1250, 20, 0, "Jugador 1 selecciona tu pregunta");
					al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
					al_draw_filled_triangle(1738, 102, 1757, 116, 1738, 130, al_map_rgb(0, 0, 0));
					al_draw_filled_rectangle(1433, 187, 1890, 280, al_map_rgb(255, 255, 255));
					al_draw_text(font, al_map_rgb(0, 0, 0), 1440, 190, 0, pregunta1);
					if (pregunta == 0)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Sexo");
					}
					else if (pregunta == 1)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Color de Piel");
					}
					else if (pregunta == 2)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Vello Facial");
					}
					else if (pregunta == 3)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Cabello");
					}
					else if (pregunta == 4)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Accesorio");
					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 0)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Sexo");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 1)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Color de piel");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 2)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Vello Facial");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 3)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Cabello");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 4)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Accesorio");

					}
					al_flip_display();

				}

			}

			while (turnoo == 2)
			{
				ALLEGRO_EVENT event;
				al_wait_for_event(queue, &event);
				al_register_event_source(queue, al_get_mouse_event_source());
				al_register_event_source(queue, al_get_keyboard_event_source());
				int mouseX = event.mouse.x;
				int mouseY = event.mouse.y;
				if (event.type == ALLEGRO_EVENT_KEY_UP)
				{
					int keycode = event.keyboard.keycode;
					if (keycode >= ALLEGRO_KEY_A && keycode <= ALLEGRO_KEY_Z)
					{
						char character = 'a' + (keycode - ALLEGRO_KEY_A);
						pregunta1[cont] = character;
						cont = cont + 1;
					}
					if (keycode >= ALLEGRO_KEY_0 && keycode <= ALLEGRO_KEY_9)
					{
						char characters = '0' + (keycode - ALLEGRO_KEY_0);
						pregunta1[cont] = characters;
						cont = cont + 1;
						al_flip_display();
					}
					if (keycode == ALLEGRO_KEY_ENTER)
					{
						if (pregunta == 0)
						{
							printf("0");

							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz2[i][j].sexo)
									{
										matriz2[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos2 = puntos2 + 1;

									}
								}
								al_flip_display();
							}
						}
						if (pregunta == 1)
						{
							printf("1");
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz2[i][j].piel)
									{
										matriz2[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos2 = puntos2 + 1;

									}
								}
							}
						}
						if (pregunta == 2)
						{
							printf("2");
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz2[i][j].vello)
									{
										matriz2[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos2 = puntos2 + 1;

									}
								}
							}
						}
						if (pregunta == 3)
						{
							printf("3");
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz2[i][j].cabello)
									{
										matriz2[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos2 = puntos2 + 1;

									}
								}
							}
						}
						if (pregunta == 4)
						{
							for (int i = 0; i < 3; i++)
							{
								for (int j = 0; j < 3; j++)
								{
									if (pregunta1[1] == matriz2[i][j].accesorios1 || pregunta1[1] == matriz2[i][j].accesorios2)
									{
										printf("4");
										matriz2[i][j].foto = al_load_bitmap("calaca.jpeg");
										al_flip_display();
										puntos2 = puntos2 + 1;
										}
									}
								}
							}
						}
						for (int i = 0; i < 20; i++)
						{
							if (pregunta1[i] = !'\0')
							{
								cont = 0;
								pregunta1[i] = '\0';
							}
							else
							{
								break;
							}
						}
						turnoo = 1;
						al_flip_display();
					}
					
				




				if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
				{
					al_play_sample_instance(click);
					playing = false;
					break;
				}
				if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 1738 && mouseX < 1756 && mouseY>100 && mouseY < 130)
				{
					al_play_sample_instance(click);
					if (pregunta + 1 > 4)
					{
						pregunta = 0;
						al_flip_display();

					}
					else
					{
						pregunta = pregunta + 1;
					}
					al_flip_display();
				}

				if (event.type == ALLEGRO_EVENT_MOUSE_AXES)
				{

					if (mouseX > 1738 && mouseX < 1756 && mouseY>100 && mouseY < 130)
					{
						al_draw_line(43, 43, 55, 43, al_map_rgb(0, 0, 0), 10);
						al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(0, 0, 0));
						al_draw_text(font, al_map_rgb(0, 0, 0), 1250, 20, 0, "Jugador 2 selecciona tu pregunta");
						al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
						al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);//
						al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);//
						al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);//
						al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);//
						al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);//
						al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);//
						al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
						al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
						al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
						al_draw_filled_triangle(1738, 102, 1757, 116, 1738, 130, al_map_rgb(3, 153, 83));
						al_draw_filled_rectangle(1433, 187, 1890, 280, al_map_rgb(255, 255, 255));
						al_draw_text(font, al_map_rgb(0, 0, 0), 1440, 190, 0, pregunta1);
						if (pregunta == 0)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Sexo");
						}
						else if (pregunta == 1)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Color de Piel");
						}
						else if (pregunta == 2)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Vello Facial");
						}
						else if (pregunta == 3)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Cabello");
						}
						else if (pregunta == 4)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Accesorio");
						}
						al_flip_display();
					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 0)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Sexo");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 1)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Color de piel");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 2)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Vello Facial");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 3)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Cabello");

					}
					else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 4)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Accesorio");

					}

				}

				else
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
					al_draw_text(font, al_map_rgb(0, 0, 0), 1250, 20, 0, "Jugador 2 selecciona tu pregunta");
					al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
					al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);
					al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);
					al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
					al_draw_filled_triangle(1738, 102, 1757, 116, 1738, 130, al_map_rgb(0, 0, 0));
					al_draw_filled_rectangle(1433, 187, 1890, 280, al_map_rgb(255, 255, 255));
					al_draw_text(font, al_map_rgb(0, 0, 0), 1440, 190, 0, pregunta1);
					if (pregunta == 0)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Sexo");
					}
					else if (pregunta == 1)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Color de Piel");
					}
					else if (pregunta == 2)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Vello Facial");
					}
					else if (pregunta == 3)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Cabello");
					}
					else if (pregunta == 4)
					{
						al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Accesorio");
					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 0)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Sexo");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 1)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Color de piel");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 2)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Vello Facial");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 3)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Cabello");

					}
					if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 4)
					{
						al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Accesorio");

					}
					al_flip_display();

				}
				while (turnoo == 1)
				{
					ALLEGRO_EVENT event;
					al_wait_for_event(queue, &event);
					al_register_event_source(queue, al_get_mouse_event_source());
					al_register_event_source(queue, al_get_keyboard_event_source());
					int mouseX = event.mouse.x;
					int mouseY = event.mouse.y;
					if (event.type == ALLEGRO_EVENT_KEY_UP)
					{
						int keycode = event.keyboard.keycode;
						if (keycode >= ALLEGRO_KEY_A && keycode <= ALLEGRO_KEY_Z)
						{
							char character = 'a' + (keycode - ALLEGRO_KEY_A);
							pregunta1[cont] = character;
							cont = cont + 1;
						}
						if (keycode >= ALLEGRO_KEY_0 && keycode <= ALLEGRO_KEY_9)
						{
							char characters = '0' + (keycode - ALLEGRO_KEY_0);
							pregunta1[cont] = characters;
							cont = cont + 1;
							al_flip_display();
						}
						if (keycode == ALLEGRO_KEY_ENTER)
						{
							if (pregunta == 0)
							{
								printf("0");

								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (pregunta1[1] == matriz1[i][j].sexo)
										{
											matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
											al_flip_display();
											puntos1 = puntos1 + 1;

										}
									}
									al_flip_display();
								}
							}
							if (pregunta == 1)
							{
								printf("1");
								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (pregunta1[1] == matriz1[i][j].piel)
										{
											matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
											al_flip_display();
											puntos1 = puntos1 + 1;

										}
									}
								}
							}
							if (pregunta == 2)
							{
								printf("2");
								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (pregunta1[1] == matriz1[i][j].vello)
										{
											matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
											al_flip_display();
											puntos1 = puntos1 + 1;

										}
									}
								}
							}
							if (pregunta == 3)
							{
								printf("3");
								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (pregunta1[1] == matriz1[i][j].cabello)
										{
											matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
											al_flip_display();
											puntos1 = puntos1 + 1;

										}
									}
								}
							}
							if (pregunta == 4)
							{
								for (int i = 0; i < 3; i++)
								{
									for (int j = 0; j < 3; j++)
									{
										if (pregunta1[1] == matriz1[i][j].accesorios1 || pregunta1[1] == matriz1[i][j].accesorios2)
										{
											printf("4");
											matriz1[i][j].foto = al_load_bitmap("calaca.jpeg");
											al_flip_display();
											puntos1 = puntos1 + 1;
										}
									}
								}
							}
							for (int i = 0; i < 20; i++)
							{
								if (pregunta1[i] = !'\0')
								{
									cont = 0;
									pregunta1[i] = '\0';
								}
								else
								{
									break;
								}
							}
							turnoo = 2;
							al_flip_display();
						}

					}




					if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 17 && mouseX < 55 && mouseY>20 && mouseY < 50)
					{
						al_play_sample_instance(click);
						playing = false;
						break;
					}
					if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 1738 && mouseX < 1756 && mouseY>100 && mouseY < 130)
					{
						al_play_sample_instance(click);
						if (pregunta + 1 > 4)
						{
							pregunta = 0;
							al_flip_display();
						}
						else
						{
							pregunta = pregunta + 1;
						}
						al_flip_display();
					}


					if (event.type == ALLEGRO_EVENT_MOUSE_AXES)
					{

						if (mouseX > 1738 && mouseX < 1756 && mouseY>100 && mouseY < 130)
						{
							al_draw_line(43, 43, 55, 43, al_map_rgb(0, 0, 0), 10);
							al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(0, 0, 0));
							al_draw_text(font, al_map_rgb(0, 0, 0), 1250, 20, 0, "Jugador 1 selecciona tu pregunta");
							al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
							al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);//
							al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);//
							al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);//
							al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);//
							al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);//
							al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);//
							al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
							al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
							al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
							al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
							al_draw_filled_triangle(1738, 102, 1757, 116, 1738, 130, al_map_rgb(3, 153, 83));
							al_draw_filled_rectangle(1433, 187, 1890, 280, al_map_rgb(255, 255, 255));
							al_draw_text(font, al_map_rgb(0, 0, 0), 1440, 190, 0, pregunta1);
							if (pregunta == 0)
							{
								al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Sexo");
							}
							else if (pregunta == 1)
							{
								al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Color de Piel");
							}
							else if (pregunta == 2)
							{
								al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Vello Facial");
							}
							else if (pregunta == 3)
							{
								al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Cabello");
							}
							else if (pregunta == 4)
							{
								al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Accesorio");
							}
							al_flip_display();
						}
						if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 0)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Sexo");

						}
						else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 1)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Color de piel");

						}
						else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 2)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Vello Facial");

						}
						else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 3)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Cabello");

						}
						else if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 4)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Accesorio");

						}

					}

					else
					{
						al_draw_bitmap(fondo, 0, 0, 0);
						al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
						al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
						al_draw_text(font, al_map_rgb(0, 0, 0), 1250, 20, 0, "Jugador 1 selecciona tu pregunta");
						al_draw_filled_rectangle(121, 107, 1305, 1043, al_map_rgb(0, 0, 0));
						al_draw_rectangle(205, 170, 507, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_1_1.foto, 208, 180, 0);
						al_draw_rectangle(205, 457, 507, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_2_1.foto, 208, 467, 0);
						al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);
						al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);
						al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);
						al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);
						al_draw_rectangle(920, 170, 1230, 410, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
						al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
						al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
						al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
						al_draw_filled_triangle(1738, 102, 1757, 116, 1738, 130, al_map_rgb(0, 0, 0));
						al_draw_filled_rectangle(1433, 187, 1890, 280, al_map_rgb(255, 255, 255));
						al_draw_text(font, al_map_rgb(0, 0, 0), 1440, 190, 0, pregunta1);
						if (pregunta == 0)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Sexo");
						}
						else if (pregunta == 1)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Color de Piel");
						}
						else if (pregunta == 2)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Vello Facial");
						}
						else if (pregunta == 3)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Cabello");
						}
						else if (pregunta == 4)
						{
							al_draw_text(font, al_map_rgb(0, 0, 0), 1465, 100, 0, "Accesorio");
						}
						if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 0)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Sexo");

						}
						if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 1)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Color de piel");

						}
						if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 2)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Vello Facial");

						}
						if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 3)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Cabello");

						}
						if (mouseX > 1460 && mouseX < 1715 && mouseY>127 && mouseY < 129 && pregunta == 4)
						{
							al_draw_text(font, al_map_rgb(255, 0, 0), 1465, 100, 0, "Accesorio");

						}
						al_flip_display();

					}

				}

			}
			al_uninstall_keyboard();
		}
	}
	}



	

	
