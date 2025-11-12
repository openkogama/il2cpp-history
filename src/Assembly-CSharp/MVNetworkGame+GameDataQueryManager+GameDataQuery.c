
/* Void AddGameDataQuery(MVNetworkGame+GameDataQueryManager+GameDataQuery) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager+GameDataQuery::
     MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
               (MVNetworkGame_GameDataQueryManager_GameDataQuery *this,
               MVNetworkGame_GameDataQueryManager_GameDataQuery *gameDataQuery,MethodInfo *method)

{
  pBVar1 = (this->fields).bp;
  if (pBVar1 != (BytePacker *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pBVar1->fields)._buffer;
    if (pLVar2 != (List_1_System_Byte_ *)0x0) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                (pBVar1,(pLVar2->fields)._size,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bp;
      if ((gameDataQuery != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
         (pBVar3 = (gameDataQuery->fields).bp, pBVar3 != (BytePacker *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  (pBVar3,0,(MethodInfo *)0x0);
        pBVar3 = (gameDataQuery->fields).bp;
        if (pBVar3 != (BytePacker *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__)
            ;
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar2 = (pBVar3->fields)._buffer;
          if (pLVar2 != (List_1_System_Byte_ *)0x0) {
            buffer = (Byte__Array *)
                     FUN_?(pLVar2,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                  );
            if ((pBVar1 != (BytePacker *)0x0) && (buffer != (Byte__Array *)0x0)) {
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_2
                        (pBVar1,buffer,0,(int32_t)buffer->max_length,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  FUN_?();
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
    FUN_?(&StringLiteral__GameDataQuery__InstigatorActorN);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).instigatorActorNumber;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pBVar1 = (this->fields).bp;
  if (pBVar1 != (BytePacker *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pBVar1->fields)._buffer;
    if (pLVar2 != (List_1_System_Byte_ *)0x0) {
      aiStackX_8[0] = (pLVar2->fields)._size;
      arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
      pSVar3 = StringLiteral__GameDataQuery__InstigatorActorN;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_4,arg0,arg1,(MethodInfo *)0x0)
      ;
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}

