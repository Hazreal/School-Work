<?php
    session_start();
    include 'sqlVariables.php';
    
    $conn = mysqli_connect($servername, $username,$password, $dbname);
    
    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }
    
    $usernameCheck = "SELECT {$table_3}.username from {$table_3} WHERE username = '{$_POST["username"]}' ";
    $usernameResult = mysqli_query($conn, $usernameCheck);
   
    $password = sha1($_POST['password']);
    $passwordCheck = "SELECT {$table_3}.password from {$table_3} WHERE password = '{$password}' ";
    $passwordResult = mysqli_query($conn, $passwordCheck);
    
   
    
    //if >= 1 username is already in database
    if ((mysqli_num_rows($usernameResult) >= 1) && (mysqli_num_rows($passwordResult) >= 1)){
        $_SESSION['username'] = $_POST['username'];
        $_SESSION['loggedin'] = True;
        header('Location: index.php');
        
    }
    else{
        header('Location: index.php');
    }
    
?>
