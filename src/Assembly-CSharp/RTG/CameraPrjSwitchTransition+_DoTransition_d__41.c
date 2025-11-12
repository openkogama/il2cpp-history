
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::
     CameraPrjSwitchTransition_DoTransition_d_41_MoveNext
               (CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  iVar2 = (this->fields).__1__state;
  pCVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((pCVar3 == (CameraPrjSwitchTransition *)0x0) ||
       (pCVar4 = (pCVar3->fields)._targetCamera, pCVar4 == (Camera *)0x0))
    goto code_?;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                       (pCVar4,(MethodInfo *)0x0);
    (this->fields)._targetFOV_5__3 = 0.0;
    fVar6 = 0.0;
    (this->fields)._frustumHeight_5__2 = fVar5 + fVar5;
    if ((pCVar3->fields)._transitionType == 0) {
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 == (Camera *)0x0) goto code_?;
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                         (pCVar4,(MethodInfo *)0x0);
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (bVar7 == 0) {
        fVar6 = (pCVar3->fields)._camFieldOfView;
        goto code_?;
      }
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = CameraEx::CameraEx_GetOrthoFOV(pCVar4,(MethodInfo *)0x0);
code_?:
      (this->fields)._targetFOV_5__3 = (pCVar3->fields)._camFieldOfView;
      (pCVar3->fields)._transitionType = 2;
    }
    else {
      if ((pCVar3->fields)._transitionType == 1) {
        pCVar4 = (pCVar3->fields)._targetCamera;
        if (pCVar4 == (Camera *)0x0) goto code_?;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                           (pCVar4,(MethodInfo *)0x0);
        goto code_?;
      }
      if ((pCVar3->fields)._transitionType == 2) {
        pCVar4 = (pCVar3->fields)._targetCamera;
        if (pCVar4 == (Camera *)0x0) goto code_?;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                           (pCVar4,(MethodInfo *)0x0);
        pCVar4 = (pCVar3->fields)._targetCamera;
code_?:
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar5 = CameraEx::CameraEx_GetOrthoFOV(pCVar4,(MethodInfo *)0x0);
        (this->fields)._targetFOV_5__3 = fVar5;
        (pCVar3->fields)._transitionType = 1;
      }
    }
    (pCVar3->fields)._progress = 0.0;
    if ((pCVar3->fields).TransitionBegin != (CameraProjectionSwitchBeginHandler *)0x0) {
      pCVar8 = (pCVar3->fields).TransitionBegin;
      (*(pCVar8->fields)._._.invoke_impl)((pCVar8->fields)._._.method_code);
    }
    fVar5 = fVar1 / (pCVar3->fields)._durationInSeconds;
    (this->fields)._invDuration_5__4 = fVar5;
    (this->fields)._fovSpeed_5__5 = ((this->fields)._targetFOV_5__3 - fVar6) * fVar5;
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar4,(MethodInfo *)0x0);
    bVar10 = iRam_? != 0;
    (this->fields).__targetTransform_5__6 = pTVar9;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(this->fields).__targetTransform_5__6 >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
              (pCVar4,0,(MethodInfo *)0x0);
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar4,fVar6,(MethodInfo *)0x0);
    pTVar9 = (this->fields).__targetTransform_5__6;
    if (pTVar9 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar16 = (code *)swi(3);
      bVar7 = (*pcVar16)();
      return bVar7;
    }
    pcVar16 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
      uVar17 = func_?(&UNK_?);
      FUN_?(uVar17,0);
      pcVar16 = (code *)swi(3);
      bVar7 = (*pcVar16)();
      return bVar7;
    }
    pcRam_? = pcVar16;
    (*pcRam_?)(pvVar15);
    (pCVar3->fields)._camRestorePosition.x = 0.0;
    (pCVar3->fields)._camRestorePosition.y = 0.0;
    (pCVar3->fields)._camRestorePosition.z = 0.0;
  }
  else {
    if ((iVar2 != 1) && (iVar2 != 2)) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pCVar3 == (CameraPrjSwitchTransition *)0x0) goto code_?;
  }
  pfVar18 = &(pCVar3->fields)._progress;
  if (fVar1 < *pfVar18 || fVar1 == *pfVar18) {
    if ((pCVar3->fields).TransitionEnd != (CameraProjectionSwitchBeginHandler *)0x0) {
      pCVar8 = (pCVar3->fields).TransitionEnd;
      (*(pCVar8->fields)._._.invoke_impl)
                ((pCVar8->fields)._._.method_code,(pCVar3->fields)._transitionType,
                 (pCVar8->fields)._._.method);
    }
    bVar10 = iRam_? != 0;
    (pCVar3->fields)._transitionType = 0;
    (pCVar3->fields)._progress = 0.0;
    (pCVar3->fields)._transitionCrtn = (IEnumerator *)0x0;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(pCVar3->fields)._transitionCrtn >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    return 0;
  }
  pCVar4 = (pCVar3->fields)._targetCamera;
  if (pCVar4 == (Camera *)0x0) goto code_?;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar4,(MethodInfo *)0x0);
  fVar6 = (this->fields)._fovSpeed_5__5;
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    bVar7 = (*pcVar16)();
    return bVar7;
  }
  pcRam_? = pcVar16;
  fVar19 = (float)(*pcRam_?)();
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
            (pCVar4,fVar19 * fVar6 + fVar5,(MethodInfo *)0x0);
  pCVar4 = (pCVar3->fields)._targetCamera;
  if (pCVar4 == (Camera *)0x0) goto code_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)pCVar4,(MethodInfo *)0x0);
  pTVar9 = (this->fields).__targetTransform_5__6;
  uStack_20._0_4_ = (pCVar3->fields)._camFocusPoint.x;
  uStack_20._4_4_ = (pCVar3->fields)._camFocusPoint.y;
  fVar6 = (pCVar3->fields)._camFocusPoint.z;
  if (pTVar9 == (Transform *)0x0) goto code_?;
  pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      (aVStack_22,pTVar9,(MethodInfo *)0x0);
  pCVar4 = (pCVar3->fields)._targetCamera;
  fVar5 = (this->fields)._frustumHeight_5__2;
  uVar23 = pVVar21->x;
  uVar24 = pVVar21->y;
  fVar19 = pVVar21->z;
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = CameraEx::CameraEx_GetFrustumDistanceFromHeight(pCVar4,fVar5,(MethodInfo *)0x0);
  fStack_25 = fVar6 - fVar19 * fVar5;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar16 = (code *)swi(3);
    bVar7 = (*pcVar16)();
    return bVar7;
  }
  uStack_20 = CONCAT44(uStack_20._4_4_ - (float)uVar24 * fVar5,
                       (float)uStack_20 - (float)uVar23 * fVar5);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar15 = (obj->fields)._._.m_CachedPtr;
  if (pvVar15 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar16 = (code *)swi(3);
    bVar7 = (*pcVar16)();
    return bVar7;
  }
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    bVar7 = (*pcVar16)();
    return bVar7;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(pvVar15);
  fVar6 = (pCVar3->fields)._progress;
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    bVar7 = (*pcVar16)();
    return bVar7;
  }
  pcRam_? = pcVar16;
  fVar5 = (float)(*pcRam_?)();
  fVar6 = fVar5 * (this->fields)._invDuration_5__4 + fVar6;
  if (fVar6 <= fVar1) {
    fVar1 = fVar6;
  }
  (pCVar3->fields)._progress = fVar1;
  pfVar18 = &(this->fields)._fovSpeed_5__5;
  if (*pfVar18 <= 0.0 && *pfVar18 != 0.0) {
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar4,(MethodInfo *)0x0);
    if ((this->fields)._targetFOV_5__3 < fVar1) goto code_?;
  }
  else {
code_?:
    if ((this->fields)._fovSpeed_5__5 <= 0.0) {
code_?:
      if ((pCVar3->fields).TransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
        pCVar26 = (pCVar3->fields).TransitionUpdate;
        (*(pCVar26->fields)._._.invoke_impl)
                  ((pCVar26->fields)._._.method_code,(pCVar3->fields)._transitionType,
                   (pCVar26->fields)._._.method);
      }
      bVar10 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
    pCVar4 = (pCVar3->fields)._targetCamera;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (pCVar4,(MethodInfo *)0x0);
    if (fVar1 < (this->fields)._targetFOV_5__3) goto code_?;
  }
  pCVar4 = (pCVar3->fields)._targetCamera;
  (pCVar3->fields)._progress = 1.0;
  if (pCVar4 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar4,(this->fields)._targetFOV_5__3,(MethodInfo *)0x0);
    if ((pCVar3->fields)._transitionType == 1) {
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 == (Camera *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
                (pCVar4,1,(MethodInfo *)0x0);
    }
    pTVar9 = (this->fields).__targetTransform_5__6;
    if (pTVar9 != (Transform *)0x0) {
      uStack_20._0_4_ = (pCVar3->fields)._camRestorePosition.x;
      uStack_20._4_4_ = (pCVar3->fields)._camRestorePosition.y;
      fStack_25 = (pCVar3->fields)._camRestorePosition.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        bVar7 = (*pcVar16)();
        return bVar7;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar16 = (code *)swi(3);
        bVar7 = (*pcVar16)();
        return bVar7;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(pvVar15,&uStack_20);
      pCVar4 = (pCVar3->fields)._targetCamera;
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar4,(pCVar3->fields)._camFieldOfView,(MethodInfo *)0x0);
        if ((pCVar3->fields).TransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
          pCVar26 = (pCVar3->fields).TransitionUpdate;
          (*(pCVar26->fields)._._.invoke_impl)
                    ((pCVar26->fields)._._.method_code,(pCVar3->fields)._transitionType,
                     (pCVar26->fields)._._.method);
        }
        bVar10 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    FUN_?();
    pcVar16 = (code *)swi(3);
    bVar7 = (*pcVar16)();
    return bVar7;
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar7 = (*pcVar16)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition+<DoTransition>d__41::
     CameraPrjSwitchTransition_DoTransition_d_41_System_Collections_IEnumerator_Reset
               (CameraPrjSwitchTransition_DoTransition_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

