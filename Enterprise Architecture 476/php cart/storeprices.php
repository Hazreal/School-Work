<?php    
    $toothpaste_price = .99;    
    $deodorant_price = 5.99;    
    $shampoo_price = .99;    
    $conditioner_price = 1.99;  
    $toiletpaper_price = 2.99;
    
    $taxrate = .085;
    
    function creditcheck($number){
        $length = strlen($number);        
        
        if ((substr($number,0,2) >= 51 && substr($number,0,2) <= 55) && $length == 16) {        
                return true;
            }      
        //Visa
        elseif (substr($number,0,1) == 51 && ($length == 13 || $length == 16)){
                return true;   
        }
        //Amex
        elseif((substr($number,0,2) == 34 || substr($number,0,2) == 37) && $length == 15){
            return true;
        }
        //Diners Club
        elseif((substr($number,0,2) == 36 || substr($number,0,2) == 38 || (substr($number,0,3)>= 300 && substr($number,0,3) <= 305)) && $length == 14){
            return true;
        }
        //Not a card
        else
            return false;
    }
?>
    
