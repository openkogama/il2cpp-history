
/* Void Reset(Vector2) */

void Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis_Reset
               (JoystickLockAxis *this,Vector2 startPos,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothTouchAxis;
  if (pSVar1 != (SmoothTouchAxis *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__)
      ;
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar2 = (pSVar1->fields).prevVelocities;
    if (pQVar2 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
      if ((pQVar2->fields)._size != 0) {
        (pQVar2->fields)._size = 0;
      }
      piVar3 = &(pQVar2->fields)._version;
      *piVar3 = *piVar3 + 1;
      (pQVar2->fields)._head = 0;
      (pQVar2->fields)._tail = 0;
      (this->fields).prevPos = startPos;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Joystick+SupressAxisFlag SetLockToAxis(Vector2, Single) */

Joystick_SupressAxisFlag__Enum
Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis_SetLockToAxis
          (JoystickLockAxis *this,Vector2 movement,float normalizedDistance,MethodInfo *method)

{
  if (normalizedDistance <= _UNK_?) {
    VStack_1 = movement;
    uVar2 = FUN_?(&VStack_1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fStack_3 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_4 = (float)uVar2;
    JVar5 = (Joystick_SupressAxisFlag__Enum)
            (_UNK_? <
            (float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y *
                           fStack_3 +
                          (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x * fStack_4
                          ) & (uint)_UNK_?));
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    JVar6 = JVar5 | Joystick_SupressAxisFlag__Enum_Vertical;
    if ((float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->upVector).y * fStack_3 +
                      (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x * fStack_4) &
               (uint)_UNK_?) <= _UNK_?) {
      JVar6 = JVar5;
    }
    return JVar6;
  }
  return Joystick_SupressAxisFlag__Enum_None;
}


/* Joystick+SupressAxisFlag UpdateLockToAxis(Vector3, Single) */

Joystick_SupressAxisFlag__Enum
Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis_UpdateLockToAxis
          (JoystickLockAxis *this,Vector3 *position,float normalizedDistance,MethodInfo *method)

{
  VStack_1.z = position->z;
  uVar2._0_4_ = position->x;
  uVar2._4_4_ = position->y;
  this_00 = (this->fields).smoothTouchAxis;
  VStack_1.x = (this->fields).prevPos.x - (float)uVar2;
  if (this_00 != (SmoothTouchAxis *)0x0) {
    VStack_1.y = (this->fields).prevPos.y - uVar2._4_4_;
    VStack_1.z = 0.0;
    pVVar3 = SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                       (aVStack_4,this_00,&VStack_1,(MethodInfo *)0x0);
    fVar5 = _UNK_?;
    uStackX_8._0_4_ = pVVar3->x;
    uStackX_8._4_4_ = pVVar3->y;
    (this->fields).prevPos.x = (float)uVar2;
    (this->fields).prevPos.y = uVar2._4_4_;
    if (fVar5 < normalizedDistance) {
      JVar6 = Joystick_SupressAxisFlag__Enum_None;
    }
    else {
      uStackX_8 = FUN_?(&uStackX_8);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector2);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar5 = _UNK_?;
      fVar7 = uStackX_8._4_4_;
      fVar8 = (float)uStackX_8;
      JVar9 = (Joystick_SupressAxisFlag__Enum)
              (_UNK_? <
              (float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y *
                             uStackX_8._4_4_ +
                            (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x *
                            (float)uStackX_8) & (uint)_UNK_?));
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector2);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      JVar6 = JVar9 | Joystick_SupressAxisFlag__Enum_Vertical;
      if ((float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->upVector).y * fVar7 +
                        (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x * fVar8) &
                 (uint)_UNK_?) <= fVar5) {
        JVar6 = JVar9;
      }
    }
    return JVar6;
  }
  VStack_1._0_8_ = uVar2;
  FUN_?();
  pcVar10 = (code *)swi(3);
  JVar6 = (*pcVar10)();
  return JVar6;
}


/* JoystickLockAxis() */

void Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis__ctor
               (JoystickLockAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SmoothTouchAxis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SmoothTouchAxis *)FUN_?(TypeInfo__SmoothTouchAxis);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = (Queue_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  FUN_?(pQVar2);
  iVar3 = iRam_?;
  (pSVar1->fields).prevVelocities = pQVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(pSVar1->fields).prevVelocities >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (pSVar1->fields).sampleLength = 3;
  (this->fields).smoothTouchAxis = pSVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).smoothTouchAxis >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}

