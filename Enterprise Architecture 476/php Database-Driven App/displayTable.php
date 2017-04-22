<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "college";
$table = "person";

// Create connection
$conn = mysqli_connect($servername, $username,$password, $dbname);
// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql = "SELECT * FROM ". $table;
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
    echo "<table> <tr> <th> ID </th> <th>Name </th> <th> Gender </th> <th> Date of Birth</th> </tr>";
    while($row = $result->fetch_assoc()) {
        echo "<tr> <td>" . $row["id"]. "</td> <td>" . $row["name"]."</td> <td>". $row["gender"]."</td> <td>". $row["dob"]."</td>";
        echo "<td><a href='delete.php?id=".$row['id']."' class = 'button'>Delete</a></td></tr>"; 
    }
} 
else {
    echo "0 results <br>";
}

echo "</table><br><table>";
echo "<tr><td>New Student:</td></tr><form action='insert.php' method='post'>";
echo "<tr><td>Name:</tb><tb><input type='string' name='name' required></td></tr>";

echo "<tr><td>Gender: <input type='radio' name='gender'";
    if (isset($gender) && $gender=="female") echo "checked";
    echo "value='female'>Female";
echo "<input type='radio' name='gender'";
    if (isset($gender) && $gender=="male") echo "checked";
    echo "value='male'>Male";

echo "<tr><td> Date of Birth:<input type='date' name='dob' required></td></tr>";
echo "<tr><td><input type = 'submit'></form></td></tr></table>";

$conn->close();


?>


