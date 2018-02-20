#include "TileMap.hh"
#include <iostream>

bool TileMap::load(const std::string& tileset, sf::Vector2u tileSize, Map map, int width, int height)
{
    unsigned int i;
    unsigned int j;

    if (!_tileset.loadFromFile(tileset))
    {
        return (false);
    }

    _vertices.setPrimitiveType(sf::Quads);
    _vertices.resize(width * height * 4);

    i = 0;
    while (i < width)
    {
        j = 0;
        while (j < height)
        {
            int tileNumber = map.getCell(i, j);

            int tu = tileNumber % (_tileset.getSize().x / tileSize.x);
            int tv = tileNumber / (_tileset.getSize().x / tileSize.x);

            sf::Vertex* quad = &_vertices[(i + j * width) * 4];

            quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
            quad[1].position = sf::Vector2f((i + 1) * tileSize.x, j * tileSize.y);
            quad[2].position = sf::Vector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
            quad[3].position = sf::Vector2f(i * tileSize.x, (j + 1) * tileSize.y);

            quad[0].texCoords = sf::Vector2f(tu * tileSize.x, tv * tileSize.y);
            quad[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
            quad[2].texCoords = sf::Vector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
            quad[3].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);

            j++;
        }
        i++;
    }
    return true;
}


void TileMap::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    states.texture = &_tileset;
    target.draw(_vertices, states);
}