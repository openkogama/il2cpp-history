
/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::DragHandler::DragHandler_OnBeginDrag
               (DragHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DragHandler);
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                       (pTVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                (pTVar1,pTVar2,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        (this->fields).startPos.x = pVVar3->x;
        (this->fields).startPos.y = fVar4;
        (this->fields).startPos.z = fVar5;
        this_00 = (this->fields).canvasGroup;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                    (this_00,0,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          this_01 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                    EventSystem_get_current((MethodInfo *)0x0);
          selected = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
          if (this_01 != (EventSystem *)0x0) {
            UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_SetSelectedGameObject_1(this_01,selected,(MethodInfo *)0x0);
            TypeInfo__DragHandler->static_fields->dragging = 1;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::DragHandler::DragHandler_OnDrag
               (DragHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (eventData != (PointerEventData *)0x0) {
    if (this_00 != (Transform *)0x0) {
      value.z = 0.0;
      value.x = (eventData->fields)._position_k__BackingField.x;
      value.y = (eventData->fields)._position_k__BackingField.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::DragHandler::DragHandler_OnEndDrag
               (DragHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DragHandler);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
              (this_00,1,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                           (pTVar2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar1,(Object_1 *)pTVar2,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 == (Transform *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar1,(this->fields).startPos,(MethodInfo *)0x0);
        }
        TypeInfo__DragHandler->static_fields->dragging = 0;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DragHandler::DragHandler_Update(DragHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DragHandler);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (TypeInfo__DragHandler->static_fields->dragging != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  }
  return;
}


/* Boolean get_Dragging() */

bool Assembly-CSharp.dll::DragHandler::DragHandler_get_Dragging(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DragHandler);
    cRam_? = '\x01';
  }
  return TypeInfo__DragHandler->static_fields->dragging;
}

