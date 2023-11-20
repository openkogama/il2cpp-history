
/* Void Continue() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Continue
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&
                    MethodInfo__TouristPromotionCrey____c___Continue_b__2_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristPromotionCrey____c);
    func_?(&StringLiteral_TouristPromotion_CreyGames_Conti);
    func_?(&StringLiteral_TouristPromotion_CreyGames_Conti);
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_CreyGames_Conti,1,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnContinueClicked.method)(this,this->klass[1]._0.image);
    return;
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Conti,1,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__TouristPromotionCrey____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__TouristPromotionCrey____c->static_fields->__9__2_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if ((TypeInfo__TouristPromotionCrey____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__TouristPromotionCrey____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TouristPromotionCrey____c___Continue_b__2_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristPromotionCrey____c->static_fields->__9__2_0 = callbackFunction;
    func_?(&TypeInfo__TouristPromotionCrey____c->static_fields->__9__2_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
            );
  return;
}


/* Void CreyRedirect() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_CreyRedirect
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_CreyGames_Redir);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Redir,1,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pCVar2 = (pMVar1->fields)._CreySettings_k__BackingField, pCVar2 != (CreySettings *)0x0)) {
    bVar3 = (pCVar2->fields)._TouristPromotionCreyRedirect_k__BackingField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pCVar2 = (pMVar1->fields)._CreySettings_k__BackingField, pCVar2 != (CreySettings *)0x0)) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                ((pCVar2->fields)._TouristPromotionCreyURL_k__BackingField,bVar3 == 0,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Signup() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Signup
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_CreyGames_Signu);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Signu,1,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pCVar2 = (pMVar1->fields)._CreySettings_k__BackingField, pCVar2 != (CreySettings *)0x0)) {
    bVar3 = (pCVar2->fields)._TouristPromotionCreyRedirect_k__BackingField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pCVar2 = (pMVar1->fields)._CreySettings_k__BackingField, pCVar2 != (CreySettings *)0x0)) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                ((pCVar2->fields)._TouristPromotionCreyURL_k__BackingField,bVar3 == 0,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Start
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).adContinueButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,(this->fields)._.promotionShowsAd,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_CreyGames,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

