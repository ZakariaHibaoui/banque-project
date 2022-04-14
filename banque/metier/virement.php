<?php
include "../dao/Comptesql.inc";
$a  = $_POST['numero'];
$b  = $_POST['valeur'];

//question 5

virement($a, $b);

?>