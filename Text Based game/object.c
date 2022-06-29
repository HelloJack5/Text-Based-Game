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
static const char *tags9[] = {"north", "south", "rock", NULL};
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





OBJECT objs[] = {
   {"an open field"              , tags0, NULL , NULL  },
   {"a little cave"              , tags1, NULL , NULL  },
   {"a silver coin"              , tags2, field, NULL  },
   {"a gold coin"                , tags3, cave , NULL  },
   {"a burly guard"              , tags4, field, NULL  },
   {"yourself"                   , tags5, field, NULL  },
   {"a cave entrance to the east", tags6, field, cave  },
   {"an exit to the west"        , tags7, cave , field },
   {"dense forest all around"    , tags8, field, NULL  },
   {"solid rock all around"      , tags9, cave , NULL  },
   {"a gate that needs three keys to open"  , tags10, cave , NULL },
   {"a garden entrance to the south", tags11, field, garden  },
   {"an exit to the north"        , tags12, garden , field },
   {"a big garden"              , tags13, NULL , NULL  },
   {"dense forest all around"    , tags14, garden, NULL  },
    {"a crop field"              , tags15, NULL , NULL  },
    {"dense forest all around"    , tags16, crop_field, NULL  },
    {"a crop field entrance to the west", tags17, garden, crop_field  },
   {"an exit to the east"        , tags18, crop_field , garden },
   {"a ZOO"              , tags19, NULL , NULL  },
    {"dense forest all around"    , tags20, ZOO, NULL  },
    {"a ZOO entrance to the east", tags21, garden, ZOO  },
   {"an exit to the west"        , tags22, ZOO , garden },
    {"a BBQ site entrance to the west", tags23, field, BBQ_site  },
   {"an exit to the east"        , tags24, BBQ_site , field },
   {"a BBQ site"              , tags25, NULL , NULL  },
    {"grandparents"              , tags26, NULL , NULL  },
    {"dense forest all around"    , tags27, grandparents, NULL  },
   {"grandparents to the north", tags28, BBQ_site, grandparents  },
   {"an exit to the south"        , tags29, grandparents ,  BBQ_site},
    {"close family"              , tags30, NULL , NULL  },
    {"dense forest all around"    , tags31, close_family, NULL  },
   {"close family to the west", tags32, BBQ_site, close_family  },
   {"an exit to the west"        , tags33, close_family ,  BBQ_site},
   {"uncle_aunt"              , tags34, NULL , NULL  },
    {"dense forest all around"    , tags35, uncle_aunt, NULL  },
   {"Uncle and aunt to the south", tags36, BBQ_site, uncle_aunt  },
   {"an exit to the north"        , tags37, uncle_aunt ,  BBQ_site},
   {"house"              , tags38, NULL , NULL  },
   {"House to the north", tags39, field, house  },
   {"an exit to the south"        , tags40, house ,  field},
   {"kitchen"              , tags41, NULL , NULL  },
    {"White walls all around"    , tags42, kitchen, NULL  },
   {"kitchen to the west", tags43, house, kitchen  },
   {"an exit to the east"        , tags44, kitchen ,  house},
   {"bathroom"              , tags45, NULL , NULL  },
    {"White walls all around"    , tags46, bathroom, NULL  },
   {"bathroom to the east", tags47, house, bathroom  },
   {"an exit to the west"        , tags48, bathroom ,  house},
   {"living room"              , tags49, NULL , NULL  },
   {"living room to the north", tags50, house, living_room  },
   {"an exit to the south"        , tags51, living_room ,  house},
   {"storage room"              , tags52, NULL , NULL  },
    {"White walls all around"    , tags53, storage_room, NULL  },
   {"storage room to the west", tags54, living_room, storage_room  },
   {"an exit to the east"        , tags55, storage_room ,  living_room},
   {"bedroom"              , tags56, NULL , NULL  },
    {"White walls all around"    , tags57, bedroom, NULL  },
   {"bedroom to the north", tags58, living_room, bedroom  },
   {"an exit to the south"        , tags59, bedroom ,  living_room},
   {"garage"              , tags60, NULL , NULL  },
    {"White walls all around"    , tags61, garage, NULL  },
   {"garage to the east", tags62, living_room, garage  },
   {"an exit to the west" , tags63, garage ,  living_room}


};
