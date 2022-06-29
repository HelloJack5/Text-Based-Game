#include <stdio.h>
#include "object.h"

static const char *tags0[] = {"field", NULL};
static const char *tags1[] = {"cave", NULL};
static const char *tags2[] = {"silver", "coin", "silver coin", NULL};
static const char *tags3[] = {"gold", "coin", "gold coin", NULL};
static const char *tags4[] = {"guard", "burly guard", NULL};
static const char *tags5[] = {"yourself", NULL};
static const char *tags6[] = {"east", "entrance", NULL};
static const char *tags7[] = {"west", "exit", NULL};
static const char *tags8[] = {"forest", NULL};
static const char *tags9[] = {"north", "south", "east", "rock", NULL};
static const char *tags10[] = {"gate", "gate", "gate that needs keys", NULL};
static const char *tags11[] = {"south", "entrance", NULL};
static const char *tags12[] = {"north", "exit", NULL};
static const char *tags13[] = {"garden", NULL};
static const char *tags14[] = {"south", "forest", NULL};
static const char *tags15[] = {"crop_field", NULL};
static const char *tags16[] = {"south", "west","north", "forest", NULL};
static const char *tags17[] = {"west", "entrance", NULL};
static const char *tags18[] = {"east", "exit", NULL};
static const char *tags19[] = {"ZOO", NULL};
static const char *tags20[] = {"south", "east","north", "forest", NULL};
static const char *tags21[] = {"east", "entrance", NULL};
static const char *tags22[] = {"west", "exit", NULL};
static const char *tags23[] = {"west", "ZOO_entrance", NULL};
static const char *tags24[] = {"east", "ZOO_exit", NULL};
static const char *tags25[] = {"BBQ_site", NULL};
static const char *tags26[] = {"grandparents", NULL};
static const char *tags27[] = {"east", "west","north", "forest", NULL};
static const char *tags28[] = {"north", "entrance", NULL};
static const char *tags29[] = {"south", "exit", NULL};
static const char *tags30[] = {"close_family", NULL};
static const char *tags31[] = {"west", "south","north", "forest", NULL};
static const char *tags32[] = {"west", "entrance", NULL};
static const char *tags33[] = {"east", "exit", NULL};
static const char *tags34[] = {"uncle_aunt", NULL};
static const char *tags35[] = {"west", "south","east", "forest", NULL};
static const char *tags36[] = {"south", "entrance", NULL};
static const char *tags37[] = {"north", "exit", NULL};
static const char *tags38[] = {"house", NULL};
static const char *tags39[] = {"north", "entrance", NULL};
static const char *tags40[] = {"south", "exit", NULL};
static const char *tags41[] = {"kitchen", NULL};
static const char *tags42[] = {"west", "south","north", "wall", NULL};
static const char *tags43[] = {"west", "entrance", NULL};
static const char *tags44[] = {"east", "exit", NULL};
static const char *tags45[] = {"bathroom", NULL};
static const char *tags46[] = {"east", "south","north", "wall", NULL};
static const char *tags47[] = {"east", "entrance", NULL};
static const char *tags48[] = {"west", "exit", NULL};
static const char *tags49[] = {"living_room", NULL};
static const char *tags50[] = {"north", "entrance", NULL};
static const char *tags51[] = {"south", "exit", NULL};
static const char *tags52[] = {"storage_room", NULL};
static const char *tags53[] = {"west", "south","north", "wall", NULL};
static const char *tags54[] = {"west", "entrance", NULL};
static const char *tags55[] = {"east", "exit", NULL};
static const char *tags56[] = {"bedroom", NULL};
static const char *tags57[] = {"west", "east","north", "wall", NULL};
static const char *tags58[] = {"north", "entrance", NULL};
static const char *tags59[] = {"south", "exit", NULL};
static const char *tags60[] = {"garage", NULL};
static const char *tags61[] = {"south", "east","north", "wall", NULL};
static const char *tags62[] = {"east", "entrance", NULL};
static const char *tags63[] = {"west", "exit", NULL};
static const char *tags64[] = {"red", "key", "red key", NULL};
static const char *tags65[] = {"green ", "key", "green key", NULL};
static const char *tags66[] = {"blue", "key", "blue key", NULL};





OBJECT objs[] = {
   {"an open field with passages in four directions", tags0, NULL , NULL  },
   {"a little cave with strange markings on the walls.\nAfter closer inspection it appears to show three keys, but it is hard to know for sure", tags1, NULL , NULL  },
   {"A silver coin", tags2, field, NULL  },
   {"A gold coin", tags3, cave , NULL  },
   {"A guard", tags4, NULL, NULL  },
   {"yourself", tags5, field, NULL  },
   {"A cave entrance to the east.", tags6, field, cave  },
   {"An exit to the west", tags7, cave , field },
   {"Dense forest all around", tags8, field, NULL  },
   {"Solid rock all around", tags9, cave , NULL  },
   {"A locked gate", tags10, cave , NULL },
   {"A garden entrance to the south", tags11, field, garden  },
   {"An exit to the north", tags12, garden , field },
   {"A big garden with luscious fruit trees.\nThere are lemon trees, apple trees, pear trees and beautiful blossoming cherry trees", tags13, NULL , NULL  },
   {"Dense forest all around", tags14, garden, NULL  },
    {"a crop field cultivated with potatoes, pumpkins, anise, eggplants\nand a large field of wheat which will be produced into flour to produce bread", tags15, NULL , NULL  },
    {"Dense forest all around", tags16, crop_field, NULL  },
    {"A crop field entrance to the west", tags17, garden, crop_field  },
   {"An exit to the east", tags18, crop_field , garden },
   {"A ZOO", tags19, NULL , NULL  },
    {"Dense forest all around", tags20, ZOO, NULL  },
    {"A ZOO entrance to the east", tags21, garden, ZOO  },
   {"An exit to the west", tags22, ZOO , garden },
    {"A BBQ site entrance to the west", tags23, field, BBQ_site  },
   {"An exit to the east", tags24, BBQ_site , field },
   {"a BBQ site", tags25, NULL , NULL  },
    {"grandparents", tags26, NULL , NULL  },
    {"Dense forest all around", tags27, grandparents, NULL  },
   {"Grandparents to the north", tags28, BBQ_site, grandparents  },
   {"An exit to the south", tags29, grandparents ,  BBQ_site},
    {"Close family", tags30, NULL , NULL  },
    {"Dense forest all around", tags31, close_family, NULL  },
   {"Close family to the west", tags32, BBQ_site, close_family  },
   {"An exit to the west", tags33, close_family ,  BBQ_site},
   {"uncle_aunt", tags34, NULL , NULL  },
    {"Dense forest all around", tags35, uncle_aunt, NULL  },
   {"Uncle and aunt to the south", tags36, BBQ_site, uncle_aunt  },
   {"An exit to the north", tags37, uncle_aunt ,  BBQ_site},
   {"a house", tags38, NULL , NULL  },
   {"A House to the north", tags39, field, house  },
   {"An exit to the south", tags40, house ,  field},
   {"the kitchen", tags41, NULL , NULL  },
    {"White walls all around", tags42, kitchen, NULL  },
   {"Kitchen to the west", tags43, house, kitchen  },
   {"An exit to the east", tags44, kitchen ,  house},
   {"the bathroom", tags45, NULL , NULL  },
    {"White walls all around", tags46, bathroom, NULL  },
   {"A bathroom to the east", tags47, house, bathroom  },
   {"An exit to the west", tags48, bathroom ,  house},
   {"living room", tags49, NULL , NULL  },
   {"A living room to the north", tags50, house, living_room  },
   {"An exit to the south", tags51, living_room ,  house},
   {"a storage room", tags52, NULL , NULL  },
    {"White walls all around", tags53, storage_room, NULL  },
   {"A storage room to the west", tags54, living_room, storage_room  },
   {"An exit to the east", tags55, storage_room ,  living_room},
   {"bedroom", tags56, NULL , NULL  },
    {"White walls all around", tags57, bedroom, NULL  },
   {"A bedroom to the north", tags58, living_room, bedroom  },
   {"An exit to the south", tags59, bedroom ,  living_room},
   {"the garage", tags60, NULL , NULL  },
    {"White walls all around", tags61, garage, NULL  },
   {"garage to the east", tags62, living_room, garage  },
   {"An exit to the west" , tags63, garage ,  living_room},
   {"a red key", tags64, garage, NULL  },
   {"a green key", tags65, crop_field, NULL  },
   {"a blue key", tags66, close_family, NULL  }

};
