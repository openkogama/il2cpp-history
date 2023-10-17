
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
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32Enum]
          ::Dictionary_2_System_Object_System_Int32Enum__TryGetValue
                    ((Dictionary_2_System_Object_System_Int32Enum_ *)this,(Object *)worldObjectID,
                     (Int32Enum__Enum *)&fStack_1,
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
      cVar2 = func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
      if (cVar2 == '\0') {
        if (onAdFinished != (UnityAction_1_System_Boolean_ *)0x0) {
          (*(onAdFinished->fields)._._.invoke_impl)
                    ((onAdFinished->fields)._._.method_code,0,(onAdFinished->fields)._._.method);
          return;
        }
      }
      else {
        if ((this->fields).onAdFinishedCallback != (UnityAction_1_System_Boolean_ *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_An_ad_is_already_on_going,(MethodInfo *)0x0);
          return;
        }
        (this->fields).onAdFinishedCallback = onAdFinished;
        func_?(&(this->fields).onAdFinishedCallback,onAdFinished);
        pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(
                                 TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                 );
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar1 != (IAdManager *)0x0) {
            uVar3 = 0;
            uVar4 = (pIVar1->klass->_1).interface_offsets_count;
            if (uVar4 != 0) {
              do {
                if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType ==
                    (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                  pVVar5 = &(pIVar1->klass->vtable).RequestRewardedAd +
                           pIVar1->klass->interfaceOffsets[uVar3].offset;
                  goto code_?;
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < uVar4);
            }
            pVVar5 = (VirtualInvokeData *)
                     func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6);
code_?:
            (*pVVar5->methodPtr)(pIVar1,this_00,0xe,pVVar5->method);
            return;
          }
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_RewardedAdCallback
               (WorldObjectUseRequirementTracker *this,RewardedAdResult__Enum obj,MethodInfo *method
               )

{
  pUVar1 = (this->fields).onAdFinishedCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,obj == RewardedAdResult__Enum_RewardUnlocked,
               (pUVar1->fields)._._.method);
  }
  (this->fields).onAdFinishedCallback = (UnityAction_1_System_Boolean_ *)0x0;
  func_?(&(this->fields).onAdFinishedCallback,0);
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__set_Item
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this,worldObjectID,fVar2 + fVar1,
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
  this_00 = (Dictionary_2_UseRequirementType_System_Single_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>
                           );
  if (this_00 != (Dictionary_2_UseRequirementType_System_Single_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__Add
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,5,15.0,
               MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
              );
    (this->fields).timeouts = this_00;
    func_?(&(this->fields).timeouts,this_00);
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

