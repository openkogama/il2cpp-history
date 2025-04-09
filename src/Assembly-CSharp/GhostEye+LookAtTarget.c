
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
  pGVar4 = (GhostEye_LookAtTarget *)(this->fields).maxPitch;
  this = (GhostEye_LookAtTarget *)
         ((uint)pGVar4 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  pGVar5 = (GhostEye_LookAtTarget *)(float)(fVar3 - (float10)_UNK_?);
  if (((float)this <= (float)pGVar5) && (this = pGVar5, (float)pGVar4 < (float)pGVar5)) {
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
  fVar8 = (float)fVar7;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_9._0_4_ = (pVVar5->rightVector).x;
  uStack_9._4_4_ = (pVVar5->rightVector).y;
  fStack_1 = (pVVar5->rightVector).z;
  if (uStack_3._4_4_ * (float)uStack_9._4_4_ + (float)uStack_3 * (float)(undefined4)uStack_9 +
      fStack_4 * fStack_1 < 0.0) {
    fVar8 = (float)((uint)fVar8 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  }
  fVar10 = (this->fields).maxYaw;
  localTargetDirection.z =
       (float)((uint)fVar10 ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if ((localTargetDirection.z <= fVar8) && (localTargetDirection.z = fVar8, fVar10 < fVar8)) {
    localTargetDirection.z = fVar10;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_12,localTargetDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar8 = pQVar11->y;
  fVar10 = pQVar11->z;
  fVar13 = pQVar11->w;
  __return_storage_ptr__->x = pQVar11->x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar10;
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
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
                         (&VStack_2,this_00,(this->fields).target,(MethodInfo *)0x0);
      uVar3 = pVVar1->x;
      uVar4 = pVVar1->y;
      fVar5 = pVVar1->z;
      localTargetDir->x = (float)uVar3;
      localTargetDir->y = (float)uVar4;
      localTargetDir->z = fVar5;
      if (localTargetDir->x * localTargetDir->x + localTargetDir->y * localTargetDir->y +
          localTargetDir->z * localTargetDir->z < _UNK_?) {
        return 0;
      }
      if (cRam_? == '\0') {
        VStack_2.y = (float)&TypeInfo__System__Math;
        VStack_2.x = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        VStack_2.y = (float)TypeInfo__System__Math;
        VStack_2.x = (float)&UNK_?;
        func_?();
      }
      dVar6 = (double)((float)uVar4 * (float)uVar4 + (float)uVar3 * (float)uVar3 + fVar5 * fVar5)
      ;
      if (dVar6 < 0.0) {
        VStack_2.y = (float)&UNK_?;
        func_?();
      }
      else {
        dVar6 = SQRT(dVar6);
      }
      fVar5 = (float)dVar6;
      if (fVar5 <= _UNK_?) {
        if (cRam_? == '\0') {
          VStack_2.y = (float)&TypeInfo__UnityEngine__Vector3;
          VStack_2.x = (float)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar8 = (pVVar7->zeroVector).y;
        fVar5 = (pVVar7->zeroVector).z;
        localTargetDir->x = (pVVar7->zeroVector).x;
        localTargetDir->y = fVar8;
        localTargetDir->z = fVar5;
        return 1;
      }
      uVar9 = localTargetDir->x;
      uVar10 = localTargetDir->y;
      fVar8 = localTargetDir->z;
      localTargetDir->x = (float)uVar9 / fVar5;
      localTargetDir->y = (float)uVar10 / fVar5;
      localTargetDir->z = fVar8 / fVar5;
      return 1;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+LookAtTarget::GhostEye_LookAtTarget_Update
          (Quaternion *__return_storage_ptr__,GhostEye_LookAtTarget *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  this_00 = ghostEye;
  if (ghostEye != (GhostEye *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)ghostEye,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         (&VStack_3,pTVar1,(this->fields).target,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar2->x;
      uVar4._4_4_ = pVVar2->y;
      VStack_3.z = pVVar2->z;
      this = (GhostEye_LookAtTarget *)0x0;
      ghostEye = (GhostEye *)0x0;
      VStack_3._0_8_ = uVar4;
      if (_UNK_? <=
          (float)uVar4 * (float)uVar4 + uVar4._4_4_ * uVar4._4_4_ + VStack_3.z * VStack_3.z) {
        uStack_5._0_4_ = pVVar2->x;
        uStack_5._4_4_ = pVVar2->y;
        fStack_6 = VStack_3.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar7 = (double)(uStack_5._4_4_ * uStack_5._4_4_ + (float)uStack_5 * (float)uStack_5 +
                        fStack_6 * fStack_6);
        if (dVar7 < 0.0) {
          func_?();
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        fVar8 = (float)dVar7;
        if (_UNK_? < fVar8) {
          fVar9 = VStack_3.z / fVar8;
          fVar10 = (float)uVar4 / fVar8;
          pQVar11 = (Quaternion *)(VStack_3.y / fVar8);
          fStack_6 = fVar9;
        }
        else {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar10 = (pVVar12->zeroVector).x;
          pQVar11 = (Quaternion *)(pVVar12->zeroVector).y;
          fVar9 = (pVVar12->zeroVector).z;
        }
        this = (GhostEye_LookAtTarget *)0x0;
        ghostEye = (GhostEye *)0x0;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        forward.y = (float)pQVar11;
        forward.x = fVar10;
        forward.z = fVar9;
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                           ((Quaternion *)&stack0x00000000,forward,
                            TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                            (MethodInfo *)0x0);
        fVar8 = pQVar13->y;
        fVar9 = pQVar13->z;
        fVar10 = pQVar13->w;
        pQVar11->x = pQVar13->x;
        pQVar11->y = fVar8;
        pQVar11->z = fVar9;
        pQVar11->w = fVar10;
        return pQVar11;
      }
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                            ((Quaternion *)&this,pTVar1,(MethodInfo *)0x0);
        fRam00000000 = pQVar11->x;
        fRam00000004 = pQVar11->y;
        fRam00000008 = pQVar11->z;
        fRam0000000c = pQVar11->w;
        return (Quaternion *)0x0;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pQVar11 = (Quaternion *)(*pcVar14)();
  return pQVar11;
}

