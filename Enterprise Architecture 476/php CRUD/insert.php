<?php

include 'sqlVariables.php';

$conn = mysqli_connect($servername, $username,$password, $dbname);

if (isset($_POST['name']) && isset($_POST['gender']) && isset($_POST['dob']) && $_POST['name'] != null){
        $insert = "INSERT INTO {$table_1} (name, gender, dob) VALUES ('{$_POST['name']}','{$_POST['gender']}','{$_POST['dob']}')";
        mysqli_query($conn, $insert);

        unset($_POST['name']);
        unset($_POST['gender']);
        unset($_POST['dob']);
}

$conn->close();
header('Location:index.php');

?>