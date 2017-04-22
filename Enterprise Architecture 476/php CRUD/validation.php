<?php

include 'sqlVariables.php';
    
    $conn = mysqli_connect($servername, $username,$password, $dbname);
    
    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }
    
    $usercheck = "SELECT {$table_3}.username from {$table_3} WHERE username = '{$_POST["username"]}' ";
    
    $result = mysqli_query($conn, $usercheck);
   
    $password = sha1($_POST['password']);
    $insertuser = "INSERT INTO {$table_3} (username, password) VALUES ('{$_POST['username']}', '{$password}')";
   
    
    //if >= 1 username is already in database
    if (mysqli_num_rows($result) >= 1){
        header('Location: register.php');
    }
    //if password 1 and 2 dont equal
    elseif (($_POST['password'] != $_POST['password2'])){
        header('Location: register.php');
    }
    else {
        $conn->query($insertuser);
        header('Location: index.php');
    }

    ?>
    
