
/* TexturePool() */

void Assembly-CSharp.dll::RTG::TexturePool::TexturePool__ctor(TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::TexturePool>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::TexturePool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__RTG__Singleton<RTG::TexturePool>;
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).field_0x1c != 0) {
    return;
  }
  ppMVar2 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar4 = ppMVar2;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar4;
      LOCK();
      bVar6 = uVar5 != uRam_?;
      uVar7 = uVar5;
      uVar8 = uVar5 + 1;
      if (bVar6) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar6) && (ppMVar4 = (MethodInfo **)(ulonglong)uVar7, uVar5 = uVar7, uVar7 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar9 = &(pSVar1->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar9 == 1;
  if (bVar6) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pSVar1->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar10 == 1;
  if (bVar6) {
    *puVar10 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar11 = &(pSVar1->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar5 == *psVar11;
    if (bVar6) {
      *psVar11 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar9 = &(pSVar1->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar9 == 1;
      if (bVar6) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pSVar1->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pSVar1->_1).cctor_started;
      if (lVar3 == 0) {
        (pSVar1->_1).initializationExceptionGCHandle = 0;
        (pSVar1->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pSVar1->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pSVar1->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pSVar1->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pSVar1->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pSVar1->_1).field_0x6e & 4) != 0) {
      FUN_?(pSVar1);
      ppMVar4 = ppMVar2;
      pIVar13 = (Il2CppClass *)pSVar1;
code_?:
      do {
        if (ppMVar4 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar4 = pIVar13->methods;
            pMVar14 = *ppMVar4;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar2;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar4 = ppMVar4 + 1;
          if (ppMVar4 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar4;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar4 = ppMVar2;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pSVar1->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pSVar1->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pSVar1->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar3 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar3 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pSVar1,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pSVar1->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pSVar1->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Texture2D get_CamOrthoMode() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_CamOrthoMode
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Textures_CamOrthoMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._camOrthoMode;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar2 = (Texture2D *)
           UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                     (StringLiteral_Textures_CamOrthoMode,(MethodInfo *)0x0);
  pTVar1 = (Texture2D *)0x0;
  if ((pTVar2 != (Texture2D *)0x0) && (pTVar2->klass == TypeInfo__UnityEngine__Texture2D)) {
    pTVar1 = pTVar2;
  }
  bVar3 = iRam_? == 0;
  (this->fields)._camOrthoMode = pTVar1;
  if (bVar3) {
    return pTVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._camOrthoMode >> 0xc);
  puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar6 = *puVar5;
    LOCK();
    uVar7 = *puVar5;
    if (uVar6 == uVar7) {
      *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (uVar6 != uVar7);
code_?:
  return (this->fields)._camOrthoMode;
}


/* Texture2D get_CamPerspMode() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_CamPerspMode
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Textures_CamPerspMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._camPerspMode;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar2 = (Texture2D *)
           UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                     (StringLiteral_Textures_CamPerspMode,(MethodInfo *)0x0);
  pTVar1 = (Texture2D *)0x0;
  if ((pTVar2 != (Texture2D *)0x0) && (pTVar2->klass == TypeInfo__UnityEngine__Texture2D)) {
    pTVar1 = pTVar2;
  }
  bVar3 = iRam_? == 0;
  (this->fields)._camPerspMode = pTVar1;
  if (bVar3) {
    return pTVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._camPerspMode >> 0xc);
  puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar6 = *puVar5;
    LOCK();
    uVar7 = *puVar5;
    if (uVar6 == uVar7) {
      *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (uVar6 != uVar7);
code_?:
  return (this->fields)._camPerspMode;
}


/* Texture2D get_XAxisLabel() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_XAxisLabel
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Textures_XAxisLabel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._xAxisLabel;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar2 = (Texture2D *)
           UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                     (StringLiteral_Textures_XAxisLabel,(MethodInfo *)0x0);
  pTVar1 = (Texture2D *)0x0;
  if ((pTVar2 != (Texture2D *)0x0) && (pTVar2->klass == TypeInfo__UnityEngine__Texture2D)) {
    pTVar1 = pTVar2;
  }
  bVar3 = iRam_? == 0;
  (this->fields)._xAxisLabel = pTVar1;
  if (bVar3) {
    return pTVar1;
  }
  uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
  puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar6 = *puVar5;
    LOCK();
    uVar7 = *puVar5;
    if (uVar6 == uVar7) {
      *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (uVar6 != uVar7);
code_?:
  return (this->fields)._xAxisLabel;
}


/* Texture2D get_YAxisLabel() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_YAxisLabel
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Textures_YAxisLabel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._yAxisLabel;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar2 = (Texture2D *)
           UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                     (StringLiteral_Textures_YAxisLabel,(MethodInfo *)0x0);
  pTVar1 = (Texture2D *)0x0;
  if ((pTVar2 != (Texture2D *)0x0) && (pTVar2->klass == TypeInfo__UnityEngine__Texture2D)) {
    pTVar1 = pTVar2;
  }
  bVar3 = iRam_? == 0;
  (this->fields)._yAxisLabel = pTVar1;
  if (bVar3) {
    return pTVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._yAxisLabel >> 0xc);
  puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar6 = *puVar5;
    LOCK();
    uVar7 = *puVar5;
    if (uVar6 == uVar7) {
      *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (uVar6 != uVar7);
code_?:
  return (this->fields)._yAxisLabel;
}


/* Texture2D get_ZAxisLabel() */

Texture2D *
Assembly-CSharp.dll::RTG::TexturePool::TexturePool_get_ZAxisLabel
          (TexturePool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Textures_ZAxisLabel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._zAxisLabel;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar2 = (Texture2D *)
           UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_Load
                     (StringLiteral_Textures_ZAxisLabel,(MethodInfo *)0x0);
  pTVar1 = (Texture2D *)0x0;
  if ((pTVar2 != (Texture2D *)0x0) && (pTVar2->klass == TypeInfo__UnityEngine__Texture2D)) {
    pTVar1 = pTVar2;
  }
  bVar3 = iRam_? == 0;
  (this->fields)._zAxisLabel = pTVar1;
  if (bVar3) {
    return pTVar1;
  }
  uVar4 = (uint)((ulonglong)&(this->fields)._zAxisLabel >> 0xc);
  puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar6 = *puVar5;
    LOCK();
    uVar7 = *puVar5;
    if (uVar6 == uVar7) {
      *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (uVar6 != uVar7);
code_?:
  return (this->fields)._zAxisLabel;
}

