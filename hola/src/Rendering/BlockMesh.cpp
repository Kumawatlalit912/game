#include "BlockMesh.h"

const std::array<std::array<BlockVertex, 6>, 6> BlockMesh::vertices = {{
   {{
      // top
      {{0, 1, 1}, {1, 0}, 0},
      {{1, 1, 1}, {1, 1}, 0},
      {{0, 1, 0}, {0, 0}, 0},
      {{1, 1, 1}, {1, 1}, 0},
      {{1, 1, 0}, {0, 1}, 0},
      {{0, 1, 0}, {0, 0}, 0},
   }},
   {{
      // +x east
      {{1, 1, 1}, {1, 0}, 1},
      {{1, 0, 1}, {1, 1}, 1},
      {{1, 1, 0}, {0, 0}, 1},
      {{1, 0, 1}, {1, 1}, 1},
      {{1, 0, 0}, {0, 1}, 1},
      {{1, 1, 0}, {0, 0}, 1},
   }},
   {{
      //-x west
      {{0, 1, 0}, {1, 0}, 2},
      {{0, 0, 0}, {1, 1}, 2},
      {{0, 1, 1}, {0, 0}, 2},
      {{0, 0, 0}, {1, 1}, 2},
      {{0, 0, 1}, {0, 1}, 2},
      {{0, 1, 1}, {0, 0}, 2},
   }},
   {{
      //-z north
      {{1, 1, 0}, {1, 0}, 3},
      {{1, 0, 0}, {1, 1}, 3},
      {{0, 1, 0}, {0, 0}, 3},
      {{1, 0, 0}, {1, 1}, 3},
      {{0, 0, 0}, {0, 1}, 3},
      {{0, 1, 0}, {0, 0}, 3},
   }},

   {{
      // +z south
      {{0, 1, 1}, {1, 0}, 4},
      {{0, 0, 1}, {1, 1}, 4},
      {{1, 1, 1}, {0, 0}, 4},
      {{0, 0, 1}, {1, 1}, 4},
      {{1, 0, 1}, {0, 1}, 4},
      {{1, 1, 1}, {0, 0}, 4},
   }},
   {{
      // bottom
      {{1, 0, 1}, {1, 0}, 5},
      {{0, 0, 1}, {1, 1}, 5},
      {{1, 0, 0}, {0, 0}, 5},
      {{0, 0, 1}, {1, 1}, 5},
      {{0, 0, 0}, {0, 1}, 5},
      {{1, 0, 0}, {0, 0}, 5},
   }},
}};