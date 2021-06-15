
/* Void HandleButtonDisabled() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_HandleButtonDisabled
               (ButtonAnimationController *this,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    bVar1 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    this_01 = (this->fields).transformToMove;
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                (&VStack_2,this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).transformToMove;
      fStack_3 = (this->fields).originalValue;
      if (this_02 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffc8,this_02,(MethodInfo *)0x0);
        VStack_2.x = pVVar4->x;
        VStack_2.y = pVVar4->y;
        VStack_2.z = pVVar4->z;
        uStack_5 = 0;
        fStack_6 = 0.0;
        func_?();
        if (this_01 != (Transform *)0x0) {
          value.z = fStack_6;
          value.x = (float)(undefined4)uStack_5;
          value.y = (float)uStack_5._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_01,value,(MethodInfo *)0x0);
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


/* Void OnDisable() */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnDisable
               (ButtonAnimationController *this,MethodInfo *method)

{
  this_00 = (this->fields).transformToMove;
  (this->fields).buttonPressedState = 0;
  (this->fields).buttonHighlightedState = 0;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              (&VStack_1,this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).transformToMove;
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
      VStack_1.x = pVVar2->x;
      VStack_1.y = pVVar2->y;
      VStack_1.z = pVVar2->z;
      uStack_3 = 0;
      fStack_4 = 0.0;
      func_?(&uStack_3);
      if (this_00 != (Transform *)0x0) {
        value.z = fStack_4;
        value.x = (float)(undefined4)uStack_3;
        value.y = (float)uStack_3._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_00,value,(MethodInfo *)0x0);
        ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
        return;
      }
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
    pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
      return;
    }
    this_00 = (this->fields).button;
    if (this_00 != (Button *)0x0) {
      bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked
                        ((AvatarMotor *)this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      piVar3 = &(this->fields).buttonPressedState;
      *piVar3 = *piVar3 + 1;
      this_01 = (this->fields).transformToMove;
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  (&VStack_4,this_01,(MethodInfo *)0x0);
        this_02 = (this->fields).transformToMove;
        fStack_5 = (this->fields).originalValue;
        if (this_02 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffc8,this_02,(MethodInfo *)0x0);
          VStack_4.z = pVVar6->z;
          uStack_7 = 0;
          fStack_8 = 0.0;
          VStack_4.y = 0.0;
          VStack_4.x = VStack_4.z;
          func_?();
          if (this_01 != (Transform *)0x0) {
            value.z = fStack_8;
            value.x = (float)(undefined4)uStack_7;
            value.y = (float)uStack_7._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_01,value,(MethodInfo *)0x0);
            ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerEnter
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) goto code_?;
  bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)pBVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    sVar3 = (this->fields).buttonPressedState;
    piVar4 = &(this->fields).buttonHighlightedState;
    *piVar4 = *piVar4 + 1;
    if (sVar3 == 0) {
      pTVar5 = (this->fields).transformToMove;
      if (pTVar5 == (Transform *)0x0) {
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffc8,pTVar5,(MethodInfo *)0x0);
      pTVar7 = (this->fields).transformToMove;
      if (pTVar7 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffc8,pTVar7,(MethodInfo *)0x0);
      uVar8 = 0;
      func_?();
      if (pTVar5 == (Transform *)0x0) goto code_?;
      value_00.z = 0.0;
      uStack_9 = (undefined4)(uVar8 >> 0x20);
      value_00.x = (float)uVar10;
      value_00.y = (float)uStack_9;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar5,value_00,(MethodInfo *)0x0);
    }
    else {
      (this->fields).buttonPressedState = sVar3 + -1;
      if (eventData == (PointerEventData *)0x0) goto code_?;
      pHVar11 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                         ((MVSentryGun *)eventData,(MethodInfo *)0x0);
      if (pHVar11 == (HashSet_1_System_Int32_ *)0x0) {
        pBVar1 = (this->fields).button;
        if (pBVar1 == (Button *)0x0) goto code_?;
        bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked
                          ((AvatarMotor *)pBVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          piVar4 = &(this->fields).buttonPressedState;
          *piVar4 = *piVar4 + 1;
          pTVar5 = (this->fields).transformToMove;
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
            pTVar7 = (this->fields).transformToMove;
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffc8,pTVar7,(MethodInfo *)0x0);
              uVar8 = 0;
              func_?();
              if (pTVar5 != (Transform *)0x0) {
                value.z = 0.0;
                uStack_9 = (undefined4)(uVar8 >> 0x20);
                value.x = (float)uVar10;
                value.y = (float)uStack_9;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar5,value,(MethodInfo *)0x0);
                ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
                ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
                return;
              }
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
  bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)pBVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) && ((this->fields).buttonHighlightedState == 0)) {
    return;
  }
  piVar3 = &(this->fields).buttonHighlightedState;
  *piVar3 = *piVar3 + -1;
  (this->fields).buttonPressedState = 0;
  if (*piVar3 == 0) {
    this_00 = (this->fields).transformToMove;
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              (&VStack_4,this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).transformToMove;
    if (this_01 == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
    VStack_4.x = pVVar5->x;
    VStack_4.y = pVVar5->y;
    VStack_4.z = pVVar5->z;
    uStack_6 = 0;
    fStack_7 = 0.0;
    func_?();
    if (this_00 == (Transform *)0x0) goto code_?;
    value.z = fStack_7;
    value.x = (float)(undefined4)uStack_6;
    value.y = (float)uStack_6._4_4_;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::ButtonAnimationController::ButtonAnimationController_OnPointerUp
               (ButtonAnimationController *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) goto code_?;
  pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                     ((MVSentryGun *)eventData,(MethodInfo *)0x0);
  if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
    this_00 = (this->fields).button;
    if (this_00 == (Button *)0x0) goto code_?;
    bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    sVar3 = (this->fields).buttonPressedState;
    if (sVar3 == 0) {
      return;
    }
    sVar4 = sVar3 + -1;
    (this->fields).buttonPressedState = sVar3 + -1;
    if ((short)(sVar3 + -1) == 0) {
      this_01 = (this->fields).transformToMove;
      if (this_01 == (Transform *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).transformToMove;
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffcc,this_02,(MethodInfo *)0x0);
      func_?();
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_01,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
      sVar4 = (this->fields).buttonPressedState;
    }
    if ((sVar4 == 0) && (sVar3 = (this->fields).buttonHighlightedState, 0 < sVar3)) {
      (this->fields).buttonHighlightedState = sVar3 + -1;
      ButtonAnimationController_OnPointerEnter(this,eventData,(MethodInfo *)0x0);
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
  uStack_4._0_4_ = pVVar2->x;
  uStack_4._4_4_ = pVVar2->y;
  (this->fields).originalValue = (float)uStack_4._4_4_;
  ButtonAnimationController_HandleButtonDisabled(this,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

