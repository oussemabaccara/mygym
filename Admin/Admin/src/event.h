
#include <gtk/gtk.h>

typedef struct
{
 	int jour;
 	int mois;
	int annee;
}date;

typedef struct
{
 	int h;
 	char min[30];
}heure;

typedef struct
{	char num[5];
	char nom[40];
	char description[100];
	date date;
	heure heure;
	char nombre[5];
	char nombremax[5];
}event;
int existev(char num[]);
void suppev(char num[]);
event get_event(char ide[]);
void ajout_ev(event e);
void afficher_event(GtkWidget *liste);
int ajout_part(char num[],char id[]);
int modif_nb(char num[]);
int inscription(char id[],char num[]);
int modif_nb1(char num[]);
void supression_part(char num[]);
int annulation(char id[],char num[]);



