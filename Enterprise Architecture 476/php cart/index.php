<?php 
    session_start();
    include 'storeprices.php'; 
    ?>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Generic Store #1</title>
    </head>
    <body>
    <center><h1>Welcome to Generic Store</h1></center>
    <center><h3>Our Generic Products!</h3></center>
    <center><form action="phpsubtotal.php" method="post">
            <table>
                <th>Product</th>
                <th>Amount</th>
                <th>Price</th>
                <tr>
                    <td>Tooth Paste:</td> 
                    <td><input type="number" name="toothpaste_amount" value="<?php echo $_SESSION['toothpaste_amount']?>"</td>
                    <td><?php echo '$'.$toothpaste_price?> each</td>
                </tr>
                <tr>
                    <td>Deodorant:</td> 
                    <td><input type="number" name="deodorant_amount" value="<?php echo $_SESSION['deodorant_amount']?>"></td> 
                    <td><?php echo '$'.$deodorant_price?> each</td>
                </tr>
                <tr>
                    <td>Shampoo:</td> 
                    <td><input type="number" name="shampoo_amount" value="<?php echo $_SESSION['shampoo_amount']?>"></td>
                    <td><?php echo '$'.$shampoo_price?> each</td>
                </tr>
                <tr>
                    <td>Conditioner:</td> 
                    <td><input type="number" name="conditioner_amount" value="<?php echo $_SESSION['conditioner_amount']?>"></td>
                    <td><?php echo '$'.$conditioner_price?> each</td>
                </tr>
                <tr>
                    <td>Toilet Paper:</td> 
                    <td><input type="number" name="toiletpaper_amount" value="<?php echo $_SESSION['toiletpaper_amount']?>"></td>
                    <td><?php echo '$'.$toiletpaper_price?> each</td>
                </tr>
            </table>
            <input type = "submit">
           
          
            </body>
</html>
