
/* Void SetControl(KogamaControls) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight_SetControl
               (FirstTimeSystemPopupMovementHeight *this,KogamaControls__Enum control,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Item_int_
                 );
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
      if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0)
      goto code_?;
      if ((uint)pFVar6->max_length <= uVar3) goto code_?;
      pGStack_7 = *(GameObject **)((longlong)&pFVar6->vector[0].checkMark + lVar5);
      if (control == *(KogamaControls__Enum *)((longlong)&pFVar6->vector[0].key + lVar5)) {
        if (pLVar1 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0)
        goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0)
        goto code_?;
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
          if (pLVar1 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0)
          goto code_?;
          if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
          pFVar6 = (pLVar1->fields)._items;
          if (pFVar6 == (FirstTimeSystemPopupMovementHeight_ControlImage__Array *)0x0)
          goto code_?;
          if (uVar3 < (uint)pFVar6->max_length) {
            pGStack_7 = pFVar6->vector[(int)uVar3].checkMark;
            if (pGStack_7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGStack_7,1,(MethodInfo *)0x0);
              pLVar1 = (this->fields).controlImages;
              if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar3) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar13 = (pLVar1->fields)._size + -1;
                (pLVar1->fields)._size = iVar13;
                if ((int)uVar3 < iVar13) {
                  pFVar6 = (pLVar1->fields)._items;
                  mscorlib.dll::System::Array::Array_Copy_3
                            ((Array *)pFVar6,uVar3 + 1,(Array *)pFVar6,uVar3,iVar13 - uVar3,
                             (MethodInfo *)0x0);
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

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight_Update
               (FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeSystemPopupMovementHeight____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
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
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveUp,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovementHeight_SetControl
              (this,KogamaControls__Enum_EditMoveUp,(MethodInfo *)0x0);
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
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveDown,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovementHeight_SetControl
              (this,KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__
                 );
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
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,_UNK_? - fVar6 / (this->fields).fadeDuration,(MethodInfo *)0x0);
    if ((this->fields).fadeDuration <= (this->fields).currentFade) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__FirstTimeSystemPopupMovementHeight____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FirstTimeSystemPopupMovementHeight____c);
      }
      this_01 = TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__FirstTimeSystemPopupMovementHeight____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FirstTimeSystemPopupMovementHeight____c);
        }
        object = TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__FirstTimeSystemPopupMovementHeight____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0 = this_01;
        func_?(&TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->
                             __9__9_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* FirstTimeSystemPopupMovementHeight() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight__ctor
               (FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  bVar2 = cRam_? == '\0';
  uVar3 = _UNK_?;
  (this->fields).deactivated.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields).deactivated.g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (this->fields).deactivated.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields).deactivated.a = (float)uVar3;
  (this->fields).fadeDuration = 0.4;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar6 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar7 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar8 = ppMVar6;
  if (lVar7 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar7 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar8;
      LOCK();
      bVar2 = uVar9 != uRam_?;
      uVar10 = uVar9;
      uVar11 = uVar9 + 1;
      if (bVar2) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar2) && (ppMVar8 = (MethodInfo **)(ulonglong)uVar10, uVar9 = uVar10, uVar10 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar7;
  puVar12 = &(pOVar5->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar12 == 1;
  if (bVar2) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar9 = uRam_?;
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
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar5->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar13 == 1;
  if (bVar2) {
    *puVar13 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar14 = &(pOVar5->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar9 == *psVar14;
    if (bVar2) {
      *psVar14 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar5->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar12 == 1;
      if (bVar2) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar7._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
      lVar7._4_4_ = (pOVar5->_1).cctor_started;
      if (lVar7 == 0) {
        (pOVar5->_1).initializationExceptionGCHandle = 0;
        (pOVar5->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar7 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar5->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar5->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar5->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar5->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar5);
      ppMVar8 = ppMVar6;
      pIVar16 = (Il2CppClass *)pOVar5;
code_?:
      do {
        if (ppMVar8 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar8 = pIVar16->methods;
            pMVar17 = *ppMVar8;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar6;
                while (ppMVar19 = ppMVar18 + 0x3052aacd,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar8 = ppMVar8 + 1;
          if (ppMVar8 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar8;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar8 = ppMVar6;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar5->_1).cctor_thread = 0;
    uVar20 = _UNK_?;
    uVar1 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar5->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar5->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_23 < 0x10) {
code_?:
      lVar7 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_22 = uVar1;
      uStack_23 = uVar20;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar7 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar25 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar26 = *puVar25;
            LOCK();
            uVar20 = *puVar25;
            if (uVar26 == uVar20) {
              *puVar25 = uVar26 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar26 != uVar20);
        }
      }
      FUN_?(pOVar5,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar1 = _UNK_?;
      uVar20 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar1._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
  uVar1._4_4_ = (pOVar5->_1).cctor_started;
  uVar1 = FUN_?(uVar1);
  FUN_?(uVar1,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Boolean get_IsFinished() */

bool Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight_get_IsFinished
               (FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__
                 );
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

