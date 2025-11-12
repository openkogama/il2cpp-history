
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothRotationSwitch>d__134::
     RTFocusCamera_DoSmoothRotationSwitch_d_134_MoveNext
               (RTFocusCamera_DoSmoothRotationSwitch_d_134 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    pCVar2 = (this_00->fields)._rotationSwitchSettings;
    (this_00->fields)._isDoingRotationSwitch = 1;
    if (pCVar2 == (CameraRotationSwitchSettings *)0x0) goto code_?;
    if ((pCVar2->fields)._switchType == 0) goto code_?;
    pVVar3 = RTFocusCamera::RTFocusCamera_GetFocusPoint
                        ((Vector3 *)auStack_4,this_00,(MethodInfo *)0x0);
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    (this->fields)._focusPt_5__2.x = pVVar3->x;
    (this->fields)._focusPt_5__2.y = fVar5;
    (this->fields)._focusPt_5__2.z = fVar6;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (RTFocusCamera *)0x0) goto code_?;
code_?:
      pTVar7 = (this_00->fields)._targetTransform;
      if (pTVar7 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_8 = (undefined1  [8])0x0;
        uStack_9 = 0;
        pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,auStack_8);
        uVar13._0_4_ = (this->fields).targetRotation.x;
        uVar13._4_4_ = (this->fields).targetRotation.y;
        uVar14._0_4_ = (this->fields).targetRotation.z;
        uVar14._4_4_ = (this->fields).targetRotation.w;
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcRam_? = pcVar11;
        fVar6 = (float)(*pcRam_?)();
        pCVar2 = (this_00->fields)._rotationSwitchSettings;
        if (pCVar2 != (CameraRotationSwitchSettings *)0x0) {
          fVar5 = (pCVar2->fields)._smoothValue;
          uStack_15 = 0;
          uStack_16 = 0;
          pcVar11 = pcRam_?;
          auStack_17 = (undefined1  [8])uVar13;
          uStack_18 = uVar14;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(auStack_8,auStack_17,fVar6 * fVar5,&uStack_15);
          fStack_19 = (float)uStack_15;
          fStack_20 = uStack_15._4_4_;
          fStack_21 = (float)uStack_16;
          fStack_22 = uStack_16._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10);
          pTVar7 = (this_00->fields)._targetTransform;
          if (pTVar7 == (Transform *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_15 = 0;
          uStack_16 = 0;
          pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar10 != (void *)0x0) {
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar11 = (code *)swi(3);
              bVar12 = (*pcVar11)();
              return bVar12;
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pvVar10);
            uVar23 = (uint)_UNK_?;
            fVar6 = (float)((uint)(uStack_15._4_4_ * (this->fields).targetRotation.y +
                                    (float)uStack_15 * (this->fields).targetRotation.x +
                                    (float)uStack_16 * (this->fields).targetRotation.z +
                                   uStack_16._4_4_ * (this->fields).targetRotation.w) & uVar23);
            if (_UNK_? <= fVar6) {
              fVar6 = _UNK_?;
            }
            if (fVar6 <= _UNK_?) {
              fVar6 = (float)func_?(fVar6);
              uVar23 = (uint)_UNK_?;
              fVar6 = (fVar6 + fVar6) * _UNK_?;
            }
            else {
              fVar6 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar6 & uVar23)) {
              bVar24 = iRam_? != 0;
              (this->fields).__2__current = (Object *)0x0;
              if (bVar24) {
                uVar23 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                uVar25 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
                do {
                  uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                  puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                  LOCK();
                  bVar24 = uVar26 == *puVar27;
                  if (bVar24) {
                    *puVar27 = uVar26 | 1L << (uVar23 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar24);
              }
              (this->fields).__1__state = 1;
              return 1;
            }
            pTVar7 = (this_00->fields)._targetTransform;
            if (pTVar7 == (Transform *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              bVar12 = (*pcVar11)();
              return bVar12;
            }
            fStack_19 = (this->fields).targetRotation.x;
            fStack_20 = (this->fields).targetRotation.y;
            fStack_21 = (this->fields).targetRotation.z;
            fStack_22 = (this->fields).targetRotation.w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar10 != (void *)0x0) {
              pcVar11 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar11 = (code *)swi(3);
                bVar12 = (*pcVar11)();
                return bVar12;
              }
              pcRam_? = pcVar11;
              (*pcRam_?)(pvVar10,&fStack_19);
              (this_00->fields)._isDoingRotationSwitch = 0;
              return 0;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
      }
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  fVar6 = (float)(*pcRam_?)();
  if ((this_00 != (RTFocusCamera *)0x0) &&
     (pCVar2 = (this_00->fields)._rotationSwitchSettings,
     pCVar2 != (CameraRotationSwitchSettings *)0x0)) {
    pTVar7 = (this_00->fields)._targetTransform;
    fVar5 = (pCVar2->fields)._smoothValue;
    if (pTVar7 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_17._0_4_ = 0.0;
      auStack_17._4_4_ = 0.0;
      uStack_18 = 0;
      pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pvVar10,auStack_17);
      auStack_4._0_4_ = (this->fields).targetRotation.x;
      auStack_4._4_4_ = (this->fields).targetRotation.y;
      auStack_4._8_4_ = (this->fields).targetRotation.z;
      auStack_4._12_4_ = (this->fields).targetRotation.w;
      auStack_8 = auStack_17;
      uStack_9 = uStack_18;
      uStack_15 = 0;
      uStack_16 = 0;
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(auStack_8,auStack_4,fVar6 * fVar5,&uStack_15);
      fStack_19 = (float)uStack_15;
      fStack_20 = uStack_15._4_4_;
      fStack_21 = (float)uStack_16;
      fStack_22 = uStack_16._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pvVar10,&fStack_19);
      pTVar7 = (this_00->fields)._targetTransform;
      auStack_4._0_4_ = (this->fields)._focusPt_5__2.x;
      auStack_4._4_4_ = (this->fields)._focusPt_5__2.y;
      fVar6 = (this->fields)._focusPt_5__2.z;
      if (pTVar7 == (Transform *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)auStack_17,pTVar7,(MethodInfo *)0x0);
      fVar5 = (this_00->fields)._focusPointOffset;
      uStack_15._0_4_ = pVVar3->x;
      uStack_15._4_4_ = pVVar3->y;
      if (pTVar7 != (Transform *)0x0) {
        auStack_4._4_4_ = (float)auStack_4._4_4_ - uStack_15._4_4_ * fVar5;
        auStack_4._0_4_ = (float)auStack_4._0_4_ - (float)uStack_15 * fVar5;
        auStack_4._8_4_ = fVar6 - pVVar3->z * fVar5;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        pTVar7 = (this_00->fields)._targetTransform;
        if (pTVar7 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_15 = 0;
          uStack_16 = 0;
          pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10);
          uVar23 = (uint)_UNK_?;
          fVar6 = (float)((uint)(uStack_15._4_4_ * (this->fields).targetRotation.y +
                                  (float)uStack_15 * (this->fields).targetRotation.x +
                                  (float)uStack_16 * (this->fields).targetRotation.z +
                                 uStack_16._4_4_ * (this->fields).targetRotation.w) & uVar23);
          if (_UNK_? <= fVar6) {
            fVar6 = _UNK_?;
          }
          if (fVar6 <= _UNK_?) {
            fVar6 = (float)func_?(fVar6);
            uVar23 = (uint)_UNK_?;
            fVar6 = (fVar6 + fVar6) * _UNK_?;
          }
          else {
            fVar6 = 0.0;
          }
          if (_UNK_? <= (float)((uint)fVar6 & uVar23)) {
            bVar24 = iRam_? != 0;
            (this->fields).__2__current = (Object *)0x0;
            if (bVar24) {
              uVar23 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar25 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
              do {
                uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                LOCK();
                bVar24 = uVar26 == *puVar27;
                if (bVar24) {
                  *puVar27 = uVar26 | 1L << (uVar23 & 0x3f);
                }
                UNLOCK();
              } while (!bVar24);
            }
            (this->fields).__1__state = 2;
            return 1;
          }
          pTVar7 = (this_00->fields)._targetTransform;
          if (pTVar7 == (Transform *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          fStack_19 = (this->fields).targetRotation.x;
          fStack_20 = (this->fields).targetRotation.y;
          fStack_21 = (this->fields).targetRotation.z;
          fStack_22 = (this->fields).targetRotation.w;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            bVar12 = (*pcVar11)();
            return bVar12;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10,&fStack_19);
          (this->fields)._focusPt_5__2.x = 0.0;
          (this->fields)._focusPt_5__2.y = 0.0;
          (this->fields)._focusPt_5__2.z = 0.0;
          (this_00->fields)._isDoingRotationSwitch = 0;
          return 0;
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothRotationSwitch>d__134::
     RTFocusCamera_DoSmoothRotationSwitch_d_134_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothRotationSwitch_d_134 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

