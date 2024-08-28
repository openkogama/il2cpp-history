
/* Void ClaimGold() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_ClaimGold
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
    func_?(&TypeInfo__ClaimGoldRewardPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ClaimPlayingNewGameRewardedGold
              (this_00,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (ClaimGoldRewardPopup *)
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
      ;
      object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0 = callbackFunction;
      pGVar1 = (GameObject *)&UNK_?;
      func_?(&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    original = *(Object **)
                &(((ExecuteEvents_EventFunction_1_IUIStack___Class *)this)->_0).byval_arg.attrs;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOStack2 =
         (Object__Class *)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                   (original,
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    if (value != (Object *)0x0) {
      pOStack3 = value + 1;
      pOStack3->klass = pOStack2;
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateErrorMessage() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_CreateErrorMessage
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ClaimGoldRewardPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ClaimGoldRewardPopup____c);
  }
  callbackFunction = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ClaimGoldRewardPopup____c);
    }
    object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ClaimGoldRewardPopup____c___CreateErrorMessage_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0 = callbackFunction;
    func_?(&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__9_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnAdFinished
               (ClaimGoldRewardPopup *this,bool adWasSuccessful,MethodInfo *method)

{
  if (adWasSuccessful == 0) {
    ClaimGoldRewardPopup_CreateErrorMessage(this,(MethodInfo *)0x0);
    return;
  }
  ClaimGoldRewardPopup_ClaimGold(this,(MethodInfo *)0x0);
  return;
}


/* Void OnClickClaimGoldAd() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnClickClaimGoldAd
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    cVar2 = func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    if (cVar2 == '\0') {
      ClaimGoldRewardPopup_CreateErrorMessage(this,(MethodInfo *)0x0);
      return;
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar3 != (GoldRewardManager *)0x0) {
      (pGVar3->fields).isCountingDownGoldReward = 0;
      (pGVar3->fields).isGoldRewardDone = 1;
      pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,
                 MethodInfo__ClaimGoldRewardPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar1 != (IAdManager *)0x0) {
        pIVar4 = pIVar1->klass;
        uVar5 = 0;
        uVar6._0_1_ = (pIVar4->_1).rank;
        uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
              ppMVar7 = &(&(pIVar1->klass->vtable).RequestRewardedAd)
                         [pIVar4->interfaceOffsets[uVar5].offset].method;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        ppMVar7 = (MethodInfo **)
                  func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6);
code_?:
        (*(code *)*ppMVar7)(pIVar1,ppMVar7[1],0xb);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnClickClaimGoldSubscriber() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnClickClaimGoldSubscriber
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0);
    func_?(&TypeInfo__ClaimGoldRewardPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ClaimGoldRewardPopup____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ClaimPlayingNewGameRewardedGold
              (this_00,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (ClaimGoldRewardPopup *)
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
      ;
      object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ClaimGoldRewardPopup____c___ClaimGold_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0 = callbackFunction;
      pGVar1 = (GameObject *)&UNK_?;
      func_?(&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__10_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    original = *(Object **)
                &(((ExecuteEvents_EventFunction_1_IUIStack___Class *)this)->_0).byval_arg.attrs;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOStack2 =
         (Object__Class *)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                   (original,
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    if (value != (Object *)0x0) {
      pOStack3 = value + 1;
      pOStack3->klass = pOStack2;
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__ClaimGoldRewardPopup____c__DisplayClass10_0___ClaimGold_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_OnDestroy
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 != (GoldRewardManager *)0x0) {
    (pGVar1->fields).isCountingDownGoldReward = 0;
    (pGVar1->fields).isGoldRewardDone = 1;
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_RewardedAdCallback
               (ClaimGoldRewardPopup *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (obj != RewardedAdResult__Enum_RewardUnlocked) {
    ClaimGoldRewardPopup_CreateErrorMessage(this,(MethodInfo *)0x0);
    return;
  }
  ClaimGoldRewardPopup_ClaimGold(this,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ClaimGoldRewardPopup::ClaimGoldRewardPopup_Update
               (ClaimGoldRewardPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c___Update_b__4_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ClaimGoldRewardPopup____c__DisplayClass4_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ClaimGoldRewardPopup____c__DisplayClass4_0);
    func_?(&TypeInfo__ClaimGoldRewardPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ClaimGoldRewardPopup____c__DisplayClass4_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    *(undefined1 *)&value[1].klass = 0;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ClaimGoldRewardPopup____c__DisplayClass4_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar2 != (GoldRewardManager *)0x0) {
      if (((pGVar2->fields).isGoldRewardDone != 0) && (*(char *)&value[1].klass == '\0')) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ClaimGoldRewardPopup____c);
        }
        callbackFunction_00 = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__4_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__ClaimGoldRewardPopup____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__ClaimGoldRewardPopup____c);
          }
          object = TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)object,
                     MethodInfo__ClaimGoldRewardPopup____c___Update_b__4_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__4_1 = callbackFunction_00;
          func_?(&TypeInfo__ClaimGoldRewardPopup____c->static_fields->__9__4_1,
                          callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

