
/* Void Destroy() */

void Assembly-CSharp.dll::MVKillLimit::MVKillLimit_Destroy(MVKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (pWVar2 = (WinningConditionManager *)
               PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
     pWVar2 != (WinningConditionManager *)0x0)) {
    this_00 = MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType_6
                        (pWVar2,
                         KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                        );
    if (this_00 == (TimeAttackFlagReachedClient *)0x0) goto code_?;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pWVar2 = (WinningConditionManager *)
               PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                      (MethodInfo *)0x0);
      if (pWVar2 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                  (pWVar2,(int32_t)id,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  this_01 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_Couldn_t_find_killLimitClient_wi,(MethodInfo *)0x0);
  pMStack3 = MethodInfo__MVKillLimit__Destroy__;
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVKillLimit::MVKillLimit_Initialize(MVKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
code_?:
    func_?(0);
  }
  else {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    iStack_1 = MVKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (args->max_length == 0) goto code_?;
      args->vector[0] = pOVar2;
      if (this_01 != (WinningConditionManager *)0x0) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition_6
                  (this_01,args,
                   KillLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<KillLimitClient>_System__Object____
                  );
        (this->fields).initializedInWorld = 1;
        return;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVKillLimit::MVKillLimit_OnDataUpdate
               (MVKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (WinningConditionManager *)
              PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (WinningConditionManager *)0x0) {
      this_02 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType_6
                          (this_01,
                           KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                          );
      if (this_02 != (TimeAttackFlagReachedClient *)0x0) {
        limit = MVKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
        MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
                  ((WinningCondition *)this_02,limit,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  this_03 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_03,StringLiteral_Couldn_t_find_killLimitClient_wi,(MethodInfo *)0x0);
  pMStack1 = MethodInfo__MVKillLimit__OnDataUpdate__;
  uStack2 = 0;
  pIStack3 = this_03;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVKillLimit(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVKillLimit::MVKillLimit__ctor
               (MVKillLimit *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVKillLimitPrefab(this_00,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0
              );
    iVar1 = (this->fields)._._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._._.interactionFlags = (uint)iVar1 & 0xffffdfff | 0x40008000;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVKillLimit::MVKillLimit_get_DocumentationType
          (MVKillLimit *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_PlayerKillWinCondition;
}


/* Int32 get_GamePointRewardAmount() */

int32_t Assembly-CSharp.dll::MVKillLimit::MVKillLimit_get_GamePointRewardAmount
                  (MVKillLimit *this,MethodInfo *method)

{
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  iVar1 = MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_GetGamePointsRewardAmount
                    ((MVGamePointRewardLogicObject *)this,data,(MethodInfo *)0x0);
  iVar2 = MVKillLimit_get_KillLimit(this,(MethodInfo *)0x0);
  return iVar2 * iVar1;
}


/* Int32 get_KillLimit() */

int32_t Assembly-CSharp.dll::MVKillLimit::MVKillLimit_get_KillLimit
                  (MVKillLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_killLimit,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pIStack2 = TypeInfo__System__Int32;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pIStack2 = (Int32__Class *)pPVar1;
        piVar3 = (int32_t *)func_?();
        return *piVar3;
      }
      goto code_?;
    }
  }
  pIStack2 = (Int32__Class *)0x0;
  func_?();
  pIStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

