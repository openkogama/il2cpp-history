
/* Int32 GetXPReward(GamePassTier) */

int32_t Assembly-CSharp.dll::GamePassProgressionController::
        GamePassProgressionController_GetXPReward(GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject !=
      (MVGamePassProgressionDataObject *)0x0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    this = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (this != (MVGamePassProgressionDataObject *)0x0) {
      pGVar1 = MVGamePassProgressionDataObject::
               MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                         (this,(MethodInfo *)0x0);
      if (((pGVar1 != (GamePassProgressionDataObjectShared *)0x0) &&
          (pGVar2 = (pGVar1->fields).xpTierRewards,
          pGVar2 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
         (this_00 = (pGVar2->fields).xpTierRewards,
         this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                GamePassTier,System::Int32]::
                Dictionary_2_MV_Common_GamePassTier_System_Int32__get_Item
                          (this_00,tier,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                          );
        return iVar3;
      }
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  return 0;
}


/* RangeValidator`1[System.Int32] GetXPRewardRangeValidator(GamePassTier) */

RangeValidator_1_System_Int32_ *
Assembly-CSharp.dll::GamePassProgressionController::
GamePassProgressionController_GetXPRewardRangeValidator(GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  this = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
  if (this != (MVGamePassProgressionDataObject *)0x0) {
    pGVar1 = MVGamePassProgressionDataObject::
             MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectSharedValidator
                       (this,(MethodInfo *)0x0);
    if (((pGVar1 != (GamePassProgressionDataObjectSharedValidator *)0x0) &&
        (pGVar2 = (pGVar1->fields).XpTiersRewardsValidator,
        pGVar2 != (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)0x0)) &&
       (this_00 = (pGVar2->fields).xpTierRewardsValidators,
       this_00 !=
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
        *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_00,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar3 != (Object *)0x0) {
        return (RangeValidator_1_System_Int32_ *)pOVar3[1].monitor;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pRVar5 = (RangeValidator_1_System_Int32_ *)(*pcVar4)();
  return pRVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassProgressionController::GamePassProgressionController_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this,WorldObjectType__Enum_GamePassProgressionDataObject,(MethodInfo *)0x0)
    ;
    unaff_ESI = (MVGamePassProgressionDataObject *)0x0;
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if (0 < (int)pOVar1) {
        unaff_ESI = (MVGamePassProgressionDataObject *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,0,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
        if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
          func_?();
        }
        if (unaff_ESI == (MVGamePassProgressionDataObject *)0x0) {
          pMVar2 = (MVGamePassProgressionDataObject *)0x0;
        }
        else {
          bVar3 = (TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment;
          if (((unaff_ESI->klass->_1).naturalAligment < bVar3) ||
             ((MVGamePassProgressionDataObject__Class *)
              (unaff_ESI->klass->_1).typeHierarchy[bVar3 - 1] !=
              TypeInfo__MVGamePassProgressionDataObject)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          pMVar2 = (MVGamePassProgressionDataObject *)0x0;
          if (bVar4) {
            pMVar2 = unaff_ESI;
          }
          if (pMVar2 == (MVGamePassProgressionDataObject *)0x0) goto code_?;
        }
        TypeInfo__GamePassProgressionController->static_fields->progressionDataObject = pMVar2;
      }
      if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
        pGStack5 = TypeInfo__GamePassProgressionController;
        func_?();
      }
      TypeInfo__GamePassProgressionController->static_fields->isInitialized = 1;
      return;
    }
  }
  func_?();
code_?:
  pMStack6 = unaff_ESI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetXPReward(GamePassTier, Int32) */

void Assembly-CSharp.dll::GamePassProgressionController::GamePassProgressionController_SetXPReward
               (GamePassTier__Enum tier,int32_t xpReward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  pRVar1 = GamePassProgressionController_GetXPRewardRangeValidator(tier,(MethodInfo *)0x0);
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    iVar2 = (pRVar1->fields).max;
    min = (pRVar1->fields).min;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                      (xpReward,min,iVar2,(MethodInfo *)0x0);
    pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (pMVar3 != (MVGamePassProgressionDataObject *)0x0) {
      value = MVGamePassProgressionDataObject::
              MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                        (pMVar3,(MethodInfo *)0x0);
      if (((value != (GamePassProgressionDataObjectShared *)0x0) &&
          (pGVar4 = (value->fields).xpTierRewards,
          pGVar4 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
         (this = (pGVar4->fields).xpTierRewards,
         this != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
        Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__set_Item
                  (this,(GamePassTier__Enum)pMVar3,iVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                  );
        pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
        if (pMVar3 != (MVGamePassProgressionDataObject *)0x0) {
          MVGamePassProgressionDataObject::
          MVGamePassProgressionDataObject_set_GamePassProgressionDataObjectShared
                    (pMVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_IsProgressionEnabled() */

bool Assembly-CSharp.dll::GamePassProgressionController::
     GamePassProgressionController_get_IsProgressionEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject !=
      (MVGamePassProgressionDataObject *)0x0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    this = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (this != (MVGamePassProgressionDataObject *)0x0) {
      bVar1 = MVGamePassProgressionDataObject::MVGamePassProgressionDataObject_get_EnableProgression
                        (this,(MethodInfo *)0x0);
      return bVar1;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  return 0;
}

