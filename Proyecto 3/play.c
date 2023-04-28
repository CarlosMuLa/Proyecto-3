#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_primitives.h>


play(ALLEGRO_DISPLAY*display, ALLEGRO_EVENT_QUEUE*queue, ALLEGRO_TIMER*timer,ALLEGRO_FONT*font, ALLEGRO_MOUSE_CURSOR*cursor, ALLEGRO_BITMAP*fondo, ALLEGRO_SAMPLE_INSTANCE*click ,bool running)
{
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
		al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
		al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
		al_draw_text(font, al_map_rgb(0, 0, 0), 86, 20, 0, "Jugador 1 selecciona tu personaje");
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
					al_flip_display();
				}

				else
				{
					al_draw_bitmap(fondo, 0, 0, 0);
					al_draw_line(43, 43, 55, 43, al_map_rgb(93, 153, 83), 10);
					al_draw_filled_triangle(17, 44, 42, 31, 42, 57, al_map_rgb(93, 153, 83));
					al_draw_text(font, al_map_rgb(0, 0, 0), 86, 20, 0, "Jugador 1 selecciona tu personaje");
					al_flip_display();
				}
			}
		}
	}
}
	
