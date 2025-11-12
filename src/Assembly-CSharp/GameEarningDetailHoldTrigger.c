
/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GameEarningDetailHoldTrigger::GameEarningDetailHoldTrigger_OnPointerEnter
               (GameEarningDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  pGVar1 = (this->fields).earningsMenu;
  if (pGVar1 == (GameEarningsMenu *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pGVar1->fields).currentFocusedEarning = (this->fields).earningToShowDetailsFor;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  (pGVar1->fields).interpolationStartTime = fVar4;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar5 = (pGVar1->fields).displayedSmallGoldIcon;
  if ((pGVar1->fields).currentFocusedEarning == -1) {
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pGVar5 = (pGVar1->fields).displayedLargeGoldIcon;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
        pTVar6 = (pGVar1->fields).displayedEarningsDescriptionText;
        if (pTVar6 != (Text *)0x0) {
          (*(pTVar6->klass->vtable).set_text.methodPtr)
                    (pTVar6,::StringLiteral__,(pTVar6->klass->vtable).set_text.method);
          pTVar6 = (pGVar1->fields).displayedEarningsAmountText;
          if (pTVar6 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pTVar6->klass->vtable).set_text.methodPtr)
                      (pTVar6,::StringLiteral__,(pTVar6->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
  }
  else if (pGVar5 != (GameObject *)0x0) {
    if ((pGVar1->fields).currentFocusedEarning == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (pGVar1->fields).displayedLargeGoldIcon;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pTVar6 = (pGVar1->fields).displayedEarningsDescriptionText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,StringLiteral_Boosters_,(pTVar6->klass->vtable).set_text.method);
      pLVar7 = (pGVar1->fields).tierEarnings;
      pTVar6 = (pGVar1->fields).displayedEarningsAmountText;
      if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar8 = (pGVar1->fields).currentFocusedEarning;
      if ((uint)(pLVar7->fields)._size <= iVar8 + 1U) goto code_?;
      pIVar9 = (pLVar7->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar9->max_length <= iVar8 + 1U) goto code_?;
      aIStackX_8[0].m_value = pIVar9->vector[(longlong)iVar8 + 1];
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (pGVar1->fields).displayedLargeGoldIcon;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pTVar6 = (pGVar1->fields).displayedEarningsDescriptionText;
      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(pGVar1->fields).currentFocusedEarning,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar10,(MethodInfo *)0x0);
      if (pTVar6 == (Text *)0x0) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,pSVar10,(pTVar6->klass->vtable).set_text.method);
      pLVar7 = (pGVar1->fields).tierEarnings;
      pTVar6 = (pGVar1->fields).displayedEarningsAmountText;
      if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar8 = (pGVar1->fields).currentFocusedEarning;
      if ((uint)(pLVar7->fields)._size <= iVar8 + 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar9 = (pLVar7->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar9->max_length <= iVar8 + 1U) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      aIStackX_8[0].m_value = pIVar9->vector[(longlong)iVar8 + 1];
    }
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar6,pSVar10,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GameEarningDetailHoldTrigger::GameEarningDetailHoldTrigger_OnPointerExit
               (GameEarningDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  pGVar2 = (this->fields).earningsMenu;
  if (pGVar2 == (GameEarningsMenu *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (pGVar2->fields).currentFocusedEarning = -1;
  pcVar3 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcVar1)();
  (pGVar2->fields).interpolationStartTime = fVar5;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = (pGVar2->fields).displayedSmallGoldIcon;
  if ((pGVar2->fields).currentFocusedEarning == -1) {
    if (pGVar6 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      pGVar6 = (pGVar2->fields).displayedLargeGoldIcon;
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
        pTVar7 = (pGVar2->fields).displayedEarningsDescriptionText;
        if (pTVar7 != (Text *)0x0) {
          (*(pTVar7->klass->vtable).set_text.methodPtr)
                    (pTVar7,::StringLiteral__,(pTVar7->klass->vtable).set_text.method);
          pTVar7 = (pGVar2->fields).displayedEarningsAmountText;
          if (pTVar7 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pTVar7->klass->vtable).set_text.methodPtr)
                      (pTVar7,::StringLiteral__,(pTVar7->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
  }
  else if (pGVar6 != (GameObject *)0x0) {
    if ((pGVar2->fields).currentFocusedEarning == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
      pGVar6 = (pGVar2->fields).displayedLargeGoldIcon;
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      pTVar7 = (pGVar2->fields).displayedEarningsDescriptionText;
      if (pTVar7 == (Text *)0x0) goto code_?;
      (*(pTVar7->klass->vtable).set_text.methodPtr)
                (pTVar7,StringLiteral_Boosters_,(pTVar7->klass->vtable).set_text.method);
      pLVar8 = (pGVar2->fields).tierEarnings;
      pTVar7 = (pGVar2->fields).displayedEarningsAmountText;
      if (pLVar8 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar9 = (pGVar2->fields).currentFocusedEarning;
      if ((uint)(pLVar8->fields)._size <= iVar9 + 1U) goto code_?;
      pIVar10 = (pLVar8->fields)._items;
      if (pIVar10 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar10->max_length <= iVar9 + 1U) goto code_?;
      aIStackX_8[0].m_value = pIVar10->vector[(longlong)iVar9 + 1];
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
      pGVar6 = (pGVar2->fields).displayedLargeGoldIcon;
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      pTVar7 = (pGVar2->fields).displayedEarningsDescriptionText;
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(pGVar2->fields).currentFocusedEarning,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar11,(MethodInfo *)0x0);
      if (pTVar7 == (Text *)0x0) goto code_?;
      (*(pTVar7->klass->vtable).set_text.methodPtr)
                (pTVar7,pSVar11,(pTVar7->klass->vtable).set_text.method);
      pLVar8 = (pGVar2->fields).tierEarnings;
      pTVar7 = (pGVar2->fields).displayedEarningsAmountText;
      if (pLVar8 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar9 = (pGVar2->fields).currentFocusedEarning;
      if ((uint)(pLVar8->fields)._size <= iVar9 + 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pIVar10 = (pLVar8->fields)._items;
      if (pIVar10 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar10->max_length <= iVar9 + 1U) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      aIStackX_8[0].m_value = pIVar10->vector[(longlong)iVar9 + 1];
    }
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    if (pTVar7 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar7->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar7,pSVar11,(pTVar7->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

