
/* Void NotifyGameStateType(MVGameStateType) */

void Assembly-CSharp.dll::GameEventManager+GameStateManager::
     GameEventManager_GameStateManager_NotifyGameStateType
               (GameEventManager_GameStateManager *this,MVGameStateType__Enum gameState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ *)
            (this->fields).gameStateType;
  if (this_00 != (GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ *)0x0) {
    GameEventManager+GameEventSubscribableVariable`1[System::Int32Enum]::
    GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum__set_ValueSet
              (this_00,gameState,
               MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__set_ValueSet_MV__Common__MVGameStateType_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameEventManager+GameStateManager() */

void Assembly-CSharp.dll::GameEventManager+GameStateManager::GameEventManager_GameStateManager__ctor
               (GameEventManager_GameStateManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
                   );
    func_?(&
                    TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                   );
    cRam_? = '\x01';
  }
  this_00 = (GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ *)
            func_?(
                           TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                           );
  GameEventManager+GameEventSubscribableVariable`1[System::Int32Enum]::
  GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,
             MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
            );
  method_00 = (MethodInfo *)&(this->fields).gameStateType;
  (this->fields).gameStateType =
       (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

