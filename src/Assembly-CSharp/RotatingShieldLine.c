
/* Void CreatePoints() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_CreatePoints(RotatingShieldLine *this,MethodInfo *method)

{
  iVar1 = 0;
  fVar2 = 0.0;
  if (0 < (this->fields).segments + 1) {
    do {
      fVar3 = (this->fields).radius;
      fVar4 = (float)FUN_?(fVar2 * 0.017453292);
      fVar5 = (float)FUN_?(fVar2 * 0.017453292);
      fVar6 = fVar3 * 0.0;
      obj = (this->fields).line;
      if (obj == (LineRenderer *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_8 = CONCAT44(fVar5 * fVar3,fVar4 * fVar3);
      fStack_9 = fVar6;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar10,iVar1,&uStack_8);
      iVar12 = (this->fields).segments;
      if ((iVar1 % ((int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f) + iVar12 / 3 + (iVar12 >> 0x1f)) == 0) && ((this->fields).currIndex < 3)) {
        uVar13 = (this->fields).currIndex;
        pVVar14 = (this->fields).positions;
        (this->fields).currIndex = uVar13 + 1;
        if (pVVar14 == (Vector3__Array *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((uint)pVVar14->max_length <= uVar13) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pVVar14->vector[(int)uVar13].x = fVar4 * fVar3 * 2.5;
        pVVar14->vector[(int)uVar13].y = fVar5 * fVar3 * 2.5;
        pVVar14->vector[(int)uVar13].z = fVar6 * 2.5;
      }
      iVar1 = iVar1 + 1;
      fVar2 = fVar2 + 360.0 / (float)(this->fields).segments;
    } while (iVar1 < (this->fields).segments + 1);
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Initialize(RotatingShieldLine *this,MethodInfo *method)

{
  RotatingShieldLine_CreatePoints(this,(MethodInfo *)0x0);
  uVar1 = 0;
  pVVar2 = (this->fields).positions;
  uVar3 = uVar1;
  while (pVVar2 != (Vector3__Array *)0x0) {
    uVar4 = (uint)uVar3;
    if ((int)pVVar2->max_length <= (int)uVar4) {
      (this->fields).recreatOrbs = 0;
      return;
    }
    pVVar2 = (this->fields).positions;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length <= uVar4) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar6 = *(undefined8 *)((longlong)&pVVar2->vector[0].x + uVar1);
    uVar7 = *(undefined4 *)((longlong)&pVVar2->vector[0].z + uVar1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9 = (pVVar8->zeroVector).x;
    uVar10 = (pVVar8->zeroVector).y;
    fVar11 = (pVVar8->zeroVector).z;
    fVar12 = (float)FUN_?(0x437f0000);
    fVar13 = (float)FUN_?(0x437f0000);
    fVar14 = (float)FUN_?(0x437f0000);
    fVar15 = (float)FUN_?(0x437f0000);
    obj = (this->fields).orbSpawner;
    uStack_16 = (ulonglong)CONCAT31(CONCAT21(CONCAT11((char)(int)fVar15,(char)(int)fVar14),(char)(int)fVar13),(char)(int)fVar12);
    if (obj == (ParticleSystem *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uStack_17 = CONCAT44(uVar9,uVar7);
    uStack_18 = CONCAT44(fVar11,uVar10);
    uStack_19 = 0x3e99999a00000000;
    uStack_20 = 0x3e99999a3e99999a;
    uStack_21 = 0;
    uStack_22 = uStack_16;
    uStack_23 = 0;
    uStack_24 = 0x47c35000;
    uStack_25 = 0;
    uStack_26 = 0;
    uStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0x101;
    uStack_30 = 0x10100;
    uStack_31 = 1;
    uStack_32 = 0;
    uStack_33 = 0;
    uStack_34 = 0;
    uStack_35 = 0;
    uStack_36 = 0;
    uStack_37 = 0;
    uStack_38 = uVar6;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar39 = (obj->fields)._._.m_CachedPtr;
    if (pvVar39 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar39,&uStack_38,1);
    uVar3 = (ulonglong)(uVar4 + 1);
    uVar1 = uVar1 + 0xc;
    pVVar2 = (this->fields).positions;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSetHidden() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_OnSetHidden(RotatingShieldLine *this,MethodInfo *method)

{
  (this->fields).recreatOrbs = 1;
  return;
}


/* Void OnSetVisible() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_OnSetVisible(RotatingShieldLine *this,MethodInfo *method)

{
  if ((this->fields).recreatOrbs != 0) {
    fVar1 = 0.0;
    iVar2 = 0;
    do {
      fVar3 = (this->fields).radius;
      fVar4 = (float)FUN_?(fVar1 * 0.017453292);
      fVar5 = (float)FUN_?(fVar1 * 0.017453292);
      fVar1 = fVar1 + 120.0;
      uStack_6 = CONCAT44(fVar5 * fVar3 * 2.5,fVar4 * fVar3 * 2.5);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar8 = (pVVar7->zeroVector).x;
      uVar9 = (pVVar7->zeroVector).y;
      fVar4 = (pVVar7->zeroVector).z;
      fVar5 = (float)FUN_?(0x437f0000);
      fVar10 = (float)FUN_?(0x437f0000);
      fVar11 = (float)FUN_?(0x437f0000);
      fVar12 = (float)FUN_?(0x437f0000);
      obj = (this->fields).orbSpawner;
      uStack_13 = (ulonglong)CONCAT31(CONCAT21(CONCAT11((char)(int)fVar12,(char)(int)fVar11),(char)(int)fVar10),(char)(int)fVar5);
      if (obj == (ParticleSystem *)0x0) {
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uStack_15 = CONCAT44(uVar8,fVar3 * 0.0 * 2.5);
      uStack_16 = CONCAT44(fVar4,uVar9);
      uStack_17 = uStack_6;
      uStack_18 = 0x3e99999a00000000;
      uStack_19 = 0x3e99999a3e99999a;
      uStack_20 = 0;
      uStack_21 = uStack_13;
      uStack_22 = 0;
      uStack_23 = 0x47c35000;
      uStack_24 = 0;
      uStack_25 = 0;
      uStack_26 = 0;
      uStack_27 = 0;
      uStack_28 = 0x101;
      uStack_29 = 0x10100;
      uStack_30 = 1;
      uStack_31 = 0;
      uStack_32 = 0;
      uStack_33 = 0;
      uStack_34 = 0;
      uStack_35 = 0;
      uStack_36 = 0;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar37 = (obj->fields)._._.m_CachedPtr;
      if (pvVar37 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar38 = func_?(&UNK_?);
        FUN_?(uVar38,0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(pvVar37,&uStack_17,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Update(RotatingShieldLine *this,MethodInfo *method)

{
  this_00 = (this->fields).lineTransform;
  if (this_00 != (Transform *)0x0) {
    aVStack_1[0].x = (this->fields).lineRotationSpeed.x;
    aVStack_1[0].y = (this->fields).lineRotationSpeed.y;
    aVStack_1[0].z = (this->fields).lineRotationSpeed.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate(this_00,aVStack_1,Space__Enum_Self,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RotatingShieldLine() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine__ctor(RotatingShieldLine *this,MethodInfo *method)

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
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2));
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
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
                while (ppMVar20 = ppMVar19 + 0x3052af3c, ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1), *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
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
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_23 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      uStack_22 = 0;
      uStack_23 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
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
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) && (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18)))) goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) || (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar25._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar25._4_4_ = (pOVar7->_1).cctor_started;
  uVar25 = FUN_?(uVar25);
  FUN_?(uVar25,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

