
/* Void NotifyGameStateType(MVGameStateType) */

void Assembly-CSharp.dll::GameEventManager+GameStateManager::
     GameEventManager_GameStateManager_NotifyGameStateType
               (GameEventManager_GameStateManager *this,MVGameStateType__Enum gameState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32_ *)(this->fields).gameStateType;
  if (this_00 != (SubscribableVariable_1_System_Int32_ *)0x0) {
    SubscribableVariable`1[System::Int32]::SubscribableVariable_1_System_Int32__set_ValueSet
              (this_00,gameState,
               MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__set_ValueSet_MV__Common__MVGameStateType_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GameEventManager+GameStateManager() */

void Assembly-CSharp.dll::GameEventManager+GameStateManager::GameEventManager_GameStateManager__ctor
               (GameEventManager_GameStateManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)
            func_?(
                           TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                           );
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)this_00,0,
             MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
            );
  (this->fields).gameStateType = this_00;
  return;
}

