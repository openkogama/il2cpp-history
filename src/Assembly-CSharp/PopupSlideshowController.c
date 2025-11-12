
/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController_PageTurned
               (PopupSlideshowController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value_00 = dir + (this->fields).currentPage;
  pLVar1 = (this->fields).pages;
  uVar2 = value_00 - 1;
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar3 = (this->fields).currentPage;
    if ((uint)(pLVar1->fields)._size <= iVar3 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = (pLVar1->fields)._items;
    if (pGVar5 != (GameObject__Array *)0x0) {
      if ((uint)pGVar5->max_length <= iVar3 - 1U) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pGVar5->vector[(longlong)iVar3 + -1] != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5->vector[(longlong)iVar3 + -1],0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).pages;
        if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
          pGVar5 = (pLVar1->fields)._items;
          if (pGVar5 != (GameObject__Array *)0x0) {
            if ((uint)pGVar5->max_length <= value_00 - 1U) goto code_?;
            if (pGVar5->vector[(longlong)value_00 + -1] != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5->vector[(longlong)value_00 + -1],1,(MethodInfo *)0x0);
              bVar6 = cRam_? == '\0';
              pTVar7 = (this->fields).currentPageText;
              (this->fields).currentPage = value_00;
              if (bVar6) {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
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
              aRStack_8[0]._pointer._value = (void *)0x0;
              aRStack_8[0]._length = 0;
              aRStack_8[0]._12_4_ = 0;
              pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (value_00,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              pLVar1 = (this->fields).pages;
              if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
                value = (pLVar1->fields)._size;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_8[0]._pointer._value = (void *)0x0;
                aRStack_8[0]._length = 0;
                aRStack_8[0]._12_4_ = 0;
                str2 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (value,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar9 = mscorlib.dll::System::String::String_Concat_5
                                   (pSVar9,::StringLiteral__,str2,(MethodInfo *)0x0);
                if (pTVar7 != (Text *)0x0) {
                  (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar9);
                  if ((this->fields).lastPageHasPageControls == 0) {
                    pLVar1 = (this->fields).pages;
                    if ((pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) ||
                       (pGVar10 = (this->fields).pageControls, pGVar10 == (GameObject *)0x0))
                    goto code_?;
                    bVar6 = uVar2 != (pLVar1->fields)._size - 1U;
                    pSVar9 = (String *)CONCAT71((int7)((ulonglong)pSVar9 >> 8),bVar6);
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar10,bVar6,(MethodInfo *)0x0);
                  }
                  pGVar10 = (this->fields).pageLeft;
                  if (pGVar10 != (GameObject *)0x0) {
                    uVar11 = (undefined7)((ulonglong)pSVar9 >> 8);
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar10,0 < (int)uVar2,(MethodInfo *)0x0);
                    pGVar10 = (this->fields).pageRight;
                    if ((pGVar10 != (GameObject *)0x0) &&
                       (pLVar1 = (this->fields).pages,
                       pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0)) {
                      bVar6 = (int)uVar2 < (pLVar1->fields)._size + -1;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                      ,CONCAT71(uVar11,bVar6),0);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pGVar10 == (GameObject *)0x0) {
                        FUN_?();
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pvVar12 = (pGVar10->fields)._.m_CachedPtr;
                      if (pvVar12 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pGVar10,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                        uVar13 = func_?(&UNK_?);
                        FUN_?(uVar13,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam_?)(pvVar12,bVar6);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController_Start
               (PopupSlideshowController *this,MethodInfo *method)

{
  (this->fields).currentPage = 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (this->fields).currentPage;
  pLVar1 = (this->fields).pages;
  uVar2 = value - 1;
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar3 = (this->fields).currentPage;
    if ((uint)(pLVar1->fields)._size <= iVar3 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = (pLVar1->fields)._items;
    if (pGVar5 != (GameObject__Array *)0x0) {
      if ((uint)pGVar5->max_length <= iVar3 - 1U) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pGVar5->vector[(longlong)iVar3 + -1] != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5->vector[(longlong)iVar3 + -1],0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).pages;
        if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
          pGVar5 = (pLVar1->fields)._items;
          if (pGVar5 != (GameObject__Array *)0x0) {
            if ((uint)pGVar5->max_length <= value - 1U) goto code_?;
            if (pGVar5->vector[(longlong)value + -1] != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5->vector[(longlong)value + -1],1,(MethodInfo *)0x0);
              bVar6 = cRam_? == '\0';
              pTVar7 = (this->fields).currentPageText;
              (this->fields).currentPage = value;
              if (bVar6) {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
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
              aRStack_8[0]._pointer._value = (void *)0x0;
              aRStack_8[0]._length = 0;
              aRStack_8[0]._12_4_ = 0;
              pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (value,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              pLVar1 = (this->fields).pages;
              if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
                value_00 = (pLVar1->fields)._size;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_8[0]._pointer._value = (void *)0x0;
                aRStack_8[0]._length = 0;
                aRStack_8[0]._12_4_ = 0;
                str2 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (value_00,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar9 = mscorlib.dll::System::String::String_Concat_5
                                   (pSVar9,::StringLiteral__,str2,(MethodInfo *)0x0);
                if (pTVar7 != (Text *)0x0) {
                  (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar9);
                  if ((this->fields).lastPageHasPageControls == 0) {
                    pLVar1 = (this->fields).pages;
                    if ((pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) ||
                       (pGVar10 = (this->fields).pageControls, pGVar10 == (GameObject *)0x0))
                    goto code_?;
                    bVar6 = uVar2 != (pLVar1->fields)._size - 1U;
                    pSVar9 = (String *)CONCAT71((int7)((ulonglong)pSVar9 >> 8),bVar6);
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar10,bVar6,(MethodInfo *)0x0);
                  }
                  pGVar10 = (this->fields).pageLeft;
                  if (pGVar10 != (GameObject *)0x0) {
                    uVar11 = (undefined7)((ulonglong)pSVar9 >> 8);
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar10,0 < (int)uVar2,(MethodInfo *)0x0);
                    pGVar10 = (this->fields).pageRight;
                    if ((pGVar10 != (GameObject *)0x0) &&
                       (pLVar1 = (this->fields).pages,
                       pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0)) {
                      bVar6 = (int)uVar2 < (pLVar1->fields)._size + -1;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                      ,CONCAT71(uVar11,bVar6),0);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pGVar10 == (GameObject *)0x0) {
                        FUN_?();
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pvVar12 = (pGVar10->fields)._.m_CachedPtr;
                      if (pvVar12 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pGVar10,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                        uVar13 = func_?(&UNK_?);
                        FUN_?(uVar13,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam_?)(pvVar12,bVar6);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

