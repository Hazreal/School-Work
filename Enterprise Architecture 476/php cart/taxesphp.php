<?php
    session_start();
    include 'storeprices.php';
    ?>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Taxes Boo!</title>
    </head>
    <body>
        <center><h1>Your Cart but with Taxes</h1></center><br><br>
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
        <tr>
            <td>Tax Rate</td>
            <td><?php echo ($taxrate*100).'%'?></td>
            <td></td>
            <td><?php printf ('$ %.2f',$_SESSION['overall_total']*(1+$taxrate));?></td>
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
            <td><form action ="paymentphp.php">
                <input type="Submit" value="Continue to Payment">
                </form>
            </td>
        </tr>
    </table>
    </center>
    </body>
</html>
