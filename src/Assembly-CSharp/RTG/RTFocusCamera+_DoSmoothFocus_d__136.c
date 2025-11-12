
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothFocus>d__136::
     RTFocusCamera_DoSmoothFocus_d_136_MoveNext
               (RTFocusCamera_DoSmoothFocus_d_136 *this,MethodInfo *method)

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
    uStack_6 = 0;
    fStack_7 = 0.0;
    pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8);
    pCVar2 = (this->fields).focusData;
    if (pCVar2 == (CameraFocus_Data *)0x0) goto code_?;
    aVStack_12[0].x = (pCVar2->fields)._cameraWorldPosition.x;
    aVStack_12[0].y = (pCVar2->fields)._cameraWorldPosition.y;
    fVar4 = (pCVar2->fields)._cameraWorldPosition.z - fStack_7;
    fVar13 = aVStack_12[0].y - uStack_6._4_4_;
    fVar14 = aVStack_12[0].x - (float)uStack_6;
    uStack_6 = CONCAT44(fVar13,fVar14);
    fStack_7 = fVar4;
    fVar15 = (float)FUN_?(&uStack_6);
    if (_UNK_? < fVar15) {
      fVar4 = fVar4 / fVar15;
      uVar11 = CONCAT44(fVar13 / fVar15,fVar14 / fVar15);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar11._0_4_ = (pVVar16->zeroVector).x;
      uVar11._4_4_ = (pVVar16->zeroVector).y;
      fVar4 = (pVVar16->zeroVector).z;
    }
    (this->fields)._camMoveDir_5__3.x = (float)(int)uVar11;
    (this->fields)._camMoveDir_5__3.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    (this->fields)._camMoveDir_5__3.z = fVar4;
    (this->fields)._elapsedTime_5__4 = 0.0;
    (this_00->fields)._isDoingFocus = 1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pCVar17 = (this_00->fields)._focusSettings;
  if (pCVar17 != (CameraFocusSettings *)0x0) {
    pTVar5 = (this_00->fields)._targetTransform;
    fVar4 = (this->fields)._elapsedTime_5__4 / (pCVar17->fields)._smoothTime;
    if (pTVar5 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = 0;
      fStack_7 = 0.0;
      pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8);
      fVar15 = _UNK_?;
      pCVar2 = (this->fields).focusData;
      if (pCVar2 != (CameraFocus_Data *)0x0) {
        uVar18 = (pCVar2->fields)._cameraWorldPosition.x;
        uVar19 = (pCVar2->fields)._cameraWorldPosition.y;
        if (fVar4 < 0.0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = _UNK_?;
          if (fVar4 <= _UNK_?) {
            fVar13 = fVar4;
          }
        }
        fStack_20 = ((pCVar2->fields)._cameraWorldPosition.z - fStack_7) * fVar13 + fStack_7;
        uStack_21 = CONCAT44(((float)uVar19 - uStack_6._4_4_) * fVar13 + uStack_6._4_4_,
                             ((float)uVar18 - (float)uStack_6) * fVar13 + (float)uStack_6);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          bVar10 = (*pcVar9)();
          return bVar10;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          bVar10 = (*pcVar9)();
          return bVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8);
        pCVar3 = (this_00->fields)._targetCamera;
        if (pCVar3 != (Camera *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pCVar3->fields)._._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar3,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            bVar10 = (*pcVar9)();
            return bVar10;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar9 = (code *)swi(3);
            bVar10 = (*pcVar9)();
            return bVar10;
          }
          pcRam_? = pcVar9;
          fVar13 = (float)(*pcRam_?)(pvVar8);
          if (fVar4 < 0.0) {
            fVar4 = 0.0;
          }
          else if (fVar15 < fVar4) {
            fVar4 = fVar15;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                    (pCVar3,((this->fields)._targetOrthoSize_5__2 - fVar13) * fVar4 + fVar13,
                     (MethodInfo *)0x0);
          fVar4 = (this->fields)._elapsedTime_5__4;
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar9 = (code *)swi(3);
            bVar10 = (*pcVar9)();
            return bVar10;
          }
          pcRam_? = pcVar9;
          fVar13 = (float)(*pcRam_?)();
          pCVar2 = (this->fields).focusData;
          fVar15 = (this->fields)._camMoveDir_5__3.z;
          (this->fields)._elapsedTime_5__4 = fVar13 + fVar4;
          aVStack_12[0].x = (this->fields)._camMoveDir_5__3.x;
          aVStack_12[0].y = (this->fields)._camMoveDir_5__3.y;
          if (pCVar2 != (CameraFocus_Data *)0x0) {
            pTVar5 = (this_00->fields)._targetTransform;
            uStack_22._0_4_ = (pCVar2->fields)._cameraWorldPosition.x;
            uStack_22._4_4_ = (pCVar2->fields)._cameraWorldPosition.y;
            fVar4 = (pCVar2->fields)._cameraWorldPosition.z;
            if (pTVar5 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_6 = 0;
              fStack_7 = 0.0;
              pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                bVar10 = (*pcVar9)();
                return bVar10;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar11 = func_?(&UNK_?);
                FUN_?(uVar11,0);
                pcVar9 = (code *)swi(3);
                bVar10 = (*pcVar9)();
                return bVar10;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar8);
              if (0.0 < (uStack_22._4_4_ - uStack_6._4_4_) * aVStack_12[0].y +
                        ((float)uStack_22 - (float)uStack_6) * aVStack_12[0].x +
                        (fVar4 - fStack_7) * fVar15) {
                bVar23 = iRam_? != 0;
                (this->fields).__2__current = (Object *)0x0;
                if (bVar23) {
                  uVar24 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                  uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
                  do {
                    uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                    puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                    LOCK();
                    bVar23 = uVar26 == *puVar27;
                    if (bVar23) {
                      *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar23);
                }
                (this->fields).__1__state = 1;
                return 1;
              }
              pCVar2 = (this->fields).focusData;
              if (pCVar2 != (CameraFocus_Data *)0x0) {
                pTVar5 = (this_00->fields)._targetTransform;
                if (pTVar5 != (Transform *)0x0) {
                  aVStack_12[0].x = (pCVar2->fields)._cameraWorldPosition.x;
                  aVStack_12[0].y = (pCVar2->fields)._cameraWorldPosition.y;
                  aVStack_12[0].z = (pCVar2->fields)._cameraWorldPosition.z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar8 = (pTVar5->fields)._._.m_CachedPtr;
                  if (pvVar8 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                    pcVar9 = (code *)swi(3);
                    bVar10 = (*pcVar9)();
                    return bVar10;
                  }
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar9 = (code *)swi(3);
                    bVar10 = (*pcVar9)();
                    return bVar10;
                  }
                  pcRam_? = pcVar9;
                  (*pcRam_?)(pvVar8,aVStack_12);
                  pCVar3 = (this_00->fields)._targetCamera;
                  if (pCVar3 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
                              (pCVar3,(this->fields)._targetOrthoSize_5__2,(MethodInfo *)0x0);
                    pCVar2 = (this->fields).focusData;
                    if (pCVar2 != (CameraFocus_Data *)0x0) {
                      aVStack_12[0].x = (pCVar2->fields)._focusPoint.x;
                      aVStack_12[0].y = (pCVar2->fields)._focusPoint.y;
                      aVStack_12[0].z = (pCVar2->fields)._focusPoint.z;
                      RTFocusCamera::RTFocusCamera_SetFocusPoint
                                (this_00,aVStack_12,(MethodInfo *)0x0);
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
                pcVar9 = (code *)swi(3);
                bVar10 = (*pcVar9)();
                return bVar10;
              }
            }
            goto code_?;
          }
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothFocus>d__136::
     RTFocusCamera_DoSmoothFocus_d_136_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothFocus_d_136 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

