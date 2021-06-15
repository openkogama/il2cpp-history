
/* Void ChatCommandActivated(ChatCommand) */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_ChatCommandActivated
               (ChatCommand__Enum chatCommand,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__ChatCommandManager);
  }
  pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]::
            Dictionary_2_ChatCommand_System_Object__ContainsKey
                      ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]
               ::Dictionary_2_ChatCommand_System_Object__get_Item
                         ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,
                          MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         );
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if ((pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::
                   Object]::Dictionary_2_ChatCommand_System_Object__get_Item
                             ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,
                              MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                             ), pOVar3 != (Object *)0x0)) {
        if (*(JumpState_OnWallJumpDelegate **)(in_stack_4 + 0x2c) !=
            (JumpState_OnWallJumpDelegate *)0x0) {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (*(JumpState_OnWallJumpDelegate **)(in_stack_4 + 0x2c),in_stack_5)
          ;
        }
        method_00 = *(MethodInfo **)(in_stack_4 + 0x14);
        pcVar6 = *(code **)(in_stack_4 + 8);
        piVar7 = *(int **)(in_stack_4 + 0x10);
        if (method_00->flags == 0xffff) {
          func_?();
        }
        cVar8 = func_?();
        if (cVar8 == '\0') {
          if ((char)method_00->iflags == '\0') {
            (*pcVar6)();
            return;
          }
        }
        else if ((method_00->flags != 0xffff) &&
                (((piVar7 == (int *)0x0 || ((*(uint *)(*piVar7 + 0xa0) & 0x100) == 0)) &&
                 (*(int *)(in_stack_4 + 0xc) != 0)))) {
          cVar8 = func_?();
          if (cVar8 != '\0') {
            return;
          }
          method_01 = method_00;
          cVar8 = func_?();
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                    ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_01);
          cVar9 = func_?();
          if (cVar8 == '\0') {
            if (cVar9 != '\0') {
              mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
              ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                        ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_00);
              func_?();
              return;
            }
            (**(code **)(*piVar7 + 0xc0 + (uint)method_00->flags * 8))();
            return;
          }
          if (cVar9 == '\0') {
            puVar10 = (undefined4 *)func_?();
            (*(code *)*puVar10)(piVar7);
            return;
          }
          iStack11 = *piVar7;
          uVar12 = 0;
          if (*(ushort *)(iStack11 + 0xb6) != 0) {
            do {
              if (*(char **)(*(int *)(iStack11 + 0x58) + (uint)uVar12 * 8) == method_00->name)
              goto code_?;
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(iStack11 + 0xb6));
          }
          func_?();
code_?:
          puVar10 = (undefined4 *)func_?();
          (*(code *)*puVar10)(piVar7);
          return;
        }
        (*pcVar6)(piVar7);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Action GetChatCommandCallback(ChatCommand) */

Action * Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                   (ChatCommand__Enum chatCommand,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__ChatCommandManager);
  }
  pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]::
            Dictionary_2_ChatCommand_System_Object__ContainsKey
                      ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (pDVar1 == (Dictionary_2_ChatCommand_System_Action_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]::
      Dictionary_2_ChatCommand_System_Object__Add
                ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Add_ChatCommand__System__Action_
                );
    }
    if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__ChatCommandManager);
    }
    pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
      pAVar3 = (Action *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]
               ::Dictionary_2_ChatCommand_System_Object__get_Item
                         ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,
                          MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         );
      return pAVar3;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  pAVar3 = (Action *)(*pcVar4)();
  return pAVar3;
}


/* Void UpdateChatCommandCallback(ChatCommand, Action) */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
               (ChatCommand__Enum chatCommand,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__ChatCommandManager);
  }
  pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]::
            Dictionary_2_ChatCommand_System_Object__ContainsKey
                      ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                      );
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
        chatCommand = (ChatCommand__Enum)TypeInfo__ChatCommandManager;
        func_?();
      }
      pDVar1 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (pDVar1 == (Dictionary_2_ChatCommand_System_Action_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[ChatCommand,System::Object]::
      Dictionary_2_ChatCommand_System_Object__set_Item
                ((Dictionary_2_ChatCommand_System_Object_ *)pDVar1,chatCommand,(Object *)callback,
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                );
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ChatCommandManager() */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_ChatCommand_System_Action_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Dictionary__
            );
  TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary = this;
  return;
}

