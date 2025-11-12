
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::CameraPrjSwitchTransition_DoTransition_d_41_MoveNext(CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pCVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((pCVar2 == (CameraPrjSwitchTransition *)0x0) || (pCVar3 = (pCVar2->fields)._targetCamera, pCVar3 == (Camera *)0x0)) goto code_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize(pCVar3,(MethodInfo *)0x0);
    (this->fields)._targetFOV_5__3 = 0.0;
    fVar5 = 0.0;
    (this->fields)._frustumHeight_5__2 = fVar4 + fVar4;
    if ((pCVar2->fields)._transitionType == 0) {
      pCVar3 = (pCVar2->fields)._targetCamera;
      if (pCVar3 == (Camera *)0x0) goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic(pCVar3,(MethodInfo *)0x0);
      pCVar3 = (pCVar2->fields)._targetCamera;
      if (bVar6 == 0) {
        fVar5 = (pCVar2->fields)._camFieldOfView;
        goto code_?;
      }
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar5 = CameraEx::CameraEx_GetOrthoFOV(pCVar3,(MethodInfo *)0x0);
code_?:
      (this->fields)._targetFOV_5__3 = (pCVar2->fields)._camFieldOfView;
      (pCVar2->fields)._transitionType = 2;
    }
    else {
      if ((pCVar2->fields)._transitionType == 1) {
        pCVar3 = (pCVar2->fields)._targetCamera;
        if (pCVar3 == (Camera *)0x0) goto code_?;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0);
        goto code_?;
      }
      if ((pCVar2->fields)._transitionType == 2) {
        pCVar3 = (pCVar2->fields)._targetCamera;
        if (pCVar3 == (Camera *)0x0) goto code_?;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0);
        pCVar3 = (pCVar2->fields)._targetCamera;
code_?:
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar4 = CameraEx::CameraEx_GetOrthoFOV(pCVar3,(MethodInfo *)0x0);
        (this->fields)._targetFOV_5__3 = fVar4;
        (pCVar2->fields)._transitionType = 1;
      }
    }
    (pCVar2->fields)._progress = 0.0;
    if ((pCVar2->fields).TransitionBegin != (CameraProjectionSwitchBeginHandler *)0x0) {
      pCVar7 = (pCVar2->fields).TransitionBegin;
      (*(pCVar7->fields)._._.invoke_impl)((pCVar7->fields)._._.method_code);
    }
    fVar4 = 1.0 / (pCVar2->fields)._durationInSeconds;
    (this->fields)._invDuration_5__4 = fVar4;
    (this->fields)._fovSpeed_5__5 = ((this->fields)._targetFOV_5__3 - fVar5) * fVar4;
    pCVar3 = (pCVar2->fields)._targetCamera;
    if (pCVar3 == (Camera *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar3,(MethodInfo *)0x0);
    bVar9 = iRam_? != 0;
    (this->fields).__targetTransform_5__6 = pTVar8;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(this->fields).__targetTransform_5__6 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pCVar3 = (pCVar2->fields)._targetCamera;
    if (pCVar3 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic(pCVar3,0,(MethodInfo *)0x0);
    pCVar3 = (pCVar2->fields)._targetCamera;
    if (pCVar3 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar3,fVar5,(MethodInfo *)0x0);
    pTVar8 = (this->fields).__targetTransform_5__6;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar15 = (code *)swi(3);
      bVar6 = (*pcVar15)();
      return bVar6;
    }
    pcVar15 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar15 = (code *)swi(3);
      bVar6 = (*pcVar15)();
      return bVar6;
    }
    pcRam_? = pcVar15;
    (*pcRam_?)(pvVar14);
    (pCVar2->fields)._camRestorePosition.x = 0.0;
    (pCVar2->fields)._camRestorePosition.y = 0.0;
    (pCVar2->fields)._camRestorePosition.z = 0.0;
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pCVar2 == (CameraPrjSwitchTransition *)0x0) goto code_?;
  }
  pfVar17 = &(pCVar2->fields)._progress;
  if (1.0 < *pfVar17 || *pfVar17 == 1.0) {
    if ((pCVar2->fields).TransitionEnd != (CameraProjectionSwitchBeginHandler *)0x0) {
      pCVar7 = (pCVar2->fields).TransitionEnd;
      (*(pCVar7->fields)._._.invoke_impl)((pCVar7->fields)._._.method_code,(pCVar2->fields)._transitionType,(pCVar7->fields)._._.method);
    }
    bVar9 = iRam_? != 0;
    (pCVar2->fields)._transitionType = 0;
    (pCVar2->fields)._progress = 0.0;
    (pCVar2->fields)._transitionCrtn = (IEnumerator *)0x0;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(pCVar2->fields)._transitionCrtn >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    return 0;
  }
  pCVar3 = (pCVar2->fields)._targetCamera;
  if (pCVar3 == (Camera *)0x0) goto code_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0);
  fVar5 = (this->fields)._fovSpeed_5__5;
  pcVar15 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar15 = (code *)swi(3);
    bVar6 = (*pcVar15)();
    return bVar6;
  }
  pcRam_? = pcVar15;
  fVar18 = (float)(*pcRam_?)();
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar3,fVar18 * fVar5 + fVar4,(MethodInfo *)0x0);
  pCVar3 = (pCVar2->fields)._targetCamera;
  if (pCVar3 == (Camera *)0x0) goto code_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar3,(MethodInfo *)0x0);
  pTVar8 = (this->fields).__targetTransform_5__6;
  uStack_19._0_4_ = (pCVar2->fields)._camFocusPoint.x;
  uStack_19._4_4_ = (pCVar2->fields)._camFocusPoint.y;
  fVar5 = (pCVar2->fields)._camFocusPoint.z;
  if (pTVar8 == (Transform *)0x0) goto code_?;
  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(aVStack_21,pTVar8,(MethodInfo *)0x0);
  pCVar3 = (pCVar2->fields)._targetCamera;
  fVar4 = (this->fields)._frustumHeight_5__2;
  uVar22 = pVVar20->x;
  uVar23 = pVVar20->y;
  fVar18 = pVVar20->z;
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar4 = CameraEx::CameraEx_GetFrustumDistanceFromHeight(pCVar3,fVar4,(MethodInfo *)0x0);
  fStack_24 = fVar5 - fVar18 * fVar4;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar15 = (code *)swi(3);
    bVar6 = (*pcVar15)();
    return bVar6;
  }
  uStack_19 = CONCAT44(uStack_19._4_4_ - (float)uVar23 * fVar4,(float)uStack_19 - (float)uVar22 * fVar4);
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar14 = (obj->fields)._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar15 = (code *)swi(3);
    bVar6 = (*pcVar15)();
    return bVar6;
  }
  pcVar15 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar15 = (code *)swi(3);
    bVar6 = (*pcVar15)();
    return bVar6;
  }
  pcRam_? = pcVar15;
  (*pcRam_?)(pvVar14);
  fVar5 = (pCVar2->fields)._progress;
  pcVar15 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar15 = (code *)swi(3);
    bVar6 = (*pcVar15)();
    return bVar6;
  }
  pcRam_? = pcVar15;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = fVar4 * (this->fields)._invDuration_5__4 + fVar5;
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  (pCVar2->fields)._progress = fVar4;
  pfVar17 = &(this->fields)._fovSpeed_5__5;
  if (*pfVar17 <= 0.0 && *pfVar17 != 0.0) {
    pCVar3 = (pCVar2->fields)._targetCamera;
    if (pCVar3 == (Camera *)0x0) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0);
    if ((this->fields)._targetFOV_5__3 < fVar5) goto code_?;
  }
  else {
code_?:
    if ((this->fields)._fovSpeed_5__5 <= 0.0) {
code_?:
      if ((pCVar2->fields).TransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
        pCVar25 = (pCVar2->fields).TransitionUpdate;
        (*(pCVar25->fields)._._.invoke_impl)((pCVar25->fields)._._.method_code,(pCVar2->fields)._transitionType,(pCVar25->fields)._._.method);
      }
      bVar9 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
    pCVar3 = (pCVar2->fields)._targetCamera;
    if (pCVar3 == (Camera *)0x0) goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar3,(MethodInfo *)0x0);
    if (fVar5 < (this->fields)._targetFOV_5__3) goto code_?;
  }
  pCVar3 = (pCVar2->fields)._targetCamera;
  (pCVar2->fields)._progress = 1.0;
  if (pCVar3 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar3,(this->fields)._targetFOV_5__3,(MethodInfo *)0x0);
    if ((pCVar2->fields)._transitionType == 1) {
      pCVar3 = (pCVar2->fields)._targetCamera;
      if (pCVar3 == (Camera *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic(pCVar3,1,(MethodInfo *)0x0);
    }
    pTVar8 = (this->fields).__targetTransform_5__6;
    if (pTVar8 != (Transform *)0x0) {
      uStack_19._0_4_ = (pCVar2->fields)._camRestorePosition.x;
      uStack_19._4_4_ = (pCVar2->fields)._camRestorePosition.y;
      fStack_24 = (pCVar2->fields)._camRestorePosition.z;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar15 = (code *)swi(3);
        bVar6 = (*pcVar15)();
        return bVar6;
      }
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar15 = (code *)swi(3);
        bVar6 = (*pcVar15)();
        return bVar6;
      }
      pcRam_? = pcVar15;
      (*pcRam_?)(pvVar14,&uStack_19);
      pCVar3 = (pCVar2->fields)._targetCamera;
      if (pCVar3 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar3,(pCVar2->fields)._camFieldOfView,(MethodInfo *)0x0);
        if ((pCVar2->fields).TransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
          pCVar25 = (pCVar2->fields).TransitionUpdate;
          (*(pCVar25->fields)._._.invoke_impl)((pCVar25->fields)._._.method_code,(pCVar2->fields)._transitionType,(pCVar25->fields)._._.method);
        }
        bVar9 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    FUN_?();
    pcVar15 = (code *)swi(3);
    bVar6 = (*pcVar15)();
    return bVar6;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar6 = (*pcVar15)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::CameraPrjSwitchTransition_DoTransition_d_41_System_Collections_IEnumerator_Reset(CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

