#include <gtk/gtk.h>
#include <iostream>
#include "Server.h"

void action(){
    Server s;

}

int main(int argc, char* argv[]){

    gtk_init(&argc,&argv);

    GtkWidget *window, *button;


    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    button = gtk_toggle_button_new_with_label ("Button");

    gtk_window_set_title(reinterpret_cast<GtkWindow *>(window), "DaniUm");
    //Connects GCallback function gtk_main_quit to "destroy" signal for "window"
    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
    g_signal_connect(button,"clicked",G_CALLBACK(action),NULL);

    gtk_container_add(GTK_CONTAINER(window),button);

    gtk_widget_show_all(window);
    gtk_main();
    return 0;

}

