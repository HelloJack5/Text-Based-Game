typedef struct object {
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
} OBJECT;

extern OBJECT objs[];

#define field      (objs + 0)
#define cave       (objs + 1)
#define silver     (objs + 2)
#define gold       (objs + 3)
#define guard      (objs + 4)
#define player     (objs + 5)
#define intoCave   (objs + 6)
#define exitCave   (objs + 7)
#define wallField  (objs + 8)
#define wallCave   (objs + 9)
#define gate       (objs + 10)
#define intoGarden   (objs + 11)
#define exitGarden   (objs + 12)
#define garden   (objs + 13)
#define wallGarden  (objs + 14)
#define crop_field   (objs + 15)
#define wallCrop_field  (objs + 16)
#define intoCrop_field   (objs + 17)
#define exitCrop_field   (objs + 18)

#define endOfObjs  (objs + 19)
