
/* Void Awake() */

void Assembly-CSharp.dll::LocalizedTMPText::LocalizedTMPText_Awake
               (LocalizedTMPText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LocalizedTMPText__LanguageLoadedCallback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 == (TMP_Text *)0x0) {
    FUN_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)();
  pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
  (*(pTVar1->klass->vtable).set_text.methodPtr)
            (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LocalizedTMPText__LanguageLoadedCallback__,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                  ,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
  if (pTVar4 != (TM *)0x0) {
    if ((pTVar4->fields).languageLoadingDone != 0) {
      return;
    }
    pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
    pMVar5 = MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
    if ((pTVar4 != (TM *)0x0) &&
       (pLVar6 = (pTVar4->fields).languageChangedCallback, pLVar6 != (List_1_System_Action_ *)0x0))
    {
      pAVar7 = (pLVar6->fields)._items;
      piVar8 = &(pLVar6->fields)._version;
      *piVar8 = *piVar8 + 1;
      if (pAVar7 == (Action__Array *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = (pLVar6->fields)._size;
      if (uVar9 < (uint)pAVar7->max_length) {
        (pLVar6->fields)._size = uVar9 + 1;
      }
      else {
        uVar9 = (pLVar6->fields)._size;
        FUN_?(pLVar6,uVar9 + 1,
                      (pMVar5->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pAVar7,unaff_RDI);
        pAVar7 = (pLVar6->fields)._items;
        (pLVar6->fields)._size = uVar9 + 1;
        if (pAVar7 == (Action__Array *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((uint)pAVar7->max_length <= uVar9) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar10 = iRam_? != 0;
      pAVar7->vector[(int)uVar9] = (Action *)this_00;
      if (bVar10) {
        uVar9 = (uint)((ulonglong)(pAVar7->vector + (int)uVar9) >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::LocalizedTMPText::LocalizedTMPText_LanguageLoadedCallback
               (LocalizedTMPText *this,MethodInfo *method)

{
  pTVar1 = (this->fields).text;
  if (pTVar1 != (TMP_Text *)0x0) {
    pSVar2 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)();
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::LocalizedTMPText::LocalizedTMPText_Reset
               (LocalizedTMPText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TMPro__TMP_Text_MethodInfo__UnityEngine__Component__GetComponent<TMPro::TMP_Text>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____Text__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (TMP_Text *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      TMPro__TMP_Text_MethodInfo__UnityEngine__Component__GetComponent<TMPro::TMP_Text>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).text = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).text >> 0xc);
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
  pTVar1 = (this->fields).text;
  if (pTVar1 == (TMP_Text *)0x0) goto code_?;
  pSVar7 = (String *)
           (*(pTVar1->klass->vtable).get_text.methodPtr)
                     (pTVar1,(pTVar1->klass->vtable).get_text.method);
  if (pSVar7 == ::StringLiteral__) {
    pTVar1 = (this->fields).text;
code_?:
    if (pTVar1 != (TMP_Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,StringLiteral____Text__,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  else {
    if (((pSVar7 == (String *)0x0) || (::StringLiteral__ == (String *)0x0)) ||
       ((pSVar7->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) {
      pTVar1 = (this->fields).text;
    }
    else {
      bVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar7->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                         (longlong)(pSVar7->fields)._stringLength * 2,(MethodInfo *)0x0);
      pTVar1 = (this->fields).text;
      if (bVar8 != 0) goto code_?;
    }
    pTVar9 = (this->fields).text;
    if (pTVar9 != (TMP_Text *)0x0) {
      pSVar7 = (String *)
               (*(pTVar9->klass->vtable).get_text.methodPtr)
                         (pTVar9,(pTVar9->klass->vtable).get_text.method);
      pSVar7 = mscorlib.dll::System::String::String_Concat_5
                         (::StringLiteral____,pSVar7,::StringLiteral___,(MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar1,pSVar7,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

