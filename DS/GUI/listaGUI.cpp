//
// Created by danium on 14/8/19.
//

#include "listaGUI.h"
#include "../Sockets/Client.h"

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
    g_signal_connect(G_OBJECT(btn_insertar), "clicked",
                     G_CALLBACK(insertar), entry);
    g_signal_connect(G_OBJECT(btn_delete), "clicked",
                     G_CALLBACK(eliminar), entry);
    g_signal_connect(G_OBJECT(btn_get), "clicked",
                     G_CALLBACK(get), entry);
    g_signal_connect(G_OBJECT(btn_set), "clicked",
                     G_CALLBACK(set), entry);

    gtk_widget_show_all(window);
    gtk_main();

}

void listaGUI::insertar(GtkWidget *widget, gpointer data) {
//    g_print("%s\n",gtk_entry_get_text(GTK_ENTRY(data)));
    std::string text = gtk_entry_get_text(GTK_ENTRY(data));
    Client *c = new Client("3,"+text);
    delete c;
}
void listaGUI::eliminar(GtkWidget *widget, gpointer data) {
//    g_print("%s\n",gtk_entry_get_text(GTK_ENTRY(data)));
    std::string text = gtk_entry_get_text(GTK_ENTRY(data));
    Client *c = new Client("4,"+text);
    delete c;
}

void listaGUI::get(GtkWidget *widget, gpointer data) {
    std::string text = gtk_entry_get_text(GTK_ENTRY(data));
    Client *c = new Client("5,"+text);
    delete c;

}

void listaGUI::set(GtkWidget *widget, gpointer data) {
    std::string text = gtk_entry_get_text(GTK_ENTRY(data));
    Client *c = new Client("6,"+text);
    delete c;
}


