void Message_Non_disponible(void);
void Message_Memoire_insuffisante(void);
void Bouton_Message_initial(void);

void Changer_la_forme_du_pinceau(byte Numero);

// Boutons relatifs aux couleurs
void Bouton_Pal_left(void);
void Bouton_Pal_left_fast(void);
void Bouton_Pal_right(void);
void Bouton_Pal_right_fast(void);
void Bouton_Choix_forecolor(void);
void Bouton_Choix_backcolor(void);

// Boutons relatifs au pinceaux
void Bouton_Brosse_monochrome(void);
void Bouton_Menu_pinceaux(void);

// Boutons relatifs au mode de dessin � main lev�e
void Bouton_Dessin(void);
void Bouton_Dessin_Switch_mode(void);

// Dessin par ligne
void Bouton_Lignes(void);
void Bouton_Lignes_Switch_mode(void);

// Bouton relatif au remplissage
void Bouton_Fill(void);
void Bouton_Remplacer(void);
void Bouton_desenclencher_Fill(void);

// Spray
void Bouton_Spray(void);
void Bouton_Spray_Menu(void);

// Courbes de B�zier
void Bouton_Courbes(void);
void Bouton_Courbes_Switch_mode(void);

// Boutons relatifs aux rectangles pleins et vides
void Bouton_Rectangle_vide(void);
void Bouton_Rectangle_plein(void);

// Boutons relatifs aux d�grad�s
void Bouton_Degrades(void);
void Degrade_Charger_infos_du_tableau(int Indice);
// Boutons relatifs aux cercles (ellipses) d�grad�(e)s
void Bouton_Cercle_degrade(void);
void Bouton_Ellipse_degrade(void);

// Boutons relatifs aux cercles (ellipses) plein(e)s et vides
void Bouton_Cercle_vide(void);
void Bouton_Ellipse_vide(void);
void Bouton_Cercle_plein(void);
void Bouton_Ellipse_pleine(void);

// Boutons relatifs aux polygones vides et pleins
void Bouton_Polygone(void);
void Bouton_Polyform(void);
void Bouton_Polyfill(void);
void Bouton_Filled_polyform(void);

// Boutons d'ajustement de l'image
void Bouton_Ajuster(void);

// Gestion du mode Shade
void Bouton_Shade_Mode(void);
void Bouton_Quick_shade_Mode(void);
void Bouton_Shade_Menu(void);
// Gestion du Stencil
void Bouton_Stencil_Mode(void);
void Bouton_Menu_Stencil(void);
// Gestion du Masque
void Bouton_Mask_Mode(void);
void Bouton_Mask_Menu(void);
// Mode grille (Snap)
void Bouton_Snap_Mode(void);
void Bouton_Menu_Grille(void);
// Mode trame (Sieve)
void Copier_trame_predefinie(byte Indice);
void Inverser_trame(void);
void Bouton_Trame_Mode(void);
void Bouton_Trame_Menu(void);
// Mode Smooth
void Bouton_Smooth_Mode(void);
void Bouton_Smooth_Mode(void);
// Boutons relatifs au mode Colorize
void Calculer_les_tables_de_Colorize(void);
void Bouton_Colorize_Mode(void);
void Bouton_Colorize_Menu(void);
// Boutons relatifs au mode Tiling
void Bouton_Tiling_Mode(void);
void Bouton_Tiling_Menu(void);
// Menu des effets
void Bouton_Effets(void);

// Prise de brosse
void Bouton_Brosse(void);
void Bouton_Restaurer_brosse(void);
void Bouton_desenclencher_Brosse(void);
// Prise de brosse au lasso
void Bouton_Lasso(void);
void Bouton_desenclencher_Lasso(void);

// Bouton relatifs � la pipette
void Bouton_Pipette(void);
void Bouton_desenclencher_Pipette(void);
void Bouton_Inverser_foreback(void);

// Mode loupe
void Bouton_Loupe(void);
void Bouton_Menu_Loupe(void);
void Bouton_desenclencher_Loupe(void);

// Les diff�rents effets sur la brosse
void Bouton_Brush_FX(void);

// Boutons relatifs aux diff�rentes pages
void Bouton_Page(void);
void Bouton_Copy_page(void);
void Copier_image_seule(void);
void Bouton_Kill(void);

// Boutons relatifs aux changements de r�solution et de taille d'image
void Bouton_Resol(void);
void Bouton_Safety_resol(void);

// Boutons relatifs aux chargements et sauvegardes
void Bouton_Load(void);
void Bouton_Reload(void);
void Bouton_Save(void);
void Bouton_Autosave(void);

// R�glage des param�tres de l'utilisateur
void Bouton_Settings(void);

// Annulation de la derni�re modification
void Bouton_Undo(void);
void Bouton_Redo(void);

// Boutons relatifs aux effacements d'images
void Bouton_Clear(void);
void Bouton_Clear_colore(void);

// Quitter le programme
void Bouton_Quit(void);

// Cacher le menu
void Bouton_Cacher_menu(void);

void Stencil_Tagger_couleur(byte Couleur, byte Couleur_de_taggage);

void Load_picture(byte Image);
void Save_picture(byte Image);

void Menu_Tag_couleurs(char * En_tete, byte * Table, byte * Mode, byte Cancel);

void Bouton_Smooth_Menu(void);

void Bouton_Smear_Mode(void);

  // -- Gestion du chrono --
  byte Etat_chrono; // Etat du chrono: 0=Attente d'un X�me de seconde
                    //                 1=Il faut afficher la preview
                    //                 2=Plus de chrono � gerer pour l'instant
  long Chrono_delay;     // Nombre de 18.2�me de secondes demand�s
  long Chrono_cmp;       // Heure de d�part du chrono
  byte Nouvelle_preview; // Bool�en "Il faut relancer le chrono de preview"
  // Les fonctions de manipulation du chrono se trouvent dans DIVERS.ASM
