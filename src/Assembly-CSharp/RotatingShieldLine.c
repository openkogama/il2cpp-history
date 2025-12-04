
/* Void CreatePoints() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_CreatePoints
               (RotatingShieldLine *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  iVar4 = 0;
  fVar5 = 0.0;
  if (0 < (this->fields).segments + 1) {
    do {
      fVar6 = (this->fields).radius;
      fVar7 = (float)FUN_?(fVar5 * fVar3);
      fVar8 = (float)FUN_?(fVar5 * fVar3);
      fVar9 = fVar6 * 0.0;
      obj = (this->fields).line;
      if (obj == (LineRenderer *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStack_11 = CONCAT44(fVar8 * fVar6,fVar7 * fVar6);
      fStack_12 = fVar9;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar13,iVar4,&uStack_11);
      iVar15 = (this->fields).segments;
      if ((iVar4 % ((int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar15 / 3 + (iVar15 >> 0x1f)) == 0) && ((this->fields).currIndex < 3)) {
        uVar16 = (this->fields).currIndex;
        pVVar17 = (this->fields).positions;
        (this->fields).currIndex = uVar16 + 1;
        if (pVVar17 == (Vector3__Array *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((uint)pVVar17->max_length <= uVar16) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pVVar17->vector[(int)uVar16].x = fVar7 * fVar6 * fVar2;
        pVVar17->vector[(int)uVar16].y = fVar8 * fVar6 * fVar2;
        pVVar17->vector[(int)uVar16].z = fVar9 * fVar2;
      }
      iVar4 = iVar4 + 1;
      fVar5 = fVar5 + fVar1 / (float)(this->fields).segments;
    } while (iVar4 < (this->fields).segments + 1);
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Initialize
               (RotatingShieldLine *this,MethodInfo *method)

{
  RotatingShieldLine_CreatePoints(this,(MethodInfo *)0x0);
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = 0;
  pVVar4 = (this->fields).positions;
  uVar5 = uVar3;
  while (pVVar4 != (Vector3__Array *)0x0) {
    uVar6 = (uint)uVar5;
    if ((int)pVVar4->max_length <= (int)uVar6) {
      (this->fields).recreatOrbs = 0;
      return;
    }
    pVVar4 = (this->fields).positions;
    if (pVVar4 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar4->max_length <= uVar6) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar8 = *(undefined8 *)((longlong)&pVVar4->vector[0].x + uVar3);
    uVar9 = *(undefined4 *)((longlong)&pVVar4->vector[0].z + uVar3);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar10->zeroVector).x;
    uVar12 = (pVVar10->zeroVector).y;
    fVar13 = (pVVar10->zeroVector).z;
    fVar14 = (float)FUN_?(uVar1);
    fVar15 = (float)FUN_?(uVar1);
    fVar16 = (float)FUN_?(uVar1);
    fVar17 = (float)FUN_?(uVar1);
    obj = (this->fields).orbSpawner;
    uStack_18 = (ulonglong)
                 CONCAT31(CONCAT21(CONCAT11((char)(int)fVar17,(char)(int)fVar16),(char)(int)fVar15),
                          (char)(int)fVar14);
    if (obj == (ParticleSystem *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_19 = CONCAT44(uVar11,uVar9);
    uStack_20 = CONCAT44(fVar13,uVar12);
    lStack_21 = (ulonglong)uVar2 << 0x20;
    uStack_22 = CONCAT44(uVar2,uVar2);
    uStack_23 = 0;
    uStack_24 = uStack_18;
    uStack_25 = 0;
    uStack_26 = 0x47c35000;
    uStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0;
    uStack_30 = 0;
    uStack_31 = 0x101;
    uStack_32 = 0x10100;
    uStack_33 = 1;
    uStack_34 = 0;
    uStack_35 = 0;
    uStack_36 = 0;
    uStack_37 = 0;
    uStack_38 = 0;
    uStack_39 = 0;
    uStack_40 = uVar8;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar41 = (obj->fields)._._.m_CachedPtr;
    if (pvVar41 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar41,&uStack_40,1);
    uVar5 = (ulonglong)(uVar6 + 1);
    uVar3 = uVar3 + 0xc;
    pVVar4 = (this->fields).positions;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSetHidden() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_OnSetHidden
               (RotatingShieldLine *this,MethodInfo *method)

{
  (this->fields).recreatOrbs = 1;
  return;
}


/* Void OnSetVisible() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_OnSetVisible
               (RotatingShieldLine *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  if ((this->fields).recreatOrbs != 0) {
    fVar5 = 0.0;
    iVar6 = 0;
    do {
      fVar7 = (this->fields).radius;
      fVar8 = (float)FUN_?(fVar5 * fVar4);
      fVar9 = (float)FUN_?(fVar5 * fVar4);
      fVar5 = fVar5 + fVar2;
      uStack_10 = CONCAT44(fVar9 * fVar7 * fVar3,fVar8 * fVar7 * fVar3);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar12 = (pVVar11->zeroVector).x;
      uVar13 = (pVVar11->zeroVector).y;
      fVar8 = (pVVar11->zeroVector).z;
      fVar9 = (float)FUN_?(uVar1);
      fVar14 = (float)FUN_?(uVar1);
      fVar15 = (float)FUN_?(uVar1);
      fVar16 = (float)FUN_?(uVar1);
      obj = (this->fields).orbSpawner;
      uStack_17 = (ulonglong)
                   CONCAT31(CONCAT21(CONCAT11((char)(int)fVar16,(char)(int)fVar15),(char)(int)fVar14
                                    ),(char)(int)fVar9);
      if (obj == (ParticleSystem *)0x0) {
        FUN_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      uStack_19 = CONCAT44(uVar12,fVar7 * 0.0 * fVar3);
      uStack_20 = CONCAT44(fVar8,uVar13);
      uStack_21 = uStack_10;
      uStack_22 = 0x3e99999a00000000;
      uStack_23 = 0x3e99999a3e99999a;
      uStack_24 = 0;
      uStack_25 = uStack_17;
      uStack_26 = 0;
      uStack_27 = 0x47c35000;
      uStack_28 = 0;
      uStack_29 = 0;
      uStack_30 = 0;
      uStack_31 = 0;
      uStack_32 = 0x101;
      uStack_33 = 0x10100;
      uStack_34 = 1;
      uStack_35 = 0;
      uStack_36 = 0;
      uStack_37 = 0;
      uStack_38 = 0;
      uStack_39 = 0;
      uStack_40 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar41 = (obj->fields)._._.m_CachedPtr;
      if (pvVar41 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      pcVar18 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
        uVar42 = func_?(&UNK_?);
        FUN_?(uVar42,0);
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      pcRam_? = pcVar18;
      (*pcRam_?)(pvVar41,&uStack_21,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Update
               (RotatingShieldLine *this,MethodInfo *method)

{
  this_00 = (this->fields).lineTransform;
  if (this_00 != (Transform *)0x0) {
    aVStack_1[0].x = (this->fields).lineRotationSpeed.x;
    aVStack_1[0].y = (this->fields).lineRotationSpeed.y;
    aVStack_1[0].z = (this->fields).lineRotationSpeed.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
              (this_00,aVStack_1,Space__Enum_Self,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RotatingShieldLine() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine__ctor
               (RotatingShieldLine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  bVar2 = iRam_? != 0;
  (this->fields).positions = pVVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).positions >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar3 = (uint)ppMVar10;
      LOCK();
      bVar2 = uVar3 != uRam_?;
      uVar11 = uVar3;
      uVar12 = uVar3 + 1;
      if (bVar2) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2)
            );
    while (uVar3 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar3 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar13 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar13 == 1;
  if (bVar2) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar3 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar14 == 1;
  if (bVar2) {
    *puVar14 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar3 = GetCurrentThreadId();
    psVar15 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar3 == *psVar15;
    if (bVar2) {
      *psVar15 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar13 == 1;
      if (bVar2) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar3 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar3;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar3 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar17 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar8;
                while (ppMVar20 = ppMVar19 + 0x30529dd4,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_24 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar6;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar9 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar3 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
      }
      FUN_?(pOVar7,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar21 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar7->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

