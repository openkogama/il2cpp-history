
/* Void Awake() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_Awake
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          pVVar4 = &(pIVar1->klass->vtable).InitializeCallbackManager +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          (*pVVar4->methodPtr)(pIVar1,this,pVVar4->method);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,8);
    (*(code *)*puVar5)(pIVar1,this,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreatePopup() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_CreatePopup
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AdUIWithTimeout__OnSkipClicked__);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
    func_?(&
                    MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    func_?(&StringLiteral_AdUIWithTimeout_CreatePopup__Sta);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
  if (pOVar1 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    *(undefined1 *)&pOVar1[1].klass = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    if (pEVar2 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,pOVar1,
                 MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 ,(BaseEventData *)0x0,pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                         ((Boolean *)(pOVar1 + 1),(IFormatProvider *)0x0,unaff_EBP);
      method_00 = (MethodInfo *)&UNK_?;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_AdUIWithTimeout_CreatePopup__Sta,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      if (*(char *)&pOVar1[1].klass == '\0') {
        return;
      }
      pOVar1 = (Object *)func_?();
      if (pOVar1 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar1,ExceptionArgument__Enum_obj,method_00);
        original = (this->fields).showingAdPopup;
        (this->fields).popupShowing = 1;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar4 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                           );
        pOVar1[1].klass = pOVar4;
        func_?(pOVar1 + 1,pOVar4);
        pOVar4 = pOVar1[1].klass;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if ((this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
           (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_00,(Object *)this,MethodInfo__AdUIWithTimeout__OnSkipClicked__,
                       (MethodInfo *)0x0), pOVar4 != (Object__Class *)0x0)) {
          (pOVar4->_0).this_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_00;
          func_?(&(pOVar4->_0).this_arg,this_00);
          _Var7 = (_union_86)
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (pOVar4->_0).byval_arg.data = _Var7;
          (pOVar4->_0).byval_arg.attrs = 0;
          (pOVar4->_0).byval_arg.type = 0x20;
          (pOVar4->_0).byval_arg.field_0x7 = 0x41;
          if (pOVar1[1].klass != (Object__Class *)0x0) {
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pOVar1[1].klass,(MethodInfo *)0x0);
            (this->fields).overlayPushedToStack = pGVar5;
            func_?(&(this->fields).overlayPushedToStack,pGVar5);
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
            if (pEVar2 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)pEVar2,pOVar1,
                         MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar5,(BaseEventData *)0x0,pEVar2,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSkipClicked() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_OnSkipClicked
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_AdUIWithTimeout_OnSkipClicked_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_AdUIWithTimeout_OnSkipClicked_,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
    uVar1 = func_?(&stack0xfffffffc);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
            (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Failure,AdContext__Enum_None,
             (MethodInfo *)0x0);
  if (iRam_? != 0) {
    AdUIWithTimeout_PopInterstitial
              ((AdUIWithTimeout *)0x0,InterstitialAdResult__Enum_ErrorTimeout,(MethodInfo *)0x0);
    return;
  }
  if (iRam_? != 0) {
    AdUIWithTimeout_PopRewardedVideo
              ((AdUIWithTimeout *)0x0,RewardedAdResult__Enum_ErrorTimeout,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&in_stack_4[1].monitor,(IFormatProvider *)0x0,unaff_EDI);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_AdUIWithTimeout_TryPopOverlay__P,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if (*(char *)&in_stack_4[1].monitor != '\0') {
    *(undefined1 *)&in_stack_4[1].monitor = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     (in_stack_4,(MethodInfo *)0x0);
    if ((TypeInfo__AdUIWithTimeout____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__AdUIWithTimeout____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AdUIWithTimeout____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void PopInterstitial(InterstitialAdResult) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_PopInterstitial
               (AdUIWithTimeout *this,InterstitialAdResult__Enum adResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdUIWithTimeout____c__DisplayClass14_0___PopInterstitial_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass14_0);
    func_?(&StringLiteral_AdUIWithTimeout_PopInterstitial_);
    func_?(&StringLiteral_AdUIWithTimeout_Pop);
    func_?(&StringLiteral_AdUIWithTimeout_stack_is_blocked);
    func_?(&StringLiteral_Closing_interstitial_manager_twi);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AdUIWithTimeout____c__DisplayClass14_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopInterstitial_,(MethodInfo *)0x0);
    if ((this->fields).interstitialCallback ==
        (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Closing_interstitial_manager_twi,(MethodInfo *)0x0);
      return;
    }
    *(undefined1 *)&value[1].klass = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AdUIWithTimeout____c__DisplayClass14_0___PopInterstitial_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(char *)&value[1].klass != '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
        (this->fields).interstitialResultLatePop = adResult;
        (this->fields).wantsToPop = 1;
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
      AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
      pAVar1 = (this->fields).interstitialCallback;
      if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,adResult,(pAVar1->fields)._._.method);
        (this->fields).interstitialCallback =
             (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
        func_?(&(this->fields).interstitialCallback,0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopRewardedVideo(RewardedAdResult) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_PopRewardedVideo
               (AdUIWithTimeout *this,RewardedAdResult__Enum adResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdUIWithTimeout____c__DisplayClass15_0___PopRewardedVideo_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass15_0);
    func_?(&StringLiteral_AdUIWithTimeout_Pop);
    func_?(&StringLiteral_AdUIWithTimeout_stack_is_blocked);
    func_?(&StringLiteral_Closing_rewarded_ad_manager_twic);
    func_?(&StringLiteral_AdUIWithTimeout_PopRewardedVideo);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AdUIWithTimeout____c__DisplayClass15_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopRewardedVideo,(MethodInfo *)0x0);
    if ((this->fields).rewardedCallback ==
        (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Closing_rewarded_ad_manager_twic,(MethodInfo *)0x0);
      return;
    }
    *(undefined1 *)&value[1].klass = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AdUIWithTimeout____c__DisplayClass15_0___PopRewardedVideo_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(char *)&value[1].klass != '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
        (this->fields).rewardedAdResultLatePop = adResult;
        (this->fields).wantsToPop = 1;
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
      AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
      pAVar1 = (this->fields).rewardedCallback;
      if (pAVar1 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,adResult,(pAVar1->fields)._._.method);
        (this->fields).rewardedCallback =
             (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
        func_?(&(this->fields).rewardedCallback,0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_ShowInterstitial
               (AdUIWithTimeout *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callbackFunction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Requesting_interstitial_twice_);
    func_?(&StringLiteral_AdUIWithTimeout_ShowInterstitial);
    cRam_? = '\x01';
  }
  if ((this->fields).interstitialCallback ==
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_ShowInterstitial,(MethodInfo *)0x0);
    (this->fields).interstitialCallback = callbackFunction;
    func_?(&(this->fields).interstitialCallback,callbackFunction);
    AdUIWithTimeout_CreatePopup(this,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Requesting_interstitial_twice_,(MethodInfo *)0x0);
  return;
}


/* Void ShowRewardedVideo(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_ShowRewardedVideo
               (AdUIWithTimeout *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *callbackFunction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_AdUIWithTimeout_ShowRewardedVide);
    func_?(&StringLiteral_Requesting_rewarded_ad_twice_);
    cRam_? = '\x01';
  }
  if ((this->fields).rewardedCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AdUIWithTimeout_ShowRewardedVide,(MethodInfo *)0x0);
    (this->fields).rewardedCallback = callbackFunction;
    func_?(&(this->fields).rewardedCallback,callbackFunction);
    AdUIWithTimeout_CreatePopup(this,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Requesting_rewarded_ad_twice_,(MethodInfo *)0x0);
  return;
}


/* Void TryPopOverlay() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_TryPopOverlay
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdUIWithTimeout____c);
    func_?(&StringLiteral_AdUIWithTimeout_TryPopOverlay__P);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&(this->fields).popupShowing,(IFormatProvider *)0x0,unaff_EDI);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_AdUIWithTimeout_TryPopOverlay__P,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if ((this->fields).popupShowing != 0) {
    (this->fields).popupShowing = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AdUIWithTimeout____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__AdUIWithTimeout____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AdUIWithTimeout____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_Update
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdUIWithTimeout____c__DisplayClass11_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass11_0);
    func_?(&StringLiteral_AdUIWithTimeout_wantsToPop_);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AdUIWithTimeout____c__DisplayClass11_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    if ((this->fields).wantsToPop != 0) {
      *(undefined1 *)&value[1].monitor = 1;
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (UnityAction_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (UnityAction_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (callbackFunction,value,
                 MethodInfo__AdUIWithTimeout____c__DisplayClass11_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)callbackFunction,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(char *)&value[1].monitor == '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_AdUIWithTimeout_wantsToPop_,(MethodInfo *)0x0);
        AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
        if ((this->fields).interstitialCallback !=
            (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
          pAVar1 = (this->fields).interstitialCallback;
          pvStack2 = (pAVar1->fields)._._.method;
          ppGStack3 = (GameObject **)(this->fields).interstitialResultLatePop;
          puStack4 = (pAVar1->fields)._._.method_code;
          (*(pAVar1->fields)._._.invoke_impl)();
          (this->fields).interstitialCallback =
               (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
          func_?();
        }
        if ((this->fields).rewardedCallback !=
            (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
          pAVar5 = (this->fields).rewardedCallback;
          pvStack2 = (pAVar5->fields)._._.method;
          ppGStack3 = (GameObject **)(this->fields).rewardedAdResultLatePop;
          puStack4 = (pAVar5->fields)._._.method_code;
          (*(pAVar5->fields)._._.invoke_impl)();
          (this->fields).rewardedCallback =
               (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
          func_?();
        }
        ppGStack3 = &(this->fields).overlayPushedToStack;
        (this->fields).wantsToPop = 0;
        pvStack2 = (void *)0x0;
        (this->fields).overlayPushedToStack = (GameObject *)0x0;
        func_?();
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

