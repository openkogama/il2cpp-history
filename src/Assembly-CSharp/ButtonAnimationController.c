
/* Void HandleButtonDisabled() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_HandleButtonDisabled
               (ButtonAnimationController *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    if ((pBVar1->fields)._.m_Interactable != 0) {
      return;
    }
    this_00 = (this->fields).transformToMove;
    if (this_00 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_3,this_00,(MethodInfo *)0x0);
      fVar4 = pVVar2->x;
      this_01 = (this->fields).transformToMove;
      if (this_01 != (Transform *)0x0) {
        fStack_5 = (this->fields).originalValue + (this->fields).disableMoveAmount;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_3,this_01,(MethodInfo *)0x0);
        VStack_3.z = pVVar2->z;
        value.y = fStack_5;
        value.x = fVar4;
        value.z = VStack_3.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnDisable
               (ButtonAnimationController *this,MethodInfo *method)

{
  this_00 = (this->fields).transformToMove;
  (this->fields).buttonPressedState = 0;
  (this->fields).buttonHighlightedState = 0;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->x;
    this_01 = (this->fields).transformToMove;
    if (this_01 != (Transform *)0x0) {
      fStack_4 = (this->fields).originalValue;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_2,this_01,(MethodInfo *)0x0);
      VStack_2.z = pVVar1->z;
      value.y = fStack_4;
      value.x = fVar3;
      value.z = VStack_2.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_00,value,(MethodInfo *)0x0);
      ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerDown
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    if ((eventData->fields)._button_k__BackingField != 0) {
      return;
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      if ((pBVar1->fields)._.m_Interactable == 0) {
        return;
      }
      this_00 = (this->fields).transformToMove;
      piVar2 = &(this->fields).buttonPressedState;
      *piVar2 = *piVar2 + 1;
      if (this_00 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_4,this_00,(MethodInfo *)0x0);
        fVar5 = pVVar3->x;
        this_01 = (this->fields).transformToMove;
        if (this_01 != (Transform *)0x0) {
          fStack_6 = (this->fields).originalValue + (this->fields).pressedMoveAmount;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             (&VStack_4,this_01,(MethodInfo *)0x0);
          VStack_4.z = pVVar3->z;
          value.y = fStack_6;
          value.x = fVar5;
          value.z = VStack_4.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_00,value,(MethodInfo *)0x0);
          ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerEnter
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) goto code_?;
  if ((pBVar1->fields)._.m_Interactable != 0) {
    (this->fields).buttonHighlightedState = (this->fields).buttonHighlightedState + 1;
    if ((this->fields).buttonPressedState == 0) {
      pTVar2 = (this->fields).transformToMove;
      if (pTVar2 == (Transform *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
      fVar5 = pVVar4->x;
      pTVar6 = (this->fields).transformToMove;
      if (pTVar6 == (Transform *)0x0) goto code_?;
      fVar7 = (this->fields).originalValue;
      fVar8 = (this->fields).hoverMoveAmount;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
      value_00.y = fVar7 + fVar8;
      value_00.x = fVar5;
      value_00.z = pVVar4->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,value_00,(MethodInfo *)0x0);
    }
    else {
      sVar9 = (this->fields).buttonPressedState;
      (this->fields).buttonPressedState = sVar9 + -1;
      if (eventData == (PointerEventData *)0x0) goto code_?;
      if ((eventData->fields)._button_k__BackingField == 0) {
        pBVar1 = (this->fields).button;
        if (pBVar1 == (Button *)0x0) goto code_?;
        if ((pBVar1->fields)._.m_Interactable != 0) {
          pTVar2 = (this->fields).transformToMove;
          (this->fields).buttonPressedState = sVar9;
          if (pTVar2 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
            fVar5 = pVVar4->x;
            pTVar6 = (this->fields).transformToMove;
            if (pTVar6 != (Transform *)0x0) {
              fVar7 = (this->fields).originalValue;
              fVar8 = (this->fields).pressedMoveAmount;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
              value.y = fVar7 + fVar8;
              value.x = fVar5;
              value.z = pVVar4->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar2,value,(MethodInfo *)0x0);
              ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
              ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
    ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerExit
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) goto code_?;
  if (((pBVar1->fields)._.m_Interactable == 0) && ((this->fields).buttonHighlightedState == 0)) {
    return;
  }
  piVar2 = &(this->fields).buttonHighlightedState;
  *piVar2 = *piVar2 + -1;
  (this->fields).buttonPressedState = 0;
  if (*piVar2 == 0) {
    this_00 = (this->fields).transformToMove;
    if (this_00 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    this_01 = (this->fields).transformToMove;
    if (this_01 == (Transform *)0x0) goto code_?;
    fVar5 = (this->fields).originalValue;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
    value.y = fVar5;
    value.x = fVar4;
    value.z = pVVar3->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
  }
  ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    (*(code *)(pBVar1->klass->vtable).OnDeselect_1.method)();
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pBVar1,0,(MethodInfo *)0x0);
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pBVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerUp
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) goto code_?;
  if ((eventData->fields)._button_k__BackingField == 0) {
    pBVar1 = (this->fields).button;
    if (pBVar1 == (Button *)0x0) goto code_?;
    if ((pBVar1->fields)._.m_Interactable == 0) {
      return;
    }
    if ((this->fields).buttonPressedState == 0) {
      return;
    }
    piVar2 = &(this->fields).buttonPressedState;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      pTVar3 = (this->fields).transformToMove;
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
      fVar5 = pVVar4->x;
      pTVar6 = (this->fields).transformToMove;
      if (pTVar6 == (Transform *)0x0) goto code_?;
      fVar7 = (this->fields).originalValue;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
      value.y = fVar7;
      value.x = fVar5;
      value.z = pVVar4->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar3,value,(MethodInfo *)0x0);
    }
    if (((this->fields).buttonPressedState == 0) && (0 < (this->fields).buttonHighlightedState)) {
      sVar8 = (this->fields).buttonHighlightedState;
      pBVar1 = (this->fields).button;
      (this->fields).buttonHighlightedState = sVar8 + -1;
      if (pBVar1 == (Button *)0x0) goto code_?;
      if ((pBVar1->fields)._.m_Interactable != 0) {
        (this->fields).buttonHighlightedState = sVar8;
        if ((this->fields).buttonPressedState == 0) {
          pTVar3 = (this->fields).transformToMove;
          if (pTVar3 == (Transform *)0x0) {
code_?:
            func_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
          fVar5 = pVVar4->x;
          pTVar6 = (this->fields).transformToMove;
          if (pTVar6 == (Transform *)0x0) goto code_?;
          fVar7 = (this->fields).originalValue + (this->fields).hoverMoveAmount;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
          value_01.y = fVar7;
          value_01.x = fVar5;
          value_01.z = pVVar4->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar3,value_01,(MethodInfo *)0x0);
        }
        else {
          sVar8 = (this->fields).buttonPressedState;
          (this->fields).buttonPressedState = sVar8 + -1;
          if ((eventData->fields)._button_k__BackingField == 0) {
            if (pBVar1 == (Button *)0x0) goto code_?;
            if ((pBVar1->fields)._.m_Interactable != 0) {
              pTVar3 = (this->fields).transformToMove;
              (this->fields).buttonPressedState = sVar8;
              if (pTVar3 == (Transform *)0x0) goto code_?;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
              fVar5 = pVVar4->x;
              pTVar6 = (this->fields).transformToMove;
              if (pTVar6 == (Transform *)0x0) goto code_?;
              fVar7 = (this->fields).originalValue + (this->fields).pressedMoveAmount;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
              value_00.y = fVar7;
              value_00.x = fVar5;
              value_00.z = pVVar4->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar3,value_00,(MethodInfo *)0x0);
              ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
            }
          }
        }
        ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
      }
    }
    ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetMoveAmount() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_SetMoveAmount
               (ButtonAnimationController *this,MethodInfo *method)

{
  uVar1 = (this->fields).buttonType;
  if (uVar1 == 0) {
    (this->fields).pressedMoveAmount = -15.0;
    (this->fields).disableMoveAmount = -10.0;
    (this->fields).hoverMoveAmount = 0.0;
    return;
  }
  if (uVar1 == 1) {
    (this->fields).pressedMoveAmount = -3.0;
    (this->fields).disableMoveAmount = -1.0;
    (this->fields).hoverMoveAmount = 0.0;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_Start
               (ButtonAnimationController *this,MethodInfo *method)

{
  this_00 = (this->fields).transformToMove;
  if (this_00 == (Transform *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                     (&VStack_3,this_00,(MethodInfo *)0x0);
  (this->fields).originalValue = pVVar2->y;
  ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
  uVar4 = (this->fields).buttonType;
  if (uVar4 == 0) {
    (this->fields).pressedMoveAmount = -15.0;
    (this->fields).hoverMoveAmount = 0.0;
    (this->fields).disableMoveAmount = -10.0;
  }
  else if (uVar4 == 1) {
    (this->fields).pressedMoveAmount = -3.0;
    (this->fields).hoverMoveAmount = 0.0;
    (this->fields).disableMoveAmount = -1.0;
    return;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_Update
               (ButtonAnimationController *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    cVar2 = (*(code *)(pBVar1->klass->vtable).IsInteractable.method)
                      (pBVar1,(pBVar1->klass->vtable).InstantClearState.methodPtr);
    if (cVar2 == '\0') {
      ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ButtonAnimationController() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController__ctor
               (ButtonAnimationController *this,MethodInfo *method)

{
  (this->fields).pressedMoveAmount = -25.0;
  (this->fields).hoverMoveAmount = 10.0;
  (this->fields).disableMoveAmount = -10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

