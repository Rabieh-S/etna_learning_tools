SELECT COUNT(*) AS nb
FROM pokemon_types
INNER JOIN types ON pokemon_types.type_id = types.id
INNER JOIN pokemon ON pokemon_types.pokemon_id = pokemon.id
INNER JOIN pokemon_form_generations ON  pokemon.id = pokemon_form_generations.pokemon_form_id
WHERE pokemon_types.type_id = "9" AND pokemon_form_generations.generation_id = "2";