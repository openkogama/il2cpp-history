
/* Void ClearImmediate() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_ClearImmediate
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HoverCraftMotor *)(this->fields).button;
  if (pHVar1 != (HoverCraftMotor *)0x0) {
    pUVar2 = (UnityEvent *)
             HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
      x = (this->fields).open;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_m__3_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        return;
      }
      pHVar1 = (HoverCraftMotor *)(this->fields).open;
      if (pHVar1 != (HoverCraftMotor *)0x0) {
        pUVar2 = (UnityEvent *)
                 HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                   (MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                    (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateBubble(Int32, Int32) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_CreateBubble
               (InventoryPointerController *this,int32_t category,int32_t slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__InventoryPointerController->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__InventoryPointerController___CreateBubble_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__InventoryPointerController->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__InventoryPointerController->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  InventoryPointerController_ClearImmediate(this,(MethodInfo *)0x0);
  (this->fields).slotToHighlight = slot;
  (this->fields).categoryToOpen = category;
  this_00 = (HoverCraftMotor *)(this->fields).button;
  if (this_00 != (HoverCraftMotor *)0x0) {
    this_01 = (UnityEvent *)
              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if (this_01 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_01,(UnityAction *)pUVar2,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__InventoryPointerController___CreateBubble_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenAtSlot() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_OpenAtSlot
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__InventoryPointerController___OpenAtSlot_m__2_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            );
  InventoryPointerController_ClearImmediate(this,(MethodInfo *)0x0);
  return;
}


/* Void RemoveBubbles() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_RemoveBubbles
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HoverCraftMotor *)(this->fields).button;
  if (pHVar1 != (HoverCraftMotor *)0x0) {
    pUVar2 = (UnityEvent *)
             HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
      x = (this->fields).open;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_m__3_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        return;
      }
      pHVar1 = (HoverCraftMotor *)(this->fields).open;
      if (pHVar1 != (HoverCraftMotor *)0x0) {
        pUVar2 = (UnityEvent *)
                 HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                   (MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                    (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_Start
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    iVar2 = func_?(6,TypeInfo__IEditModeUI,pIVar1);
    if (iVar2 != 0) {
      pDVar3 = *(Delegate **)(iVar2 + 0x14);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<int,_int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__InventoryPointerController__CreateBubble_int__int_,
                 MethodInfo__System__Action<int,_int>__Action_System__Object__void__);
      pDStack4 =
           mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      pDVar3 = (Delegate *)0x0;
      if (pDStack4 == (Delegate *)0x0) {
code_?:
        *(Delegate **)(iVar2 + 0x14) = pDVar3;
        return;
      }
      if ((Action_2_Int32_Int32___Class *)pDStack4->klass ==
          TypeInfo__System__Action<int,_int>) {
        pDVar3 = pDStack4;
      }
      pAStack5 = TypeInfo__System__Action<int,_int>;
      if (pDVar3 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pDStack4 = extraout_ECX;
  pAStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <ClearImmediate>m__3(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::
     InventoryPointerController__ClearImmediate_m__3
               (InventoryPointerController *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (x != (TextBubbleController *)0x0) {
    TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
              (x,(this->fields).bubbleId,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreateBubble>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__CreateBubble_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        ppMVar5 = &(&(handler->klass->vtable).PopToGroup)[pIVar2->interfaceOffsets[uVar3].offset].
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(handler,TypeInfo__UnityEngine__EventSystems__IUIStack,4);
code_?:
  (*(code *)*ppMVar5)(handler,0x80,ppMVar5[1]);
  return;
}


/* Void <CreateBubble>m__1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__CreateBubble_m__1
               (InventoryPointerController *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

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
        pBVar11 = (this->fields).openButton;
        (this->fields).bubbleId = iVar10;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_00 = (HoverCraftMotor *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pBVar11,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                            );
        (this->fields).open = (Button *)this_00;
        if (this_00 != (HoverCraftMotor *)0x0) {
          this_01 = (UnityEvent *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                     (MethodInfo *)0x0);
          if (this_01 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
            pBVar11 = (this->fields).open;
            iVar10 = (this->fields).bubbleId;
            if (pBVar11 != (Button *)0x0) {
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pBVar11,(MethodInfo *)0x0);
              element = (Transform *)0x0;
              if (pTVar1 == (Transform *)0x0) {
code_?:
                TextBubbleController::TextBubbleController_AddElement
                          (x,iVar10,(RectTransform *)element,(MethodInfo *)0x0);
                return;
              }
              if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                element = pTVar1;
              }
              pRVar12 = TypeInfo__UnityEngine__RectTransform;
              if (element != (Transform *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pTVar1 = extraout_ECX;
  pRVar12 = extraout_EDX;
code_?:
  func_?(pTVar1,pRVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <OpenAtSlot>m__2(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__OpenAtSlot_m__2
               (InventoryPointerController *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).categoryToOpen;
  iVar2 = (this->fields).slotToHighlight;
  if (x == (IPlayerInventory *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        ppMVar7 = &(&(x->klass->vtable).ActivateAtCategoryWithSlot)
                   [pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,1);
code_?:
  (*(code *)*ppMVar7)(x,1,iVar1,iVar2,ppMVar7[1]);
  return;
}


/* InventoryPointerController() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__ctor
               (InventoryPointerController *this,MethodInfo *method)

{
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
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

