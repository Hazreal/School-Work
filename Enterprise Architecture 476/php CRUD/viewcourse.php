<?php
session_start();
include 'sqlVariables.php';



$conn = mysqli_connect($servername, $username,$password, $dbname);

    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

$select = "SELECT {$table_1}.name, {$table_2}.cnum, {$table_2}.title, {$table_2}.hours FROM {$table_1} join {$table_2} on {$table_1}.id = {$table_2}.p_id WHERE {$table_1}.id = {$_GET['id']} ";
$result = $conn->query($select)
?>



<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1><center>Student's Courses</center></h1>
        <?php 
            if ($result->num_rows > 0) {
        // output data of each row
            echo "<center><table> <tr> <th>Name </th> <th> Course Number </th> <th> Title</th><th> Hours </th></tr>";
            while($row = $result->fetch_assoc()) {
                echo "<tr>  <td>" . $row["name"]
                    ."</td> <td>" . $row["cnum"]
                    ."</td> <td>" . $row["title"]
                    ."</td> <td>" . $row["hours"]."</td></tr></tables>";                                                              


            }
            } 
            else {
                echo "<center>0 results </center><br>";
            }
        ?>
    <center><table><a href='index.php' class='button'>Back to Index</a></table></center>
    </body>
</html>
