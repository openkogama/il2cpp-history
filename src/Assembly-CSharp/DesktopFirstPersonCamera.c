
/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera_UpdateCameraRotation
               (DesktopFirstPersonCamera *this,MethodInfo *method)

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
  uVar2 = _UNK_?;
  fVar1 = (float)((uint)fVar1 ^ _UNK_?);
  fVar3 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x =
       fVar1 * (this->fields)._.pitchSensitivity + (this->fields)._.targetRotation.x;
  fVar1 = _UNK_?;
  (this->fields)._.targetRotation.y =
       fVar3 * (this->fields)._.yawSensitivity + (this->fields)._.targetRotation.y;
  fVar3 = (float)FUN_?((this->fields)._.targetRotation.x,fVar1);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar1;
  }
  (this->fields)._.targetRotation.x = fVar3;
  fVar3 = (float)FUN_?((this->fields)._.targetRotation.y,fVar1);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + fVar1;
  }
  (this->fields)._.targetRotation.y = fVar3;
  fVar3 = (this->fields)._.targetRotation.x;
  if (_UNK_? < fVar3) {
    (this->fields)._.targetRotation.x = fVar3 - fVar1;
  }
  fVar1 = (this->fields)._.targetRotation.x;
  fVar3 = (float)((uint)(this->fields)._.maxLookAngleDownward ^ uVar2);
  if ((fVar3 <= fVar1) &&
     (fVar4 = (this->fields)._.maxLookAngleUpward, fVar3 = fVar1, fVar4 < fVar1)) {
    fVar3 = fVar4;
  }
  (this->fields)._.targetRotation.x = fVar3;
  pTVar5 = (this->fields)._.smoothRotation;
  if (pTVar5 != (TargetRotation *)0x0) {
    fVar1 = (this->fields)._.targetRotation.x;
    (pTVar5->fields).eulerAngles.y = (this->fields)._.targetRotation.y;
    (pTVar5->fields).eulerAngles.x = fVar1;
    (pTVar5->fields).eulerAngles.z = 0.0;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    pTVar5 = (this->fields)._.smoothRotation;
    obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (obj_00 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6.z = 0.0;
      QStack_6.w = 0.0;
      pvVar7 = (obj_00->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&QStack_6);
      if (pTVar5 != (TargetRotation *)0x0) {
        pQVar10 = TargetRotation::TargetRotation_GetLerpRotation
                           (aQStack_11,pTVar5,&QStack_6,(MethodInfo *)0x0);
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        QStack_6.x = pQVar10->x;
        QStack_6.y = pQVar10->y;
        QStack_6.z = pQVar10->z;
        QStack_6.w = pQVar10->w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&QStack_6);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* DesktopFirstPersonCamera() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera__ctor
               (DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (ulonglong)(uint)TypeRef__System__Activator__T;
  (this->fields)._.cameraOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields)._.cameraOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields)._.cameraOffset.z = 0.0;
  (this->fields)._.cameraHeight = 2.0;
  (this->fields)._.maxLookAngleDownward = 60.0;
  (this->fields)._.maxLookAngleUpward = 60.0;
  (this->fields)._.pitchSensitivity = 0.5;
  (this->fields)._.yawSensitivity = 0.5;
  pLVar2 = (List_1_UnityEngine_MeshRenderer_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
  pvVar3 = MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_->
           klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pMVar4 = (MeshRenderer__Array *)FUN_?(pvVar3,0x20);
  (pLVar2->fields)._items = pMVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    uVar1 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar1 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar1 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._.vehiclesHiddenMeshRenderers = pLVar2;
  if (iVar9 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.vehiclesHiddenMeshRenderers >> 0xc);
    uVar1 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar1 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar1 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
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

