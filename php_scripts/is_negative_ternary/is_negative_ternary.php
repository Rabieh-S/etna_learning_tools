<?php

function is_negative_ternary($number)
{
    if (!is_integer($number))
        exit("Le parametre n'est pas un Int\n");

    $boolean = array();
    $number < 0 ? $boolean="True\n" : $boolean="False\n";
    echo $boolean;
}