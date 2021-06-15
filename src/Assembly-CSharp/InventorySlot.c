
/* Void Clear() */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_Clear(InventorySlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = InventorySlot_get_Item(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = InventorySlot_get_Item(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  if (pNVar1 == (NotificationFade *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
  this_00 = (pNVar1->fields).group;
  (pNVar1->fields).playing = 1;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (pNVar1->fields).currentTime = 0.0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDrop(PointerEventData) */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_OnDrop
               (InventorySlot *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InventorySlot___OnDrop_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  if (this_02 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    (this_02->fields)._._._._.m_CachedPtr = eventData;
    (this_02->fields).state = (int32_t)this;
    if (eventData == (PointerEventData *)0x0) goto code_?;
    pGVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
             BaseEventData_get_selectedObject((BaseEventData *)eventData,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_00 = (this_02->fields)._._._._.m_CachedPtr;
    if ((this_00 == (BaseEventData *)0x0) ||
       (pGVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
                 BaseEventData_get_selectedObject(this_00,(MethodInfo *)0x0),
       pGVar1 == (GameObject *)0x0)) goto code_?;
    pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (pGVar1,
                        InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                       );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pUVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    args = (Object__Array *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_From__ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_From__;
    this_01 = (this_02->fields)._._._._.m_CachedPtr;
    if (((this_01 == (BaseEventData *)0x0) ||
        (pGVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
                  BaseEventData_get_selectedObject(this_01,(MethodInfo *)0x0),
        pGVar1 == (GameObject *)0x0)) ||
       (pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           (pGVar1,
                            InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                           ), pUVar3 == (UseInteractorHandler *)0x0)) goto code_?;
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
    JsonProperty]::
    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pUVar3,(MethodInfo *)0x0)
    ;
    pOVar5 = (Object *)func_?();
    if ((pOVar5 != (Object *)0x0) && (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    if ((StringLiteral__To__ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__To__;
    pOVar5 = (Object *)func_?();
    if ((pOVar5 == (Object *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_02,
                   MethodInfo__InventorySlot___OnDrop_c__AnonStorey0____m__0_UnityEngine__EventSystems__IGameObjectDroppedInSlot__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_
                  );
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Set(GameObject) */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_Set
               (InventorySlot *this,GameObject *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)item,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (item != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (item,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,0,(MethodInfo *)0x0);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                          (item,
                           UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                          );
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      if (this_01 != (UseInteractorHandler *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  ((Transform *)this_01,*pVVar2,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                    (pTVar1,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (iVar2 < 2) {
    if (pTVar1 == (Transform *)0x0) goto code_?;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (pTVar1,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return (GameObject *)0x0;
    }
    x = (this->fields).fade;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return (GameObject *)0x0;
    }
    index = &UNK_?;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
  }
  else {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if ((this_00 == (Transform *)0x0) ||
       (iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          (this_00,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
    goto code_?;
    this = (InventorySlot *)0x0;
    index = (undefined *)(iVar2 + -1);
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetChild
                     (pTVar1,(int32_t)index,(MethodInfo *)this);
  if (pTVar1 != (Transform *)0x0) {
    pcVar4 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar4 = (code *)func_?();
      if (pcVar4 == (code *)0x0) {
        puStack5 = (undefined *)0x0;
        puStack6 = (undefined *)0x0;
        puStack7 = (undefined *)func_?();
        func_?();
        pcVar4 = (code *)swi(3);
        pGVar8 = (GameObject *)(*pcVar4)();
        return pGVar8;
      }
    }
    pcRam_? = pcVar4;
    pGVar8 = (GameObject *)(*pcRam_?)();
    return pGVar8;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pGVar8 = (GameObject *)(*pcVar4)();
  return pGVar8;
}

