
/* Void Enter(GhostEye) */

void Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Enter
               (GhostEye_LookAtTarget *this,GhostEye *ghostEye,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (ghostEye != (GhostEye *)0x0) {
    (this->fields).maxPitch = (ghostEye->fields).maxPitch;
    (this->fields).maxYaw = (ghostEye->fields).maxYaw;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,
          Vector3 localTargetDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->upVector).x;
  uVar2._4_4_ = (pVVar1->upVector).y;
  fVar3 = (float10)func_?(uVar2,(pVVar1->upVector).z);
  pGVar4 = (GhostEye_LookAtTarget *)
           ((uint)(this->fields).maxPitch ^
           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  pGVar5 = (GhostEye_LookAtTarget *)(float)(fVar3 - (float10)_UNK_?);
  if (((float)pGVar5 < (float)pGVar4) ||
     (pGVar4 = (GhostEye_LookAtTarget *)(this->fields).maxPitch, this = pGVar5,
     (float)pGVar4 < (float)pGVar5)) {
    this = pGVar4;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_7,(float)this,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar8 = pQVar6->y;
  fVar9 = pQVar6->z;
  fVar10 = pQVar6->w;
  __return_storage_ptr__->x = pQVar6->x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar9;
  __return_storage_ptr__->w = fVar10;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,
          Vector3 localTargetDirection,MethodInfo *method)

{
  fStack_1 = localTargetDirection.z;
  puVar2 = (undefined8 *)func_?();
  uStack_3 = *puVar2;
  fStack_4 = *(float *)(puVar2 + 1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6._0_4_ = (pVVar5->forwardVector).x;
  uVar6._4_4_ = (pVVar5->forwardVector).y;
  fVar7 = (float10)func_?(uVar6,(pVVar5->forwardVector).z);
  localTargetDirection.z = (float)fVar7;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar5->rightVector).x;
  uStack_8._4_4_ = (pVVar5->rightVector).y;
  fStack_1 = (pVVar5->rightVector).z;
  if (uStack_3._4_4_ * (float)uStack_8._4_4_ + (float)uStack_3 * (float)(undefined4)uStack_8 +
      fStack_4 * fStack_1 < 0.0) {
    localTargetDirection.z =
         (float)((uint)localTargetDirection.z ^
                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  }
  fVar9 = (float)((uint)(this->fields).maxYaw ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  if ((localTargetDirection.z < fVar9) ||
     (fVar9 = (this->fields).maxYaw, fVar9 < localTargetDirection.z)) {
    localTargetDirection.z = fVar9;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_11,localTargetDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar9 = pQVar10->y;
  fVar12 = pQVar10->z;
  fVar13 = pQVar10->w;
  __return_storage_ptr__->x = pQVar10->x;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar12;
  __return_storage_ptr__->w = fVar13;
  return __return_storage_ptr__;
}


/* Single GetPitch(Vector3) */

float Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetPitch
                (GhostEye_LookAtTarget *this,Vector3 localTargetPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->upVector).x;
  uVar2._4_4_ = (pVVar1->upVector).y;
  fVar3 = (float10)func_?(uVar2,(pVVar1->upVector).z,localTargetPosition._0_8_,
                                   localTargetPosition.z,0);
  return (float)(fVar3 - (float10)_UNK_?);
}


/* Single GetSignedYaw(Vector3) */

float Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_GetSignedYaw
                (GhostEye_LookAtTarget *this,Vector3 localTargetPosition,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?();
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  localTargetPosition.y = (float)uVar2;
  localTargetPosition.z = (float)((ulonglong)uVar2 >> 0x20);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5._0_4_ = (pVVar4->forwardVector).x;
  uVar5._4_4_ = (pVVar4->forwardVector).y;
  fVar6 = (float10)func_?(uVar5,(pVVar4->forwardVector).z,uVar2,fVar3,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar4->rightVector).x;
  uVar8 = (pVVar4->rightVector).y;
  fVar9 = localTargetPosition.z * (float)uVar8;
  localTargetPosition.z = (float)fVar6;
  if (fVar9 + localTargetPosition.y * (float)uVar7 + fVar3 * (pVVar4->rightVector).z < 0.0) {
    localTargetPosition.z =
         (float)((uint)(float)fVar6 ^
                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  }
  return localTargetPosition.z;
}


/* Boolean TryGetLocalTargetDir(GhostEye, Vector3 ByRef) */

bool Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_TryGetLocalTargetDir
               (GhostEye_LookAtTarget *this,GhostEye *ghostEye,Vector3 *localTargetDir,
               MethodInfo *method)

{
  if (ghostEye != (GhostEye *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)ghostEye,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         ((Vector3 *)&stack0xfffffff0,this_00,(this->fields).target,
                          (MethodInfo *)0x0);
      fVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      localTargetDir->x = pVVar1->x;
      localTargetDir->y = fVar2;
      localTargetDir->z = fVar3;
      if (_UNK_? <=
          localTargetDir->x * localTargetDir->x + localTargetDir->y * localTargetDir->y +
          localTargetDir->z * localTargetDir->z) {
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (localTargetDir,(MethodInfo *)0x0);
        return 1;
      }
      return 0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Update
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  if (ghostEye != (GhostEye *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)ghostEye,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          ((Vector3 *)&stack0xffffffe4,pTVar1,(this->fields).target,
                           (MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      if (_UNK_? <=
          (float)uVar3 * (float)uVar3 + (float)uVar4 * (float)uVar4 + pVVar2->z * pVVar2->z) {
        puVar5 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar2 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
        uVar6 = pVVar2->x;
        uVar7 = pVVar2->y;
        forward.y = (float)uVar6;
        forward.x = (float)puVar5;
        forward.z = (float)uVar7;
        pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                            ((Quaternion *)&stack0xffffffe0,forward,*pVVar2,(MethodInfo *)0x0);
        fVar9 = pQVar8->y;
        fVar10 = pQVar8->z;
        fVar11 = pQVar8->w;
        __return_storage_ptr__->x = pQVar8->x;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar10;
        __return_storage_ptr__->w = fVar11;
        return __return_storage_ptr__;
      }
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)ghostEye,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                            ((Quaternion *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
        fVar9 = pQVar8->y;
        fVar10 = pQVar8->z;
        fVar11 = pQVar8->w;
        __return_storage_ptr__->x = pQVar8->x;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar10;
        __return_storage_ptr__->w = fVar11;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pQVar8 = (Quaternion *)(*pcVar12)();
  return pQVar8;
}

