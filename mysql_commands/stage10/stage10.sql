SELECT egg_groups.identifier AS TypeOeuf
FROM egg_groups
INNER JOIN pokemon_egg_groups ON egg_groups.id = pokemon_egg_groups.egg_group_id
INNER JOIN pokemon ON pokemon_egg_groups.species_id = pokemon.id
WHERE pokemon.identifier = 'noctowl';