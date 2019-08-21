//
// Created by danium on 13/8/19.
//

#ifndef GTK_TEST_ARBOLGUI_H
#define GTK_TEST_ARBOLGUI_H

#include <gtk/gtk.h>
#include "../BinaryTree/BinaryTree.h"


class arbolGUI {
public:
    GtkWidget *window,*btn_insertar,*btn_delete,*vbox,*entry;

    static void insertar(GtkWidget *widget, gpointer *data);


    arbolGUI();

};


#endif //GTK_TEST_ARBOLGUI_H
