 <?php

// préparation des informations nécessaires 

define("DSN","mysql:host=localhost;dbname=Banque"); 
define("USER","root");
define("MDP","");

// création d'un objet PDO et connexion 

$conn=new PDO(DSN,USER,MDP);

 
?> 
