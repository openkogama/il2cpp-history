
/* Void Set(ChatConsoleMode, RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes_Set
               (ChatConsoleModes *this,ChatConsoleMode__Enum chatConsoleMode,
               RectTransform **rectTransform,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  (this->fields).chatConsoleMode = chatConsoleMode;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).chatConsoleModeDefs;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_9,this_00,
                      MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__GetEnumerator__
                     );
  LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
  LStack_6._index = pLVar8->_index;
  LStack_6._version = pLVar8->_version;
  LStack_6._current = *(Object **)&pLVar8->_current;
  LStack_9._version = 0;
  uStack_1 = 1;
  LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
  do {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_6,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                      );
    if (bVar10 == 0) goto code_?;
    if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
    goto code_?;
  } while (*(ChatConsoleMode__Enum *)((int)LStack_6._current + 0xc) != chatConsoleMode);
  ChatConsoleModeDef::ChatConsoleModeDef_Set
            ((ChatConsoleModeDef *)LStack_6._current,rectTransform,(MethodInfo *)0x0);
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&LStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__Dispose__
             ,unaff_EDI);
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* ChatConsoleModes() */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes__ctor
               (ChatConsoleModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ChatConsoleModeDef>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ChatConsoleModeDef_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ChatConsoleModeDef>);
  if (this_00 != (List_1_ChatConsoleModeDef_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__List__);
    (this->fields).chatConsoleModeDefs = this_00;
    func_?(&(this->fields).chatConsoleModeDefs,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

