
/* ValueTuple`2[UnityEngine.Vector2,UnityEngine.Vector2] CalculateMinMaxSafeAreas() */

ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *
Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding_CalculateMinMaxSafeAreas
          (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *__return_storage_ptr__,
          SafeAreaPadding *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar5 = (*pcRam_?)();
  pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_cutouts((MethodInfo *)0x0);
  uVar7 = 0;
  if (pRVar6 == (Rect__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar3 = (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *)(*pcVar1)();
    return pVVar3;
  }
  uVar8 = (uint)pRVar6->max_length;
  pRVar9 = pRVar6->vector;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = (float)iVar5;
  fVar13 = (float)iVar4;
  while( true ) {
    if ((int)uVar8 <= (int)uVar7) {
      (__return_storage_ptr__->Item1).x = fVar10;
      (__return_storage_ptr__->Item1).y = fVar11;
      (__return_storage_ptr__->Item2).x = fVar13;
      (__return_storage_ptr__->Item2).y = fVar12;
      return __return_storage_ptr__;
    }
    if (uVar8 <= uVar7) break;
    fVar14 = pRVar9->m_XMin;
    fVar15 = pRVar9->m_YMin;
    fVar16 = fVar14 + pRVar9->m_Width;
    if (fVar16 < fVar10) {
      fVar16 = fVar10;
    }
    fVar17 = (float)((uint)(fVar12 - fVar11) & _UNK_?) *
             (float)((uint)(fVar13 - fVar16) & _UNK_?);
    fVar18 = fVar11;
    fVar19 = fVar13;
    fVar20 = fVar12;
    if (fVar17 <= 0.0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
    }
    if (fVar13 < fVar14) {
      fVar14 = fVar13;
    }
    fVar21 = (float)((uint)(fVar14 - fVar10) & _UNK_?) *
             (float)((uint)(fVar12 - fVar11) & _UNK_?);
    if (fVar17 < fVar21) {
      fVar16 = fVar10;
      fVar18 = fVar11;
      fVar19 = fVar14;
      fVar20 = fVar12;
      fVar17 = fVar21;
    }
    fVar14 = fVar15 + pRVar9->m_Height;
    if (fVar14 < fVar11) {
      fVar14 = fVar11;
    }
    fVar21 = (float)((uint)(fVar12 - fVar14) & _UNK_?) *
             (float)((uint)(fVar13 - fVar10) & _UNK_?);
    if (fVar17 < fVar21) {
      fVar16 = fVar10;
      fVar18 = fVar14;
      fVar19 = fVar13;
      fVar20 = fVar12;
      fVar17 = fVar21;
    }
    if (fVar15 <= fVar12) {
      fVar12 = fVar15;
    }
    if (fVar17 < (float)((uint)(fVar12 - fVar11) & _UNK_?) *
                 (float)((uint)(fVar13 - fVar10) & _UNK_?)) {
      fVar16 = fVar10;
      fVar18 = fVar11;
      fVar19 = fVar13;
      fVar20 = fVar12;
    }
    uVar7 = uVar7 + 1;
    pRVar9 = pRVar9 + 1;
    fVar10 = fVar16;
    fVar11 = fVar18;
    fVar12 = fVar20;
    fVar13 = fVar19;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pVVar3 = (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *)(*pcVar1)();
  return pVVar3;
}


/* SafeAreaPadding+MinMaxArea CalculateMinMaxWithLargestArea(Vector2, Vector2,
   SafeAreaPadding+MinMaxArea) */

SafeAreaPadding_MinMaxArea *
Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding_CalculateMinMaxWithLargestArea
          (SafeAreaPadding_MinMaxArea *__return_storage_ptr__,SafeAreaPadding *this,Vector2 min,
          Vector2 max,SafeAreaPadding_MinMaxArea *bestSetup,MethodInfo *method)

{
  fVar1 = (float)((uint)(max.y - min.y) & _UNK_?) *
          (float)((uint)(max.x - min.x) & _UNK_?);
  if (bestSetup->area < fVar1) {
    auVar2._8_4_ = max.x;
    auVar2._0_8_ = min;
    auVar2._12_4_ = max.y;
    __return_storage_ptr__->min = min;
    (__return_storage_ptr__->max).x = (float)(int)auVar2._8_8_;
    (__return_storage_ptr__->max).y = (float)(int)((ulonglong)auVar2._8_8_ >> 0x20);
    __return_storage_ptr__->area = fVar1;
    return __return_storage_ptr__;
  }
  VVar3 = bestSetup->max;
  fVar1 = bestSetup->area;
  __return_storage_ptr__->min = bestSetup->min;
  __return_storage_ptr__->max = VVar3;
  __return_storage_ptr__->area = fVar1;
  return __return_storage_ptr__;
}


/* Void Start() */

void Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding_Start
               (SafeAreaPadding *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_cutouts((MethodInfo *)0x0);
  uVar3 = 0;
  if (pRVar2 != (Rect__Array *)0x0) {
    uVar4 = (uint)pRVar2->max_length;
    pRVar5 = pRVar2->vector;
    for (; (int)uVar3 < (int)uVar4; uVar3 = uVar3 + 1) {
      if (uVar4 <= uVar3) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar7 = &pRVar5->m_Width;
      pfVar8 = &pRVar5->m_Height;
      pRVar5 = pRVar5 + 1;
      fVar1 = fVar1 + *pfVar8 * *pfVar7;
    }
    if (fVar1 <= (this->fields).cutoutAreaThreshold) {
      return;
    }
    this_00 = (RectTransform *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                        );
    pRVar9 = (this->fields).canvasRect;
    if (pRVar9 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aVStack_10[0].Item1.x = 0.0;
      aVStack_10[0].Item1.y = 0.0;
      aVStack_10[0].Item2.x = 0.0;
      aVStack_10[0].Item2.y = 0.0;
      pvVar11 = (pRVar9->fields)._._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar9,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar11);
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      iVar13 = (*pcRam_?)();
      pRVar9 = (this->fields).canvasRect;
      fVar1 = aVStack_10[0].Item2.x / (float)iVar13;
      if (pRVar9 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aVStack_10[0].Item1.x = 0.0;
        aVStack_10[0].Item1.y = 0.0;
        aVStack_10[0].Item2.x = 0.0;
        aVStack_10[0].Item2.y = 0.0;
        pvVar11 = (pRVar9->fields)._._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar9,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar11,aVStack_10);
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        iVar13 = (*pcRam_?)();
        fVar14 = aVStack_10[0].Item2.y / (float)iVar13;
        pVVar15 = SafeAreaPadding_CalculateMinMaxSafeAreas(aVStack_10,this,(MethodInfo *)0x0);
        fVar16 = (pVVar15->Item1).x;
        fVar17 = (pVVar15->Item2).x;
        fVar18 = (pVVar15->Item2).y;
        fVar19 = fVar14 * (pVVar15->Item1).y;
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        iVar13 = (*pcRam_?)();
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        iVar20 = (*pcRam_?)();
        fVar14 = (fVar18 - (float)iVar20) * fVar14;
        if (this_00 != (RectTransform *)0x0) {
          value.y = fVar19;
          value.x = (fVar17 - (float)iVar13) * fVar1;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_offsetMax
                    (this_00,value,(MethodInfo *)0x0);
          value_00.y = fVar14;
          value_00.x = fVar16 * fVar1;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_offsetMin
                    (this_00,value_00,(MethodInfo *)0x0);
          pRVar9 = (this->fields).canvasRect;
          if ((pRVar9 != (RectTransform *)0x0) &&
             (pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)pRVar9,
                                   UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                                  ), fVar18 = _UNK_?, fVar17 = _UNK_?,
             fVar16 = _UNK_?, fVar1 = _UNK_?, pOVar21 != (Object *)0x0)) {
            fVar22 = *(float *)((longlong)&pOVar21[2].monitor + 4);
            fVar14 = (float)((uint)fVar19 & _UNK_?) + *(float *)&pOVar21[3].klass +
                     (float)((uint)fVar14 & _UNK_?);
            *(float *)&pOVar21[3].klass = fVar14;
            if ((fVar17 < fVar22) && (fVar22 < fVar1)) {
              fVar19 = fVar18;
              if (0.0 <= fVar22) {
                fVar19 = fVar16;
              }
              *(float *)((longlong)&pOVar21[2].monitor + 4) = fVar19 * fVar1;
            }
            if (fVar14 <= fVar17) {
              return;
            }
            if (fVar1 <= fVar14) {
              return;
            }
            if (fVar14 < 0.0) {
              fVar16 = fVar18;
            }
            *(float *)&pOVar21[3].klass = fVar16 * fVar1;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SafeAreaPadding() */

void Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding__ctor
               (SafeAreaPadding *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).cutoutAreaThreshold = 5000.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
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
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
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
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
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
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

