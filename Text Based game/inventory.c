#include <stdbool.h>
#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "move.h"
//funkcija ki igralcu da objekt na lokaciji, ce tega ne more storiti, vrne ustrezno sporocilo
void executeGet(const char *noun)
{
   OBJECT *obj = getVisible("what you want to get", noun);
   switch (getDistance(player, obj))
   {
   case distSelf:
      printf("You should not be doing that to yourself.\n");
      break;
   case distHeld:
      printf("You already have %s.\n", obj->description);
      break;
   case distOverthere:
      printf("Too far away, move closer please.\n");
      break;
   case distUnknownObject:
      break;
   default:
      if (obj->location == guard)
      {
         printf("You should ask %s nicely.\n", obj->location->description);
      }
      else
      {
         moveObject(obj, player);
      }
   }
}
void executeDrop(const char *noun)
{
   moveObject(getPossession(player, "drop", noun), player->location);
}
void executeAsk(const char *noun)
{
   moveObject(getPossession(actorHere(), "ask", noun), player);
}
void executeGive(const char *noun)
{
   moveObject(getPossession(player, "give", noun), actorHere());
}
//prikaze dodatno sporocilo ce igralec nima nobenega objekta ali ima vse potrebne objekte za zmago
void executeInventory(void)
{
   if (listObjectsAtLocation(player) == 0)
   {
      printf("You are empty-handed.\n");
   }
   else if (listObjectsAtLocation(player) == 3)
   {
      printf("You have collected all the keys, now you can unlock the gate in the cave \n Victory!");
   }
}
