//
// Created by danium on 13/8/19.
//

#ifndef GTK_TEST_CLIENTGUI_HPP
#define GTK_TEST_CLIENTGUI_HPP


#include <gtk/gtk.h>

class ClientGUI {
public:
    GtkWidget *window;
    GtkWidget *btn_arbol;
    GtkWidget *btn_lista;
    GtkWidget *vbox1;


    ClientGUI(int argc, char **argv);

    static void button_arbol(GtkWidget *widget, gpointer data);

    static void button_lista(GtkWidget *widget, gpointer data);

};



#endif //GTK_TEST_CLIENTGUI_HPP
