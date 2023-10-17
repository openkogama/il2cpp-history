
/* Void AddGameDataQuery(MVNetworkGame+GameDataQueryManager+GameDataQuery) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager+GameDataQuery::
     MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
               (MVNetworkGame_GameDataQueryManager_GameDataQuery *this,
               MVNetworkGame_GameDataQueryManager_GameDataQuery *gameDataQuery,MethodInfo *method)

{
  pBVar1 = (this->fields).bp;
  if (pBVar1 != (BytePacker *)0x0) {
    value = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                      (pBVar1,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              (pBVar1,value,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bp;
    if ((gameDataQuery != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
       (pBVar2 = (gameDataQuery->fields).bp, pBVar2 != (BytePacker *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                (pBVar2,0,(MethodInfo *)0x0);
      pBVar2 = (gameDataQuery->fields).bp;
      if (pBVar2 != (BytePacker *)0x0) {
        buffer = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                           (pBVar2,(MethodInfo *)0x0);
        if (pBVar1 != (BytePacker *)0x0) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
                    (pBVar1,buffer,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BytePacker GetBytePacker() */

BytePacker *
Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager+GameDataQuery::
MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
          (MVNetworkGame_GameDataQueryManager_GameDataQuery *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bp;
  if (pBVar1 != (BytePacker *)0x0) {
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              (pBVar1,0,(MethodInfo *)0x0);
    return (this->fields).bp;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (BytePacker *)(*pcVar2)();
  return pBVar1;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager+GameDataQuery::
         MVNetworkGame_GameDataQueryManager_GameDataQuery_ToString
                   (MVNetworkGame_GameDataQueryManager_GameDataQuery *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__GameDataQuery__InstigatorActorN);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)(this->fields).instigatorActorNumber;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  this_00 = (pMVar1->fields).bp;
  if (this_00 != (BytePacker *)0x0) {
    iStack_2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                         (this_00,(MethodInfo *)0x0);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    pSVar3 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__GameDataQuery__InstigatorActorN,arg0,arg1,(MethodInfo *)0x0);
    return pSVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}

