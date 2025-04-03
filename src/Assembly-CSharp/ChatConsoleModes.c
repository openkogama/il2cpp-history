
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
  (this->fields).chatConsoleMode = chatConsoleMode;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).chatConsoleModeDefs;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_8,this_00,
                      MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__GetEnumerator__
                     );
  LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
  LStack_9._index = pLVar7->_index;
  LStack_9._version = pLVar7->_version;
  LStack_9._current = *(Object **)&pLVar7->_current;
  LStack_8._version = 0;
  uStack_1 = 1;
  LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
  do {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_9,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                      );
    if (bVar10 == 0) goto code_?;
    if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0)
    goto code_?;
  } while (*(ChatConsoleMode__Enum *)((int)LStack_9._current + 0x10) != chatConsoleMode);
  ChatConsoleModeDef::ChatConsoleModeDef_Set
            ((ChatConsoleModeDef *)LStack_9._current,rectTransform,(MethodInfo *)0x0);
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&LStack_9,
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__List__);
  ppLVar1 = &(this->fields).chatConsoleModeDefs;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

