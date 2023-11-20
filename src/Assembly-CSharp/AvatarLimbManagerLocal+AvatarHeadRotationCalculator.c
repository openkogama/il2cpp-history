
/* AvatarLimbManagerLocal+HeadRotationCalculationResult CalculateHeadRotation(Vector3) */

AvatarLimbManagerLocal_HeadRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_CalculateHeadRotation
          (AvatarLimbManagerLocal_HeadRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 localLookDirection,
          MethodInfo *method)

{
  pAVar1 = this;
  (__return_storage_ptr__->YawRotation).x = 0.0;
  (__return_storage_ptr__->YawRotation).y = 0.0;
  (__return_storage_ptr__->YawRotation).z = 0.0;
  (__return_storage_ptr__->YawRotation).w = 0.0;
  (this->fields).shouldLean = 1;
  (__return_storage_ptr__->PitchRotation).x = 0.0;
  (__return_storage_ptr__->PitchRotation).y = 0.0;
  (__return_storage_ptr__->PitchRotation).z = 0.0;
  (__return_storage_ptr__->PitchRotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->ShouldLean = 0;
  pAVar2 = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)
           MathFunctions::MathFunctions_SignedYawFromLocalDirection
                     (localLookDirection,(MethodInfo *)0x0);
  if (((float)pAVar2 < _UNK_?) || (_UNK_? < (float)pAVar2)) {
    (this->fields).shouldLean = 0;
    this = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0;
    pAVar2 = this;
  }
  this = pAVar2;
  pAVar2 = _UNK_?;
  if (((float)this < (float)_UNK_?) ||
     (pAVar2 = _UNK_?, (float)_UNK_? < (float)this)) {
    this = pAVar2;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,(float)this,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  MathFunctions::MathFunctions_PitchFromLocalDirection(localLookDirection,(MethodInfo *)pQVar3->z);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar4 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  fVar5 = pVVar4->x;
  pQVar3 = (Quaternion *)&stack0xffffffdc;
  fVar6 = 0.0;
  puVar7 = &UNK_?;
  pQVar8 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     (pQVar3,0.0,*pVVar4,(MethodInfo *)0x0);
  __return_storage_ptr__->ShouldLean = (pAVar1->fields).shouldLean;
  (__return_storage_ptr__->YawRotation).x = (float)puVar7;
  (__return_storage_ptr__->YawRotation).y = (float)pQVar3;
  (__return_storage_ptr__->YawRotation).z = fVar6;
  (__return_storage_ptr__->YawRotation).w = fVar5;
  fVar5 = pQVar8->y;
  fVar6 = pQVar8->z;
  fVar9 = pQVar8->w;
  (__return_storage_ptr__->PitchRotation).x = pQVar8->x;
  (__return_storage_ptr__->PitchRotation).y = fVar5;
  (__return_storage_ptr__->PitchRotation).z = fVar6;
  (__return_storage_ptr__->PitchRotation).w = fVar9;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  fVar1 = MathFunctions::MathFunctions_PitchFromLocalDirection(localDirection,(MethodInfo *)0x0);
  localDirection.z = 0.0;
  fVar2 = fVar1;
  if ((0.0 < fVar1) && ((fVar1 <= 0.0 || (fVar2 = localDirection.z, _UNK_? <= fVar1)))) {
    fVar2 = (fVar1 - _UNK_?) / _UNK_?;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (_UNK_? < fVar2) {
      fVar2 = _UNK_?;
    }
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (_UNK_? < fVar2) {
      fVar2 = _UNK_?;
    }
    fVar2 = fVar2 * _UNK_? * fVar2 * fVar2 + fVar2 * _UNK_? * fVar2;
    fVar2 = (_UNK_? - fVar2) * 0.0 + fVar2 * _UNK_?;
  }
  localDirection.z = fVar2;
  if (localDirection.z < _UNK_?) {
    localDirection.z = _UNK_?;
  }
  else if (_UNK_? < localDirection.z) {
    localDirection.z = _UNK_?;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffe8,localDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar2 = pQVar3->y;
  fVar1 = pQVar3->z;
  fVar4 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  localDirection.z =
       MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0);
  if ((localDirection.z < _UNK_?) || (_UNK_? < localDirection.z)) {
    localDirection.z = 0.0;
    (this->fields).shouldLean = 0;
  }
  fVar1 = _UNK_?;
  if ((localDirection.z < _UNK_?) ||
     (fVar1 = _UNK_?, _UNK_? < localDirection.z)) {
    localDirection.z = fVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,localDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Single HandleCameraPitchOffset(Single) */

float Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
      AvatarLimbManagerLocal_AvatarHeadRotationCalculator_HandleCameraPitchOffset
                (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,float pitch,
                MethodInfo *method)

{
  if (pitch <= 0.0) {
    return pitch;
  }
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
  fVar1 = fVar1 * _UNK_? * fVar1 * fVar1 + fVar1 * _UNK_? * fVar1;
  return (_UNK_? - fVar1) * 0.0 + fVar1 * _UNK_?;
}


/* Single HandleYawDeadZone(Single) */

float Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
      AvatarLimbManagerLocal_AvatarHeadRotationCalculator_HandleYawDeadZone
                (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,float yaw,
                MethodInfo *method)

{
  if ((yaw < _UNK_?) || (_UNK_? < yaw)) {
    yaw = 0.0;
    (this->fields).shouldLean = 0;
  }
  return yaw;
}

