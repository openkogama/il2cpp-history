
/* AvatarLimbManagerLocal+HeadRotationCalculationResult CalculateHeadRotation(Vector3) */

AvatarLimbManagerLocal_HeadRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_CalculateHeadRotation
          (AvatarLimbManagerLocal_HeadRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 *localLookDirection,
          MethodInfo *method)

{
  (this->fields).shouldLean = 1;
  (__return_storage_ptr__->YawRotation).x = 0.0;
  (__return_storage_ptr__->YawRotation).y = 0.0;
  (__return_storage_ptr__->YawRotation).z = 0.0;
  (__return_storage_ptr__->YawRotation).w = 0.0;
  (__return_storage_ptr__->PitchRotation).x = 0.0;
  (__return_storage_ptr__->PitchRotation).y = 0.0;
  (__return_storage_ptr__->PitchRotation).z = 0.0;
  (__return_storage_ptr__->PitchRotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->ShouldLean = 0;
  VStack_1.x = localLookDirection->x;
  VStack_1.y = localLookDirection->y;
  VStack_1.z = localLookDirection->z;
  fVar2 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(&VStack_1,(MethodInfo *)0x0);
  if ((fVar2 < _UNK_?) || (_UNK_? < fVar2)) {
    (this->fields).shouldLean = 0;
    fVar2 = 0.0;
  }
  fVar3 = _UNK_?;
  if ((fVar2 < _UNK_?) || (fVar3 = _UNK_?, _UNK_? < fVar2)) {
    fVar2 = fVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_1.x = (pVVar4->upVector).x;
  VStack_1.y = (pVVar4->upVector).y;
  VStack_1.z = (pVVar4->upVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pAVar9 = (AvatarLimbManagerLocal_HeadRotationCalculationResult *)(*pcVar7)();
    return pAVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar2,&VStack_1,&uStack_5);
  VStack_1.x = localLookDirection->x;
  VStack_1.y = localLookDirection->y;
  VStack_1.z = localLookDirection->z;
  pQVar10 = AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedPitchRotation
                     (aQStack_11,this,&VStack_1,(MethodInfo *)0x0);
  (__return_storage_ptr__->YawRotation).x = (float)(undefined4)uStack_5;
  (__return_storage_ptr__->YawRotation).y = (float)uStack_5._4_4_;
  (__return_storage_ptr__->YawRotation).z = (float)(undefined4)uStack_6;
  (__return_storage_ptr__->YawRotation).w = (float)uStack_6._4_4_;
  fVar2 = pQVar10->x;
  fVar3 = pQVar10->y;
  fVar12 = pQVar10->z;
  fVar13 = pQVar10->w;
  __return_storage_ptr__->ShouldLean = (this->fields).shouldLean;
  (__return_storage_ptr__->PitchRotation).x = fVar2;
  (__return_storage_ptr__->PitchRotation).y = fVar3;
  (__return_storage_ptr__->PitchRotation).z = fVar12;
  (__return_storage_ptr__->PitchRotation).w = fVar13;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 *localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = localDirection->x;
  uStack_1._4_4_ = localDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,localDirection->z);
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = (float)FUN_?(&uStack_4,&uStack_1);
  fVar6 = fVar6 - _UNK_?;
  fVar7 = fVar6;
  if ((0.0 < fVar6) && ((fVar6 <= 0.0 || (fVar7 = 0.0, _UNK_? <= fVar6)))) {
    fVar7 = (fVar6 - _UNK_?) / _UNK_?;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      fVar7 = _UNK_?;
    }
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      fVar7 = _UNK_?;
    }
    fVar7 = fVar7 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar7 * fVar7 + fVar7 * _UNK_? * fVar7;
    fVar7 = (_UNK_? - fVar7) * 0.0 + fVar7 * _UNK_?;
  }
  fVar6 = _UNK_?;
  if ((_UNK_? <= fVar7) && (fVar6 = fVar7, _UNK_? < fVar7)) {
    fVar6 = _UNK_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->rightVector).x;
  uStack_4._4_4_ = (pVVar3->rightVector).y;
  fStack_5 = (pVVar3->rightVector).z;
  uStack_1 = 0;
  uStack_2 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pQVar10 = (Quaternion *)(*pcVar8)();
    return pQVar10;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(fVar6,&uStack_4,&uStack_1);
  __return_storage_ptr__->x = (float)(undefined4)uStack_1;
  __return_storage_ptr__->y = (float)uStack_1._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_2;
  __return_storage_ptr__->w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 *localDirection,
          MethodInfo *method)

{
  VStack_1.x = localDirection->x;
  VStack_1.y = localDirection->y;
  VStack_1.z = localDirection->z;
  fVar2 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(&VStack_1,(MethodInfo *)0x0);
  if ((fVar2 < _UNK_?) || (_UNK_? < fVar2)) {
    (this->fields).shouldLean = 0;
    fVar2 = 0.0;
  }
  fVar3 = _UNK_?;
  if ((fVar2 < _UNK_?) || (fVar3 = _UNK_?, _UNK_? < fVar2)) {
    fVar2 = fVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_1.x = (pVVar4->upVector).x;
  VStack_1.y = (pVVar4->upVector).y;
  VStack_1.z = (pVVar4->upVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar2,&VStack_1,&uStack_5);
  __return_storage_ptr__->x = (float)(undefined4)uStack_5;
  __return_storage_ptr__->y = (float)uStack_5._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_6;
  __return_storage_ptr__->w = (float)uStack_6._4_4_;
  return __return_storage_ptr__;
}


/* Single HandleCameraPitchOffset(Single) */

float Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
      AvatarLimbManagerLocal_AvatarHeadRotationCalculator_HandleCameraPitchOffset
                (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,float pitch,
                MethodInfo *method)

{
  if (0.0 < pitch) {
    if ((0.0 < pitch) && (pitch < _UNK_?)) {
      return 0.0;
    }
    fVar1 = (pitch - _UNK_?) / _UNK_?;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    fVar1 = fVar1 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar1 * fVar1 + fVar1 * _UNK_? * fVar1;
    pitch = (_UNK_? - fVar1) * 0.0 + fVar1 * _UNK_?;
  }
  return pitch;
}


/* Single HandleYawDeadZone(Single) */

float Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
      AvatarLimbManagerLocal_AvatarHeadRotationCalculator_HandleYawDeadZone
                (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,float yaw,
                MethodInfo *method)

{
  if ((_UNK_? <= yaw) && (yaw <= _UNK_?)) {
    return yaw;
  }
  (this->fields).shouldLean = 0;
  return 0.0;
}

