
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelLoader+<WaitForLoadingScenesCoroutine>d__10::
     LevelLoader_WaitForLoadingScenesCoroutine_d_10_MoveNext
               (LevelLoader_WaitForLoadingScenesCoroutine_d_10 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Item_int_
                   );
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
    iVar1 = (pLVar3->fields)._size;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pLVar2->fields).pendingScenes;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,iVar1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__get_Item_int_
                              ), this_01 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::AsyncOperation::AsyncOperation_get_isDone
                        ((AsyncOperation *)this_01,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pLVar3 = (pLVar2->fields).pendingScenes;
        if (pLVar3 == (List_1_UnityEngine_AsyncOperation_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar3,iVar1,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__RemoveAt_int_
                  );
      }
    }
  }
  pLVar3 = (pLVar2->fields).pendingScenes;
  if (pLVar3 != (List_1_UnityEngine_AsyncOperation_ *)0x0) {
    if ((pLVar3->fields)._size < 1) {
      pAVar5 = (pLVar2->fields).callback;
      if (pAVar5 != (Action *)0x0) {
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
      }
      return 0;
    }
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
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
  func_?(&
                  MethodInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

