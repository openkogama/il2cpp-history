
/* Void Clear() */

void Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_Clear
               (LogicObjectManagerClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields)._.logicWorldObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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
  this_00 = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                           );
  if (this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
              );
    (this->fields)._.logicWorldObjects = this_00;
    func_?(&this->fields,this_00);
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      method_00 = (MethodInfo *)&(this->fields)._.updatedIds;
      (this->fields)._.updatedIds = (HashSet_1_System_Int32_ *)this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields)._.trackLoops = trackLoops;
      (this->fields)._._TimeStamp_k__BackingField = timeStamp;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

