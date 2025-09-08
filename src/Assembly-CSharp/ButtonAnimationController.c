
/* Void HandleButtonDisabled() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_HandleButtonDisabled
               (ButtonAnimationController *this,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    if ((pBVar1->fields)._.m_Interactable == 0) {
      this_00 = (this->fields).transformToMove;
      if (this_00 == (RectTransform *)0x0) goto code_?;
      VVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
      value.y = (this->fields).originalValue + (this->fields).disableMoveAmount;
      value.x = VVar2.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (this_00,value,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnDisable
               (ButtonAnimationController *this,MethodInfo *method)

{
  pRVar1 = (this->fields).transformToMove;
  (this->fields).buttonPressedState = 0;
  (this->fields).buttonHighlightedState = 0;
  if (pRVar1 != (RectTransform *)0x0) {
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0);
    VVar3.y = (this->fields).originalValue;
    VVar3.x = VVar2.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (pRVar1,VVar3,(MethodInfo *)0x0);
    pBVar4 = (this->fields).button;
    if (pBVar4 != (Button *)0x0) {
      if ((pBVar4->fields)._.m_Interactable == 0) {
        pRVar1 = (this->fields).transformToMove;
        if (pRVar1 == (RectTransform *)0x0) goto code_?;
        VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0);
        VVar2.y = (this->fields).originalValue + (this->fields).disableMoveAmount;
        VVar2.x = VVar3.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar1,VVar2,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerDown
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((eventData->fields)._button_k__BackingField == 0) {
    pBVar2 = (this->fields).button;
    if (pBVar2 == (Button *)0x0) goto code_?;
    if ((pBVar2->fields)._.m_Interactable != 0) {
      this_00 = (this->fields).transformToMove;
      piVar3 = &(this->fields).buttonPressedState;
      *piVar3 = *piVar3 + 1;
      if (this_00 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
      value.y = (this->fields).originalValue + (this->fields).pressedMoveAmount;
      value.x = VVar4.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (this_00,value,(MethodInfo *)0x0);
      ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
    }
  }
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
      pRVar2 = (this->fields).transformToMove;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
      VVar4.y = (this->fields).originalValue + (this->fields).hoverMoveAmount;
      VVar4.x = VVar3.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar2,VVar4,(MethodInfo *)0x0);
    }
    else {
      sVar5 = (this->fields).buttonPressedState;
      (this->fields).buttonPressedState = sVar5 + -1;
      if (eventData == (PointerEventData *)0x0) goto code_?;
      if ((eventData->fields)._button_k__BackingField == 0) {
        pBVar1 = (this->fields).button;
        if (pBVar1 == (Button *)0x0) {
code_?:
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pBVar1->fields)._.m_Interactable != 0) {
          pRVar2 = (this->fields).transformToMove;
          (this->fields).buttonPressedState = sVar5;
          if (pRVar2 != (RectTransform *)0x0) {
            VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
            VVar3.y = (this->fields).originalValue + (this->fields).pressedMoveAmount;
            VVar3.x = VVar4.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_set_anchoredPosition(pRVar2,VVar3,(MethodInfo *)0x0);
            ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
            ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
            return;
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
  if (pBVar1 != (Button *)0x0) {
    if (((pBVar1->fields)._.m_Interactable == 0) && ((this->fields).buttonHighlightedState == 0)) {
      return;
    }
    piVar2 = &(this->fields).buttonHighlightedState;
    *piVar2 = *piVar2 + -1;
    (this->fields).buttonPressedState = 0;
    if (*piVar2 == 0) {
      pRVar3 = (this->fields).transformToMove;
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
      VVar5.y = (this->fields).originalValue;
      VVar5.x = VVar4.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar3,VVar5,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 != (Button *)0x0) {
      if ((pBVar1->fields)._.m_Interactable == 0) {
        pRVar3 = (this->fields).transformToMove;
        if (pRVar3 == (RectTransform *)0x0) goto code_?;
        VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
        VVar4.y = (this->fields).originalValue + (this->fields).disableMoveAmount;
        VVar4.x = VVar5.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar3,VVar4,(MethodInfo *)0x0);
      }
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        (*(code *)(pBVar1->klass->vtable).OnDeselect_1.method)(pBVar1);
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
  if (eventData == (PointerEventData *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((eventData->fields)._button_k__BackingField == 0) {
    pBVar2 = (this->fields).button;
    if (pBVar2 == (Button *)0x0) goto code_?;
    if (((pBVar2->fields)._.m_Interactable != 0) && ((this->fields).buttonPressedState != 0)) {
      piVar3 = &(this->fields).buttonPressedState;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        pRVar4 = (this->fields).transformToMove;
        if (pRVar4 == (RectTransform *)0x0) goto code_?;
        VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar4,(MethodInfo *)0x0);
        VVar6.y = (this->fields).originalValue;
        VVar6.x = VVar5.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar4,VVar6,(MethodInfo *)0x0);
      }
      if (((this->fields).buttonPressedState == 0) && (0 < (this->fields).buttonHighlightedState)) {
        sVar7 = (this->fields).buttonHighlightedState;
        pBVar2 = (this->fields).button;
        (this->fields).buttonHighlightedState = sVar7 + -1;
        if (pBVar2 == (Button *)0x0) goto code_?;
        if ((pBVar2->fields)._.m_Interactable != 0) {
          (this->fields).buttonHighlightedState = sVar7;
          if ((this->fields).buttonPressedState == 0) {
            pRVar4 = (this->fields).transformToMove;
            if (pRVar4 == (RectTransform *)0x0) goto code_?;
            VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_get_anchoredPosition(pRVar4,(MethodInfo *)0x0);
            VVar5.y = (this->fields).originalValue + (this->fields).hoverMoveAmount;
            VVar5.x = VVar6.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_set_anchoredPosition(pRVar4,VVar5,(MethodInfo *)0x0);
          }
          else {
            sVar7 = (this->fields).buttonPressedState;
            (this->fields).buttonPressedState = sVar7 + -1;
            if ((eventData->fields)._button_k__BackingField == 0) {
              if (pBVar2 == (Button *)0x0) goto code_?;
              if ((pBVar2->fields)._.m_Interactable != 0) {
                pRVar4 = (this->fields).transformToMove;
                (this->fields).buttonPressedState = sVar7;
                if (pRVar4 == (RectTransform *)0x0) goto code_?;
                VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_anchoredPosition(pRVar4,(MethodInfo *)0x0);
                value.y = (this->fields).originalValue + (this->fields).pressedMoveAmount;
                value.x = VVar6.x;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_set_anchoredPosition(pRVar4,value,(MethodInfo *)0x0);
                ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
              }
            }
          }
          ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
        }
      }
      ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
    }
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
  pRVar1 = (this->fields).transformToMove;
  if (pRVar1 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar1,(MethodInfo *)0x0);
    pBVar2 = (this->fields).button;
    (this->fields).originalValue = fStack_3;
    if (pBVar2 != (Button *)0x0) {
      if ((pBVar2->fields)._.m_Interactable == 0) {
        pRVar1 = (this->fields).transformToMove;
        if (pRVar1 == (RectTransform *)0x0) goto code_?;
        VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0);
        value.y = (this->fields).originalValue + (this->fields).disableMoveAmount;
        value.x = VVar4.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar1,value,(MethodInfo *)0x0);
      }
      uVar5 = (this->fields).buttonType;
      if (uVar5 == 0) {
        (this->fields).pressedMoveAmount = -15.0;
        (this->fields).hoverMoveAmount = 0.0;
        (this->fields).disableMoveAmount = -10.0;
      }
      else if (uVar5 == 1) {
        (this->fields).pressedMoveAmount = -3.0;
        (this->fields).hoverMoveAmount = 0.0;
        (this->fields).disableMoveAmount = -1.0;
        return;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

