
/* Boolean HasUnlocked(Int32) */

bool Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_HasUnlocked
               (WorldObjectUseRequirementTracker *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__TryGetValue_int__System__Single__
                   );
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__TryGetValue
                    ((Dictionary_2_System_Int32_System_Single_ *)this,worldObjectID,&fStack_1,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__TryGetValue_int__System__Single__
                    );
  if (bVar2 == 0) {
    return 0;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0);
  return fVar3 < fStack_1;
}


/* Void PayUse(UseRequirementType, Int32, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_PayUse
               (WorldObjectUseRequirementTracker *this,UseRequirementType__Enum requirementType,
               int32_t worldObjectID,UnityAction_1_System_Boolean_ *onAdFinished,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&StringLiteral_An_ad_is_already_on_going);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar1 != (IAdManager *)0x0) {
      pIVar2 = pIVar1->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
            ppMVar5 = &(&(pIVar1->klass->vtable).get_ReadyForRewardedAdRequest)
                       [pIVar2->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      ppMVar5 = (MethodInfo **)
                func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,4);
code_?:
      cVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
      if (cVar6 == '\0') {
        if (onAdFinished != (UnityAction_1_System_Boolean_ *)0x0) {
          (*(onAdFinished->fields)._._.invoke_impl)
                    ((onAdFinished->fields)._._.method_code,0,(onAdFinished->fields)._._.method);
          return;
        }
      }
      else {
        ppUVar7 = &(this->fields).onAdFinishedCallback;
        if ((this->fields).onAdFinishedCallback != (UnityAction_1_System_Boolean_ *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_An_ad_is_already_on_going,(MethodInfo *)0x0);
          return;
        }
        *ppUVar7 = onAdFinished;
        func_?(ppUVar7,onAdFinished);
        pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(
                                 TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar1 != (IAdManager *)0x0) {
          pIVar2 = pIVar1->klass;
          uVar4 = 0;
          uVar3._0_1_ = (pIVar2->_1).rank;
          uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
          if (uVar3 != 0) {
            do {
              if (pIVar2->interfaceOffsets[uVar4].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar5 = &(&(pIVar1->klass->vtable).RequestRewardedAd)
                           [pIVar2->interfaceOffsets[uVar4].offset].method;
                goto code_?;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar3);
          }
          ppMVar5 = (MethodInfo **)
                    func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6);
code_?:
          (*(code *)*ppMVar5)(pIVar1,this_00,0xe,ppMVar5[1]);
          return;
        }
      }
    }
  }
  else if (onAdFinished != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(onAdFinished->fields)._._.invoke_impl)
              ((onAdFinished->fields)._._.method_code,1,(onAdFinished->fields)._._.method);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_RewardedAdCallback
               (WorldObjectUseRequirementTracker *this,RewardedAdResult__Enum obj,MethodInfo *method
               )

{
  ppUVar1 = &(this->fields).onAdFinishedCallback;
  pUVar2 = *ppUVar1;
  if (pUVar2 != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,obj == RewardedAdResult__Enum_RewardUnlocked,
               (pUVar2->fields)._._.method);
  }
  *ppUVar1 = (UnityAction_1_System_Boolean_ *)0x0;
  func_?(ppUVar1,0);
  return;
}


/* Void UseRequirementFulfilled(UseRequirementType, Int32) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_UseRequirementFulfilled
               (WorldObjectUseRequirementTracker *this,UseRequirementType__Enum requirementType,
               int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                   );
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0);
  this_00 = (this->fields).timeouts;
  if (this_00 != (Dictionary_2_UseRequirementType_System_Single_ *)0x0) {
    fVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,requirementType,
                       MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                      );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
    Dictionary_2_System_Int32_System_Single__set_Item
              ((Dictionary_2_System_Int32_System_Single_ *)this,worldObjectID,fVar2 + fVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* WorldObjectUseRequirementTracker() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker__ctor
               (WorldObjectUseRequirementTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__Add
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,5,15.0,
               MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
              );
    ppDVar1 = &(this->fields).timeouts;
    *ppDVar1 = (Dictionary_2_UseRequirementType_System_Single_ *)this_00;
    func_?(ppDVar1,this_00);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

