SELECT COUNT(types.identifier)
AS nb
FROM types
INNER JOIN pokemon_types
ON types.id = pokemon_types.type_id
WHERE types.identifier = "ice";