
/* Void ChatCommandActivated(ChatCommand) */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_ChatCommandActivated
               (ChatCommand__Enum chatCommand,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ChatCommandManager);
  }
  this = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
         TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (this != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ChatCommandManager);
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
      if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ChatCommandManager);
      }
      pDVar2 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if ((pDVar2 != (Dictionary_2_ChatCommand_System_Action_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,chatCommand,
                              MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                             ), pOVar3 != (Object *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)pOVar3[1].monitor)(pOVar3[4].klass,pOVar3[2].monitor,pOVar3[1].monitor);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Action GetChatCommandCallback(ChatCommand) */

Action * Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                   (ChatCommand__Enum chatCommand,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Add_ChatCommand__System__Action_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ChatCommandManager);
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
           TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (pDVar1,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ChatCommandManager);
      }
      this = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (this == (Dictionary_2_ChatCommand_System_Action_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,chatCommand,(Object *)0x0,
                 CONCAT31((int3)((uint)in_R9D >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Add_ChatCommand__System__Action_
                 ->klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ChatCommandManager);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
    ;
    pDVar1 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
             TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (pDVar1,chatCommand,
                         MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__get_Item_ChatCommand_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pAVar7 = (Action *)(*pcVar6)();
        return pAVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)
                    0x0) {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(Action **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pAVar7 = (Action *)(*pcVar6)();
        return pAVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pAVar7 = (Action *)(*pcVar6)();
      return pAVar7;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pAVar7 = (Action *)(*pcVar6)();
  return pAVar7;
}


/* Void UpdateChatCommandCallback(ChatCommand, Action) */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
               (ChatCommand__Enum chatCommand,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ChatCommandManager);
  }
  this = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
         TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
  if (this != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this,chatCommand,
                       MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ChatCommandManager);
      }
      this_00 = TypeInfo__ChatCommandManager->static_fields->chatCommandCallBackDictionary;
      if (this_00 == (Dictionary_2_ChatCommand_System_Action_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,chatCommand,
                 (Object *)callback,CONCAT31((int3)((uint)in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                 ->klass->rgctx_data[0x22].method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ChatCommandManager() */

void Assembly-CSharp.dll::ChatCommandManager::ChatCommandManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
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
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__ChatCommandManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

