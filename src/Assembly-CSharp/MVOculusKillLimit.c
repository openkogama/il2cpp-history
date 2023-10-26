
/* Void Destroy() */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_Destroy
               (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar2,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    if (pOVar3 == (Object *)0x0) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
       pWVar2 != (WinningConditionManager *)0x0)) {
      MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                (pWVar2,(int32_t)pOVar3[1].monitor,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (Exception *)func_?();
  func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uStack4 = func_?();
  pEStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_Initialize
               (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<OculusKillLimitClient>_System__Object____
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    args = (Object__Array *)
           func_?(TypeInfo__System__Object,1,
                           (pMVar1->fields)._WinningConditionManager_k__BackingField);
    iStack_2 = MVOculusKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
    this_00 = (WinningConditionManager *)func_?(TypeInfo__System__Int32,&iStack_2);
    if (args == (Object__Array *)0x0) goto code_?;
    if (this_00 == (WinningConditionManager *)0x0) {
code_?:
      if (args->max_length == 0) goto code_?;
      args->vector[0] = (Object *)this_00;
      func_?(args->vector);
      if (this_00 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                  (this_00,args,
                   OculusKillLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<OculusKillLimitClient>_System__Object____
                  );
        (this->fields).initializedInWorld = 1;
        return;
      }
      goto code_?;
    }
    iVar3 = func_?(this_00,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_OnDataUpdate
               (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 == (WinningConditionManager *)0x0)) {
    func_?();
  }
  else {
    this_01 = (WinningCondition *)
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType
                        (this_00,
                         OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                        );
    if (this_01 != (WinningCondition *)0x0) {
      limit = MVOculusKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
      MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
                (this_01,limit,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  this_02 = (Exception *)func_?();
  func_?(this_02);
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
  uStack2 = func_?();
  pEStack3 = this_02;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVOculusKillLimit(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit__ctor
               (MVOculusKillLimit *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).mvOculusKillLimitPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x40000000;
    piVar2 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 & 0xffffdfff;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_get_DocumentationType
          (MVOculusKillLimit *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_OculusKillWinCondition;
}


/* Int32 get_GamePointRewardAmount() */

int32_t Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_get_GamePointRewardAmount
                  (MVOculusKillLimit *this,MethodInfo *method)

{
  iVar1 = MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_GetGamePointsRewardAmount
                    ((MVGamePointRewardLogicObject *)this,(this->fields)._._._._.data,
                     (MethodInfo *)0x0);
  iVar2 = MVOculusKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
  return iVar2 * iVar1;
}


/* Int32 get_KillLimit() */

int32_t Assembly-CSharp.dll::MVOculusKillLimit::MVOculusKillLimit_get_KillLimit
                  (MVOculusKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
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
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        return *piVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

