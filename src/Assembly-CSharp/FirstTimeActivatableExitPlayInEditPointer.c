
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).canShow == 0) {
    return;
  }
  (this->fields).canShow = 0;
  (this->fields).isDeleting = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pCVar1 = (Component_1 *)
           MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pCVar1 == (Component_1 *)0x0) {
    func_?(0);
    pCVar1 = extraout_ECX;
    pDVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__DesktopPlayModeController->_1).naturalAligment;
    pIVar4 = (IPlayModeUI__Class *)pCVar1->klass;
    if (((pIVar4->_1).naturalAligment < bVar3) ||
       (bVar5 = true,
       (pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__DesktopPlayModeController))
    {
      bVar5 = false;
    }
    pCVar6 = (Component_1 *)0x0;
    if (bVar5) {
      pCVar6 = pCVar1;
    }
    pDVar2 = TypeInfo__DesktopPlayModeController;
    if (pCVar6 != (Component_1 *)0x0) {
      if (((pIVar4->_1).naturalAligment < bVar3) ||
         ((pIVar4->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__DesktopPlayModeController)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pCVar6 = (Component_1 *)0x0;
      if (bVar5) {
        pCVar6 = pCVar1;
      }
      if (pCVar6 != (Component_1 *)0x0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (pCVar6,(MethodInfo *)0x0);
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__FirstTimeActivatableExitPlayInEditPointer___OnShown_m__2_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        return;
      }
    }
  }
  func_?(pCVar1,pDVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer_Update
               (FirstTimeActivatableExitPlayInEditPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDeleting == 0) {
    fVar1 = (this->fields).currentTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 + fVar1;
    (this->fields).currentTime = fVar2;
    if (((this->fields).timeBeforeActive <= fVar2) && ((this->fields).canShow == 0)) {
      (this->fields).canShow = 1;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__FirstTimeActivatableExitPlayInEditPointer->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0) {
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)0x0,
                   MethodInfo__FirstTimeActivatableExitPlayInEditPointer___Update_m__1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
                  );
        TypeInfo__FirstTimeActivatableExitPlayInEditPointer->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)pUVar4;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__FirstTimeActivatableExitPlayInEditPointer->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar3,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
    }
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pCVar5 = (Component_1 *)
           MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pCVar5 == (Component_1 *)0x0) {
    func_?(0);
    pCVar5 = extraout_ECX;
    pDVar6 = extraout_EDX;
  }
  else {
    bVar7 = (TypeInfo__DesktopPlayModeController->_1).naturalAligment;
    pIVar8 = (IPlayModeUI__Class *)pCVar5->klass;
    if (((pIVar8->_1).naturalAligment < bVar7) ||
       (bVar9 = true,
       (pIVar8->_1).typeHierarchy[bVar7 - 1] != (Il2CppClass *)TypeInfo__DesktopPlayModeController))
    {
      bVar9 = false;
    }
    pCVar10 = (Component_1 *)0x0;
    if (bVar9) {
      pCVar10 = pCVar5;
    }
    pDVar6 = TypeInfo__DesktopPlayModeController;
    if (pCVar10 != (Component_1 *)0x0) {
      if (((pIVar8->_1).naturalAligment < bVar7) ||
         ((pIVar8->_1).typeHierarchy[bVar7 - 1] !=
          (Il2CppClass *)TypeInfo__DesktopPlayModeController)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pCVar10 = (Component_1 *)0x0;
      if (bVar9) {
        pCVar10 = pCVar5;
      }
      if (pCVar10 != (Component_1 *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar10,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__FirstTimeActivatableExitPlayInEditPointer___Update_m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        firstTimeEvent = (this->fields)._._._.firstTimeEvent;
        (this->fields).isDeleting = 0;
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?();
        }
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  (firstTimeEvent,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(pCVar5,pDVar6);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Update>m__1(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer::
     FirstTimeActivatableExitPlayInEditPointer__Update_m__1
               (IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  if ((bVar1 == 0) && (bVar3 != 0)) {
    return (this->fields).canShow != 0;
  }
  return 0;
}

