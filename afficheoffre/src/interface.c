/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *notebook1;
  GtkWidget *fixed2;
  GtkWidget *label4;
  GtkWidget *button7;
  GtkWidget *button1;
  GtkWidget *button2;
  GtkWidget *button3;
  GtkWidget *button4;
  GtkWidget *button5;
  GtkWidget *button6;
  GtkWidget *label1;
  GtkWidget *fixed3;
  GtkWidget *label2;
  GtkWidget *fixed4;
  GtkWidget *label3;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));
  gtk_window_set_position (GTK_WINDOW (window1), GTK_WIN_POS_CENTER);
  gtk_window_set_gravity (GTK_WINDOW (window1), GDK_GRAVITY_CENTER);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed1), notebook1, 0, 0);
  gtk_widget_set_size_request (notebook1, 408, 304);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  label4 = gtk_label_new (_("Bonjour "));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 120, 10);
  gtk_widget_set_size_request (label4, 175, 50);

  button7 = gtk_button_new_with_mnemonic (_("D\303\251connexion"));
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed2), button7, 280, 232);
  gtk_widget_set_size_request (button7, 120, 40);

  button1 = gtk_button_new_with_mnemonic (_("Evenements"));
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed2), button1, 50, 50);
  gtk_widget_set_size_request (button1, 150, 50);

  button2 = gtk_button_new_with_mnemonic (_("Offres"));
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed2), button2, 220, 50);
  gtk_widget_set_size_request (button2, 150, 50);

  button3 = gtk_button_new_with_mnemonic (_("S\303\251ances de cure"));
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed2), button3, 50, 110);
  gtk_widget_set_size_request (button3, 150, 50);

  button4 = gtk_button_new_with_mnemonic (_("         S\303\251ances \nd'entrainements"));
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed2), button4, 220, 110);
  gtk_widget_set_size_request (button4, 150, 50);

  button5 = gtk_button_new_with_mnemonic (_("  Consulter les \nprofils du staff"));
  gtk_widget_show (button5);
  gtk_fixed_put (GTK_FIXED (fixed2), button5, 50, 170);
  gtk_widget_set_size_request (button5, 150, 50);

  button6 = gtk_button_new_with_mnemonic (_("Voir un \nm\303\251decin"));
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed2), button6, 220, 170);
  gtk_widget_set_size_request (button6, 150, 50);

  label1 = gtk_label_new (_("Acceuil"));
  gtk_widget_show (label1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label1);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed3);

  label2 = gtk_label_new (_("Profil"));
  gtk_widget_show (label2);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label2);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed4);

  label3 = gtk_label_new (_("Notifications"));
  gtk_widget_show (label3);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label3);

  g_signal_connect ((gpointer) button7, "clicked",
                    G_CALLBACK (on_button7_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);
  g_signal_connect ((gpointer) button5, "clicked",
                    G_CALLBACK (on_button5_clicked),
                    NULL);
  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_button6_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window1, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, button7, "button7");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, button3, "button3");
  GLADE_HOOKUP_OBJECT (window1, button4, "button4");
  GLADE_HOOKUP_OBJECT (window1, button5, "button5");
  GLADE_HOOKUP_OBJECT (window1, button6, "button6");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed5;
  GtkWidget *combobox1;
  GtkWidget *button8;
  GtkWidget *label5;
  GtkWidget *label6;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("Offres"));

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (window2), fixed5);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed5), combobox1, 168, 64);
  gtk_widget_set_size_request (combobox1, 304, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("None"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("1"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("2"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("3"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("4"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("5"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("6"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("7"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("8"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("9"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("10"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("11"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("12"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("13"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("14"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("15"));

  button8 = gtk_button_new_with_mnemonic (_("Consulter l'offre"));
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed5), button8, 208, 120);
  gtk_widget_set_size_request (button8, 160, 40);

  label5 = gtk_label_new (_("Nos offres :"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed5), label5, 48, 72);
  gtk_widget_set_size_request (label5, 112, 32);

  label6 = gtk_label_new ("");
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed5), label6, 24, 176);
  gtk_widget_set_size_request (label6, 504, 160);

  g_signal_connect ((gpointer) button8, "clicked",
                    G_CALLBACK (on_button8_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (window2, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (window2, button8, "button8");
  GLADE_HOOKUP_OBJECT (window2, label5, "label5");
  GLADE_HOOKUP_OBJECT (window2, label6, "label6");

  return window2;
}

