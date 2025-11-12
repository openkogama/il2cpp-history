
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoConstantFocus>d__135::
     RTFocusCamera_DoConstantFocus_d_135_MoveNext
               (RTFocusCamera_DoConstantFocus_d_135 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    pCVar2 = (this->fields).focusData;
    pCVar3 = (this_00->fields)._targetCamera;
    if (pCVar2 == (CameraFocus_Data *)0x0) goto code_?;
    fVar4 = (pCVar2->fields)._focusPointOffset;
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar4 = CameraEx::CameraEx_GetFrustumHeightFromDistance(pCVar3,fVar4,(MethodInfo *)0x0);
    (this->fields)._targetOrthoSize_5__2 = fVar4 * _UNK_?;
    pTVar5 = (this_00->fields)._targetTransform;
    if (pTVar5 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pCVar2 = (this->fields).focusData;
    if (pCVar2 == (CameraFocus_Data *)0x0) goto code_?;
    aVStack_10[0].x = (pCVar2->fields)._cameraWorldPosition.x;
    aVStack_10[0].y = (pCVar2->fields)._cameraWorldPosition.y;
    fVar11 = aVStack_10[0].x - 0.0;
    fVar4 = (pCVar2->fields)._cameraWorldPosition.z - 0.0;
    fVar12 = aVStack_10[0].y - 0.0;
    uStack_13 = CONCAT44(fVar12,fVar11);
    fStack_14 = fVar4;
    fVar15 = (float)FUN_?(&uStack_13);
    if (_UNK_? < fVar15) {
      fVar4 = fVar4 / fVar15;
      uVar9 = CONCAT44(fVar12 / fVar15,fVar11 / fVar15);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar9._0_4_ = (pVVar16->zeroVector).x;
      uVar9._4_4_ = (pVVar16->zeroVector).y;
      fVar4 = (pVVar16->zeroVector).z;
    }
    (this->fields)._camMoveDir_5__3.x = (float)(int)uVar9;
    (this->fields)._camMoveDir_5__3.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    (this->fields)._camMoveDir_5__3.z = fVar4;
    pCVar2 = (this->fields).focusData;
    if (pCVar2 == (CameraFocus_Data *)0x0) goto code_?;
    aVStack_10[0].x = (pCVar2->fields)._cameraWorldPosition.x;
    aVStack_10[0].y = (pCVar2->fields)._cameraWorldPosition.y;
    fStack_14 = 0.0 - (pCVar2->fields)._cameraWorldPosition.z;
    uStack_13 = CONCAT44(0.0 - aVStack_10[0].y,0.0 - aVStack_10[0].x);
    fVar4 = (float)FUN_?(&uStack_13);
    (this->fields)._distanceToTravel_5__4 = fVar4;
    pCVar3 = (this_00->fields)._targetCamera;
    if (pCVar3 == (Camera *)0x0) goto code_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                       (pCVar3,(MethodInfo *)0x0);
    (this->fields)._initialCamOrthoSize_5__5 = fVar4;
    (this_00->fields)._isDoingFocus = 1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pTVar5 = (this_00->fields)._targetTransform;
  if (pTVar5 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pCVar17 = (this_00->fields)._focusSettings;
    if (pCVar17 != (CameraFocusSettings *)0x0) {
      aVStack_10[0].x = (this->fields)._camMoveDir_5__3.x;
      aVStack_10[0].y = (this->fields)._camMoveDir_5__3.y;
      fVar4 = (pCVar17->fields)._constantSpeed;
      fVar12 = fVar4 * aVStack_10[0].x;
      fVar15 = (this->fields)._camMoveDir_5__3.z;
      fVar11 = fVar4 * aVStack_10[0].y;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      fVar18 = (float)(*pcRam_?)();
      aVStack_10[0].z = fVar18 * fVar4 * fVar15 + 0.0;
      aVStack_10[0].y = fVar18 * fVar11 + 0.0;
      aVStack_10[0].x = fVar18 * fVar12 + 0.0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pTVar5 = (this_00->fields)._targetTransform;
      if (pTVar5 == (Transform *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pCVar2 = (this->fields).focusData;
      if (pCVar2 != (CameraFocus_Data *)0x0) {
        aVStack_10[0].x = (pCVar2->fields)._cameraWorldPosition.x;
        aVStack_10[0].y = (pCVar2->fields)._cameraWorldPosition.y;
        fStack_14 = 0.0 - (pCVar2->fields)._cameraWorldPosition.z;
        uStack_13 = CONCAT44(0.0 - aVStack_10[0].y,0.0 - aVStack_10[0].x);
        fVar15 = (float)FUN_?(&uStack_13);
        pCVar3 = (this_00->fields)._targetCamera;
        fVar4 = (this->fields)._initialCamOrthoSize_5__5;
        fVar15 = _UNK_? - fVar15 / (this->fields)._distanceToTravel_5__4;
        if (fVar15 < 0.0) {
          fVar15 = 0.0;
        }
        else if (_UNK_? < fVar15) {
          fVar15 = _UNK_?;
        }
        if (pCVar3 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                    (pCVar3,((this->fields)._targetOrthoSize_5__2 - fVar4) * fVar15 + fVar4,
                     (MethodInfo *)0x0);
          pCVar2 = (this->fields).focusData;
          uVar19 = (this->fields)._camMoveDir_5__3.x;
          uVar20 = (this->fields)._camMoveDir_5__3.y;
          fVar4 = (this->fields)._camMoveDir_5__3.z;
          if (pCVar2 != (CameraFocus_Data *)0x0) {
            pTVar5 = (this_00->fields)._targetTransform;
            aVStack_10[0].x = (pCVar2->fields)._cameraWorldPosition.x;
            aVStack_10[0].y = (pCVar2->fields)._cameraWorldPosition.y;
            fVar15 = (pCVar2->fields)._cameraWorldPosition.z;
            if (pTVar5 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_13 = 0;
              fStack_14 = 0.0;
              pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
              if (pvVar6 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
              pcRam_? = pcVar7;
              (*pcRam_?)(pvVar6);
              if (0.0 < (aVStack_10[0].y - uStack_13._4_4_) * (float)uVar20 +
                        (aVStack_10[0].x - (float)uStack_13) * (float)uVar19 +
                        (fVar15 - fStack_14) * fVar4) {
                bVar21 = iRam_? != 0;
                (this->fields).__2__current = (Object *)0x0;
                if (bVar21) {
                  uVar22 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                  uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                  do {
                    uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
                    puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
                    LOCK();
                    bVar21 = uVar24 == *puVar25;
                    if (bVar21) {
                      *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar21);
                }
                (this->fields).__1__state = 1;
                return 1;
              }
              pCVar2 = (this->fields).focusData;
              if (pCVar2 != (CameraFocus_Data *)0x0) {
                pTVar5 = (this_00->fields)._targetTransform;
                if (pTVar5 != (Transform *)0x0) {
                  aVStack_10[0].x = (pCVar2->fields)._cameraWorldPosition.x;
                  aVStack_10[0].y = (pCVar2->fields)._cameraWorldPosition.y;
                  aVStack_10[0].z = (pCVar2->fields)._cameraWorldPosition.z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
                  if (pvVar6 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                    pcVar7 = (code *)swi(3);
                    bVar8 = (*pcVar7)();
                    return bVar8;
                  }
                  pcVar7 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar7 = (code *)swi(3);
                    bVar8 = (*pcVar7)();
                    return bVar8;
                  }
                  pcRam_? = pcVar7;
                  (*pcRam_?)(pvVar6,aVStack_10);
                  pCVar3 = (this_00->fields)._targetCamera;
                  if (pCVar3 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                              (pCVar3,(this->fields)._targetOrthoSize_5__2,(MethodInfo *)0x0);
                    pCVar2 = (this->fields).focusData;
                    if (pCVar2 != (CameraFocus_Data *)0x0) {
                      aVStack_10[0].x = (pCVar2->fields)._focusPoint.x;
                      aVStack_10[0].y = (pCVar2->fields)._focusPoint.y;
                      aVStack_10[0].z = (pCVar2->fields)._focusPoint.z;
                      RTFocusCamera::RTFocusCamera_SetFocusPoint
                                (this_00,aVStack_10,(MethodInfo *)0x0);
                      pCVar2 = (this->fields).focusData;
                      if (pCVar2 != (CameraFocus_Data *)0x0) {
                        fVar15 = (pCVar2->fields)._focusPoint.y;
                        fVar4 = (pCVar2->fields)._focusPoint.z;
                        (this_00->fields)._lastFocusPoint.x = (pCVar2->fields)._focusPoint.x;
                        (this_00->fields)._lastFocusPoint.y = fVar15;
                        (this_00->fields)._lastFocusPoint.z = fVar4;
                        (this_00->fields)._isDoingFocus = 0;
                        return 0;
                      }
                    }
                    goto code_?;
                  }
                }
                FUN_?();
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoConstantFocus>d__135::
     RTFocusCamera_DoConstantFocus_d_135_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoConstantFocus_d_135 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__RTFocusCamera___DoConstantFocus_d__135__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

