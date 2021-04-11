SELECT moves.identifier 
AS attaque 
FROM pokemon 
INNER JOIN pokemon_moves 
ON pokemon.id = pokemon_moves.pokemon_id 
INNER JOIN moves 
ON pokemon_moves.move_id = moves.id 
WHERE pokemon.identifier='snorlax' 
LIMIT 5;