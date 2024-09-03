
/* Void Reset(Vector2) */

void Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis_Reset
               (JoystickLockAxis *this,Vector2 startPos,MethodInfo *method)

{
  this_00 = (this->fields).smoothTouchAxis;
  if (this_00 != (SmoothTouchAxis *)0x0) {
    SmoothTouchAxis::SmoothTouchAxis_Reset(this_00,(MethodInfo *)0x0);
    (this->fields).prevPos.x = startPos.x;
    (this->fields).prevPos.y = startPos.y;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Joystick+SupressAxisFlag SetLockToAxis(Vector2, Single) */

Joystick_SupressAxisFlag__Enum
Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis_SetLockToAxis
          (JoystickLockAxis *this,Vector2 movement,float normalizedDistance,MethodInfo *method)

{
  if (normalizedDistance <= _UNK_?) {
    VStack_1 = movement;
    fVar2 = (float10)func_?(&VStack_1,0);
    fVar3 = (float)fVar2;
    if (_UNK_? < fVar3) {
      VStack_1.y = movement.x / fVar3;
      fVar3 = movement.y / fVar3;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      VStack_1.y = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    JVar4 = (Joystick_SupressAxisFlag__Enum)
            (_UNK_? <
            (float)((uint)(fVar3 * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y +
                          VStack_1.y *
                          (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x) &
                   _UNK_?));
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    JVar5 = JVar4 | Joystick_SupressAxisFlag__Enum_Vertical;
    if ((float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->upVector).y * fVar3 +
                      (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x * VStack_1.y) &
               _UNK_?) <= _UNK_?) {
      JVar5 = JVar4;
    }
    return JVar5;
  }
  return Joystick_SupressAxisFlag__Enum_None;
}


/* Joystick+SupressAxisFlag UpdateLockToAxis(Vector3, Single) */

Joystick_SupressAxisFlag__Enum
Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis_UpdateLockToAxis
          (JoystickLockAxis *this,Vector3 position,float normalizedDistance,MethodInfo *method)

{
  this_00 = (this->fields).smoothTouchAxis;
  fVar1 = (this->fields).prevPos.x - position.x;
  fVar2 = (this->fields).prevPos.y - position.y;
  uStack_3 = CONCAT44(fVar2,fVar1);
  uStack_4 = 0;
  if (this_00 == (SmoothTouchAxis *)0x0) {
    func_?();
    pcVar5 = (code *)swi(3);
    JVar6 = (*pcVar5)();
    return JVar6;
  }
  movement.z = 0.0;
  movement.x = fVar1;
  movement.y = fVar2;
  pVVar7 = SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                     (&VStack_8,this_00,movement,(MethodInfo *)0x0);
  uVar9 = pVVar7->x;
  uVar10 = pVVar7->y;
  (this->fields).prevPos.x = position.x;
  (this->fields).prevPos.y = position.y;
  if (normalizedDistance <= _UNK_?) {
    uStack_3._0_4_ = &position.y;
    position.y = (float)uVar9;
    uStack_3._4_4_ = 0.0;
    position.z = (float)uVar10;
    VStack_8.z = (float)&UNK_?;
    fVar11 = (float10)func_?();
    fVar1 = (float)fVar11;
    if (_UNK_? < fVar1) {
      this = (JoystickLockAxis *)((float)(float *)uStack_3 / fVar1);
      position.z = uStack_3._4_4_ / fVar1;
    }
    else {
      if (cRam_? == '\0') {
        uStack_3 = 0x11b203801049c27a;
        func_?();
        cRam_? = '\x01';
      }
      this = (JoystickLockAxis *)(TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      position.z = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    }
    if (cRam_? == '\0') {
      uStack_3 = 0x11b203801049c2cd;
      func_?();
      cRam_? = '\x01';
    }
    JVar6 = (Joystick_SupressAxisFlag__Enum)
            (_UNK_? <
            (float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y *
                           position.z +
                          (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x *
                          (float)this) & _UNK_?));
    if (cRam_? == '\0') {
      uStack_3 = 0x11b203801049c324;
      func_?();
      cRam_? = '\x01';
    }
    JVar12 = JVar6 | Joystick_SupressAxisFlag__Enum_Vertical;
    if ((float)((uint)((TypeInfo__UnityEngine__Vector2->static_fields->upVector).y * position.z +
                      (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x * (float)this) &
               _UNK_?) <= _UNK_?) {
      JVar12 = JVar6;
    }
    return JVar12;
  }
  return Joystick_SupressAxisFlag__Enum_None;
}


/* JoystickLockAxis() */

void Assembly-CSharp.dll::JoystickLockAxis::JoystickLockAxis__ctor
               (JoystickLockAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SmoothTouchAxis);
    cRam_? = '\x01';
  }
  this_00 = (SmoothTouchAxis *)func_?(TypeInfo__SmoothTouchAxis);
  SmoothTouchAxis::SmoothTouchAxis__ctor(this_00,3,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).smoothTouchAxis;
  (this->fields).smoothTouchAxis = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

