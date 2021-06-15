
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_Clear
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 != (EnterPlayModeButton *)0x0) {
    pAVar2 = (pEVar1->fields).enteringPlayMode;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar4 != (Action *)0x0) {
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar4;
      }
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pEVar1->fields).enteringPlayMode = pAVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___Clear_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
              );
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateBubble() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_CreateBubble
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___CreateBubble_m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
            );
  return;
}


/* Void OnActivate() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnActivate
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 != (EnterPlayModeButton *)0x0) {
    pAVar2 = (pEVar1->fields).enteringPlayMode;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pEVar1->fields).enteringPlayMode = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnDestroy
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 != (EnterPlayModeButton *)0x0) {
    pAVar2 = (pEVar1->fields).enteringPlayMode;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar4 != (Action *)0x0) {
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar4;
      }
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pEVar1->fields).enteringPlayMode = pAVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___Clear_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
              );
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnEnable
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.waitingForDelay != 0) {
    routine = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_ShowDelay
                        ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  if ((this->fields).shouldBeDelayedDestroyed != 0) {
    firstTimeEvent = (this->fields)._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
  }
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnShown
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 != (EnterPlayModeButton *)0x0) {
    pAVar2 = (pEVar1->fields).enteringPlayMode;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pEVar1->fields).enteringPlayMode = pAVar2;
    (this->fields).shouldBeDelayedDestroyed = 1;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Clear>m__1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode__Clear_m__1
               (FirstTimeActivatableButtonPointerEnterEditMode *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  bubbleId = (this->fields).bubbleId;
  if (bubbleId != -1) {
    if (x == (TextBubbleController *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
              (x,bubbleId,(MethodInfo *)0x0);
  }
  return;
}


/* Void <CreateBubble>m__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode__CreateBubble_m__0
               (FirstTimeActivatableButtonPointerEnterEditMode *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)(this->fields).pointToTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    v = *pVVar2;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    anchoredPosition =
         UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit(v,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields).pointToTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                        (*pVVar2,(MethodInfo *)0x0);
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                        (VVar3,(this->fields).pointerBodyDirectionOffset,(MethodInfo *)0x0);
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                        (VVar3,2.0,(MethodInfo *)0x0);
      lifeTime = (this->fields).bubbleLifetimeWhileShown;
      content = (this->fields).bubbleContent;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (x != (TextBubbleController *)0x0) {
        iVar4 = TextBubbleController::TextBubbleController_ShowBubble2D
                          (x,anchoredPosition,VVar3,lifeTime,content,pTVar1,(MethodInfo *)0x0);
        (this->fields).bubbleId = iVar4;
        if ((this->fields).skipAllowed == 0) {
          return;
        }
        original = (this->fields).skipElement;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_00 = (HoverCraftMotor *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)original,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                            );
        if (this_00 != (HoverCraftMotor *)0x0) {
          this_01 = (UnityEvent *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this,MethodInfo__FirstTimeActivatableElementBase__SkipEvent__
                     ,(MethodInfo *)0x0);
          if (this_01 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
            iVar4 = (this->fields).bubbleId;
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_00,(MethodInfo *)0x0);
            pTVar1 = (Transform *)0x0;
            if (pTVar5 == (Transform *)0x0) {
code_?:
              TextBubbleController::TextBubbleController_AddFirstElement
                        (x,iVar4,(RectTransform *)pTVar1,(MethodInfo *)0x0);
              return;
            }
            if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
              pTVar1 = pTVar5;
            }
            if (pTVar1 != (Transform *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

