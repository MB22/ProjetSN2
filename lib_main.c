
void  fct_init_VariablesGlobales()
{
  extern int flag_DemandeUtilisateur = 0;
  
  //Initialement on effectue toutes les mesures.
  extern int flag_DemandeTemperature = 1;
  extern int flag_DemandeVitesseVent = 1;
  extern int flag_DemandePluviometrie = 1;

  //Initialement on affecte toutes les variables globales à zéro.
  extern int value_Temperature=0;
  extern int value_VitesseVent=0;
  extern int value_Pluviometrie=0;
  
  extern int value_Heures=0;
  extern int value_Minutes=0;
  extern int value_Secondes=0;
}
