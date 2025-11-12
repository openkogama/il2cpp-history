
/* Void DebugStack() */

void Assembly-CSharp.dll::UIStack::UIStack_DebugStack(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UIGroupFlags);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral_____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____Debugging_UI_Stack____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____Debugging_UI_Stack____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_____Debugging_UI_Stack____,(MethodInfo *)0x0);
  pLVar1 = (this->fields).stackableUiElements;
  value = 0;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    lVar2 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)value) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          EStack_3.monitor = (MonitorData *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          EStack_3.monitor = (MonitorData *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          EStack_3.monitor = (MonitorData *)&UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          EStack_3.monitor = (MonitorData *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          EStack_3.monitor = (MonitorData *)&UNK_?;
          FUN_?();
        }
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 == (ILogger_1 *)0x0) {
          EStack_3.monitor = (MonitorData *)&UNK_?;
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        EStack_3.monitor = (MonitorData *)&UNK_?;
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3);
        return;
      }
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= value) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar6 = (pLVar1->fields)._items;
      if (pUVar6 == (UIStack_StackElement__Array *)0x0) break;
      if ((uint)pUVar6->max_length <= value) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = *(longlong *)((longlong)pUVar6->vector + lVar2 + -0x20);
      values = (String__Array *)FUN_?(TypeInfo__System__String,6);
      if (values == (String__Array *)0x0) break;
      if ((int)values->max_length == 0) goto code_?;
      bVar8 = iRam_? != 0;
      values->vector[0] = ::StringLiteral_____;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)values->vector >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_13._pointer._value = (void *)0x0;
      RStack_13._length = 0;
      RStack_13._12_4_ = 0;
      pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value,&RStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      iVar15 = iRam_?;
      if ((uint)values->max_length < 2) goto code_?;
      values->vector[1] = pSVar14;
      if (iVar15 != 0) {
        uVar9 = (uint)((ulonglong)(values->vector + 1) >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
          iVar15 = iRam_?;
        } while (!bVar8);
      }
      if ((uint)values->max_length < 3) goto code_?;
      values->vector[2] = ::StringLiteral___;
      if (iVar15 != 0) {
        uVar9 = (uint)((ulonglong)(values->vector + 2) >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      if (lVar7 == 0) break;
      EStack_3.klass = (Enum__Class *)TypeInfo__UIGroupFlags;
      uStack_16 = *(undefined4 *)(lVar7 + 0x28);
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar14 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      iVar15 = iRam_?;
      if ((uint)values->max_length < 4) goto code_?;
      values->vector[3] = pSVar14;
      if (iVar15 != 0) {
        uVar9 = (uint)((ulonglong)(values->vector + 3) >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
          iVar15 = iRam_?;
        } while (!bVar8);
      }
      if ((uint)values->max_length < 5) goto code_?;
      values->vector[4] = ::StringLiteral____;
      iVar17 = 0;
      if (iVar15 != 0) {
        uVar9 = (uint)((ulonglong)(values->vector + 4) >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
          iVar17 = iRam_?;
        } while (!bVar8);
      }
      if ((uint)values->max_length < 6) goto code_?;
      values->vector[5] = *(String **)(lVar7 + 0x30);
      if (iVar17 != 0) {
        uVar9 = (uint)((ulonglong)(values->vector + 5) >> 0xc);
        lVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar12 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pSVar14 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar14,(MethodInfo *)0x0);
      pLVar1 = (this->fields).stackableUiElements;
      value = value + 1;
      lVar2 = lVar2 + 8;
    } while (pLVar1 != (List_1_UIStack_StackElement_ *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void FindStackParent(Transform, Int32 ByRef) */

void Assembly-CSharp.dll::UIStack::UIStack_FindStackParent
               (UIStack *this,Transform *uiElement,int32_t *index,MethodInfo *method)

{
  do {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar1 = 0;
    lVar2 = 0x20;
    while( true ) {
      pLVar3 = (this->fields).stackableUiElements;
      if (pLVar3 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
      uVar4 = (pLVar3->fields)._size;
      if ((int)uVar4 <= (int)uVar1) break;
      if (uVar4 <= uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar6 = (pLVar3->fields)._items;
      if (pUVar6 == (UIStack_StackElement__Array *)0x0) goto code_?;
      if ((uint)pUVar6->max_length <= uVar1) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = *(longlong *)((longlong)pUVar6->vector + lVar2 + -0x20);
      if ((lVar7 == 0) || (this_00 = *(GameObject **)(lVar7 + 0x10), this_00 == (GameObject *)0x0))
      goto code_?;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
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
      if (uiElement == (Transform *)0x0 && pTVar8 == (Transform *)0x0) {
code_?:
        *index = uVar1;
        return;
      }
      if (uiElement == (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pTVar8 == (Transform *)0x0) goto code_?;
        bVar9 = (pTVar8->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (pTVar8 == (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar9 = (uiElement->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar9 = pTVar8 == uiElement;
      }
      if (bVar9) goto code_?;
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    }
    if (uiElement == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)uiElement,(MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) goto code_?;
    uiElement = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (pTVar8,(MethodInfo *)0x0);
  } while( true );
}


/* Void HideAll() */

void Assembly-CSharp.dll::UIStack::UIStack_HideAll(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).stackableUiElements;
  if ((List_1_UIStack_StackElement_ *)LStack_1._list == (List_1_UIStack_StackElement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UIStack_StackElement_ *)LStack_1._list)->fields)._version << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) goto code_?;
    obj = LStack_1._current[1].klass;
    if (obj == (Object__Class *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pcVar11 = (obj->_0).name;
    if (pcVar11 == (char *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      break;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
      goto code_?;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pcVar11,0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideAllExceptStackBottom() */

void Assembly-CSharp.dll::UIStack::UIStack_HideAllExceptStackBottom
               (UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).stackableUiElements;
  if ((List_1_UIStack_StackElement_ *)LStack_1._list == (List_1_UIStack_StackElement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UIStack_StackElement_ *)LStack_1._list)->fields)._version << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_1,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                        );
      if (bVar10 == 0) {
        return;
      }
      if (LStack_1._current == (Object *)0x0) goto code_?;
    } while (*(int *)&LStack_1._current[2].monitor == 0x100);
    if (LStack_1._current[1].klass == (Object__Class *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)LStack_1._current[1].klass,0,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsStackEmpty() */

bool Assembly-CSharp.dll::UIStack::UIStack_IsStackEmpty(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    return (pLVar1->fields)._size < 3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsUIElementBlocked(GameObject) */

bool Assembly-CSharp.dll::UIStack::UIStack_IsUIElementBlocked
               (UIStack *this,GameObject *uiElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsUIElementBlocked_index____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 0xffffffff;
  if (uiElement != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (uiElement,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields).stackableUiElements;
    uVar3 = 0;
    if (pLVar2 != (List_1_UIStack_StackElement_ *)0x0) {
      lVar4 = 0x20;
      while ((int)uVar3 < (pLVar2->fields)._size) {
        pLVar2 = (this->fields).stackableUiElements;
        if (pLVar2 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
        if ((uint)(pLVar2->fields)._size <= uVar3) goto code_?;
        pUVar5 = (pLVar2->fields)._items;
        if (pUVar5 == (UIStack_StackElement__Array *)0x0) goto code_?;
        if ((uint)pUVar5->max_length <= uVar3) goto code_?;
        lVar6 = *(longlong *)((longlong)pUVar5->vector + lVar4 + -0x20);
        if ((lVar6 == 0) || (this_00 = *(GameObject **)(lVar6 + 0x10), this_00 == (GameObject *)0x0)
           ) goto code_?;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
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
        if (pTVar1 == (Transform *)0x0 && pTVar7 == (Transform *)0x0) goto code_?;
        if (pTVar1 == (Transform *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar7 == (Transform *)0x0) goto code_?;
          bVar8 = (pTVar7->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar7 == (Transform *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar8 = (pTVar1->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar8 = pTVar7 == pTVar1;
        }
        if (bVar8) goto code_?;
        pLVar2 = (this->fields).stackableUiElements;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 8;
        if (pLVar2 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
      }
      if ((pTVar1 != (Transform *)0x0) &&
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar1,(MethodInfo *)0x0);
        UIStack_FindStackParent(this,pTVar1,(int32_t *)auStackX_10,(MethodInfo *)0x0);
        uVar3 = auStackX_10[0];
code_?:
        auStackX_10[0] = uVar3;
        if (auStackX_10[0] == 0xffffffff) {
          pSVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                             ((Object_1 *)uiElement,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uVar3 = auStackX_10[0];
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_10[0]._pointer._value = (void *)0x0;
          aRStack_10[0]._length = 0;
          aRStack_10[0]._12_4_ = 0;
          str2 = mscorlib.dll::System::Number::Number_FormatInt32
                           (uVar3,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar9 = mscorlib.dll::System::String::String_Concat_5
                             (pSVar9,StringLiteral_IsUIElementBlocked_index____,str2,
                              (MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar9,(MethodInfo *)0x0);
          return 0;
        }
        pLVar2 = (this->fields).stackableUiElements;
        auStackX_10[0] = auStackX_10[0] + 1;
        if (pLVar2 != (List_1_UIStack_StackElement_ *)0x0) {
          if ((pLVar2->fields)._size <= (int)auStackX_10[0]) {
            return 0;
          }
          lVar4 = (longlong)(int)auStackX_10[0] * 8 + 0x20;
          uVar3 = auStackX_10[0];
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
code_?:
  if ((pLVar2->fields)._size <= (int)uVar3) {
    return 0;
  }
  if ((uint)(pLVar2->fields)._size <= uVar3) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pUVar5 = (pLVar2->fields)._items;
  if (pUVar5 == (UIStack_StackElement__Array *)0x0) goto code_?;
  if ((uint)pUVar5->max_length <= uVar3) {
code_?:
    FUN_?();
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  lVar6 = *(longlong *)((longlong)pUVar5->vector + lVar4 + -0x20);
  if (lVar6 == 0) goto code_?;
  if (*(char *)(lVar6 + 0x18) != '\0') {
    return 1;
  }
  uVar3 = uVar3 + 1;
  lVar4 = lVar4 + 8;
  goto code_?;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::UIStack::UIStack_LateUpdate(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).stackableUiElements;
  if ((List_1_UIStack_StackElement_ *)LStack_1._list != (List_1_UIStack_StackElement_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_UIStack_StackElement_ *)LStack_1._list)->fields)._version << 0x20
                 );
    uStack_8 = 0;
    LStack_1._8_8_ = pLStack_7;
    LStack_1._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_1,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                        );
      if (bVar9 == 0) {
        return;
      }
      if (LStack_1._current == (Object *)0x0) break;
      if (*(char *)&LStack_1._current[1].monitor != '\0') {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GameObject Peak() */

GameObject * Assembly-CSharp.dll::UIStack::UIStack_Peak(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pGVar4 = (GameObject *)(*pcVar3)();
      return pGVar4;
    }
    pUVar5 = (pLVar1->fields)._items;
    if (pUVar5 != (UIStack_StackElement__Array *)0x0) {
      if ((uint)pUVar5->max_length <= iVar2 - 1U) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pGVar4 = (GameObject *)(*pcVar3)();
        return pGVar4;
      }
      if (pUVar5->vector[(longlong)iVar2 + -1] != (UIStack_StackElement *)0x0) {
        return (pUVar5->vector[(longlong)iVar2 + -1]->fields).gameObject;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GameObject *)(*pcVar3)();
  return pGVar4;
}


/* Void Pop() */

void Assembly-CSharp.dll::UIStack::UIStack_Pop(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UIStack_RemoveElement(this,(pLVar1->fields)._size + -1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    iVar3 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar3 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = (pLVar1->fields)._items;
    if (pUVar4 != (UIStack_StackElement__Array *)0x0) {
      if ((uint)pUVar4->max_length <= iVar3 - 1U) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pUVar4->vector[(longlong)iVar3 + -1] != (UIStack_StackElement *)0x0) &&
         (this_00 = (pUVar4->vector[(longlong)iVar3 + -1]->fields).gameObject,
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
          if (1 < (pLVar1->fields)._size) {
            uVar5 = (pLVar1->fields)._size;
            iVar3 = uVar5 - 2;
            lVar6 = (ulonglong)uVar5 * 8 + 0x18;
            do {
              uVar5 = uVar5 - 1;
              pLVar1 = (this->fields).stackableUiElements;
              if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
              if ((uint)(pLVar1->fields)._size <= uVar5) goto code_?;
              pUVar4 = (pLVar1->fields)._items;
              if (pUVar4 == (UIStack_StackElement__Array *)0x0) goto code_?;
              if ((uint)pUVar4->max_length <= uVar5) goto code_?;
              lVar7 = *(longlong *)((longlong)pUVar4->vector + lVar6 + -0x20);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x19) != '\0') break;
              lVar7 = FUN_?((this->fields).stackableUiElements);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x1b) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                  (lVar7 = FUN_?(pLVar1,iVar3), lVar7 == 0)) ||
                 (*(GameObject **)(lVar7 + 0x10) == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (*(GameObject **)(lVar7 + 0x10),1,(MethodInfo *)0x0);
              lVar6 = lVar6 + -8;
              iVar3 = iVar3 + -1;
            } while (-1 < iVar3);
          }
          UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
          if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
            return;
          }
          pAVar8 = (this->fields).uiStackChangedPublisher;
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopGroups(UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_PopGroups
               (UIStack *this,UIGroupFlags__Enum popGroups,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (pLVar1->fields)._size;
  uVar4 = (ulonglong)(int)uVar3;
  if (0 < (int)uVar3) {
    lVar5 = uVar4 * 8 + 0x18;
    do {
      uVar3 = uVar3 - 1;
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar6 = (pLVar1->fields)._items;
      if (pUVar6 == (UIStack_StackElement__Array *)0x0) goto code_?;
      if ((uint)pUVar6->max_length <= uVar3) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar7 = *(longlong *)((longlong)pUVar6->vector + lVar5 + -0x20);
      if (lVar7 == 0) goto code_?;
      if (0 < (int)(*(UIGroupFlags__Enum *)(lVar7 + 0x28) & popGroups)) {
        UIStack_RemoveElement(this,uVar3,(MethodInfo *)0x0);
      }
      uVar8 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar8;
      lVar5 = lVar5 + -8;
    } while (0 < (int)uVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    iVar9 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar9 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = (pLVar1->fields)._items;
    if (pUVar6 != (UIStack_StackElement__Array *)0x0) {
      if ((uint)pUVar6->max_length <= iVar9 - 1U) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pUVar6->vector[(longlong)iVar9 + -1] != (UIStack_StackElement *)0x0) &&
         (this_00 = (pUVar6->vector[(longlong)iVar9 + -1]->fields).gameObject,
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
          if (1 < (pLVar1->fields)._size) {
            uVar3 = (pLVar1->fields)._size;
            iVar9 = uVar3 - 2;
            lVar5 = (ulonglong)uVar3 * 8 + 0x18;
            do {
              uVar3 = uVar3 - 1;
              pLVar1 = (this->fields).stackableUiElements;
              if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
              if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
              pUVar6 = (pLVar1->fields)._items;
              if (pUVar6 == (UIStack_StackElement__Array *)0x0) goto code_?;
              if ((uint)pUVar6->max_length <= uVar3) goto code_?;
              lVar7 = *(longlong *)((longlong)pUVar6->vector + lVar5 + -0x20);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x19) != '\0') break;
              lVar7 = FUN_?((this->fields).stackableUiElements);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x1b) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                  (lVar7 = FUN_?(pLVar1,iVar9), lVar7 == 0)) ||
                 (*(GameObject **)(lVar7 + 0x10) == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (*(GameObject **)(lVar7 + 0x10),1,(MethodInfo *)0x0);
              lVar5 = lVar5 + -8;
              iVar9 = iVar9 + -1;
            } while (-1 < iVar9);
          }
          UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
          if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
            return;
          }
          pAVar10 = (this->fields).uiStackChangedPublisher;
          (*(pAVar10->fields)._._.invoke_impl)
                    ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopToGroup(UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_PopToGroup
               (UIStack *this,UIGroupFlags__Enum group,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__StackTraceUtility);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                        );
      if (bVar10 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__StackTraceUtility->_1).field_0x1c == 0) {
          FUN_?();
        }
        message = UnityEngine.CoreModule.dll::UnityEngine::StackTraceUtility::
                  StackTraceUtility_ExtractStackTrace((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)message,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_PopToGroup__Element_not_found_ab,(MethodInfo *)0x0);
        return;
      }
      if (LStack_9._current == (Object *)0x0) {
        FUN_?();
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    } while (*(UIGroupFlags__Enum *)&LStack_9._current[2].monitor != group);
    pLVar1 = (this->fields).stackableUiElements;
    while (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
      iVar12 = (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= iVar12 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pUVar13 = (pLVar1->fields)._items;
      if (pUVar13 == (UIStack_StackElement__Array *)0x0) break;
      if ((uint)pUVar13->max_length <= iVar12 - 1U) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (pUVar13->vector[(longlong)iVar12 + -1] == (UIStack_StackElement *)0x0) break;
      if ((pUVar13->vector[(longlong)iVar12 + -1]->fields).group == group) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) break;
      UIStack_RemoveElement(this,(pLVar1->fields)._size + -1,(MethodInfo *)0x0);
      UIStack_UpdateStack(this,(MethodInfo *)0x0);
      pLVar1 = (this->fields).stackableUiElements;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean PopToStackElement(GameObject) */

bool Assembly-CSharp.dll::UIStack::UIStack_PopToStackElement
               (UIStack *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,gameObject,method,in_R9,gameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__StackTraceUtility);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PopToStackElement__Element_not_f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
  uStack_10 = 0;
  LStack_11._8_8_ = pLStack_9;
  LStack_11._current = (Object *)0x0;
  uStack_5 = 0;
  pLStack_9 = &LStack_11;
  LStack_11._list = (List_1_System_Object_ *)pLVar1;
  do {
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       (&LStack_11,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                       );
    if (bVar3 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__StackTraceUtility->_1).field_0x1c == 0) {
        FUN_?();
      }
      message = UnityEngine.CoreModule.dll::UnityEngine::StackTraceUtility::
                StackTraceUtility_ExtractStackTrace((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_PopToStackElement__Element_not_f,(MethodInfo *)0x0);
      return 0;
    }
    if (LStack_11._current == (Object *)0x0) goto code_?;
    pOVar12 = LStack_11._current[1].klass;
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
    if (gameObject == (GameObject *)0x0 && pOVar12 == (Object__Class *)0x0) break;
    if (gameObject == (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar12 == (Object__Class *)0x0) goto code_?;
      bVar13 = (((GameObject__Fields *)&(pOVar12->_0).name)->_).m_CachedPtr == (void *)0x0;
    }
    else if (pOVar12 == (Object__Class *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar13 = (gameObject->fields)._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar13 = pOVar12 == (Object__Class *)gameObject;
    }
  } while (!bVar13);
  do {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).stackableUiElements;
    if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    iVar14 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar14 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pUVar15 = (pLVar1->fields)._items;
    if (pUVar15 == (UIStack_StackElement__Array *)0x0) goto code_?;
    if ((uint)pUVar15->max_length <= iVar14 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pUVar15->vector[(longlong)iVar14 + -1] == (UIStack_StackElement *)0x0) ||
       (pGVar16 = (pUVar15->vector[(longlong)iVar14 + -1]->fields).gameObject,
       pGVar16 == (GameObject *)0x0)) goto code_?;
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
    if (gameObject == (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar13 = (pGVar16->fields)._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar13 = pGVar16 == gameObject;
    }
    if (bVar13) {
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).stackableUiElements;
    if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    UIStack_RemoveElement(this,(pLVar1->fields)._size + -1,(MethodInfo *)0x0);
    UIStack_UpdateStack(this,(MethodInfo *)0x0);
  } while( true );
}


/* Void Push(GameObject, UIPushOption, UnityAction, UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_Push
               (UIStack *this,GameObject *gameObject,UIPushOption__Enum pushOption,
               UnityAction *onPop,UIGroupFlags__Enum group,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UIStackDebugElement_MethodInfo__UnityEngine__GameObject__AddComponent<UIStackDebugElement>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__Add_UIStack__StackElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UIStack__StackElement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_cannot_push_an_object_to_the);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Group_cannot_be_none_as_this_mak);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (group == UIGroupFlags__Enum_None) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Group_cannot_be_none_as_this_mak;
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
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar4 = (this->fields).stackableUiElements;
  uVar5 = 0;
  if (pLVar4 != (List_1_UIStack_StackElement_ *)0x0) {
    lVar6 = 0x20;
    while ((int)uVar5 < (pLVar4->fields)._size) {
      pLVar4 = (this->fields).stackableUiElements;
      if (pLVar4 == (List_1_UIStack_StackElement_ *)0x0) goto DAT_?;
      if ((uint)(pLVar4->fields)._size <= uVar5) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = (pLVar4->fields)._items;
      if (pUVar7 == (UIStack_StackElement__Array *)0x0) goto DAT_?;
      if ((uint)pUVar7->max_length <= uVar5) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = *(longlong *)((longlong)pUVar7->vector + lVar6 + -0x20);
      if (((lVar8 == 0) || (this_00 = *(Object_1 **)(lVar8 + 0x10), this_00 == (Object_1 *)0x0)) ||
         (iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                             (this_00,(MethodInfo *)0x0), gameObject == (GameObject *)0x0))
      goto DAT_?;
      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                         ((Object_1 *)gameObject,(MethodInfo *)0x0);
      if (iVar9 == iVar10) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_You_cannot_push_an_object_to_the,(MethodInfo *)0x0);
        return;
      }
      pLVar4 = (this->fields).stackableUiElements;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
      if (pLVar4 == (List_1_UIStack_StackElement_ *)0x0) goto DAT_?;
    }
    this_02 = (UIStack_StackElement *)FUN_?(TypeInfo__UIStack__StackElement);
    UIStack+StackElement::UIStack_StackElement__ctor
              (this_02,gameObject,pushOption,onPop,group,(MethodInfo *)0x0);
    if (this_02 != (UIStack_StackElement *)0x0) {
      if ((this_02->fields).hideAll != 0) {
        UIStack_HideAll(this,(MethodInfo *)0x0);
      }
      if ((this_02->fields).hideAllExceptStackbottom != 0) {
        UIStack_HideAllExceptStackBottom(this,(MethodInfo *)0x0);
      }
      if ((this_02->fields).blockingObject != 0) {
        pGVar11 = (this->fields).blockingObject;
        if ((pGVar11 == (GameObject *)0x0) ||
           (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar11,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
        goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar12,(MethodInfo *)0x0);
        this_01 = (this->fields).inputBlocker;
        if (this_01 == (DisableInput *)0x0) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,(this_02->fields).suppressInput,(MethodInfo *)0x0);
        pGVar11 = (this->fields).blockingObject;
        if (pGVar11 == (GameObject *)0x0) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,1,(MethodInfo *)0x0);
      }
      pGVar11 = (this_02->fields).gameObject;
      if (pGVar11 != (GameObject *)0x0) {
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar11,(MethodInfo *)0x0);
        pGVar11 = (this->fields).root;
        if ((pGVar11 != (GameObject *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar11,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar12,parent,0,(MethodInfo *)0x0);
          pGVar11 = (this_02->fields).gameObject;
          if (pGVar11 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,1,(MethodInfo *)0x0);
            pMVar13 = 
            MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__Add_UIStack__StackElement_
            ;
            pLVar4 = (this->fields).stackableUiElements;
            if (pLVar4 != (List_1_UIStack_StackElement_ *)0x0) {
              piVar14 = &(pLVar4->fields)._version;
              *piVar14 = *piVar14 + 1;
              pUVar7 = (pLVar4->fields)._items;
              if (pUVar7 != (UIStack_StackElement__Array *)0x0) {
                uVar5 = (pLVar4->fields)._size;
                if (uVar5 < (uint)pUVar7->max_length) {
                  (pLVar4->fields)._size = uVar5 + 1;
                  FUN_?(pUVar7,(longlong)(int)uVar5,this_02);
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__AddWithResize
                            ((List_1_System_Object_ *)pLVar4,(Object *)this_02,
                             pMVar13->klass->rgctx_data[0xe].method);
                }
                if ((this->fields).stackReady == 0) {
                  UIStack_HideAll(this,(MethodInfo *)0x0);
                }
                UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
                if ((this->fields).uiStackChangedPublisher != (Action *)0x0) {
                  pAVar15 = (this->fields).uiStackChangedPublisher;
                  (*(pAVar15->fields)._._.invoke_impl)
                            ((pAVar15->fields)._._.method_code,(pAVar15->fields)._._.method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveElement(Int32) */

void Assembly-CSharp.dll::UIStack::UIStack_RemoveElement
               (UIStack *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stackableUiElements;
  if (this_00 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((uint)(this_00->fields)._size <= (uint)index) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar2 = (this_00->fields)._items;
    if (pUVar2 != (UIStack_StackElement__Array *)0x0) {
      if ((uint)pUVar2->max_length <= (uint)index) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = pUVar2->vector[index];
      if ((this_00 != (List_1_UIStack_StackElement_ *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)this_00,index,
                     MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__RemoveAt_int_
                    ), pUVar3 != (UIStack_StackElement *)0x0)) {
        if ((pUVar3->fields).onPop != (UnityAction *)0x0) {
          pUVar4 = (pUVar3->fields).onPop;
          (**(void **)((longlong)&(pUVar4->fields)._._ + 8))
                    (*(void **)((longlong)&(pUVar4->fields)._._ + 0x30),
                     *(void **)((longlong)&(pUVar4->fields)._._ + 0x18));
        }
        pGVar5 = (pUVar3->fields).gameObject;
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
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                        ,0,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pvVar6 = (void *)0x0;
        if (pGVar5 != (GameObject *)0x0) {
          pvVar6 = (pGVar5->fields)._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetStackReady() */

void Assembly-CSharp.dll::UIStack::UIStack_SetStackReady(UIStack *this,MethodInfo *method)

{
  (this->fields).stackReady = 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar4 = (pLVar1->fields)._items;
    if (pUVar4 != (UIStack_StackElement__Array *)0x0) {
      if ((uint)pUVar4->max_length <= iVar2 - 1U) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pUVar4->vector[(longlong)iVar2 + -1] != (UIStack_StackElement *)0x0) &&
         (this_00 = (pUVar4->vector[(longlong)iVar2 + -1]->fields).gameObject,
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
          if (1 < (pLVar1->fields)._size) {
            uVar5 = (pLVar1->fields)._size;
            iVar2 = uVar5 - 2;
            lVar6 = (ulonglong)uVar5 * 8 + 0x18;
            do {
              uVar5 = uVar5 - 1;
              pLVar1 = (this->fields).stackableUiElements;
              if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
              if ((uint)(pLVar1->fields)._size <= uVar5) goto code_?;
              pUVar4 = (pLVar1->fields)._items;
              if (pUVar4 == (UIStack_StackElement__Array *)0x0) goto code_?;
              if ((uint)pUVar4->max_length <= uVar5) goto code_?;
              lVar7 = *(longlong *)((longlong)pUVar4->vector + lVar6 + -0x20);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x19) != '\0') break;
              lVar7 = FUN_?((this->fields).stackableUiElements);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x1b) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                  (lVar7 = FUN_?(pLVar1,iVar2), lVar7 == 0)) ||
                 (*(GameObject **)(lVar7 + 0x10) == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (*(GameObject **)(lVar7 + 0x10),1,(MethodInfo *)0x0);
              lVar6 = lVar6 + -8;
              iVar2 = iVar2 + -1;
            } while (-1 < iVar2);
          }
          UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
          if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
            return;
          }
          pAVar8 = (this->fields).uiStackChangedPublisher;
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetStackVisible() */

void Assembly-CSharp.dll::UIStack::UIStack_SetStackVisible(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if (1 < (pLVar1->fields)._size) {
      uVar2 = (pLVar1->fields)._size;
      iVar3 = uVar2 - 2;
      lVar4 = (ulonglong)uVar2 * 8 + 0x18;
      do {
        uVar2 = uVar2 - 1;
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar6 = (pLVar1->fields)._items;
        if (pUVar6 == (UIStack_StackElement__Array *)0x0) goto code_?;
        if ((uint)pUVar6->max_length <= uVar2) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar7 = *(longlong *)((longlong)pUVar6->vector + lVar4 + -0x20);
        if (lVar7 == 0) goto code_?;
        if (*(char *)(lVar7 + 0x19) != '\0') {
          return;
        }
        lVar7 = FUN_?((this->fields).stackableUiElements,uVar2);
        if (lVar7 == 0) goto code_?;
        if (*(char *)(lVar7 + 0x1b) != '\0') {
          return;
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
            (lVar7 = FUN_?(pLVar1,iVar3), lVar7 == 0)) ||
           (*(GameObject **)(lVar7 + 0x10) == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(lVar7 + 0x10),1,(MethodInfo *)0x0);
        lVar4 = lVar4 + -8;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UIStack::UIStack_Start(UIStack *this,MethodInfo *method)

{
  pIVar1 = (this->fields).blockingObjectImage;
  if (pIVar1 != (Image *)0x0) {
    lVar2 = (*(pIVar1->klass->vtable).get_color.methodPtr)
                      (auStack_3,pIVar1,(pIVar1->klass->vtable).get_color.method);
    (this->fields).origBlockerAlpha = *(float *)(lVar2 + 0xc);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SubscribeToStackChanges(Action) */

void Assembly-CSharp.dll::UIStack::UIStack_SubscribeToStackChanges
               (UIStack *this,Action *onStackChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)(this->fields).uiStackChangedPublisher,(Delegate *)onStackChanged,
                      (MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (this->fields).uiStackChangedPublisher = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).uiStackChangedPublisher = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).uiStackChangedPublisher >> 0xc);
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
  }
  return;
}


/* Void UnSubscribeToStackChanges(Action) */

void Assembly-CSharp.dll::UIStack::UIStack_UnSubscribeToStackChanges
               (UIStack *this,Action *onStackChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)(this->fields).uiStackChangedPublisher,(Delegate *)onStackChanged,
                      (MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (this->fields).uiStackChangedPublisher = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).uiStackChangedPublisher = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).uiStackChangedPublisher >> 0xc);
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
  }
  return;
}


/* Void UpdateBlocking() */

void Assembly-CSharp.dll::UIStack::UIStack_UpdateBlocking(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    uVar2 = (pLVar1->fields)._size - 1;
    if (-1 < (int)uVar2) {
      lVar3 = (longlong)(int)uVar2;
      lVar4 = lVar3 * 8 + 0x20;
      do {
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar6 = (pLVar1->fields)._items;
        if (pUVar6 == (UIStack_StackElement__Array *)0x0) goto code_?;
        if ((uint)pUVar6->max_length <= uVar2) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar7 = *(longlong *)((longlong)pUVar6->vector + lVar4 + -0x20);
        if (lVar7 == 0) goto code_?;
        if (*(char *)(lVar7 + 0x18) != '\0') {
          lVar4 = FUN_?(pLVar1,uVar2);
          if (lVar4 == 0) goto code_?;
          pIVar8 = (this->fields).blockingObjectImage;
          if (*(char *)(lVar4 + 0x1a) == '\0') {
            if (pIVar8 == (Image *)0x0) goto code_?;
            puVar9 = (undefined4 *)
                      (*(pIVar8->klass->vtable).get_color.methodPtr)
                                (&uStack_10,pIVar8,(pIVar8->klass->vtable).get_color.method);
            pIVar8 = (this->fields).blockingObjectImage;
            uVar11 = *puVar9;
            uVar12 = puVar9[1];
            uVar13 = puVar9[2];
            fVar14 = (this->fields).origBlockerAlpha;
            if (pIVar8 == (Image *)0x0) goto code_?;
          }
          else {
            if (pIVar8 == (Image *)0x0) goto code_?;
            puVar9 = (undefined4 *)
                      (*(pIVar8->klass->vtable).get_color.methodPtr)
                                (&uStack_10,pIVar8,(pIVar8->klass->vtable).get_color.method);
            pIVar8 = (this->fields).blockingObjectImage;
            if (pIVar8 == (Image *)0x0) goto code_?;
            fStack_15 = 0.0;
            uVar11 = *puVar9;
            uVar12 = puVar9[1];
            uVar13 = puVar9[2];
            fVar14 = fStack_15;
          }
          fStack_15 = fVar14;
          uStack_16 = uVar13;
          uStack_17 = uVar12;
          uStack_10 = uVar11;
          (*(pIVar8->klass->vtable).set_color.methodPtr)();
          pGVar18 = (this->fields).blockingObject;
          if (((((pGVar18 == (GameObject *)0x0) ||
                (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
                pTVar19 == (Transform *)0x0)) ||
               (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                          (pTVar19,(MethodInfo *)0x0),
               (this->fields).stackableUiElements == (List_1_UIStack_StackElement_ *)0x0)) ||
              ((lVar4 = FUN_?(), lVar4 == 0 ||
               (*(GameObject **)(lVar4 + 0x10) == (GameObject *)0x0)))) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (*(GameObject **)(lVar4 + 0x10),(MethodInfo *)0x0),
             pTVar19 == (Transform *)0x0)) goto code_?;
          index = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                            (pTVar19,(MethodInfo *)0x0);
          pGVar18 = (this->fields).blockingObject;
          if ((pGVar18 == (GameObject *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar18,(MethodInfo *)0x0), pTVar19 == (Transform *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar19,index,(MethodInfo *)0x0);
          pGVar18 = (this->fields).blockingObject;
          if (pGVar18 == (GameObject *)0x0) goto code_?;
          uVar20 = 1;
          goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
        }
        uVar2 = uVar2 - 1;
        lVar4 = lVar4 + -8;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    pGVar18 = (this->fields).blockingObject;
    if ((pGVar18 != (GameObject *)0x0) &&
       (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar18,(MethodInfo *)0x0), pTVar19 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar19,(MethodInfo *)0x0);
      pGVar18 = (this->fields).blockingObject;
      if (pGVar18 != (GameObject *)0x0) {
        uVar20 = 0;
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,uVar20,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar18 == (GameObject *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar21 = (pGVar18->fields)._.m_CachedPtr;
        if (pvVar21 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar18,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar21,uVar20);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateStack() */

void Assembly-CSharp.dll::UIStack::UIStack_UpdateStack(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar4 = (pLVar1->fields)._items;
    if (pUVar4 != (UIStack_StackElement__Array *)0x0) {
      if ((uint)pUVar4->max_length <= iVar2 - 1U) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pUVar4->vector[(longlong)iVar2 + -1] != (UIStack_StackElement *)0x0) &&
         (this_00 = (pUVar4->vector[(longlong)iVar2 + -1]->fields).gameObject,
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
          if (1 < (pLVar1->fields)._size) {
            uVar5 = (pLVar1->fields)._size;
            iVar2 = uVar5 - 2;
            lVar6 = (ulonglong)uVar5 * 8 + 0x18;
            do {
              uVar5 = uVar5 - 1;
              pLVar1 = (this->fields).stackableUiElements;
              if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
              if ((uint)(pLVar1->fields)._size <= uVar5) goto code_?;
              pUVar4 = (pLVar1->fields)._items;
              if (pUVar4 == (UIStack_StackElement__Array *)0x0) goto code_?;
              if ((uint)pUVar4->max_length <= uVar5) goto code_?;
              lVar7 = *(longlong *)((longlong)pUVar4->vector + lVar6 + -0x20);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x19) != '\0') break;
              lVar7 = FUN_?((this->fields).stackableUiElements);
              if (lVar7 == 0) goto code_?;
              if (*(char *)(lVar7 + 0x1b) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                  (lVar7 = FUN_?(pLVar1,iVar2), lVar7 == 0)) ||
                 (*(GameObject **)(lVar7 + 0x10) == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (*(GameObject **)(lVar7 + 0x10),1,(MethodInfo *)0x0);
              lVar6 = lVar6 + -8;
              iVar2 = iVar2 + -1;
            } while (-1 < iVar2);
          }
          UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
          if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
            return;
          }
          pAVar8 = (this->fields).uiStackChangedPublisher;
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* UIStack() */

void Assembly-CSharp.dll::UIStack::UIStack__ctor(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UIStack::StackElement>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).origBlockerAlpha = 0.5;
  this_00 = (List_1_UIStack_StackElement_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UIStack::StackElement>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).stackableUiElements = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).stackableUiElements >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}

