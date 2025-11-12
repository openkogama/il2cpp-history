
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<CreateBubble>d__15::
     FirstTimeActivatablePointerObjectives_CreateBubble_d_15_MoveNext
               (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0___CreateBubble_b__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pFVar2 = (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)
             FUN_?(TypeInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0);
    bVar3 = iRam_? != 0;
    (this->fields).__8__1 = pFVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__8__1 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pFVar2 = (this->fields).__8__1;
    if (pFVar2 == (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    bVar3 = iRam_? != 0;
    (pFVar2->fields).__4__this = (this->fields).__4__this;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&pFVar2->fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    lVar5 = lRam_?;
    pOVar10 = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar10 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar10 + 1,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
      }
    }
    else {
      pOVar10 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar3 = iRam_? != 0;
    (this->fields).__2__current = pOVar10;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 1;
    bVar9 = 1;
  }
  else {
    if (iVar1 == 1) {
      pFVar2 = (this->fields).__8__1;
      (this->fields).__1__state = -1;
      if (pFVar2 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
        uVar4 = 0;
        bVar3 = iRam_? != 0;
        (pFVar2->fields).target = (RectTransform *)0x0;
        if (bVar3) {
          uVar11 = (uint)((ulonglong)&(pFVar2->fields).target >> 0xc);
          lVar5 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        if (this_00 != (FirstTimeActivatablePointerObjectives *)0x0) {
          lVar5 = 0x20;
          while (pLVar12 = (this_00->fields).winningConditionTransforms,
                pLVar12 != (List_1_UnityEngine_RectTransform_ *)0x0) {
            if ((pLVar12->fields)._size <= (int)uVar4) {
code_?:
              pFVar2 = (this->fields).__8__1;
              if (pFVar2 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
                pRVar13 = (pFVar2->fields).target;
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
                if (pRVar13 != (RectTransform *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((pRVar13->fields)._._._.m_CachedPtr != (void *)0x0) {
                    pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                    pFVar2 = (this->fields).__8__1;
                    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_02,(Object *)pFVar2,
                               MethodInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0___CreateBubble_b__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar14,(BaseEventData *)0x0,this_02,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                              );
                    goto code_?;
                  }
                }
                FirstTimeActivatablePointerObjectives::FirstTimeActivatablePointerObjectives_Destroy
                          (this_00,(MethodInfo *)0x0);
                goto code_?;
              }
              break;
            }
            if ((uint)(pLVar12->fields)._size <= uVar4) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            pRVar15 = (pLVar12->fields)._items;
            if (pRVar15 == (RectTransform__Array *)0x0) break;
            if ((uint)pRVar15->max_length <= uVar4) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            this_01 = *(Component **)((longlong)pRVar15->vector + lVar5 + -0x20);
            if ((this_01 == (Component *)0x0) ||
               (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0),
               pGVar14 == (GameObject *)0x0)) break;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar16 = (pGVar14->fields)._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar14,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            pcRam_? = pcVar8;
            cVar18 = (*pcRam_?)(pvVar16);
            if (cVar18 != '\0') {
              pFVar2 = (this->fields).__8__1;
              if (((this_00->fields).winningConditionTransforms !=
                   (List_1_UnityEngine_RectTransform_ *)0x0) &&
                 (pRVar13 = (RectTransform *)FUN_?(),
                 pFVar2 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0)) {
                (pFVar2->fields).target = pRVar13;
                func_?(&(pFVar2->fields).target);
                goto code_?;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 8;
          }
        }
      }
      goto code_?;
    }
code_?:
    bVar9 = 0;
  }
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<CreateBubble>d__15::
     FirstTimeActivatablePointerObjectives_CreateBubble_d_15_System_Collections_IEnumerator_Reset
               (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__FirstTimeActivatablePointerObjectives___CreateBubble_d__15__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

