
/* Void Clear() */

void Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_Clear
               (LogicObjectManagerClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields)._.logicWorldObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 OnLinkAdded(Link, IWorldObjectManager) */

int32_t Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                  (LogicObjectManagerClient *this,Link_1 *link,
                  IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  if (link != (Link_1 *)0x0) {
    iVar1 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                      ((link->fields).inputWOID,worldObjectManager,(MethodInfo *)0x0);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Int32 OnLinkRemoved(Link, IWorldObjectManager) */

int32_t Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                  (LogicObjectManagerClient *this,Link_1 *link,
                  IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  if (link != (Link_1 *)0x0) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
            );
  (this->fields)._.logicWorldObjects = this_00;
  method_00 = TypeInfo__System__Collections__Generic__HashSet<int>;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields)._.updatedIds = (HashSet_1_System_Int32_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._.trackLoops = trackLoops;
  (this->fields)._._TimeStamp_k__BackingField = timeStamp;
  return;
}

