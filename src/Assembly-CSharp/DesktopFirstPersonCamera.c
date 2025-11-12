
/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera_UpdateCameraRotation(DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x = -fVar1 * (this->fields)._.pitchSensitivity + (this->fields)._.targetRotation.x;
  (this->fields)._.targetRotation.y = fVar2 * (this->fields)._.yawSensitivity + (this->fields)._.targetRotation.y;
  fVar1 = (float)FUN_?((this->fields)._.targetRotation.x,0x43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  (this->fields)._.targetRotation.x = fVar1;
  fVar1 = (float)FUN_?((this->fields)._.targetRotation.y,0x43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  (this->fields)._.targetRotation.y = fVar1;
  fVar1 = (this->fields)._.targetRotation.x;
  if (180.0 < fVar1) {
    (this->fields)._.targetRotation.x = fVar1 - 360.0;
  }
  fVar1 = (this->fields)._.targetRotation.x;
  fVar2 = -(this->fields)._.maxLookAngleDownward;
  if ((fVar2 <= fVar1) && (fVar3 = (this->fields)._.maxLookAngleUpward, fVar2 = fVar1, fVar3 < fVar1)) {
    fVar2 = fVar3;
  }
  (this->fields)._.targetRotation.x = fVar2;
  pTVar4 = (this->fields)._.smoothRotation;
  if (pTVar4 != (TargetRotation *)0x0) {
    fVar1 = (this->fields)._.targetRotation.x;
    (pTVar4->fields).eulerAngles.y = (this->fields)._.targetRotation.y;
    (pTVar4->fields).eulerAngles.x = fVar1;
    (pTVar4->fields).eulerAngles.z = 0.0;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    pTVar4 = (this->fields)._.smoothRotation;
    obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (obj_00 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_5.x = 0.0;
      QStack_5.y = 0.0;
      QStack_5.z = 0.0;
      QStack_5.w = 0.0;
      pvVar6 = (obj_00->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,&QStack_5);
      if (pTVar4 != (TargetRotation *)0x0) {
        pQVar9 = TargetRotation::TargetRotation_GetLerpRotation(aQStack_10,pTVar4,&QStack_5,(MethodInfo *)0x0);
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        QStack_5.x = pQVar9->x;
        QStack_5.y = pQVar9->y;
        QStack_5.z = pQVar9->z;
        QStack_5.w = pQVar9->w;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (obj->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6,&QStack_5);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* DesktopFirstPersonCamera() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera__ctor(DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.cameraOffset.x = 0.0;
  (this->fields)._.cameraOffset.y = 2.0;
  (this->fields)._.cameraOffset.z = 0.0;
  (this->fields)._.cameraHeight = 2.0;
  (this->fields)._.maxLookAngleDownward = 60.0;
  (this->fields)._.maxLookAngleUpward = 60.0;
  (this->fields)._.pitchSensitivity = 0.5;
  (this->fields)._.yawSensitivity = 0.5;
  pLVar1 = (List_1_UnityEngine_MeshRenderer_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pMVar3 = (MeshRenderer__Array *)FUN_?(pvVar2,0x20);
  (pLVar1->fields)._items = pMVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._.vehiclesHiddenMeshRenderers = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.vehiclesHiddenMeshRenderers >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  bVar8 = cRam_? == '\0';
  (this->fields)._._.cameraRadius = 0.3;
  if (bVar8) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

