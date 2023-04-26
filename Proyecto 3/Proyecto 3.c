#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>



int main()
{
    al_init(); // inicializar la libreria allegro
    al_init_font_addon(); // inicializar los addons de fuentes
    al_init_ttf_addon(); // inicializar los addons de texto
    al_install_keyboard(); // instalar el teclado
    al_install_mouse(); // instalar el mouse
    al_init_image_addon();
    al_init_acodec_addon();
    al_install_audio();
    al_reserve_samples(2);
    ALLEGRO_DISPLAY * display = al_create_display(800, 600); // crear una pantalla de 800x600
    ALLEGRO_EVENT_QUEUE * queue = al_create_event_queue();  // crear una cola de eventos
    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 60); // actualizar la pantalla a 60 fpS
    ALLEGRO_FONT* font = al_load_ttf_font("GROBOLD.ttf", 40, 0); // cargar una fuente
	ALLEGRO_MOUSE_CURSOR* al_cursor = al_create_mouse_cursor(al_load_bitmap("magnifying-glass.png"), 0, 0); // crear un cursor
    ALLEGRO_SAMPLE* click = NULL;
    ALLEGRO_SAMPLE* fondo = NULL;
    ALLEGRO_SAMPLE_INSTANCE* click_instance = NULL;
    ALLEGRO_SAMPLE_INSTANCE* fondo_instance = NULL;
    ALLEGRO_BITMAP* bitmap = al_load_bitmap("wallpaperbitmap.jpeg");
    

    al_show_mouse_cursor(display); // mostrar el cursor
    al_register_event_source(queue, al_get_keyboard_event_source()); // registrar el teclado
    al_register_event_source(queue, al_get_display_event_source(display)); // registrar la pantalla, osea si das click en la x se cierra
    al_register_event_source(queue, al_get_timer_event_source(timer)); // registrar el timer

    al_set_target_bitmap(al_get_backbuffer(display));
    click = al_load_sample("boton.wav");
    fondo = al_load_sample("fondo.wav");
    click_instance = al_create_sample_instance(click);
    fondo_instance = al_create_sample_instance(fondo);
    al_attach_sample_instance_to_mixer(click_instance, al_get_default_mixer());
    al_attach_sample_instance_to_mixer(fondo_instance, al_get_default_mixer());
    al_set_sample_instance_gain(fondo_instance, 0.11);
    al_set_sample_instance_playmode(fondo_instance, ALLEGRO_PLAYMODE_LOOP);

	bool running = true;
    al_start_timer(timer);
    

	while (running)
    {
        ALLEGRO_EVENT event;    
        al_wait_for_event(queue, &event);
        al_set_mouse_cursor(display, al_cursor);
        al_register_event_source(queue, al_get_mouse_event_source());
        int mouseX = event.mouse.x;
        int mouseY = event.mouse.y;
        al_play_sample_instance(fondo_instance);
       if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE || event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX >= 330 && mouseX <= 443 && mouseY >= 280 && mouseY <= 330)
       {
       		running = false;
       }
       if (event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && mouseX > 330 && mouseX < 443 && mouseY > 200 && mouseY < 250)
       {
           al_play_sample_instance(click_instance);
        //insertar funcion del juego
       }
       if (event.type == ALLEGRO_EVENT_MOUSE_AXES)
       {

           if (mouseX > 330 && mouseX < 443 && mouseY > 200 && mouseY < 250)
           {
               al_draw_bitmap(bitmap, 0, 0, 0);
               al_draw_text(font, al_map_rgb(0, 0, 0), 220, 30, 0, "Adivina quien?");
               al_draw_text(font, al_map_rgb(255, 0, 0), 330, 200, 0, "Jugar");
               al_draw_text(font, al_map_rgb(0, 0, 0), 330, 300, 0, "Salir");
               al_flip_display();
           }
           else if (mouseX >= 330 && mouseX <= 443 && mouseY >= 280 && mouseY <= 330)
           {
               al_draw_bitmap(bitmap, 0, 0, 0);
               al_draw_text(font, al_map_rgb(0, 0, 0), 220, 30, 0, "Adivina quien?");
               al_draw_text(font, al_map_rgb(0, 0, 0), 330, 200, 0, "Jugar");
               al_draw_text(font, al_map_rgb(255, 0, 0), 330, 300, 0, "Salir");
               al_flip_display();
           }
           else
           {
           	al_draw_bitmap(bitmap,0,0,0);
               al_draw_text(font, al_map_rgb(0, 0, 0), 220, 30, 0, "Adivina quien?");
               al_draw_text(font, al_map_rgb(0, 0, 0), 330, 200, 0, "Jugar");
               al_draw_text(font, al_map_rgb(0, 0, 0), 330, 300, 0, "Salir");
               al_flip_display();
           }
       }
    }


    al_destroy_display(display); //liberar memoria, destruir objetos
    al_destroy_font(font);
    al_destroy_event_queue(queue);
    al_destroy_timer(timer);
    al_destroy_mouse_cursor(al_cursor);
    al_uninstall_keyboard();
    al_uninstall_mouse();
    al_shutdown_image_addon();
    al_shutdown_ttf_addon();
    al_destroy_sample(fondo);
    al_destroy_sample_instance(fondo_instance);
    al_destroy_sample(click);
    al_destroy_sample_instance(click_instance);
    al_shutdown_font_addon();
    al_uninstall_audio();
    al_destroy_bitmap(bitmap);
    
	return 0;

    
}