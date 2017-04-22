<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "college";
$table = "person";
$row = $_GET['id'];

$conn = mysqli_connect($servername, $username,$password, $dbname);

$query = "DELETE FROM {$table} WHERE id = {$row}";
$result = mysqli_query($conn, $query);

$conn->close();
header('Location:index.php');
?>