
/* Void ChatCommandActivated(ChatCommand) */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_ChatCommandActivated
               (ChatCommand__Enum chatCommand,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ChatCommandManager);
  }
  pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,chatCommand,
                          MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         );
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if ((pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,chatCommand,
                              MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                             ), pOVar3 != (Object *)0x0)) {
        (*(code *)pOVar3[1].monitor)();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Action GetChatCommandCallback(ChatCommand) */

Action * Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                   (ChatCommand__Enum chatCommand,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Add_ChatCommand__System__Action_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ChatCommandManager);
  }
  pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (pDVar1 == (Dictionary_2_ChatCommand_System_Action_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,chatCommand,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Add_ChatCommand__System__Action_
                );
    }
    if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ChatCommandManager);
    }
    pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
      pAVar3 = (Action *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,chatCommand,
                          MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         );
      return pAVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar3 = (Action *)(*pcVar4)();
  return pAVar3;
}


/* Void UpdateChatCommandCallback(ChatCommand, Action) */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
               (ChatCommand__Enum chatCommand,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        chatCommand = (ChatCommand__Enum)TypeInfo__ChatCommandManager;
        func_?();
      }
      pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (pDVar1 == (Dictionary_2_ChatCommand_System_Action_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__set_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,chatCommand,
                 (Object *)callback,
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                );
    }
    return;
  }
code_?:
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ChatCommandManager() */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Dictionary__
            );
  TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary =
       (Dictionary_2_ChatCommand_System_Action_ *)this;
  func_?(TypeInfo__ChatCommandManager->static_fields,this);
  return;
}

