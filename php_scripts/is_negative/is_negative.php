<?php

function is_negative($number)
{

    while (is_integer($number))
    {
        if ($number >= 0) {
            echo "False\n";
            break;
    }
        elseif ($number < 0) {
            echo "True\n";
            break;
    }
    }
    if (!is_integer($number)) {
        exit("Le parametre n'est pas un Int\n");
        }
}