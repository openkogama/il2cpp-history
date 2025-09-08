
/* Void Set(ChatConsoleMode, RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes_Set
               (ChatConsoleModes *this,ChatConsoleMode__Enum chatConsoleMode,
               RectTransform **rectTransform,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
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
    func_?(&TypeInfo__IPlayModeUI);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  RVar7 = (RegexCharClass_SingleRange)
          TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  LStack_8._current = RVar7;
  if (RVar7 != (RegexCharClass_SingleRange)0x0) {
    iStack_9 = *(int *)RVar7;
    uVar10 = 0;
    uStack_11 = 0;
    uVar12 = *(ushort *)(iStack_9 + 0xb6);
    uStack_13 = (uint)uVar12;
    if (uVar12 != 0) {
      do {
        if (*(IPlayModeUI__Class **)(*(int *)(iStack_9 + 0x58) + (uint)uVar10 * 8) ==
            TypeInfo__IPlayModeUI) {
          puVar14 = (undefined4 *)
                   (*(int *)RVar7 +
                   (*(int *)(*(int *)(*(int *)RVar7 + 0x58) + 4 + (uint)uVar10 * 8) + 0x1d) * 8);
          goto code_?;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
    }
    puVar14 = (undefined4 *)func_?(RVar7,TypeInfo__IPlayModeUI,5);
code_?:
    iVar15 = (*(code *)*puVar14)(RVar7,puVar14[1]);
    if (iVar15 != 0) {
      (**(code **)(iVar15 + 0xc))
                (*(undefined4 *)(iVar15 + 0x20),chatConsoleMode,*(undefined4 *)(iVar15 + 0x14));
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).chatConsoleModeDefs;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_8,this_00,
                          MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__GetEnumerator__
                         );
      LStack_6._list = (List_1_System_Object_ *)pLVar16->_list;
      LStack_6._index = pLVar16->_index;
      LStack_6._version = pLVar16->_version;
      LStack_6._current = *(Object **)&pLVar16->_current;
      LStack_8._version = 0;
      uStack_1 = 1;
      LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
      do {
        bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                          );
        if (bVar17 == 0) goto code_?;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
      } while (*(ChatConsoleMode__Enum *)((int)LStack_6._current + 0x10) != chatConsoleMode);
      ChatConsoleModeDef::ChatConsoleModeDef_Set
                ((ChatConsoleModeDef *)LStack_6._current,rectTransform,(MethodInfo *)0x0);
code_?:
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__Dispose__
                 ,unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  (this->fields).chatConsoleModeDefs = this_00;
  func_?(&(this->fields).chatConsoleModeDefs,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

