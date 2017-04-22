<?php
   
    
    $conn = mysqli_connect($servername, $username,$password, $dbname);

    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }
    
    $sql = "SELECT {$table_1}.id, {$table_1}.name, {$table_1}.gender, {$table_1}.dob, {$table_2}.cnum, {$table_2}.title, {$table_2}.hours from {$table_1} "
          ."left join {$table_2} on {$table_1}.id = {$table_2}.p_id group by {$table_1}.id";
    
    $result = $conn->query($sql);
    
    if ($result->num_rows > 0) {
    // output data of each row
        echo "<center><table> <tr> <th>Name </th> <th> Gender </th> <th> Date of Birth</th></tr>";
        while($row = $result->fetch_assoc()) {
            echo "<tr>  <td>" . $row["name"]
                ."</td> <td>" . $row["gender"]
                ."</td> <td>" . $row["dob"]
                ."</td> <td>" . (((isset($_SESSION['loggedin'])) && ($_SESSION['loggedin'] == True) ) ? "<a href='viewcourse.php?id={$row['id']}'"
                                                                                   ."class = 'button'> View Courses</a>" : " "). "</td>"
                
                ."</td> <td>" . (((isset($_SESSION['loggedin'])) && ($_SESSION['loggedin'] == True) )? "<a href='delete.php?id={$row['id']}'"                                                                                  
                                                                                   ."class = 'button' onclick='return confirm('Are you sure?')'> Delete</a>" : " "). "</td></table</center>";                                                                   
        }
    } 
    else {
        echo "0 results <br>";
    }
    
    if(isset($_SESSION['username']) && $_SESSION['loggedin'] == True){
        echo "<br><table>";
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

        echo "<br><table>";
        echo "<tr><td>Update Student:</td></tr><form action='update.php' method='post'>";
        echo "<tr><td>Name:</tb><tb><input type='string' name='name' required></td></tr>";
        echo "<tr><td><input type = 'submit'></form></td></tr></table>";
    
    }
    
    else{
         $_SESSION['loggedin'] = False;
            
            echo "<table><center><h3>Database Login</h3>";  
            echo "<form action='loginValid.php' method='post'>";
            echo "<center><p> Username: <input type='string' name='username'?></p>";
            echo "<p> Password: <input type='password' name='password'?></p><br>";
            echo "<input type = 'submit'></center></form><br>";
            echo "<a href='register.php'>Click here to register</a></center></table>";
    }
    ?>