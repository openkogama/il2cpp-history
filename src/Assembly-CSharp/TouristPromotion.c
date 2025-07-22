
/* IEnumerator FadeOutAndPopPromotion() */

IEnumerator *
Assembly-CSharp.dll::TouristPromotion::TouristPromotion_FadeOutAndPopPromotion
          (TouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TouristPromotion___FadeOutAndPopPromotion_d__13);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouristPromotion___FadeOutAndPopPromotion_d__13;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Initialize(Boolean) */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_Initialize
               (TouristPromotion *this,bool withAd,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  (this->fields).promotionShowsAd = withAd;
  pGVar2 = (this->fields).adIcon;
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_withAd;
    pGStack_3 = pGVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_OnContinueClicked
               (TouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristPromotion____c);
    func_?(&StringLiteral_TouristPromotion___OnContinueCli);
    cRam_? = '\x01';
  }
  if ((this->fields).promotionShowsAd == 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TouristPromotion____c);
    }
    callbackFunction = TypeInfo__TouristPromotion____c->static_fields->__9__12_1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TouristPromotion____c);
      }
      pTVar2 = TypeInfo__TouristPromotion____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pTVar2,
                 MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TouristPromotion____c->static_fields->__9__12_1 = callbackFunction;
      func_?(&TypeInfo__TouristPromotion____c->static_fields->__9__12_1,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TouristPromotion____c);
  }
  callbackFunction_00 = TypeInfo__TouristPromotion____c->static_fields->__9__12_0;
  if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TouristPromotion____c);
    }
    pTVar2 = TypeInfo__TouristPromotion____c->static_fields->__9;
    callbackFunction_00 =
         (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pTVar2,
               MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristPromotion____c->static_fields->__9__12_0 = callbackFunction_00;
    func_?(&TypeInfo__TouristPromotion____c->static_fields->__9__12_0,callbackFunction_00);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
            );
  return;
}


/* Void OnLoginClicked() */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_OnLoginClicked
               (TouristPromotion *this,MethodInfo *method)

{
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoLogin(0,1,(MethodInfo *)0x0);
  return;
}


/* Void OnRegisterClicked() */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_OnRegisterClicked
               (TouristPromotion *this,MethodInfo *method)

{
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,1,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_Start
               (TouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_Kogama);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_TouristPromotion_Kogama,1,(MethodInfo *)0x0);
  pTVar1 = (this->fields).looksData;
  if (pTVar1 != (TouristPromotionLooksData *)0x0) {
    TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion
              (pTVar1,(this->fields).embedded,(MethodInfo *)0x0);
    pTVar1 = (this->fields).looksData;
    pTVar2 = (this->fields).promotionHeader;
    if (pTVar1 != (TouristPromotionLooksData *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar3 = (pTVar1->fields).promotionData;
      if (pLVar3 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
        pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar3,
                            (pTVar1->fields).promotionIndex,
                            MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                           );
        key = pVVar4->path;
        TM::TM__((String *)key,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)();
          pTVar1 = (this->fields).looksData;
          if (pTVar1 != (TouristPromotionLooksData *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pLVar3 = (pTVar1->fields).promotionData;
            if (pLVar3 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
              pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       VisualTreeAsset+UsingEntry]::
                       List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                 ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,
                                  (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                  pLVar3,(pTVar1->fields).promotionIndex,
                                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                                 );
              original = pVVar4->alias;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              this_00 = (Component *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                  );
              if (this_00 != (Component *)0x0) {
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_00,(MethodInfo *)0x0);
                if (this_01 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            (this_01,(Transform *)(this->fields).promotionImageParent,0,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <FadeOutAndPopPromotion>b__13_0(Single) */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion__FadeOutAndPopPromotion_b__13_0
               (TouristPromotion *this,float t,MethodInfo *method)

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
                    MethodInfo__TouristPromotion____c___FadeOutAndPopPromotion_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristPromotion____c);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t == _UNK_?) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__TouristPromotion____c->static_fields->__9__13_1;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__TouristPromotion____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__TouristPromotion____c___FadeOutAndPopPromotion_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TouristPromotion____c->static_fields->__9__13_1 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

