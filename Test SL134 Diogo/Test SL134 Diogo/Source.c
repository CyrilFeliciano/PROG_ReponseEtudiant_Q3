//-----------------------------------------------------------------------------------//
// Nom du projet 		: Test SL134
// Nom du fichier 		: source.c
// Date de cr�ation 	: 25.04.2023
// Date de modification : 24.04.2023 DF
//
// Auteur 				: DF
//
// Description          : test de programmation C 
//
// Remarques :            
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>                  // entr�e - sortie
#include <stdlib.h>                 // pour les fonctions syst�mes
#include <stdint.h>
#include <string.h>

//-- d�claration de constantes --// 
#define TITRE "TEST"

//-- programme princiaple --// 
void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = {0x53, 0x4C, 0x4F};
	char tbMSGComplet[15];
	int annee = 2022;
	int8_t version = 0x33;
	int i = 0;
	//copie "TEST"
	for (i = 0; i < strlen(pt_message);i++)
	{
		tbMSGComplet[i] = pt_message[i];
	}
	//copie "3"
	strcpy(&tbMSGComplet[4], &version);
	//copie "SLO"
	strcpy(&tbMSGComplet[6], &tbMSG);
	//copie "2022"
	itoa(annee, &tbMSGComplet[9], 10);
	//ajoute ' '
	tbMSGComplet[5] = ' ';
	printf_s(tbMSGComplet);
}