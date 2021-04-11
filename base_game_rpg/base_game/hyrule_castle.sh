#!/bin/bash
stage=1
option=$option
source ../fonction.sh
declare -A player
declare -A boss
declare -A ennemies

# initializing arrays and variables

echo "Enter your username to start the game : " 
read first_name 
echo "Welcome $first_name !"

link_setup
bokoblin_setup

while [[ ${player[hp_left]} -gt 0 ]] && [[ $stage -lt 10 ]]; 
    do
        echo "Let's start the game !"

        echo "========== FIGHT $stage =========="
        echo ${player[name]} 
        echo ${player[hp_left]} "/" ${player[max_hp]}
        
        
        echo ${ennemies[name]}
        echo ${ennemies[hp_left]} "/" ${ennemies[max_hp]}


        echo "-----Options------"
        echo "1. Attack" "2. Heal"
        read option

        if [[ $option == 1 ]];
        then
            $((${ennemies[hp_left]} - ${player[str]}))
            echo "You dealt ${player[str]} to ${ennemies[name]}"

            if [[ ${ennemies[hp_left]} > 0 ]];
            then
                $((${player[hp_left]} - ${ennemies[str]}))
                echo "${ennemies[name]} has inflincted ${ennemies[str]}."
                fi

            elif [[ $option == 2 ]];
            then
                heal=$((${player[max_hp]} / 2))
                player[hp_left]=$((${player[hp_left]} + $heal))

            if [[ ${player[hp_left]} -gt ${player[max_hp]} ]];
                then
                    player[hp_left]=${player[max_hp]}
                fi
            fi


    done








