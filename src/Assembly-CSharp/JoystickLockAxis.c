
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar1 = (double)(movement.y * movement.y + movement.x * movement.x);
    if (dVar1 < 0.0) {
      func_?();
    }
    else {
      dVar1 = SQRT(dVar1);
    }
    fVar2 = (float)dVar1;
    if (_UNK_? < fVar2) {
      fStack_3 = movement.x / fVar2;
      fVar2 = movement.y / fVar2;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      fStack_3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    JVar4 = (Joystick_SupressAxisFlag__Enum)
            (_UNK_? <
            (float)((uint)(fVar2 * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y +
                          fStack_3 * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x)
                   & _UNK_?));
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    JVar5 = JVar4 | Joystick_SupressAxisFlag__Enum_Vertical;
    if ((float)((uint)(fVar2 * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y +
                      fStack_3 * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x) &
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
  if (this_00 == (SmoothTouchAxis *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    JVar2 = (*pcVar1)();
    return JVar2;
  }
  movement.y = (this->fields).prevPos.y - position.y;
  movement.x = (this->fields).prevPos.x - position.x;
  movement.z = 0.0;
  pVVar3 = SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                     (&VStack_4,this_00,movement,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar3->x;
  uStack_5._4_4_ = pVVar3->y;
  (this->fields).prevPos.x = position.x;
  (this->fields).prevPos.y = position.y;
  if (normalizedDistance <= _UNK_?) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar6 = (double)(uStack_5._4_4_ * uStack_5._4_4_ + (float)uStack_5 * (float)uStack_5);
    if (dVar6 < 0.0) {
      func_?();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    VStack_4.z = (float)dVar6;
    if (_UNK_? < VStack_4.z) {
      VStack_4.y = (float)uStack_5 / VStack_4.z;
      VStack_4.z = uStack_5._4_4_ / VStack_4.z;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      VStack_4.y = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      VStack_4.z = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    JVar2 = (Joystick_SupressAxisFlag__Enum)
            (_UNK_? <
            (float)((uint)(VStack_4.y *
                           (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x +
                          VStack_4.z *
                          (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y) &
                   _UNK_?));
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    JVar7 = JVar2 | Joystick_SupressAxisFlag__Enum_Vertical;
    if ((float)((uint)(VStack_4.y * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x +
                      VStack_4.z * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y) &
               _UNK_?) <= _UNK_?) {
      JVar7 = JVar2;
    }
    return JVar7;
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
  *(SmoothTouchAxis **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

