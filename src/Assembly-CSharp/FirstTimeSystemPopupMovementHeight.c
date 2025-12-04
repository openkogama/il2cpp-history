
/* Void SetControl(KogamaControls) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::FirstTimeSystemPopupMovementHeight_SetControl(FirstTimeSystemPopupMovementHeight *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).controlImages;
  if (pLVar1 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (pLVar1->fields)._size - 1;
  if (-1 < (int)uVar3) {
    pLVar1 = (this->fields).controlImages;
    lVar4 = (longlong)(int)uVar3;
    lVar5 = lVar4 * 0x18;
    do {
      if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
      pFVar6 = (pLVar1->fields)._items;
      if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0) goto code_?;
      if ((uint)pFVar6->max_length <= uVar3) goto code_?;
      pGStack_7 = *(GameObject **)((longlong)&pFVar6->vector[0].checkMark + lVar5);
      if (control == *(KogamaControls__Enum *)((longlong)&pFVar6->vector[0].key + lVar5)) {
        if (pLVar1 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0) goto code_?;
        if (uVar3 < (uint)pFVar6->max_length) {
          pGStack_7 = pFVar6->vector[(int)uVar3].checkMark;
          pIVar8 = pFVar6->vector[(int)uVar3].control;
          if (pIVar8 == (Image *)0x0) goto code_?;
          fStack_9 = (this->fields).deactivated.r;
          fStack_10 = (this->fields).deactivated.g;
          fStack_11 = (this->fields).deactivated.b;
          fStack_12 = (this->fields).deactivated.a;
          (*(pIVar8->klass->vtable).set_color.methodPtr)(pIVar8,&fStack_9);
          pLVar1 = (this->fields).controlImages;
          if (pLVar1 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) goto code_?;
          if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
          pFVar6 = (pLVar1->fields)._items;
          if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0) goto code_?;
          if (uVar3 < (uint)pFVar6->max_length) {
            pGStack_7 = pFVar6->vector[(int)uVar3].checkMark;
            if (pGStack_7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGStack_7,1,(MethodInfo *)0x0);
              pLVar1 = (this->fields).controlImages;
              if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar3) {
                  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar13 = (pLVar1->fields)._size + -1;
                (pLVar1->fields)._size = iVar13;
                if ((int)uVar3 < iVar13) {
                  pFVar6 = (pLVar1->fields)._items;
                  mscorlib.dll::System::Array::Array_Copy_3((Array *)pFVar6,uVar3 + 1,(Array *)pFVar6,uVar3,iVar13 - uVar3,(MethodInfo *)0x0);
                }
                pFVar6 = (pLVar1->fields)._items;
                pGStack_7 = (GameObject *)0x0;
                if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar3 = (pLVar1->fields)._size;
                if ((uint)pFVar6->max_length <= uVar3) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                bVar14 = iRam_? != 0;
                piVar15 = &pFVar6->vector[(int)uVar3].key;
                *(undefined8 *)piVar15 = 0;
                *(Image **)(piVar15 + 2) = (Image *)0x0;
                pFVar6->vector[(int)uVar3].checkMark = (GameObject *)0x0;
                if (bVar14) {
                  uVar3 = (uint)((ulonglong)&pFVar6->vector[(int)uVar3].control >> 0xc);
                  puVar16 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar17 = *puVar16;
                    LOCK();
                    uVar18 = *puVar16;
                    if (uVar17 == uVar18) {
                      *puVar16 = uVar17 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar17 != uVar18);
                }
                piVar15 = &(pLVar1->fields)._version;
                *piVar15 = *piVar15 + 1;
                return;
              }
            }
            goto code_?;
          }
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + -0x18;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::FirstTimeSystemPopupMovementHeight_Update(FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeSystemPopupMovementHeight____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeSystemPopupMovementHeight____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1(KogamaControls__Enum_EditMoveUp,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovementHeight_SetControl(this,KogamaControls__Enum_EditMoveUp,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1(KogamaControls__Enum_EditMoveDown,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovementHeight_SetControl(this,KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).controlImages;
  if (pLVar2 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pLVar2->fields)._size == 0) {
    fVar4 = (this->fields).currentFade;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcRam_?)();
    this_00 = (this->fields).group;
    fVar6 = fVar6 + fVar4;
    (this->fields).currentFade = fVar6;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(this_00,1.0 - fVar6 / (this->fields).fadeDuration,(MethodInfo *)0x0);
    if ((this->fields).fadeDuration <= (this->fields).currentFade) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__FirstTimeSystemPopupMovementHeight____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FirstTimeSystemPopupMovementHeight____c);
      }
      this_01 = TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__FirstTimeSystemPopupMovementHeight____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FirstTimeSystemPopupMovementHeight____c);
        }
        object = TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,MethodInfo__FirstTimeSystemPopupMovementHeight____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
        TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0 = this_01;
        func_?(&TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
    }
  }
  return;
}


/* FirstTimeSystemPopupMovementHeight() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::FirstTimeSystemPopupMovementHeight__ctor(FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).deactivated.r = 0.75;
  (this->fields).deactivated.g = 0.75;
  (this->fields).deactivated.b = 0.75;
  (this->fields).deactivated.a = 0.75;
  (this->fields).fadeDuration = 0.4;
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
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
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
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
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
                while (ppMVar16 = ppMVar15 + 0x30529dd4, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_IsFinished() */

bool Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::FirstTimeSystemPopupMovementHeight_get_IsFinished(FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).controlImages;
  if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
    return (pLVar1->fields)._size == 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

