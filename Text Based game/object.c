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
static const char *tags8[] = {"west", "north", "forest", NULL};
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
   {"an exit to the east"        , tags18, crop_field , garden }


};
