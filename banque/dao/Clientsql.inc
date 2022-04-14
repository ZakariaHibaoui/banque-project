<?php


require_once("connexion.inc") ;

//question 1

     
 function  existeClient($cin)
 {    
   global $conn;
    
   $sql = "SELECT cin FROM client WHERE cin = $cin ";

   $resultat=$conn->query($sql);// on a exec  qui  execute la commande sql mais sauf query permet te retourne les resultats surtout quand tu affiche les tableaux
   
   $donnees = $resultat->fetchAll(); //fetchAll retourne les valeurs et on utilise car on a utilise PDO
 
   foreach($donnees as $ligne) // foreach une boucle permet de chercher dans tous les lignes   

   if($ligne["cin"]==$cin)
   {
   echo "votre compte existe"."<br>";
   
   return 1;
   }
 
   return 0; 
   
   
 }



//question 4

 function nouveauClient($nom,$prenom,$address,$numero,$montant,$cin)
 {
             if(!existeClient($cin))
    {

     global $conn;
    
 }
 
//question 6

function infos($cin)
{

   global $conn;
    
    $sql = "SELECT nom ,prenom,numero,montant FROM client INNER JOIN compte ON client.cin = compte.cin where client.cin = \"$cin\"";
    
     $resultat=$conn->query($sql); //query permet te retourne les resultats surtout quand tu affiche les tableaux
   
    $donnees = $resultat->fetchAll();
 
  foreach($donnees as $ligne)
 
  echo $ligne["nom"]." ".$ligne["prenom"]." ".$ligne["numero"]." "."<br>".$ligne["montant"]."<br>";
    

 
}

//question 7
function supprime($cin)
{
      if( existeClient($cin) )

      {  
              global $conn;
                
              $sql = "SELECT * FROM client INNER JOIN compte ON client.cin = compte.cin;DELETE FROM client WHERE cin = $cin;";

               $conn->exec($sql);
               echo"votre compte  est supprimer";
    
      }
}



?>