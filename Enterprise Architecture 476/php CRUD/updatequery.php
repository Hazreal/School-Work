<?php
session_start();
include 'sqlVariables.php';
if($_SESSION['loggedin']== False || isset($_SESSION['loggedin'])== False){
    header('Location:index.php');
}
else if(isset($_POST['name'])==False){
    header('Location:index.php');
}

$conn = mysqli_connect($servername, $username,$password, $dbname);

    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

$updatePerson = "UPDATE {$table_1} SET name='{$_POST['name']}', gender= '{$_POST['gender']}', dob= '{$_POST['dob']}' WHERE name='{$_POST['name']}'";
mysqli_query($conn, $updatePerson);

header('Location:index.php');

?>
