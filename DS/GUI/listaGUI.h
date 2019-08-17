//
// Created by danium on 14/8/19.
//

#ifndef GTK_TEST_LISTAGUI_H
#define GTK_TEST_LISTAGUI_H


#include <gtk/gtk.h>
#include <iostream>
class listaGUI {
public:
    GtkWidget *window,*btn_insertar,*btn_delete,*btn_get,*btn_set,*vbox,*entry;
    char entryText[100];

    listaGUI();
    static void insertar(GtkWidget *widget, gpointer data);

    static void eliminar(GtkWidget *widget, gpointer data);

    static void get(GtkWidget *widget, gpointer data);

    static void set(GtkWidget *widget, gpointer data);
};


#endif //GTK_TEST_LISTAGUI_H
