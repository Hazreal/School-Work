
<?php
    session_start();
   
    if (isset($_POST['username'])){
        $_SESSION['username']=$_POST['username'];
    }
    if (isset($_POST['password'])){
        $_SESSION['password']=$_POST['password'];
    }
?>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Database</title>
        <style>
        .button {
            font: bold 11px;
            text-decoration: none;
            background-color: #EEEEEE;
            color: #333333;
            margin: 10px;
            padding: 2px 6px 2px 6px;
            border: 1px solid #CCCCCC;    
        }
        </style>
    </head>
    <body>
        <?php
        if ((isset($_SESSION['username']) && isset($_SESSION['password'])) && $_SESSION['password'] == 'secret'){
                echo "<p align=\"right\"> Username: ".$_SESSION['username']." <a href=\"logout.php\">Logout</a>";
                echo "<center>";
                include_once 'displayTable.php';            
                echo "</center>";
        }
        
        else {
            echo "<center><h1>Database Login</h1></center>";
            
            echo "<form action='index.php' method='post'>";
            echo "<center><p> Username: <input type='string' name='username'?></p>";
            echo "<p> Password: <input type='password' name='password'?></p><br>";
            echo "<input type = 'submit'></center></form>";
           
        }
        ?>
    </body>
</html>
