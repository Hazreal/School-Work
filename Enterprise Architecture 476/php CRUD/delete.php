<?php
include 'sqlVariables.php';
$row = $_GET['id'];

$conn = mysqli_connect($servername, $username,$password, $dbname);

$personDelete = "DELETE FROM {$table_1} WHERE id = {$row}";
$courseDelete = "DELETE FROM {$table_2} WHERE p_id = {$row}";

mysqli_query($conn, $courseDelete);
mysqli_query($conn, $personDelete);

$conn->close();
header('Location:index.php');
?>