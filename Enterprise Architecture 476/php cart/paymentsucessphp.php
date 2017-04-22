<?php
    session_start();
    include 'storeprices.php';
    $ccnlength = strlen($_POST['ccn']);
    ?>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Payment Confirmation</title>
    </head>
    <body>
    <center>
        <?php
        
        if (creditcheck($_POST['ccn'])){
            echo '<h1>Payment Success</h1><br>';
            echo "Your card ending in ".substr($_POST['ccn'],($ccnlength-4)); 
            printf (' was charged for $%.2f',$_SESSION['overall_total']*(1+$taxrate));
            session_unset();
        }
        else{
            echo "<h1>Payment Failure</h1><br>";
            echo "Your card was rejected";
            echo '<form action ="index.php">
                <input type="Submit" value="Back">
                </form>';
        }
        ?>
    </center>
    </body>
</html>
