
/* Void Set(ChatConsoleMode, RectTransform ByRef) */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes_Set
               (ChatConsoleModes *this,ChatConsoleMode__Enum chatConsoleMode,
               RectTransform **rectTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).chatConsoleMode = chatConsoleMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    lVar1 = FUN_?();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),chatConsoleMode);
    }
    LStack_2._list = (List_1_System_Object_ *)(this->fields).chatConsoleModeDefs;
    if ((List_1_ChatConsoleModeDef_ *)LStack_2._list != (List_1_ChatConsoleModeDef_ *)0x0) {
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
                    (uint)(((List_1_ChatConsoleModeDef_ *)LStack_2._list)->fields)._version << 0x20
                   );
      uStack_9 = 0;
      LStack_2._8_8_ = pLStack_8;
      LStack_2._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_8 = &LStack_2;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_2,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ChatConsoleModeDef>__MoveNext__
                          );
        if (bVar10 == 0) {
          return;
        }
        if ((ChatConsoleModeDef *)LStack_2._current == (ChatConsoleModeDef *)0x0) break;
        if (((ChatConsoleModeDef__Fields *)((longlong)LStack_2._current + 0x10))->ChatConsoleMode
            == chatConsoleMode) {
          ChatConsoleModeDef::ChatConsoleModeDef_Set
                    ((ChatConsoleModeDef *)LStack_2._current,rectTransform,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* ChatConsoleModes() */

void Assembly-CSharp.dll::ChatConsoleModes::ChatConsoleModes__ctor
               (ChatConsoleModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ChatConsoleModeDef>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_ChatConsoleModeDef_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ChatConsoleModeDef>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ChatConsoleModeDef>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).chatConsoleModeDefs = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).chatConsoleModeDefs >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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

