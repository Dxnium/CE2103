//
// Created by danium on 14/8/19.
//

#include "listaGUI.h"

listaGUI::listaGUI() {
    vbox = gtk_vbox_new(0, 0);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);


    gtk_window_set_title(GTK_WINDOW(window), "Tarea 2");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    gtk_container_set_border_width(GTK_CONTAINER(window), 15);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    entry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(vbox),entry,0,1,0);

    btn_insertar = gtk_button_new_with_label("Insertar");
    gtk_box_pack_start(GTK_BOX(vbox),btn_insertar,1,1,0);

    btn_delete = gtk_button_new_with_label("Eliminar");
    gtk_box_pack_start(GTK_BOX(vbox),btn_delete,1,1,0);

    btn_get = gtk_button_new_with_label("Get");
    gtk_box_pack_start(GTK_BOX(vbox),btn_get,1,1,0);

    btn_set = gtk_button_new_with_label("Set");
    gtk_box_pack_start(GTK_BOX(vbox),btn_set,1,1,0);


    gtk_container_add(GTK_CONTAINER(window), vbox);

    g_signal_connect(G_OBJECT(window), "destroy",
                     G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);
    gtk_main();

}
