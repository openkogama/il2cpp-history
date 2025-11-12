
/* Void Start() */

void Assembly-CSharp.dll::StreamedAudioClipManual::StreamedAudioClipManual_Start
               (StreamedAudioClipManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__Start__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.receiver = (StreamedAudioClip_IReceiver *)this;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.receiver >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pMVar6 = MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__Start__;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StreamedAsset_is_missing_a_refer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar7 = (this->fields)._._._.url;
  if ((pSVar7 == (String *)0x0) || ((pSVar7->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar7 = StringLiteral_StreamedAsset_is_missing_a_refer;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar8 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0,pSVar7);
    return;
  }
  pMVar6 = pMVar6->klass->rgctx_data[2].method;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar10 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar10 == 0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar11 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,(Object *)this,pMVar6->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar13 = pUVar11;
      }
      if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar11,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar13;
      pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar13 = pUVar11;
      }
      if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar11,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar3 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar1 = uVar5 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__Common__Urls);
    }
    pUVar11 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,(Object *)this,pMVar6->klass->rgctx_data[2].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    pUVar11 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pUVar11 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    }
    else {
      pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar13 = pUVar11;
      }
      if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar11,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar13;
      pUVar13 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar11->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar13 = pUVar11;
      }
      if (pUVar13 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        FUN_?(pUVar11,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
      lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar3 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar1 = uVar5 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    requestPriority = (this->fields)._._.requestPriority;
    onAssetSetAction = (this->fields)._._._.onAssetSetAction;
    pSVar7 = (this->fields)._._._.url;
    if ((this->fields)._._.useCache == 0) {
      StreamingAsset::StreamingAsset_Download_NonCached
                ((StreamingAsset *)this,pSVar7,onAssetSetAction,requestPriority,(MethodInfo *)0x0);
    }
    else {
      StreamingAsset::StreamingAsset_Download_Cached
                ((StreamingAsset *)this,pSVar7,onAssetSetAction,requestPriority,(MethodInfo *)0x0);
    }
  }
  return;
}


/* StreamedAudioClipManual() */

void Assembly-CSharp.dll::StreamedAudioClipManual::StreamedAudioClipManual__ctor
               (StreamedAudioClipManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__StreamingAsset__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamingAsset,
                  MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__StreamingAsset__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._._.useCache = 1;
  if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_NOT_SET);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._._._.url = StringLiteral_NOT_SET;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._._.url >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar1 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar12 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar2 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar16 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar7;
                while (ppMVar19 = ppMVar18 + 0x30528cee,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar5;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar8 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar3;
            LOCK();
            uVar5 = *puVar3;
            if (uVar4 == uVar5) {
              *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar5);
        }
      }
      FUN_?(pOVar6,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar20 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar6->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

