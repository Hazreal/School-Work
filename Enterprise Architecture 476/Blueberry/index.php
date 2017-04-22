<html>
<body>
<p>HomeWork</p>

<?php 
$x = 1; 

while($x <= 100) {
	if($x%5 == 0 && $x%3 == 0){
		echo $x." Blueberry<br>";
		$x++;
	}
	else if($x%5 == 0){
		echo $x." Berry <br>";
		$x++;
	}
	else if($x%3 == 0){
		echo $x." Blue <br>";
		$x++;
	}
	else {
		echo $x."<br>";
		$x++;
	}
} 
?>

</body>
</html>

