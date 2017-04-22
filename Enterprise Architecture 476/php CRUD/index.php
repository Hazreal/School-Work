<?php
    session_start();
    include 'sqlVariables.php';
    if(isset($_SESSION['username']) && $_SESSION['loggedin'] == True){
        echo "<p align=\"right\"> Username: ".$_SESSION['username']." <a href=\"logout.php\">Logout</a>";
    }
    ?>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
    <center><h1>CIS 476 Database</h1></center>
        <?php
        include "showDatabase.php";
        ?>
    </body>
</html>
