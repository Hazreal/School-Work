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

$select = "SELECT {$table_1}.id, {$table_1}.name, {$table_1}.gender, {$table_1}.dob, {$table_2}.cnum, {$table_2}.title, {$table_2}.hours from {$table_1} "
          ."left join {$table_2} on {$table_1}.id = {$table_2}.p_id where {$table_1}.name = '{$_POST['name']}' group by {$table_1}.id";
$result = $conn->query($select);
echo "<center><table> <tr> <th>Name </th> <th> Gender </th> <th> Date of Birth</th></tr>";
if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()){
        echo "<tr>  <td>" . $row["name"]
                ."</td> <td>" . $row["gender"]
                ."</td> <td>" . $row["dob"]
                . "</td></table>";
                
    }
}
        
        
?>

<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1>Update <?php echo $_POST['name']; ?></h1>
        <?php
        echo "<br><table>";
        echo "<tr><td>Update Student:</td></tr><form action='updatequery.php' method='post'>";
        echo "<tr><td>Name:</tb><tb><input type='string' name='name' value='{$_POST['name']}' required></td></tr>";
        echo "<tr><td>Gender: <input type='radio' name='gender'";
            if (isset($gender) && $gender=="female") echo "checked";
            echo "value='female'>Female";
        echo "<input type='radio' name='gender'";
            if (isset($gender) && $gender=="male") echo "checked";
            echo "value='male'>Male";
        echo "<tr><td> Date of Birth:<input type='date' name='dob' value= '{$row['dob']}'></td></tr>";
        echo "<tr><td><input type = 'submit'></form></td></tr>";
        echo "<tr><td><a href='index.php'>Back</a></td></tr></table>";
        ?>
        
        </body>
</html>
