SELECT moves.identifier AS Attaques
FROM moves
INNER JOIN pokemon_moves ON pokemon_moves.move_id = moves.id
INNER JOIN pokemon ON pokemon.id = pokemon_moves.pokemon_id
WHERE moves.id = '56' AND pokemon.id = '160' IS NOT NULL
LIMIT 1;