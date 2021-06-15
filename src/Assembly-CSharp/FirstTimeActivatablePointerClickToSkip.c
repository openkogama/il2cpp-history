
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip_Clear
               (FirstTimeActivatablePointerClickToSkip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).visible = 0;
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
             MethodInfo__FirstTimeActivatablePointerClickToSkip___Clear_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip_OnDisable
               (FirstTimeActivatablePointerClickToSkip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).visible = 0;
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
             MethodInfo__FirstTimeActivatablePointerClickToSkip___Clear_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip_OnShow
               (FirstTimeActivatablePointerClickToSkip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).visible = 1;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_This_class_does_not_implement_sk,(MethodInfo *)0x0);
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
             MethodInfo__FirstTimeActivatablePointerClickToSkip___OnShow_m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip_OnShown
               (FirstTimeActivatablePointerClickToSkip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  FirstTimeActivatablePointerClickToSkip_Clear(this,(MethodInfo *)0x0);
  firstTimeEvent = (this->fields)._._.firstTimeEvent;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip_Update
               (FirstTimeActivatablePointerClickToSkip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).visible != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      FirstTimeActivatablePointerClickToSkip_Clear(this,(MethodInfo *)0x0);
      firstTimeEvent = (this->fields)._._.firstTimeEvent;
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
    }
  }
  return;
}


/* Void <Clear>m__1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip__Clear_m__1
               (FirstTimeActivatablePointerClickToSkip *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (x != (TextBubbleController *)0x0) {
    TextBubbleController::TextBubbleController_ClearBubblesWithId
              (x,(this->fields).bubbleId,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnShow>m__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip__OnShow_m__0
               (FirstTimeActivatablePointerClickToSkip *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)(this->fields).pointToTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    VStack_4.x = pVVar2->x;
    VStack_4.y = pVVar2->y;
    fVar5 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    v.z = fVar5;
    v.x = VStack_4.x;
    v.y = VStack_4.y;
    anchoredPosition =
         UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit(v,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields).pointToTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_3,pTVar1,(MethodInfo *)0x0);
      VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                        (*pVVar2,(MethodInfo *)0x0);
      pVVar7 = &(this->fields).pointerBodyDirectionOffset;
      VStack_4 = *pVVar7;
      VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                        (VVar6,*pVVar7,(MethodInfo *)0x0);
      VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                        (VVar6,2.0,(MethodInfo *)0x0);
      fStack_8 = VVar6.y;
      fStack_9 = (this->fields).bubbleLifetimeWhileShown;
      VStack_4.y = VVar6.x;
      content = (this->fields).bubbleContent;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (x != (TextBubbleController *)0x0) {
        VVar6.y = fStack_8;
        VVar6.x = VStack_4.y;
        iVar10 = TextBubbleController::TextBubbleController_ShowBubble2D
                          (x,anchoredPosition,VVar6,fStack_9,content,pTVar1,(MethodInfo *)0x0);
        (this->fields).bubbleId = iVar10;
        return;
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* FirstTimeActivatablePointerClickToSkip() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerClickToSkip::
     FirstTimeActivatablePointerClickToSkip__ctor
               (FirstTimeActivatablePointerClickToSkip *this,MethodInfo *method)

{
  (this->fields).bubbleId = -1;
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
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

