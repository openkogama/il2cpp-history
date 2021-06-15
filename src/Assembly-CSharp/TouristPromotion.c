
/* IEnumerator FadeOutAndPopPromotion() */

IEnumerator *
Assembly-CSharp.dll::TouristPromotion::TouristPromotion_FadeOutAndPopPromotion
          (TouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouristPromotion___FadeOutAndPopPromotion_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(Boolean) */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_Initialize
               (TouristPromotion *this,bool withAd,MethodInfo *method)

{
  (this->fields).promotionShowsAd = withAd;
  pGVar1 = (this->fields).adIcon;
  if (pGVar1 == (GameObject *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pGVar1,_withAd);
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion_OnContinueClicked
               (TouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).promotionShowsAd;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (TypeInfo__TouristPromotion->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__TouristPromotion___OnContinueClicked_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__TouristPromotion->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__TouristPromotion->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  if (TypeInfo__TouristPromotion->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__TouristPromotion___OnContinueClicked_m__0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>__EventFunction_System__Object__void__
              );
    TypeInfo__TouristPromotion->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_ITouristAdController_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__TouristPromotion->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,pEVar3,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_TouristPromotion_Kogama,1,(MethodInfo *)0x0);
  pTVar1 = (this->fields).looksData;
  if (pTVar1 != (TouristPromotionLooksData *)0x0) {
    TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion_1
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
        pTVar4 = mscorlib.dll::System::Collections::Generic::
                 List`1[TouristPromotionLooksData+PromotionLooksData]::
                 List_1_TouristPromotionLooksData_PromotionLooksData__get_Item
                           ((TouristPromotionLooksData_PromotionLooksData *)&stack0xffffffe4,pLVar3,
                            (pTVar1->fields).promotionIndex,
                            MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                           );
        key = pTVar4->PromotionText;
        TM::TM__((String *)key,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)();
          pTVar1 = (this->fields).looksData;
          if (pTVar1 != (TouristPromotionLooksData *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pLVar3 = (pTVar1->fields).promotionData;
            if (pLVar3 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
              pTVar4 = mscorlib.dll::System::Collections::Generic::
                       List`1[TouristPromotionLooksData+PromotionLooksData]::
                       List_1_TouristPromotionLooksData_PromotionLooksData__get_Item
                                 ((TouristPromotionLooksData_PromotionLooksData *)&stack0xffffffe4,
                                  pLVar3,(pTVar1->fields).promotionIndex,
                                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                                 );
              original = pTVar4->PromotionImage;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                  ((XpBoostParticlePreviewer *)original,
                                   UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                  );
              if (this_00 != (XpBoostParticlePreviewer *)0x0) {
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
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


/* Void <OnContinueClicked>m__0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion__OnContinueClicked_m__0
               (ITouristAdController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (ITouristAdController *)0x0) {
    func_?(0,TypeInfo__ITouristAdController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnContinueClicked>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotion::TouristPromotion__OnContinueClicked_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

