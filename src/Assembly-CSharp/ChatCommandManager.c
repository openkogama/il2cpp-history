
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
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
         TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar1 == 0) {
      return;
    }
    if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar2 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (pDVar2 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,chatCommand,
                          MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         );
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar2 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if ((pDVar2 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,chatCommand,
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
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
         TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)chatCommand,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Add_ChatCommand__System__Action_
                );
    }
    if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ChatCommandManager);
    }
    this_01 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (this_01 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
      pAVar2 = (Action *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,chatCommand,
                          MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         );
      return pAVar2;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pAVar2 = (Action *)(*pcVar3)();
  return pAVar2;
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
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
         TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        chatCommand = (ChatCommand__Enum)TypeInfo__ChatCommandManager;
        func_?();
      }
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)chatCommand,(Object *)callback,
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                );
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this = (Dictionary_2_ChatCommand_System_Action_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>
                        );
  if (this != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Dictionary__
              );
    TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary = this;
    func_?(TypeInfo__ChatCommandManager->static_fields,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

