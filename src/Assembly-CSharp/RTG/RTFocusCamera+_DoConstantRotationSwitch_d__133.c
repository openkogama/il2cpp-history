
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoConstantRotationSwitch>d__133::
     RTFocusCamera_DoConstantRotationSwitch_d_133_MoveNext
               (RTFocusCamera_DoConstantRotationSwitch_d_133 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (RTFocusCamera *)0x0) ||
       (pTVar2 = (this_00->fields)._targetTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&uStack_3);
    (this->fields)._elapsedTime_5__3 = 0.0;
    (this->fields)._sourceRotation_5__2.x = (float)uStack_3;
    (this->fields)._sourceRotation_5__2.y = uStack_3._4_4_;
    (this->fields)._sourceRotation_5__2.z = (float)uStack_4;
    (this->fields)._sourceRotation_5__2.w = uStack_4._4_4_;
    pCVar9 = (this_00->fields)._rotationSwitchSettings;
    (this_00->fields)._isDoingRotationSwitch = 1;
    if (pCVar9 == (CameraRotationSwitchSettings *)0x0) goto code_?;
    if ((pCVar9->fields)._switchType == 0) goto code_?;
    pVVar10 = RTFocusCamera::RTFocusCamera_GetFocusPoint(&VStack_11,this_00,(MethodInfo *)0x0);
    fVar12 = pVVar10->y;
    fVar13 = pVVar10->z;
    (this->fields)._focusPt_5__4.x = pVVar10->x;
    (this->fields)._focusPt_5__4.y = fVar12;
    (this->fields)._focusPt_5__4.z = fVar13;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (RTFocusCamera *)0x0) goto code_?;
code_?:
      pCVar9 = (this_00->fields)._rotationSwitchSettings;
      pTVar2 = (this_00->fields)._targetTransform;
      if (pCVar9 != (CameraRotationSwitchSettings *)0x0) {
        uStack_14._0_4_ = (this->fields).targetRotation.x;
        uStack_14._4_4_ = (this->fields).targetRotation.y;
        uStack_15._0_4_ = (this->fields).targetRotation.z;
        uStack_15._4_4_ = (this->fields).targetRotation.w;
        fVar13 = (this->fields)._elapsedTime_5__3;
        uStack_16._0_4_ = (this->fields)._sourceRotation_5__2.x;
        uStack_16._4_4_ = (this->fields)._sourceRotation_5__2.y;
        uStack_17._0_4_ = (this->fields)._sourceRotation_5__2.z;
        uStack_17._4_4_ = (this->fields)._sourceRotation_5__2.w;
        fVar12 = (pCVar9->fields)._constantSwitchDurationInSeconds;
        auStack_18._0_4_ = 0.0;
        auStack_18._4_4_ = 0.0;
        uStack_19 = 0;
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(&uStack_16,&uStack_14,fVar13 / fVar12,auStack_18);
        if (pTVar2 != (Transform *)0x0) {
          VStack_11.x = (float)auStack_18._0_4_;
          VStack_11.y = (float)auStack_18._4_4_;
          VStack_11.z = (float)uStack_19;
          uStack_20 = uStack_19._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar5);
          fVar13 = (this->fields)._elapsedTime_5__3;
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          pcRam_? = pcVar6;
          fVar12 = (float)(*pcRam_?)();
          (this->fields)._elapsedTime_5__3 = fVar12 + fVar13;
          pTVar2 = (this_00->fields)._targetTransform;
          if (pTVar2 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_3 = 0;
            uStack_4 = 0;
            pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar5);
            uVar21 = (uint)_UNK_?;
            fVar13 = (float)((uint)(uStack_3._4_4_ * (this->fields).targetRotation.y +
                                    (float)uStack_3 * (this->fields).targetRotation.x +
                                    (float)uStack_4 * (this->fields).targetRotation.z +
                                   uStack_4._4_4_ * (this->fields).targetRotation.w) & uVar21);
            if (_UNK_? <= fVar13) {
              fVar13 = _UNK_?;
            }
            if (fVar13 <= _UNK_?) {
              fVar13 = (float)func_?(fVar13);
              uVar21 = (uint)_UNK_?;
              fVar13 = (fVar13 + fVar13) * _UNK_?;
            }
            else {
              fVar13 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar13 & uVar21)) {
              bVar22 = iRam_? != 0;
              (this->fields).__2__current = (Object *)0x0;
              if (bVar22) {
                uVar21 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                uVar23 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
                do {
                  uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
                  puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
                  LOCK();
                  bVar22 = uVar24 == *puVar25;
                  if (bVar22) {
                    *puVar25 = uVar24 | 1L << (uVar21 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar22);
              }
              (this->fields).__1__state = 1;
              return 1;
            }
            pTVar2 = (this_00->fields)._targetTransform;
            if (pTVar2 == (Transform *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            uStack_14._0_4_ = (this->fields).targetRotation.x;
            uStack_14._4_4_ = (this->fields).targetRotation.y;
            uStack_15._0_4_ = (this->fields).targetRotation.z;
            uStack_15._4_4_ = (this->fields).targetRotation.w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar5 != (void *)0x0) {
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                bVar7 = (*pcVar6)();
                return bVar7;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar5,&uStack_14);
              (this_00->fields)._isDoingRotationSwitch = 0;
              return 0;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pCVar9 = (this_00->fields)._rotationSwitchSettings;
  if (pCVar9 != (CameraRotationSwitchSettings *)0x0) {
    auStack_18._0_4_ = (this->fields).targetRotation.x;
    auStack_18._4_4_ = (this->fields).targetRotation.y;
    uStack_19._0_4_ = (this->fields).targetRotation.z;
    uStack_19._4_4_ = (this->fields).targetRotation.w;
    pTVar2 = (this_00->fields)._targetTransform;
    fVar13 = (this->fields)._elapsedTime_5__3;
    uStack_16._0_4_ = (this->fields)._sourceRotation_5__2.x;
    uStack_16._4_4_ = (this->fields)._sourceRotation_5__2.y;
    uStack_17._0_4_ = (this->fields)._sourceRotation_5__2.z;
    uStack_17._4_4_ = (this->fields)._sourceRotation_5__2.w;
    fVar12 = (pCVar9->fields)._constantSwitchDurationInSeconds;
    uStack_3 = 0;
    uStack_4 = 0;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(&uStack_16,auStack_18,fVar13 / fVar12,&uStack_3);
    if (pTVar2 != (Transform *)0x0) {
      uStack_14 = uStack_3;
      uStack_15 = uStack_4;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&uStack_14);
      pTVar2 = (this_00->fields)._targetTransform;
      VStack_11.x = (this->fields)._focusPt_5__4.x;
      VStack_11.y = (this->fields)._focusPt_5__4.y;
      fVar13 = (this->fields)._focusPt_5__4.z;
      if (pTVar2 != (Transform *)0x0) {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)auStack_18,pTVar2,(MethodInfo *)0x0);
        fVar12 = (this_00->fields)._focusPointOffset;
        uStack_3._0_4_ = pVVar10->x;
        uStack_3._4_4_ = pVVar10->y;
        fVar13 = fVar13 - pVVar10->z * fVar12;
        if (pTVar2 != (Transform *)0x0) {
          VStack_11.y = VStack_11.y - uStack_3._4_4_ * fVar12;
          VStack_11.x = VStack_11.x - (float)uStack_3 * fVar12;
          VStack_11.z = fVar13;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar5);
          fVar13 = (this->fields)._elapsedTime_5__3;
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            bVar7 = (*pcVar6)();
            return bVar7;
          }
          pcRam_? = pcVar6;
          fVar12 = (float)(*pcRam_?)();
          (this->fields)._elapsedTime_5__3 = fVar12 + fVar13;
          pTVar2 = (this_00->fields)._targetTransform;
          if (pTVar2 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_3 = 0;
            uStack_4 = 0;
            pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar5);
            uVar21 = (uint)_UNK_?;
            fVar13 = (float)((uint)(uStack_3._4_4_ * (this->fields).targetRotation.y +
                                    (float)uStack_3 * (this->fields).targetRotation.x +
                                    (float)uStack_4 * (this->fields).targetRotation.z +
                                   uStack_4._4_4_ * (this->fields).targetRotation.w) & uVar21);
            if (_UNK_? <= fVar13) {
              fVar13 = _UNK_?;
            }
            if (fVar13 <= _UNK_?) {
              fVar13 = (float)func_?(fVar13);
              uVar21 = (uint)_UNK_?;
              fVar13 = (fVar13 + fVar13) * _UNK_?;
            }
            else {
              fVar13 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar13 & uVar21)) {
              bVar22 = iRam_? != 0;
              (this->fields).__2__current = (Object *)0x0;
              if (bVar22) {
                uVar21 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                uVar23 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
                do {
                  uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
                  puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
                  LOCK();
                  bVar22 = uVar24 == *puVar25;
                  if (bVar22) {
                    *puVar25 = uVar24 | 1L << (uVar21 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar22);
              }
              (this->fields).__1__state = 2;
              return 1;
            }
            pTVar2 = (this_00->fields)._targetTransform;
            if (pTVar2 == (Transform *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            uStack_14._0_4_ = (this->fields).targetRotation.x;
            uStack_14._4_4_ = (this->fields).targetRotation.y;
            uStack_15._0_4_ = (this->fields).targetRotation.z;
            uStack_15._4_4_ = (this->fields).targetRotation.w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              bVar7 = (*pcVar6)();
              return bVar7;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar5,&uStack_14);
            (this->fields)._focusPt_5__4.x = 0.0;
            (this->fields)._focusPt_5__4.y = 0.0;
            (this->fields)._focusPt_5__4.z = 0.0;
            (this_00->fields)._isDoingRotationSwitch = 0;
            return 0;
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoConstantRotationSwitch>d__133::
     RTFocusCamera_DoConstantRotationSwitch_d_133_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoConstantRotationSwitch_d_133 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

