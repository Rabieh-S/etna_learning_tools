SELECT types.identifier
AS type
FROM types
INNER JOIN pokemon_types
ON types.id = pokemon_types.type_id
INNER JOIN pokemon
ON pokemon_types.pokemon_id = pokemon.id
WHERE pokemon.identifier = "scyther"; 
