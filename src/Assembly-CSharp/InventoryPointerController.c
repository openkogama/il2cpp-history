
/* Void ClearImmediate() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_ClearImmediate
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    func_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    func_?(&
                    MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
      pBVar1 = (this->fields).open;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        return;
      }
      pBVar1 = (this->fields).open;
      if (pBVar1 != (Button *)0x0) {
        pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                   (MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                    (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateBubble(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_CreateBubble
               (InventoryPointerController *this,int32_t category,int32_t slot,bool showBubble,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    func_?(&
                    MethodInfo__InventoryPointerController___CreateBubble_b__11_1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__InventoryPointerController____c___CreateBubble_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventoryPointerController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if (showBubble == 0) {
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__InventoryPointerController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InventoryPointerController____c);
  }
  callbackFunction = TypeInfo__InventoryPointerController____c->static_fields->__9__11_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__InventoryPointerController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__InventoryPointerController____c);
    }
    object = TypeInfo__InventoryPointerController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__InventoryPointerController____c___CreateBubble_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__InventoryPointerController____c->static_fields->__9__11_0 = callbackFunction;
    func_?(&TypeInfo__InventoryPointerController____c->static_fields->__9__11_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  InventoryPointerController_ClearImmediate(this,(MethodInfo *)0x0);
  (this->fields).slotToHighlight = slot;
  (this->fields).categoryToOpen = category;
  pBVar2 = (this->fields).button;
  if (pBVar2 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar2->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
                 MethodInfo__InventoryPointerController___CreateBubble_b__11_1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__InventoryPointerController___OpenAtSlot_b__13_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__InventoryPointerController___OpenAtSlot_b__13_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    func_?(&MethodInfo__InventoryPointerController__RemoveBubbles__);
    func_?(&
                    MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__RemoveBubbles__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
      pBVar1 = (this->fields).open;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                   MethodInfo__InventoryPointerController___ClearImmediate_b__14_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        return;
      }
      pBVar1 = (this->fields).open;
      if (pBVar1 != (Button *)0x0) {
        pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                   (MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                    (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController_Start
               (InventoryPointerController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_bool>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__InventoryPointerController__CreateBubble_int__int__bool_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar1 != (IEditModeUI *)0x0) {
    iVar2 = func_?(4,TypeInfo__IEditModeUI,pIVar1);
    if (iVar2 != 0) {
      a = *(Delegate **)(iVar2 + 0x14);
      this_00 = (Action_3_Int32_Int32_ByteEnum_ *)
                func_?(TypeInfo__System__Action<int,_int,_bool>);
      mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
                (this_00,(Object *)this,
                 MethodInfo__InventoryPointerController__CreateBubble_int__int__bool_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            (a,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<int,_int,_bool>;
      if (unaff_ESI == (Delegate *)0x0) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        pDStack3 = (Delegate *)(iVar2 + 0x14);
        pAStack4 = (Action_3_Int32_Int32_Boolean___Class *)unaff_ESI;
        func_?();
        return;
      }
      pAStack4 = TypeInfo__System__Action<int,_int,_bool>;
      pDStack3 = unaff_ESI;
      iVar5 = func_?();
      if (iVar5 != 0) {
        *(int *)(iVar2 + 0x14) = iVar5;
        unaff_EDI = TypeInfo__System__Action<int,_int,_bool>;
        pAStack4 = TypeInfo__System__Action<int,_int,_bool>;
        pDStack3 = unaff_ESI;
        pAStack4 = (Action_3_Int32_Int32_Boolean___Class *)func_?();
        if (pAStack4 != (Action_3_Int32_Int32_Boolean___Class *)0x0) {
          pDStack3 = (Delegate *)(iVar2 + 0x14);
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pDStack3 = unaff_ESI;
  pAStack4 = unaff_EDI;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <ClearImmediate>b__14_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::
     InventoryPointerController__ClearImmediate_b__14_0
               (InventoryPointerController *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (x != (TextBubbleController *)0x0) {
    TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
              (x,(this->fields).bubbleId,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <CreateBubble>b__11_1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::
     InventoryPointerController__CreateBubble_b__11_1
               (InventoryPointerController *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__InventoryPointerController__OpenAtSlot__);
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)(this->fields).pointToTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    uVar5 = pVVar2->x;
    uVar6 = pVVar2->y;
    fVar7 = (float)uVar5 + (this->fields).pointerBodyDirectionOffset.x;
    fVar8 = (float)uVar6 + (this->fields).pointerBodyDirectionOffset.y;
    lifeTime = (this->fields).bubbleLifetimeWhileShown;
    content = (this->fields).bubbleContent;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (x != (TextBubbleController *)0x0) {
      anchoredPosition.y = (float)uVar4;
      anchoredPosition.x = fVar3;
      targetCenterPoint.y = fVar8 + fVar8;
      targetCenterPoint.x = fVar7 + fVar7;
      iVar9 = TextBubbleController::TextBubbleController_ShowBubble2D
                        (x,anchoredPosition,targetCenterPoint,lifeTime,content,pTVar1,
                         (MethodInfo *)0x0);
      pBVar10 = (this->fields).openButton;
      (this->fields).bubbleId = iVar9;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pBVar10 = (Button *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pBVar10,
                          UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                         );
      (this->fields).open = pBVar10;
      func_?();
      pBVar10 = (this->fields).open;
      if (pBVar10 != (Button *)0x0) {
        this_00 = (UnityEvent *)(pBVar10->fields).m_OnClick;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,MethodInfo__InventoryPointerController__OpenAtSlot__,
                   (MethodInfo *)0x0);
        if (this_00 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
          pBVar10 = (this->fields).open;
          iVar9 = (this->fields).bubbleId;
          if (pBVar10 != (Button *)0x0) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pBVar10,(MethodInfo *)0x0);
            pTVar1 = (Transform *)0x0;
            if (pTVar11 == (Transform *)0x0) {
code_?:
              TextBubbleController::TextBubbleController_AddElement
                        (x,iVar9,(RectTransform *)pTVar1,(MethodInfo *)0x0);
              return;
            }
            if (pTVar11->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
              pTVar1 = pTVar11;
            }
            if (pTVar1 != (Transform *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <OpenAtSlot>b__13_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::InventoryPointerController::InventoryPointerController__OpenAtSlot_b__13_0
               (InventoryPointerController *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).categoryToOpen;
  iVar2 = (this->fields).slotToHighlight;
  if (x == (IPlayerInventory *)0x0) {
    func_?();
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
                   [x->klass->interfaceOffsets[uVar5].offset].method;
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

