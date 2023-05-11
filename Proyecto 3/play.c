#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_primitives.h>
#include "Personajes.h"


play(ALLEGRO_DISPLAY*display, ALLEGRO_EVENT_QUEUE*queue, ALLEGRO_TIMER*timer,ALLEGRO_FONT*font, ALLEGRO_MOUSE_CURSOR*cursor, ALLEGRO_BITMAP*fondo, ALLEGRO_SAMPLE_INSTANCE*click ,bool running)
{
	personaje_1_1.foto = al_load_bitmap("11.jpg");
	personaje_2_1.foto = al_load_bitmap("2.jpg");
	personaje_3_1.foto = al_load_bitmap("3.jpg");
	personaje_5_1.foto = al_load_bitmap("5.jpg");
	personaje_6_1.foto = al_load_bitmap("6.jpg");
	personaje_7_1.foto = al_load_bitmap("7.jpg");
	personaje_8_1.foto = al_load_bitmap("8.jpg");
	personaje_9_1.foto = al_load_bitmap("9.jpg");
	personaje_10_1.foto = al_load_bitmap("10.jpg");
	al_flip_display();
	bool playing = true;
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
		while (turno == 1)
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
					al_draw_bitmap(personaje_2_1.foto, 208, 467,0);
					al_draw_rectangle(205, 745, 507, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_3_1.foto, 208, 755, 0);
					al_draw_rectangle(570, 170, 870, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_5_1.foto, 573, 180, 0);
					al_draw_rectangle(570, 457, 870, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_6_1.foto, 573, 467, 0);
					al_draw_rectangle(570, 745, 870, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_7_1.foto, 573, 755, 0);
					al_draw_rectangle(920, 170,1230, 410, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_8_1.foto, 923, 180, 0);
					al_draw_rectangle(920, 457, 1230, 700, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_9_1.foto, 923, 467, 0);
					al_draw_rectangle(920, 745, 1230, 1000, al_map_rgb(255, 255, 255), 15);
					al_draw_bitmap(personaje_10_1.foto, 923, 755, 0);
					al_flip_display();
				}
			}
		}
	}
}
	
