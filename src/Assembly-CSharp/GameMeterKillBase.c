
/* Int32 GetCount(GameStatCounterType) */

int32_t Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_GetCount
                  (GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
             (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
            (pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
           (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           pMVar6 != (MVLocalPlayer *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase,(char)gameStatCounterType,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             (pGVar7 = (pMVar2->fields).gameStatCounterManager,
             pGVar7 != (GameStatCounterManager *)0x0)) {
            iVar8 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                              (pGVar7,gameStatCounterType & 0xff,
                               (pMVar6->fields)._._Team_k__BackingField,
                               (pMVar6->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
            return iVar8;
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          iVar8 = (*pcVar9)();
          return iVar8;
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
          pGVar7 = (pMVar2->fields).gameStatCounterManager;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             ((pMVar5 = (pMVar2->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0 &&
              ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar5,(MethodInfo *)0x0), pMVar6 != (MVLocalPlayer *)0x0 &&
               (pGVar7 != (GameStatCounterManager *)0x0)))))) {
            key = (pMVar6->fields)._._Team_k__BackingField;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                            ,(char)gameStatCounterType,key,0,unaff_RDI);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                    *)(pGVar7->fields).statTypeCounters;
            if (this != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)0x0) {
              iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                      WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                      Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                                (this,gameStatCounterType & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                                 ->klass->rgctx_data[0x21].method);
              if (iVar8 < 0) {
                return 0;
              }
              this_00 = (pGVar7->fields).statTypeCounters;
              if ((this_00 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
                 (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                                       gameStatCounterType & 0xff,
                                       MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                                      ), pOVar10 != (Object *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pOVar10[1].klass != (Object__Class *)0x0) {
                  iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,UnityEngine::Vector3]::
                          Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                    ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                                     pOVar10[1].klass,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                                     ->klass->rgctx_data[0x21].method);
                  if (iVar8 < 0) {
                    return 0;
                  }
                  if ((pOVar10[1].klass != (Object__Class *)0x0) &&
                     (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                           pOVar10[1].klass,key,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                                          ), pOVar10 != (Object *)0x0)) {
                    return *(int32_t *)&pOVar10[1].monitor;
                  }
                }
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            iVar8 = (*pcVar9)();
            return iVar8;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  iVar8 = (*pcVar9)();
  return iVar8;
}


/* Void SetCount(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_SetCount
               (GameMeterKillBase *this,GameStatCounterType__Enum gameStatCounterType,int32_t limit,
               MethodInfo *method)

{
  aIStackX_18[0].m_value = limit;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = GameMeterKillBase_GetCount(gameStatCounterType & 0xff,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0]._pointer._value = (void *)0x0;
  aRStack_1[0]._length = 0;
  aRStack_1[0]._12_4_ = 0;
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  str2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (pSVar2,::StringLiteral__,str2,(MethodInfo *)0x0);
  pTVar3 = (this->fields).killsText;
  if (pTVar3 != (Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar3->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar3,pSVar2,(pTVar3->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

