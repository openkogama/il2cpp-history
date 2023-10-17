
/* Void OnDestroy() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnDestroy
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_00 = (Action_2_Int32Enum_Object_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  if (this_00 == (Action_2_Int32Enum_Object_ *)0x0) {
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pMStack2 =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMStack2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
           (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
      func_?();
      return;
    }
    pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    if (pMVar1 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar1;
    pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    if (pMVar1 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
  pMStack3 = (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)func_?();
  pMStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGameMessageReceived(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnGameMessageReceived
               (LoadingScreenHandler *this,MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (gameMsgType != MVGameMsgType__Enum_JoinFlowStatus) {
    return;
  }
  gameMsgType = 0x500000a;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&gameMsgType + 3));
  if (gameMsgData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (gameMsgData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar1 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
        pOVar1 = pOVar2;
      }
      if (pOVar1 == (Object *)0x0) goto code_?;
    }
    piVar3 = *(int **)(unaff_ESI + 0x10);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x314))(piVar3,pOVar1);
      iVar4 = *(int *)(unaff_ESI + 0x18) + 1;
      *(int *)(unaff_ESI + 0x18) = iVar4;
      *(undefined4 *)(unaff_ESI + 0x20) = 0;
      if (*(int *)(unaff_ESI + 0xc) != 0) {
        *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x10);
        *(undefined4 *)(unaff_ESI + 0x28) = 0;
        *(float *)(unaff_ESI + 0x24) = (float)iVar4 / (float)*(int *)(unaff_ESI + 0x1c);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_Start
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).uiText;
  if (pTVar1 == (Text *)0x0) {
code_?:
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).set_text.method);
    this_00 = (this->fields).loadingBar;
    if (this_00 == (ProgressBarAndroid *)0x0) goto code_?;
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,0.0,(MethodInfo *)0x0);
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    this_01 = (Action_2_Int32Enum_Object_ *)
              func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    if (this_01 == (Action_2_Int32Enum_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pMStack2 =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMStack2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
           (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
      func_?();
      return;
    }
    pMVar4 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar4 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    if (pMVar4 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar4;
    pMVar4 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar4 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    if (pMVar4 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
  pMStack3 = (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)func_?();
  pMStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_Update
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
      (GameSessionData *)0x0) {
    this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).eventCountLookup;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 == (GameSessionData *)0x0) ||
       (this_00 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this_00,(pGVar1->fields).gameMode,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                       );
    (this->fields).eventsCount = (int32_t)pOVar2;
  }
  fVar3 = (this->fields).currentTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  this_01 = (this->fields).loadingBar;
  fVar3 = (this->fields).currentProgress;
  (this->fields).currentTime = fVar4;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (_UNK_? < fVar4) {
    fVar4 = _UNK_?;
  }
  if (this_01 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              (this_01,((this->fields).targetProgress - fVar3) * fVar4 + fVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LoadingScreenHandler() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler__ctor
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x1,(Object *)0x7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x0,(Object *)0x10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2,(Object *)0xe,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    (this->fields).eventCountLookup = (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)this_00;
    func_?(&(this->fields).eventCountLookup,this_00);
    (this->fields).currentEventCount = 1;
    (this->fields).eventsCount = 0x11;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

