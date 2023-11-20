
/* Void Clear() */

void Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_Clear
               (LogicObjectManagerClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields)._.logicWorldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
              );
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 OnLinkAdded(Link, IWorldObjectManager) */

int32_t Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                  (LogicObjectManagerClient *this,Link *link,IWorldObjectManager *worldObjectManager
                  ,MethodInfo *method)

{
  if (link != (Link *)0x0) {
    iVar1 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                      ((link->fields).inputWOID,worldObjectManager,(MethodInfo *)0x0);
    return iVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Int32 OnLinkRemoved(Link, IWorldObjectManager) */

int32_t Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                  (LogicObjectManagerClient *this,Link *link,IWorldObjectManager *worldObjectManager
                  ,MethodInfo *method)

{
  if (link != (Link *)0x0) {
    iVar1 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                      ((link->fields).inputWOID,worldObjectManager,(MethodInfo *)0x0);
    iVar2 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                      ((link->fields).outputWOID,worldObjectManager,(MethodInfo *)0x0);
    return iVar2 + iVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* LogicObjectManagerClient(Int32, Boolean) */

void Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient__ctor
               (LogicObjectManagerClient *this,int32_t timeStamp,bool trackLoops,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
            );
  (this->fields)._.logicWorldObjects = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = (MethodInfo *)&(this->fields)._.updatedIds;
  (this->fields)._.updatedIds = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.trackLoops = trackLoops;
  (this->fields)._._TimeStamp_k__BackingField = timeStamp;
  return;
}

