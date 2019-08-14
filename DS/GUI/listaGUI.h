//
// Created by danium on 14/8/19.
//

#ifndef GTK_TEST_LISTAGUI_H
#define GTK_TEST_LISTAGUI_H


#include <gtk/gtk.h>

class listaGUI {
public:
    GtkWidget *window,*btn_insertar,*btn_delete,*btn_get,*btn_set,*vbox,*entry;

    listaGUI();

};


#endif //GTK_TEST_LISTAGUI_H
