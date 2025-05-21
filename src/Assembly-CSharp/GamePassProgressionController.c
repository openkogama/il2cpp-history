
/* Int32 GetXPReward(GamePassTier) */

int32_t Assembly-CSharp.dll::GamePassProgressionController::
        GamePassProgressionController_GetXPReward(GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject !=
      (MVGamePassProgressionDataObject *)0x0) {
    pGVar1 = MVGamePassProgressionDataObject::
             MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                       (TypeInfo__GamePassProgressionController->static_fields->
                        progressionDataObject,(MethodInfo *)0x0);
    if (((pGVar1 != (GamePassProgressionDataObjectShared *)0x0) &&
        (pGVar2 = (pGVar1->fields).xpTierRewards,
        pGVar2 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
       (this = (Dictionary_2_System_ByteEnum_System_Object_ *)(pGVar2->fields).xpTierRewards,
       this != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         (this,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                         );
      return (int32_t)pOVar3;
    }
    uVar4 = func_?(&stack0xfffffff8);
    func_?(uVar4);
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  return 0;
}


/* RangeValidator`1[System.Int32] GetXPRewardRangeValidator(GamePassTier) */

RangeValidator_1_System_Int32_ *
Assembly-CSharp.dll::GamePassProgressionController::
GamePassProgressionController_GetXPRewardRangeValidator(GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
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
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar3 != (Object *)0x0) {
        return (RangeValidator_1_System_Int32_ *)pOVar3[1].monitor;
      }
    }
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pRVar7 = (RangeValidator_1_System_Int32_ *)(*pcVar6)();
  return pRVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassProgressionController::GamePassProgressionController_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVGamePassProgressionDataObject);
    cRam_? = '\x01';
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this,WorldObjectType__Enum_GamePassProgressionDataObject,(MethodInfo *)0x0)
    ;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if (0 < (this_00->fields)._size) {
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,0,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if (RVar1 == (RegexCharClass_SingleRange)0x0) {
          TypeInfo__GamePassProgressionController->static_fields->progressionDataObject =
               (MVGamePassProgressionDataObject *)0x0;
        }
        else {
          pMStack2 = TypeInfo__MVGamePassProgressionDataObject;
          if ((*(byte *)(*(int *)RVar1 + 0xb8) <
               (TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment) ||
             (*(MVGamePassProgressionDataObject__Class **)
               (*(int *)(*(int *)RVar1 + 100) + -4 +
               (uint)(TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment * 4) !=
              TypeInfo__MVGamePassProgressionDataObject)) goto code_?;
          TypeInfo__GamePassProgressionController->static_fields->progressionDataObject =
               (MVGamePassProgressionDataObject *)RVar1;
          pMStack2 = TypeInfo__MVGamePassProgressionDataObject;
          if ((*(byte *)(*(int *)RVar1 + 0xb8) <
               (TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment) ||
             (*(MVGamePassProgressionDataObject__Class **)
               (*(int *)(*(int *)RVar1 + 100) + -4 +
               (uint)(TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment * 4) !=
              TypeInfo__MVGamePassProgressionDataObject)) goto code_?;
        }
        pMStack2 =
             (MVGamePassProgressionDataObject__Class *)
             TypeInfo__GamePassProgressionController->static_fields;
        func_?();
      }
      TypeInfo__GamePassProgressionController->static_fields->isInitialized = 1;
      return;
    }
  }
  func_?();
  pMStack2 = unaff_ESI;
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetXPReward(GamePassTier, Int32) */

void Assembly-CSharp.dll::GamePassProgressionController::GamePassProgressionController_SetXPReward
               (GamePassTier__Enum tier,int32_t xpReward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   );
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  pRVar1 = GamePassProgressionController_GetXPRewardRangeValidator(tier,(MethodInfo *)0x0);
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    value_00 = (pRVar1->fields).min;
    if ((value_00 <= xpReward) &&
       (iVar2 = (pRVar1->fields).max, value_00 = xpReward, iVar2 < xpReward)) {
      value_00 = iVar2;
    }
    pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if ((((pMVar3 != (MVGamePassProgressionDataObject *)0x0) &&
         (value = MVGamePassProgressionDataObject::
                  MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                            (pMVar3,(MethodInfo *)0x0),
         value != (GamePassProgressionDataObjectShared *)0x0)) &&
        (pGVar4 = (value->fields).xpTierRewards,
        pGVar4 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
       (this = (pGVar4->fields).xpTierRewards,
       this != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__set_Item
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)this,tier,value_00,
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
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject !=
      (MVGamePassProgressionDataObject *)0x0) {
    bVar1 = MVGamePassProgressionDataObject::MVGamePassProgressionDataObject_get_EnableProgression
                      (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject
                       ,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}

