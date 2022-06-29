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
#define ZOO   (objs + 19)
#define wallZOO  (objs + 20)
#define intoZOO   (objs + 21)
#define exitZOO   (objs + 22)
#define intoBBQ_site   (objs + 23)
#define exitBBQ_site   (objs + 24)
#define BBQ_site   (objs + 25)
#define grandparents   (objs + 26)
#define wallGrandparents  (objs + 27)
#define intoGrandparents   (objs + 28)
#define exitGrandparents  (objs + 29)
#define close_family   (objs + 30)
#define wallClose_family  (objs + 31)
#define intoClose_family   (objs + 32)
#define exitClose_family  (objs + 33)
#define uncle_aunt  (objs + 34)
#define wallUncle_aunt  (objs + 35)
#define intoUncle_aunt   (objs + 36)
#define exitUncle_aunt (objs + 37)
#define house  (objs + 38)
#define intoHouse   (objs + 39)
#define exitHouse (objs + 40)
#define kitchen  (objs + 41)
#define wallKitchen  (objs + 42)
#define intoKitchen   (objs + 43)
#define exitKitchen (objs + 44)


#define endOfObjs  (objs + 45)
