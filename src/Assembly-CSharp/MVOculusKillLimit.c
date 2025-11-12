
/* Void Destroy() */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_Destroy
               (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     pWVar3 != (WinningConditionManager *)0x0)) {
    pOVar4 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar3,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    if (pOVar4 == (Object *)0x0) {
      uVar5 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar5);
      message = (String *)func_?(&StringLiteral_Couldn_t_find_OculusKillLimitCli);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__MVOculusKillLimit__Destroy__);
      FUN_?(this_00,uVar5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
       pWVar3 != (WinningConditionManager *)0x0)) {
      key = *(int32_t *)((longlong)&pOVar4[1].klass + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs,key,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      object = (pWVar3->fields).winnerConditionsRoot;
      if (object != (WinningConditionOr *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__IWinningCondition);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar7 = (object->fields)._.winnerConditions;
        if (pDVar7 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                             );
          this_01 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)object,
                     (object->klass->vtable).winnerCondition_OnWinningConditionChanged.method,
                     (MethodInfo *)0x0);
          if (pOVar4 != (Object *)0x0) {
            FUN_?(2,TypeInfo__IWinningCondition,pOVar4,this_01);
            pDVar7 = (object->fields)._.winnerConditions;
            if (pDVar7 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                        );
              if ((pWVar3->fields).OnWinningConditionAddedOrRemoved !=
                  (EventHandler_1_EventArgs_ *)0x0) {
                pEVar8 = (pWVar3->fields).OnWinningConditionAddedOrRemoved;
                uVar5 = FUN_?(TypeInfo__System__EventArgs);
                (*(pEVar8->fields)._._.invoke_impl)
                          ((pEVar8->fields)._._.method_code,pWVar3,uVar5,(pEVar8->fields)._._.method
                          );
              }
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_Initialize
               (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<OculusKillLimitClient>_System__Object____
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    args = (Object__Array *)FUN_?(TypeInfo__System__Object);
    aiStackX_18[0] = MVOculusKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
    lVar3 = FUN_?(uRam_?,aiStackX_18);
    if (args != (Object__Array *)0x0) {
      if (lVar3 != 0) {
        lVar4 = FUN_?(lVar3,(args->klass->_0).element_class);
        if (lVar4 == 0) {
          uVar5 = FUN_?();
          FUN_?(uVar5,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FUN_?(args,0,lVar3);
      if (this_00 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                  (this_00,args,
                   OculusKillLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<OculusKillLimitClient>_System__Object____
                  );
        (this->fields).initializedInWorld = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_OnDataUpdate
               (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    if (pOVar3 != (Object *)0x0) {
      iVar4 = MVOculusKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
      pOVar5 = pOVar3[4].klass;
      *(int32_t *)&pOVar3[1].monitor = iVar4;
      if (pOVar5 != (Object__Class *)0x0) {
        pOVar5 = pOVar3[4].klass;
        uVar6._0_2_ = (pOVar5->_0).byval_arg.attrs;
        uVar6._2_1_ = (pOVar5->_0).byval_arg.type;
        uVar6._3_5_ = *(undefined5 *)&(pOVar5->_0).byval_arg.field_0xb;
        (*(code *)(pOVar5->_0).namespaze)((pOVar5->_0).element_class,pOVar3,0,uVar6);
      }
      return;
    }
    uVar6 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar6);
    message = (String *)func_?(&StringLiteral_Couldn_t_find_OculusKillLimitCli);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
    uVar6 = func_?(&MethodInfo__MVOculusKillLimit__OnDataUpdate__);
    FUN_?(this_01,uVar6);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVOculusKillLimit(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit__ctor
               (MVOculusKillLimit *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).mvOculusKillLimitPrefab,
               worldObjects,(MethodInfo *)0x0);
    (this->fields)._._._.interactionFlags =
         (this->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x40008000;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 get_GamePointRewardAmount() */

int32_t Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_get_GamePointRewardAmount
                  (MVOculusKillLimit *this,MethodInfo *method)

{
  iVar1 = MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_GetGamePointsRewardAmount
                    ((MVGamePointRewardLogicObject *)this,(this->fields)._._._._.data,
                     (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_killLimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_killLimit,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return iVar1 * *(int *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      iVar1 = (*pcVar3)();
      return iVar1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Int32 get_KillLimit() */

int32_t Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_get_KillLimit
                  (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_killLimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_killLimit,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(int32_t *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

