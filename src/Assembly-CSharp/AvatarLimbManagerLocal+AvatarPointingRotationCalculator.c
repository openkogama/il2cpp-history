
/* AvatarLimbManagerLocal+PointingRotationCalculationResult CalculateRotation(Vector3) */

AvatarLimbManagerLocal_PointingRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation
          (AvatarLimbManagerLocal_PointingRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 pointingDirection,
          MethodInfo *method)

{
  pAVar1 = this;
  (__return_storage_ptr__->YawRotation).x = 0.0;
  (__return_storage_ptr__->YawRotation).y = 0.0;
  (__return_storage_ptr__->YawRotation).z = 0.0;
  (__return_storage_ptr__->YawRotation).w = 0.0;
  (this->fields).shouldPoint = 1;
  (__return_storage_ptr__->PitchRotation).x = 0.0;
  (__return_storage_ptr__->PitchRotation).y = 0.0;
  (__return_storage_ptr__->PitchRotation).z = 0.0;
  (__return_storage_ptr__->PitchRotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->ShouldPoint = 0;
  pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
           MathFunctions::MathFunctions_SignedYawFromLocalDirection
                     (pointingDirection,(MethodInfo *)0x0);
  if ((float)pAVar2 < _UNK_?) {
    (this->fields).shouldPoint = 0;
  }
  if (_UNK_? < (float)pAVar2) {
    (this->fields).shouldPoint = 0;
  }
  pAVar3 = _UNK_?;
  if (((float)pAVar2 < (float)_UNK_?) ||
     (pAVar3 = _UNK_?, this = pAVar2, (float)_UNK_? < (float)pAVar2)) {
    this = pAVar3;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,(float)this,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  this = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
         MVGroundState::MVGroundState_GetGradientAngle(pointingDirection,(MethodInfo *)pQVar4->z);
  pAVar2 = _UNK_?;
  if (((float)this < (float)_UNK_?) ||
     (pAVar2 = _UNK_?, (float)_UNK_? < (float)this)) {
    this = pAVar2;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = &TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
  fVar6 = pVVar5->x;
  pQVar4 = (Quaternion *)&stack0xffffffdc;
  puVar7 = &UNK_?;
  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (pQVar4,(float)this,*pVVar5,(MethodInfo *)0x0);
  __return_storage_ptr__->ShouldPoint = (pAVar1->fields).shouldPoint;
  (__return_storage_ptr__->YawRotation).x = (float)puVar7;
  (__return_storage_ptr__->YawRotation).y = (float)pQVar4;
  (__return_storage_ptr__->YawRotation).z = (float)this;
  (__return_storage_ptr__->YawRotation).w = fVar6;
  fVar6 = pQVar8->y;
  fVar9 = pQVar8->z;
  fVar10 = pQVar8->w;
  (__return_storage_ptr__->PitchRotation).x = pQVar8->x;
  (__return_storage_ptr__->PitchRotation).y = fVar6;
  (__return_storage_ptr__->PitchRotation).z = fVar9;
  (__return_storage_ptr__->PitchRotation).w = fVar10;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  localDirection.z = MVGroundState::MVGroundState_GetGradientAngle(localDirection,(MethodInfo *)0x0)
  ;
  fVar1 = _UNK_?;
  if ((localDirection.z < _UNK_?) ||
     (fVar1 = _UNK_?, _UNK_? < localDirection.z)) {
    localDirection.z = fVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,localDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  localDirection.z =
       MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0);
  if (localDirection.z < _UNK_?) {
    (this->fields).shouldPoint = 0;
  }
  if (_UNK_? < localDirection.z) {
    (this->fields).shouldPoint = 0;
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


/* Void HandleYawDeadZone(Single) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
     AvatarLimbManagerLocal_AvatarPointingRotationCalculator_HandleYawDeadZone
               (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,float yaw,
               MethodInfo *method)

{
  if (yaw < _UNK_?) {
    (this->fields).shouldPoint = 0;
  }
  if (_UNK_? < yaw) {
    (this->fields).shouldPoint = 0;
  }
  return;
}

