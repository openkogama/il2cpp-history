
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
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
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
  if (pMVar1 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar1;
    pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    if (pMVar1 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
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
  key = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&gameMsgType + 3));
  if (gameMsgData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)gameMsgData,
                       key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar2.m_Index = 0;
    if (TVar1.m_Index != 0) {
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        TVar2 = TVar1;
      }
      if (TVar2.m_Index == 0) goto code_?;
    }
    piVar3 = *(int **)(unaff_ESI + 0x14);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x318))(piVar3,TVar2.m_Index);
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + 1;
      *(undefined4 *)(unaff_ESI + 0x24) = 0;
      if (*(int *)(unaff_ESI + 0x10) != 0) {
        *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x14);
        *(undefined4 *)(unaff_ESI + 0x2c) = 0;
        *(float *)(unaff_ESI + 0x28) =
             (float)*(int *)(unaff_ESI + 0x1c) / (float)*(int *)(unaff_ESI + 0x20);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,::StringLiteral__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).loadingBar;
    if (this_00 == (ProgressBarAndroid *)0x0) goto code_?;
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,0.0,(MethodInfo *)0x0);
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
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
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,1,7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,0,0x10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,2,0xe,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    ppDVar1 = &(this->fields).eventCountLookup;
    *ppDVar1 = (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)this_00;
    func_?(ppDVar1,this_00);
    (this->fields).currentEventCount = 1;
    (this->fields).eventsCount = 0x11;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

