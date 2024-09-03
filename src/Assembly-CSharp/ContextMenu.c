
/* Void AddButton(String, UnityAction) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_AddButton
               (ContextMenu *this,String *buttonText,UnityAction *onClickCallback,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).contextMenuButtonPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_01 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                      );
  if ((this_01 != (Component *)0x0) &&
     (piVar1 = this_01[1].fields._.m_CachedPtr, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x318))(piVar1,buttonText,*(undefined4 *)(*piVar1 + 0x31c));
    if ((this_01[1].monitor != (MonitorData *)0x0) &&
       (this_00 = *(UnityEvent **)(this_01[1].monitor + 0xb4), this_00 != (UnityEvent *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,onClickCallback,(MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_01,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddLockedButton(String) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_AddLockedButton
               (ContextMenu *this,String *buttonText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).contextMenuLockedButtonPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                      );
  if ((this_00 != (Component *)0x0) &&
     (piVar1 = this_00[1].fields._.m_CachedPtr, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x318))(piVar1,buttonText,*(undefined4 *)(*piVar1 + 0x31c));
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_Initialize
               (ContextMenu *this,int32_t woID,Vector3 worldPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
  }
  (this->fields).woID = woID;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             (MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
              (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).worldPosition.x = worldPosition.x;
    (this->fields).worldPosition.y = worldPosition.y;
    (this->fields).worldPosition.z = worldPosition.z;
    ContextMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeLink(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_InitializeLink
               (ContextMenu *this,int32_t linkID,Vector3 worldPosition,MethodInfo *method)

{
  (this->fields).worldPosition.x = worldPosition.x;
  (this->fields).worldPosition.y = worldPosition.y;
  (this->fields).linkMenu = 1;
  (this->fields).worldPosition.z = worldPosition.z;
  ContextMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_LateUpdate(ContextMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                        ((MethodInfo *)0x0);
    if (this_00 == (EventSystem *)0x0) {
      uVar2 = func_?(&stack0xfffffffc);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (in_stack_4,(MethodInfo *)0x0);
      if ((TypeInfo__ContextMenu____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__ContextMenu____c->static_fields->__9__10_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__ContextMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__ContextMenu____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ContextMenu____c->static_fields->__9__10_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_OnDestroy(ContextMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).linkMenu == 0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    woID = (this->fields).woID;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_Pop(ContextMenu *this,MethodInfo *method)

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
                    MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenu____c);
  }
  callbackFunction = TypeInfo__ContextMenu____c->static_fields->__9__10_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenu____c);
    }
    object = TypeInfo__ContextMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenu____c->static_fields->__9__10_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenu____c->static_fields->__9__10_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_PopWoDestroyed
               (ContextMenu *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method
               )

{
  ContextMenu_Pop(this,(MethodInfo *)0x0);
  return;
}


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_SetToScreenPoint
               (ContextMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xffffffe0,this_00,(this->fields).worldPosition,
                        (MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    pTVar4 = (Transform *)(this->fields).rectTransform;
    if (pTVar4 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
      fVar5 = pVVar2->x;
      pRVar6 = (this->fields).rectTransform;
      if (pRVar6 != (RectTransform *)0x0) {
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&puStack_8,pRVar6,(MethodInfo *)0x0);
        fVar9 = pRVar7->m_Width;
        pRVar6 = (this->fields).rectTransform;
        if (pRVar6 != (RectTransform *)0x0) {
          pRVar7 = (Rect *)&puStack_8;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             (pRVar7,pRVar6,(MethodInfo *)0x0);
          puStack_11 = (undefined *)pRVar10->m_Height;
          pRVar10 = (Rect *)(fVar9 * fVar5 + _UNK_?);
          puStack_8 = (undefined *)((float)puStack_11 * fVar5 + _UNK_?);
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                            ((MethodInfo *)0x0);
          pRVar13 = (Rect *)((float)iVar12 - _UNK_?);
          puVar14 = &UNK_?;
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          if (((float)pRVar7 < (float)pRVar10) || (pRVar10 = pRVar13, (float)pRVar13 < (float)pRVar7))
          {
            pRVar7 = pRVar10;
          }
          puVar15 = puStack_8;
          if (((float)puStack_8 <= (float)puVar14) &&
             (puVar15 = puVar14, (float)iVar12 - _UNK_? < (float)puVar14)) {
            puVar15 = (undefined *)((float)iVar12 - _UNK_?);
          }
          pRVar6 = (this->fields).rectTransform;
          uVar16 = CONCAT44(puVar15,pRVar7);
          if ((pRVar6 != (RectTransform *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar6,(MethodInfo *)0x0),
             pTVar4 != (Transform *)0x0)) {
            value.z = fVar3;
            value.x = (float)(int)uVar16;
            value.y = (float)(int)((ulonglong)uVar16 >> 0x20);
            fStack17 = fVar3;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_Update(ContextMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xffffffe0,this_00,(this->fields).worldPosition,
                        (MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    pTVar4 = (Transform *)(this->fields).rectTransform;
    if (pTVar4 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
      fVar5 = pVVar2->x;
      pRVar6 = (this->fields).rectTransform;
      if (pRVar6 != (RectTransform *)0x0) {
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&puStack_8,pRVar6,(MethodInfo *)0x0);
        fVar9 = pRVar7->m_Width;
        pRVar6 = (this->fields).rectTransform;
        if (pRVar6 != (RectTransform *)0x0) {
          pRVar7 = (Rect *)&puStack_8;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             (pRVar7,pRVar6,(MethodInfo *)0x0);
          puStack_11 = (undefined *)pRVar10->m_Height;
          pRVar10 = (Rect *)(fVar9 * fVar5 + _UNK_?);
          puStack_8 = (undefined *)((float)puStack_11 * fVar5 + _UNK_?);
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                            ((MethodInfo *)0x0);
          pRVar13 = (Rect *)((float)iVar12 - _UNK_?);
          puVar14 = &UNK_?;
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          if (((float)pRVar7 < (float)pRVar10) || (pRVar10 = pRVar13, (float)pRVar13 < (float)pRVar7))
          {
            pRVar7 = pRVar10;
          }
          puVar15 = puStack_8;
          if (((float)puStack_8 <= (float)puVar14) &&
             (puVar15 = puVar14, (float)iVar12 - _UNK_? < (float)puVar14)) {
            puVar15 = (undefined *)((float)iVar12 - _UNK_?);
          }
          pRVar6 = (this->fields).rectTransform;
          uVar16 = CONCAT44(puVar15,pRVar7);
          if ((pRVar6 != (RectTransform *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar6,(MethodInfo *)0x0),
             pTVar4 != (Transform *)0x0)) {
            value.z = fVar3;
            value.x = (float)(int)uVar16;
            value.y = (float)(int)((ulonglong)uVar16 >> 0x20);
            fStack17 = fVar3;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

