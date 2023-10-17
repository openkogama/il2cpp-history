
/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_FixedUpdate
               (MVAvatarLocal_AvatarLocalModes *this,IInputToPlayerMovement *movementMap,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVAvatarLocal_AvatarMode *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).__unknown_1.method;
    pIStack_3 = movementMap;
    (*(pMStack_2->klass->vtable).__unknown_1.methodPtr)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_FrameUpdate
               (MVAvatarLocal_AvatarLocalModes *this,InputToInGameAction *interactionMap,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVAvatarLocal_AvatarMode *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).__unknown_2.method;
    pIStack_3 = interactionMap;
    (*(pMStack_2->klass->vtable).__unknown_2.methodPtr)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarRuntimeState GetStartState() */

AvatarRuntimeState__Enum
Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
          (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    puStack_1 = (undefined *)0x3;
    pMVar2 = (MVNetworkGameStateListener *)func_?();
    if ((char)pMVar2 == '\0') {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
         pMVar2 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      if ((pMVar2->fields).currentGameState != 2) {
        return CONCAT31((int3)((uint)pMVar2 >> 8),1);
      }
    }
    return (uint)pMVar2 & 0xffffff00;
  }
code_?:
  uVar4 = func_?(&puStack_1);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  AVar6 = (*pcVar5)();
  return AVar6;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_HasDied
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__DeadMode);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarModes;
  if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,4,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                          );
    if (unaff_ESI != (Object *)0x0) {
      if (((TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth <=
           (unaff_ESI->klass->_1).typeHierarchyDepth) &&
         ((unaff_ESI->klass->_1).typeHierarchy
          [(TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) {
        pMVar1 = TypeInfo__MVAvatarLocal__DeadMode;
        if (((unaff_ESI->klass->_1).typeHierarchyDepth <
             (TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth) ||
           ((unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__MVAvatarLocal__DeadMode->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) goto code_?;
        if ((float)unaff_ESI[2].klass != _UNK_?) {
          return 1;
        }
      }
    }
    return 0;
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
               (MVAvatarLocal_AvatarLocalModes *this,AvatarRuntimeState__Enum mode,
               MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).currentMode;
  this = (MVAvatarLocal_AvatarLocalModes *)CONCAT31(this._1_3_,(this->fields).currentState);
  if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar2->klass->vtable).__unknown.methodPtr)
              (pMVar2,mode,(pMVar2->klass->vtable).__unknown.method);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar2 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,mode,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      (pMVar1->fields).currentMode = pMVar2;
      func_?(&(pMVar1->fields).currentMode,pMVar2);
      pMVar2 = (pMVar1->fields).currentMode;
      (pMVar1->fields).currentState = (uint8_t)mode;
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(pMVar2->klass->vtable).Activate.methodPtr)
                  (pMVar2,this,(pMVar2->klass->vtable).Activate.method);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetToStartMode() */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::
     MVAvatarLocal_AvatarLocalModes_SetToStartMode
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  AVar1 = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),(char)AVar1);
  MVAvatarLocal_AvatarLocalModes_SetMode(this,uStack_2,(MethodInfo *)0x0);
  return;
}


/* MVAvatarLocal+AvatarLocalModes(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
               (MVAvatarLocal_AvatarLocalModes *this,MVAvatarLocal *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__DeadMode);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>
                   );
    func_?(&TypeInfo__MVAvatarLocal__GhostMode);
    func_?(&TypeInfo__MVAvatarLocal__LobbyMode);
    func_?(&TypeInfo__MVAvatarLocal__ReviveMode);
    func_?(&TypeInfo__MVAvatarLocal__ReviveWaitMode);
    func_?(&TypeInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode);
    func_?(&TypeInfo__MVAvatarLocal__WaitMode);
    func_?(&TypeInfo__MVAvatarLocal__WalkMode);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>
                          );
  if (pDVar1 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
            );
  pMVar2 = (MethodInfo *)&this->fields;
  (this->fields).avatarModes = pDVar1;
  func_?(pMVar2,pDVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  this_00 = (MVAvatarLocal_WalkMode *)func_?(TypeInfo__MVAvatarLocal__WalkMode);
  if (this_00 == (MVAvatarLocal_WalkMode *)0x0) goto code_?;
  MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor(this_00,avatar,(MethodInfo *)0x0);
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0x1,(Object *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  this_01 = (MVAvatarLocal_DeadMode *)func_?(TypeInfo__MVAvatarLocal__DeadMode);
  if (this_01 == (MVAvatarLocal_DeadMode *)0x0) goto code_?;
  MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor(this_01,avatar,(MethodInfo *)0x0);
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0x4,(Object *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  pOVar4 = (Object *)func_?(TypeInfo__MVAvatarLocal__ReviveMode);
  if (pOVar4 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
    cRam_? = '\x01';
  }
  pOVar4[2].monitor = (MonitorData *)0x41200000;
  value = (Object *)func_?(TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
  if (value == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  pMVar6 = (MonitorData *)(pQVar5->identityQuaternion).y;
  pOVar7 = (Object__Class *)(pQVar5->identityQuaternion).z;
  pMVar8 = (MonitorData *)(pQVar5->identityQuaternion).w;
  value[1].klass = (Object__Class *)(pQVar5->identityQuaternion).x;
  value[1].monitor = pMVar6;
  value[2].klass = pOVar7;
  value[2].monitor = pMVar8;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pOVar4[3].monitor = (MonitorData *)value;
  pMVar2 = (MethodInfo *)&pOVar4[3].monitor;
  func_?(pMVar2,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar4,ExceptionArgument__Enum_obj,pMVar2);
  pOVar4[1].klass = (Object__Class *)avatar;
  func_?(pOVar4 + 1,avatar);
  pOVar4[1].monitor = (MonitorData *)0x2;
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0xa,pOVar4,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  pOVar4 = (Object *)func_?(TypeInfo__MVAvatarLocal__ReviveWaitMode);
  if (pOVar4 == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar4,ExceptionArgument__Enum_obj,unaff_EDI);
  pOVar4[1].klass = (Object__Class *)avatar;
  func_?(pOVar4 + 1,avatar);
  pOVar4[1].monitor = (MonitorData *)0x4;
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0xb,pOVar4,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  pOVar4 = (Object *)func_?(TypeInfo__MVAvatarLocal__LobbyMode);
  if (pOVar4 == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar4,ExceptionArgument__Enum_obj,unaff_EDI);
  pOVar4[1].klass = (Object__Class *)avatar;
  func_?(pOVar4 + 1,avatar);
  pOVar4[1].monitor = (MonitorData *)0x4;
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0x0,pOVar4,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  pOVar4 = (Object *)func_?(TypeInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode);
  if (pOVar4 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  pOVar7 = (Object__Class *)(pQVar5->identityQuaternion).y;
  pMVar6 = (MonitorData *)(pQVar5->identityQuaternion).z;
  pOVar9 = (Object__Class *)(pQVar5->identityQuaternion).w;
  pOVar4[3].monitor = (MonitorData *)(pQVar5->identityQuaternion).x;
  pOVar4[4].klass = pOVar7;
  pOVar4[4].monitor = pMVar6;
  pOVar4[5].klass = pOVar9;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar4,ExceptionArgument__Enum_obj,unaff_EDI);
  pOVar4[1].klass = (Object__Class *)avatar;
  func_?(pOVar4 + 1,avatar);
  pOVar4[1].monitor = (MonitorData *)0x1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerAndroid);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar10 == MVGameMode__Enum_CharacterEditor) {
code_?:
    pOVar7 = (Object__Class *)func_?(TypeInfo__AvatarInputController);
    if (pOVar7 == (Object__Class *)0x0) goto code_?;
    AvatarInputController::AvatarInputController__ctor
              ((AvatarInputController *)pOVar7,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    pOVar7 = (Object__Class *)func_?(TypeInfo__AvatarInputControllerAndroid);
    if (pOVar7 == (Object__Class *)0x0) goto code_?;
    AvatarInputControllerAndroid::AvatarInputControllerAndroid__ctor
              ((AvatarInputControllerAndroid *)pOVar7,(MethodInfo *)0x0);
  }
  pOVar4[2].klass = pOVar7;
  pMVar2 = (MethodInfo *)(pOVar4 + 2);
  func_?(pMVar2,pOVar7);
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0x7,pOVar4,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  pOVar4 = (Object *)func_?(TypeInfo__MVAvatarLocal__WaitMode);
  if (pOVar4 == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar4,ExceptionArgument__Enum_obj,pMVar2);
  pOVar4[1].klass = (Object__Class *)avatar;
  func_?(pOVar4 + 1,avatar);
  pOVar4[1].monitor = (MonitorData *)0x4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerAndroid);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar10 == MVGameMode__Enum_CharacterEditor) {
code_?:
    pOVar7 = (Object__Class *)func_?(TypeInfo__AvatarInputController);
    if (pOVar7 == (Object__Class *)0x0) goto code_?;
    AvatarInputController::AvatarInputController__ctor
              ((AvatarInputController *)pOVar7,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    pOVar7 = (Object__Class *)func_?(TypeInfo__AvatarInputControllerAndroid);
    if (pOVar7 == (Object__Class *)0x0) goto code_?;
    AvatarInputControllerAndroid::AvatarInputControllerAndroid__ctor
              ((AvatarInputControllerAndroid *)pOVar7,(MethodInfo *)0x0);
  }
  pOVar4[2].klass = pOVar7;
  pMVar2 = (MethodInfo *)(pOVar4 + 2);
  func_?(pMVar2,pOVar7);
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (pDVar3,(Object *)0x8,pOVar4,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarModes;
  pOVar4 = (Object *)func_?(TypeInfo__MVAvatarLocal__GhostMode);
  if (pOVar4 == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar4,ExceptionArgument__Enum_obj,pMVar2);
  pOVar4[1].klass = (Object__Class *)avatar;
  func_?(pOVar4 + 1,avatar);
  pOVar4[1].monitor = (MonitorData *)0x4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInputControllerAndroid);
    func_?(&TypeInfo__AvatarInputController);
    cRam_? = '\x01';
  }
  MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar10 == MVGameMode__Enum_CharacterEditor) {
code_?:
    this_03 = (AvatarInputController *)func_?(TypeInfo__AvatarInputController);
    if (this_03 == (AvatarInputController *)0x0) goto code_?;
    AvatarInputController::AvatarInputController__ctor(this_03,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    this_02 = (AvatarInputControllerAndroid *)
              func_?(TypeInfo__AvatarInputControllerAndroid);
    if (this_02 == (AvatarInputControllerAndroid *)0x0) goto code_?;
    AvatarInputControllerAndroid::AvatarInputControllerAndroid__ctor(this_02,(MethodInfo *)0x0);
  }
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar3,(Object *)0x9,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
              );
    key = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
    pDVar1 = (this->fields).avatarModes;
    (this->fields).currentState = (uint8_t)key;
    if (pDVar1 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar11 = (MVAvatarLocal_AvatarMode *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,key,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                          );
      (this->fields).currentMode = pMVar11;
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

