
/* AvatarLimbManagerLocal+PointingRotationCalculationResult CalculateRotation(Vector3) */

AvatarLimbManagerLocal_PointingRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation
          (AvatarLimbManagerLocal_PointingRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 pointingDirection,
          MethodInfo *method)

{
  (this->fields).shouldPoint = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_SignedYawFromLocalDirection
                    (pointingDirection,(MethodInfo *)0x0);
  if (fVar1 < _UNK_?) {
    (this->fields).shouldPoint = 0;
  }
  if (_UNK_? < fVar1) {
    (this->fields).shouldPoint = 0;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
            ((Quaternion *)&stack0xffffffe0,fVar1,*pVVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_PitchFromLocalDirection(pointingDirection,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar3 = 90.0;
  fVar4 = -90.0;
  puVar5 = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp(fVar1,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  uVar6 = pVVar2->x;
  uVar7 = pVVar2->y;
  __return_storage_ptr__ = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)pVVar2->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  fVar8 = (float)uVar7;
  axis.x = (float)uVar6;
  axis = (Vector3)CONCAT84(uVar9,axis.x);
  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&puStack_11,0.0,axis,(MethodInfo *)0x0);
  fVar12 = pQVar10->x;
  fVar13 = pQVar10->y;
  fVar14 = pQVar10->z;
  fVar15 = pQVar10->w;
  uStack_16 = (uint)(this->fields).shouldPoint;
  (__return_storage_ptr__->YawRotation).x = (float)puVar5;
  (__return_storage_ptr__->YawRotation).y = fVar1;
  (__return_storage_ptr__->YawRotation).z = fVar4;
  (__return_storage_ptr__->YawRotation).w = fVar3;
  (__return_storage_ptr__->PitchRotation).x = fVar12;
  (__return_storage_ptr__->PitchRotation).y = fVar13;
  (__return_storage_ptr__->PitchRotation).z = fVar14;
  (__return_storage_ptr__->PitchRotation).w = fVar15;
  *(uint *)&__return_storage_ptr__->ShouldPoint = uStack_16;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_PitchFromLocalDirection(localDirection,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar2->x;
  uVar3._4_4_ = pVVar2->y;
  fVar4 = pVVar2->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  axis.z = fVar4;
  axis.x = (float)(int)uVar3;
  axis.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffe4,fVar1,axis,(MethodInfo *)0x0);
  fRam00000000 = pQVar5->x;
  fRam00000004 = pQVar5->y;
  fRam00000008 = pQVar5->z;
  fRam0000000c = pQVar5->w;
  return (Quaternion *)0x0;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0)
  ;
  if (fVar1 < _UNK_?) {
    (this->fields).shouldPoint = 0;
  }
  if (_UNK_? < fVar1) {
    (this->fields).shouldPoint = 0;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  pQVar4 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,*pVVar2,(MethodInfo *)0x0);
  fVar1 = pQVar4->y;
  fVar5 = pQVar4->z;
  fVar6 = pQVar4->w;
  *(float *)uVar3 = pQVar4->x;
  *(float *)(uVar3 + 4) = fVar1;
  *(float *)(uVar3 + 8) = fVar5;
  *(float *)(uVar3 + 0xc) = fVar6;
  return (Quaternion *)uVar3;
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

