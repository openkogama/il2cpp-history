
/* Void OnClick() */

void Assembly-CSharp.dll::TouristSignupClickable::TouristSignupClickable_OnClick
               (TouristSignupClickable *this,MethodInfo *method)

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
    in_stack_1 =
         &
         MethodInfo__TouristSignupClickable____c__DisplayClass4_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
    ;
    func_?();
    func_?(&TypeInfo__TouristSignupClickable____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar2 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       (&EStack_3,this_00,(MethodInfo *)0x0);
    if (((pEVar2->allowsRedirectToWebpage != 0) || (pEVar2->allowsOpenInNewTab != 0)) ||
       (pEVar2->allowsModals != 0)) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,1,(MethodInfo *)0x0);
      return;
    }
    value = (Object *)func_?(TypeInfo__TouristSignupClickable____c__DisplayClass4_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    pGVar4 = (this->fields).redirectNotAllowedPopup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar5 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar4,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (value != (Object *)0x0) {
      value[1].klass = pOVar5;
      func_?(value + 1,pOVar5);
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__TouristSignupClickable____c__DisplayClass4_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouristSignupClickable::TouristSignupClickable_Start
               (TouristSignupClickable *this,MethodInfo *method)

{
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       (&EStack_2,this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).signupBtn;
    uVar3 = pEVar1->hideSignUp;
    if (uVar3 == '\0') {
      if ((pEVar1->allowsModals == 0) && (pEVar1->allowsOpenInNewTab == 0)) {
        uVar4._0_1_ = pEVar1->showTouristPromotion;
        uVar4._1_1_ = pEVar1->allowsOpenInNewTab;
        uVar4._2_1_ = pEVar1->allowsRedirectToWebpage;
        uVar4._3_1_ = pEVar1->allowsModals;
        uVar4 = uVar4 >> 0x10 & 0xff;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,uVar4 != 0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

