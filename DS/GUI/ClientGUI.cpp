//
// Created by danium on 13/8/19.
//

#include "ClientGUI.hpp"
#include "arbolGUI.h"
#include "listaGUI.h"
#include <gtk/gtk.h>

ClientGUI::ClientGUI(int argc, char **argv) {

    gtk_init(&argc, &argv);

    vbox1 = gtk_vbox_new(0, 0);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Tarea 2");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    gtk_container_set_border_width(GTK_CONTAINER(window), 15);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);


    btn_arbol = gtk_button_new_with_label("Arbol");
    gtk_widget_set_size_request(vbox1, 70, 30);
   gtk_box_pack_start(GTK_BOX(vbox1),btn_arbol,1,1,0);

    btn_lista = gtk_button_new_with_label("Lista");
    gtk_widget_set_size_request(vbox1, 70, 30);
    gtk_box_pack_start(GTK_BOX(vbox1),btn_lista,1,1,0);



    gtk_container_add(GTK_CONTAINER(window), vbox1);




    g_signal_connect(G_OBJECT(btn_arbol), "clicked",
                     G_CALLBACK(button_arbol), NULL);
    g_signal_connect(G_OBJECT(btn_lista), "clicked",
                     G_CALLBACK(button_lista), NULL);
    g_signal_connect(G_OBJECT(window), "destroy",
                     G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);

    gtk_main();
}

void ClientGUI::button_arbol(GtkWidget *widget, gpointer data) {
    g_print("Arbol\n");
    arbolGUI *arbol = new arbolGUI();
   // gtk_window_close(reinterpret_cast<GtkWindow *>(widget));

}

void ClientGUI::button_lista(GtkWidget *widget, gpointer data) {
    g_print("Lista\n");
    listaGUI *lisa = new listaGUI();
    //gtk_window_close(reinterpret_cast<GtkWindow *>(widget));

}