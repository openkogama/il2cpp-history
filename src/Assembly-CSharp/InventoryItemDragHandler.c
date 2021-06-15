
/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler_OnBeginDrag
               (InventoryItemDragHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__InventoryItemDragHandler);
  }
  TypeInfo__InventoryItemDragHandler->static_fields->dragRejected = 0;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                       (pTVar1,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                (this_01,pTVar1,(MethodInfo *)0x0);
      this_00 = (this->fields).canvasGroup;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                  (this_00,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                  EventSystem_get_current((MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_02 != (EventSystem *)0x0) {
          UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
          EventSystem_SetSelectedGameObject_1(this_02,pGVar2,(MethodInfo *)0x0);
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this,
                     MethodInfo__InventoryItemDragHandler___OnBeginDrag_m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar2,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                    );
          TypeInfo__InventoryItemDragHandler->static_fields->dragging = 1;
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler_OnDrag
               (InventoryItemDragHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (eventData != (PointerEventData *)0x0) {
    v = UnityEngine.UI.dll::UnityEngine::EventSystems::PointerEventData::
        PointerEventData_get_position(eventData,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                       ((Vector3 *)&stack0xfffffff0,v,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler_OnEndDrag
               (InventoryItemDragHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
              (this_00,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__InventoryItemDragHandler);
    }
    TypeInfo__InventoryItemDragHandler->static_fields->dragging = 0;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                    ((Component_1 *)pTVar1,
                     InventorySlot_MethodInfo__UnityEngine__Component__GetComponent<InventorySlot>__
                    );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragRejected == 0) {
          return;
        }
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__InventoryItemDragHandler->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__InventoryItemDragHandler___OnEndDrag_m__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__InventoryItemDragHandler->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)this_01;
      }
      if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
        func_?();
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__InventoryItemDragHandler->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar3,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler_Update
               (InventoryItemDragHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__InventoryItemDragHandler);
  }
  if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  }
  return;
}


/* Void <OnBeginDrag>m__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler__OnBeginDrag_m__0
               (InventoryItemDragHandler *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (x == (IPlayerInventory *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        ppMVar6 = &(&(x->klass->vtable).SetCurrentDragTarget)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,4);
code_?:
  (*(code *)*ppMVar6)(x,pGVar1,ppMVar6[1]);
  return;
}


/* Void <OnEndDrag>m__1(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler__OnEndDrag_m__1
               (IPlayerInventory *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    func_?(5,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_Dragging() */

bool Assembly-CSharp.dll::InventoryItemDragHandler::InventoryItemDragHandler_get_Dragging
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__InventoryItemDragHandler);
  }
  return TypeInfo__InventoryItemDragHandler->static_fields->dragging;
}

