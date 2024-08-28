
/* Void Clear() */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_Clear(InventorySlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = InventorySlot_get_Item(this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = InventorySlot_get_Item(this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void HighlightSlot() */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_HighlightSlot
               (InventorySlot *this,MethodInfo *method)

{
  pNVar1 = (this->fields).fade;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      return;
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDrop(PointerEventData) */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_OnDrop
               (InventorySlot *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__InventorySlot____c__DisplayClass11_0___OnDrop_b__0_UnityEngine__EventSystems__IGameObjectDroppedInSlot__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InventorySlot____c__DisplayClass11_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InventorySlot____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    pOVar1 = value + 1;
    pOVar1->klass = (Object__Class *)eventData;
    func_?(pOVar1,eventData);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    if (pOVar1->klass != (Object__Class *)0x0) {
      pGVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
               BaseEventData_get_selectedObject((BaseEventData *)pOVar1->klass,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      if ((pOVar1->klass != (Object__Class *)0x0) &&
         (pGVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
                   BaseEventData_get_selectedObject
                             ((BaseEventData *)pOVar1->klass,(MethodInfo *)0x0),
         pGVar2 != (GameObject *)0x0)) {
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (pGVar2,
                       InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                      );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__InventorySlot____c__DisplayClass11_0___OnDrop_b__0_UnityEngine__EventSystems__IGameObjectDroppedInSlot__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Set(GameObject) */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_Set
               (InventorySlot *this,GameObject *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)item,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (item != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (item,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar2,parent,0,(MethodInfo *)0x0);
      pTVar2 = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (item,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                         );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameObject get_Item() */

GameObject *
Assembly-CSharp.dll::InventorySlot::InventorySlot_get_Item(InventorySlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  index = &UNK_?;
  method_00 = (MethodInfo *)this;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                    (pTVar1,(MethodInfo *)0x0);
  if (iVar2 < 2) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (pTVar1,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return (GameObject *)0x0;
    }
    x = (this->fields).fade;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return (GameObject *)0x0;
    }
    in_stack_4 =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                   ((Component *)this,(MethodInfo *)0x0);
    if (in_stack_4 == (Transform *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    index = (undefined *)0x0;
  }
  else {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (Transform *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                  (this_00,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0)) goto code_?;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetChild
                     (in_stack_4,(int32_t)index,method_00);
  if (pTVar1 != (Transform *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pGVar5 = (GameObject *)(*pcRam_?)();
    return pGVar5;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pGVar5 = (GameObject *)(*pcVar6)();
  return pGVar5;
}

