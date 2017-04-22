<?php
    session_start();
    include 'storeprices.php';
    $_SESSION['toothpaste_amount'] = $_REQUEST['toothpaste_amount'];    
    $_SESSION['deodorant_amount'] = $_REQUEST['deodorant_amount'];    
    $_SESSION['shampoo_amount'] = $_REQUEST['shampoo_amount'];    
    $_SESSION['conditioner_amount'] = $_REQUEST['conditioner_amount'];
    $_SESSION['toiletpaper_amount'] = $_REQUEST['toiletpaper_amount'];
    
    $_SESSION['toothpaste_total'] = $_SESSION['toothpaste_amount'] * $toothpaste_price;
    $_SESSION['deodorant_total'] = $_SESSION['deodorant_amount'] * $deodorant_price;
    $_SESSION['shampoo_total'] = $_SESSION['shampoo_amount'] * $shampoo_price;
    $_SESSION['conditioner_total'] = $_SESSION['conditioner_amount'] * $conditioner_price;
    $_SESSION['toiletpaper_total'] = $_SESSION['toiletpaper_amount'] * $toiletpaper_price;
    
    $_SESSION['overall_total'] = $_SESSION['toothpaste_total'] + $_SESSION['deodorant_total'] + $_SESSION['shampoo_total'] + $_SESSION['conditioner_total'] + $_SESSION['toiletpaper_total'];
    ?>
<head>
        <meta charset="UTF-8">
        <title>Generic Store Cart</title>
    </head>
    <body>
    <center><h1>Your Cart</h1></center><br><br>
    <center>
    <table align="center">
        <tr>
            <th>Product</th>
            <th>Amount</th>
            <th>Price</th>
            <th>Total</th>
        </tr>
        <tr>
            <td>Tooth Paste:</td>  
            <td><?php echo $_SESSION['toothpaste_amount']?></td>
            <td><?php echo '$'.$toothpaste_price?></td>
            <td><?php printf ('$ %.2f',$_SESSION['toothpaste_total'])?></td>
        </tr>
        <tr>
            <td>Deodorant:</td>  
            <td><?php echo $_SESSION['deodorant_amount']?></td>
            <td><?php echo '$'.$deodorant_price?></td>
            <td><?php printf ('$ %.2f',$_SESSION['deodorant_total'])?></td>
        </tr>     
        <tr>
            <td>Shampoo:</td>  
            <td><?php echo $_SESSION['shampoo_amount']?></td>
            <td><?php echo '$'.$shampoo_price?></td>
            <td><?php printf ('$ %.2f',$_SESSION['shampoo_total']); ?></td>
        </tr>
        <tr>
            <td>Conditioner:</td>  
            <td><?php echo $_SESSION['conditioner_amount']?></td>
            <td><?php echo '$'.$conditioner_price?></td>
            <td><?php printf ('$ %.2f',$_SESSION['conditioner_total'])?></td>
        </tr>
        <tr>
            <td>Toilet Paper:</td>  
            <td><?php echo $_SESSION['toiletpaper_amount']?></td>
            <td><?php echo '$'.$toiletpaper_price?></td>
            <td><u><?php printf ('$ %.2f',$_SESSION['toiletpaper_total'])?></u></td>
        </tr>
        
        <tr></tr>
        <tr>
            <td>Subtotal</td>
            <td></td>
            <td></td>
        
            <td><?php printf ('$ %.2f',$_SESSION['overall_total']);?></td>
        </tr>
        <tr></tr>
        <tr></tr>
        <tr>
            <td><form action ="index.php">
                <input type="Submit" value="Back">
                </form>
            </td>
            <td></td>
            <td></td>
            <td><form action ="taxesphp.php">
                <input type="Submit" value="Continue">
                </form>
            </td>
        </tr>
    </table>
    </center>
    </body>
</html>