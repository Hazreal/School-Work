<?php
    session_start();
    include 'storeprices.php';
    ?>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Payment</title>
    </head>
    <body>
        <center>
            <h1><?php printf ('You will be charged $ %.2f',($_SESSION['overall_total']*(1+$taxrate))); ?></h1>
            <h3> Please input your payment information</h3>                
                <form action="paymentsucessphp.php" method="post">
                Card Number: <input type="text" name="ccn"><br>
                CCV Number: <input type="text" name="ccv"><br>
                Name: <input type="text" name="name"><br>
                Address: <input type="text" name="address"><br>
                <input type="submit" value="Submit Payment">
                </form>
    </body>
</html>
