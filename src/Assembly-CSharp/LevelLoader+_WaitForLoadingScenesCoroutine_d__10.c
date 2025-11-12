
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelLoader+<WaitForLoadingScenesCoroutine>d__10::
     LevelLoader_WaitForLoadingScenesCoroutine_d_10_MoveNext
               (LevelLoader_WaitForLoadingScenesCoroutine_d_10 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (pLVar2 == (LevelLoader *)0x0) goto code_?;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if ((pLVar2 == (LevelLoader *)0x0) ||
       (pLVar3 = (pLVar2->fields).pendingScenes, pLVar3 == (List_1_UnityEngine_AsyncOperation_ *)0x0
       )) goto code_?;
    uVar4 = (pLVar3->fields)._size - 1;
    if (-1 < (int)uVar4) {
      lVar5 = (longlong)(int)uVar4 * 8 + 0x20;
      do {
        pLVar3 = (pLVar2->fields).pendingScenes;
        if (pLVar3 == (List_1_UnityEngine_AsyncOperation_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        pAVar8 = (pLVar3->fields)._items;
        if (pAVar8 == (AsyncOperation__Array *)0x0) goto code_?;
        if ((uint)pAVar8->max_length <= uVar4) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        obj = *(Object **)((longlong)pAVar8->vector + lVar5 + -0x20);
        if (obj == (Object *)0x0) goto code_?;
        if (obj[1].klass == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        pcRam_? = pcVar6;
        cVar10 = (*pcRam_?)();
        if (cVar10 != '\0') {
          pLVar3 = (pLVar2->fields).pendingScenes;
          if (pLVar3 == (List_1_UnityEngine_AsyncOperation_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar3,uVar4,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                    );
        }
        lVar5 = lVar5 + -8;
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
    }
  }
  pLVar3 = (pLVar2->fields).pendingScenes;
  if (pLVar3 != (List_1_UnityEngine_AsyncOperation_ *)0x0) {
    if ((pLVar3->fields)._size < 1) {
      pAVar11 = (pLVar2->fields).callback;
      if (pAVar11 != (Action *)0x0) {
        (*(pAVar11->fields)._._.invoke_impl)
                  ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
      }
      return 0;
    }
    bVar12 = iRam_? != 0;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar12) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      puVar13 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar14 = *puVar13;
        LOCK();
        uVar15 = *puVar13;
        if (uVar14 == uVar15) {
          *puVar13 = uVar14 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar14 != uVar15);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelLoader+<WaitForLoadingScenesCoroutine>d__10::
     LevelLoader_WaitForLoadingScenesCoroutine_d_10_System_Collections_IEnumerator_Reset
               (LevelLoader_WaitForLoadingScenesCoroutine_d_10 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

