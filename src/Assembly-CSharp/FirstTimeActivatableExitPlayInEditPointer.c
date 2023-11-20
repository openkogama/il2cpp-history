
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer_OnShow
               (FirstTimeActivatableExitPlayInEditPointer *this,MethodInfo *method)

{
  FirstTimeActivatableButtonPointer::FirstTimeActivatableButtonPointer_ShowBubble
            ((FirstTimeActivatableButtonPointer *)this,(MethodInfo *)0x0);
  (this->fields).isDeleting = 0;
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer_OnShown
               (FirstTimeActivatableExitPlayInEditPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopPlayModeController);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatableExitPlayInEditPointer___OnShown_b__9_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).canShow == 0) {
    return;
  }
  (this->fields).canShow = 0;
  (this->fields).isDeleting = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  this_00 = (Component *)TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (this_00 == (Component *)0x0) {
    func_?();
    pDVar1 = extraout_EDX;
  }
  else {
    pDVar1 = TypeInfo__DesktopPlayModeController;
    if (((TypeInfo__DesktopPlayModeController->_1).naturalAligment <=
         (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__DesktopPlayModeController->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__DesktopPlayModeController)) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (this_00,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__FirstTimeActivatableExitPlayInEditPointer___OnShown_b__9_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      return;
    }
  }
  func_?(this_00,pDVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer_Update
               (FirstTimeActivatableExitPlayInEditPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopPlayModeController);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatableExitPlayInEditPointer___Update_b__8_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FirstTimeActivatableExitPlayInEditPointer____c___Update_b__8_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c);
    cRam_? = '\x01';
  }
  if ((this->fields).isDeleting == 0) {
    fVar1 = (this->fields).currentTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 + fVar1;
    (this->fields).currentTime = fVar2;
    if (((this->fields).timeBeforeActive <= fVar2) && ((this->fields).canShow == 0)) {
      (this->fields).canShow = 1;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?(TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c);
      }
      callbackFunction =
           TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->static_fields->__9__8_1;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0) {
        if ((TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c);
        }
        object = TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__FirstTimeActivatableExitPlayInEditPointer____c___Update_b__8_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->static_fields->__9__8_1 =
             callbackFunction;
        func_?(&TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->static_fields->
                         __9__8_1,callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
    }
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  this_00 = (Component *)TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (this_00 == (Component *)0x0) {
    func_?();
    pDVar4 = extraout_EDX;
  }
  else {
    pDVar4 = TypeInfo__DesktopPlayModeController;
    if (((TypeInfo__DesktopPlayModeController->_1).naturalAligment <=
         (this_00->klass->_1).naturalAligment) &&
       ((this_00->klass->_1).typeHierarchy
        [(TypeInfo__DesktopPlayModeController->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__DesktopPlayModeController)) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_00,(MethodInfo *)0x0);
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
                 MethodInfo__FirstTimeActivatableExitPlayInEditPointer___Update_b__8_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      firstTimeEvent = (this->fields)._._._.firstTimeEvent;
      (this->fields).isDeleting = 0;
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                (firstTimeEvent,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(this_00,pDVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableExitPlayInEditPointer() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer__ctor
               (FirstTimeActivatableExitPlayInEditPointer *this,MethodInfo *method)

{
  (this->fields).timeBeforeActive = 0.3;
  (this->fields)._.bubbleId = -1;
  (this->fields)._.bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields)._.skipAllowed = 1;
  (this->fields)._._.onShowSound = 3;
  (this->fields)._._.prerequisiteEvent = -1;
  (this->fields)._._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer_get_CanShow
               (FirstTimeActivatableExitPlayInEditPointer *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).leavePlayInEdit;
  if (this_00 == (GameObject *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                    (this_00,(MethodInfo *)0x0);
  bVar4 = 0;
  if (bVar1 == 0) {
    bVar4 = bVar3;
  }
  if (bVar4 == 0) {
    return 0;
  }
  return (this->fields).canShow;
}

