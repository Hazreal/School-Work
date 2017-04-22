<?php
    session_start();
    ?>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <center><h1>Registration</h1>
            
        <form action='validation.php' method='post'>
            <p> Username: <input type='string' name='username'</p><br>
            <p> Password: <input type='password' name='password'</p><br>
            <p> Re-enter Password: <input type='password' name='password2'</p><br>
            <input type = 'submit'>
        </form>
        </center>
    </body>
</html>
