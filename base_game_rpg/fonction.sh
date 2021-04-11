#!/bin/bash

link_setup()
{
    firstline=0
    rar=1
    while IFS="," read -r id name hp mp str int def res spd luck race class rarity
    do
        if [ $firstline -ne 0 ];
        then
            if [ $rar == $rarity ]
            then
                player=([id]=$id [name]=$name [max_hp]=$hp [hp_left]=$hp [mp]=$mp [str]=$str [int]=$int [def]=$def [res]=$res [spd]=$spd [luck]=$luck [race]=$race [class]=$class [rarity]=$rarity)
            fi
        else
            firstline=1
        fi
    done < "../players.csv"
}

boss_fight() {
rar=1

while IFS="," read  id name hp mp str int def res spd luck race class rarity; do
 
        if [ $rar == $rarity ];
        then

            boss=([name]=$name [max_hp]=$hp [hp_left]=$hp [mp]=$mp [str]=$str [int]=$int [def]=$def [res]=$res [spd]=$spd [luck]=$luck)

        fi
done < "../bosses.csv"

}

bokoblin_setup() {
    first_line=0
    name=$name

while IFS="," read -r id name hp mp str int def res spd luck race class rarity; do
    if [ $first_line -ne 0 ];
    then
        if [ "$name" == "Bokoblin" ];
        then
        ennemies=([name]=$name [max_hp]=$hp [hp_left]=$hp [mp]=$mp [str]=$str [int]=$int [def]=$def [res]=$res [spd]=$spd [luck]=$luck)
    fi
    else
        first_line=1
    fi
done < "../enemies.csv"

}
