
/* Void OnDestroy() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnDestroy
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnReceivedGameMsgDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
  if (pMStack2 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar1 = pMStack2;
    }
    if (pMVar1 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar1;
  return;
}


/* Void OnGameMessageReceived(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnGameMessageReceived
               (LoadingScreenHandler *this,MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (gameMsgType != MVGameMsgType__Enum_JoinFlowStatus) {
    return;
  }
  gameMsgType = 0x500000a;
  key = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&gameMsgType + 3));
  if (gameMsgData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)gameMsgData,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar2 = (Pool *)0x0;
    if (pPVar1 != (Pool *)0x0) {
      if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
        pPVar2 = pPVar1;
      }
      if (pPVar2 == (Pool *)0x0) goto code_?;
    }
    piVar3 = *(int **)(unaff_ESI + 0x10);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x308))(piVar3,pPVar2);
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + 1;
      *(undefined4 *)(unaff_ESI + 0x20) = 0;
      if (*(ProgressBarAndroid **)(unaff_ESI + 0xc) != (ProgressBarAndroid *)0x0) {
        fVar4 = ProgressBarAndroid::ProgressBarAndroid_get_Progress
                          (*(ProgressBarAndroid **)(unaff_ESI + 0xc),(MethodInfo *)0x0);
        *(undefined4 *)(unaff_ESI + 0x28) = 0;
        *(float *)(unaff_ESI + 0x20) = fVar4;
        *(float *)(unaff_ESI + 0x24) =
             (float)*(int *)(unaff_ESI + 0x18) / (float)*(int *)(unaff_ESI + 0x1c);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).uiText;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,TypeInfo__System__String->static_fields->Empty,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).loadingBar;
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,0.0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pMVar3 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      _uStack0000001c = CONCAT44(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate,pMVar3);
      pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
      if (pMVar3 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
code_?:
        TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar2;
        return;
      }
      if (pMVar3->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
        pMVar2 = pMVar3;
      }
      if (pMVar2 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  _uStack0000001c = func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_Update
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    this_00 = (this->fields).eventCountLookup;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if ((pGVar1 == (GameSessionData *)0x0) ||
       (this_00 == (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)0x0)) goto code_?;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameMode,System::
            Int32]::Dictionary_2_MV_Common_MVGameMode_System_Int32__get_Item
                      (this_00,(pGVar1->fields).gameMode,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                      );
    (this->fields).eventsCount = iVar2;
  }
  fVar3 = (this->fields).currentTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  this_01 = (this->fields).loadingBar;
  fVar3 = (this->fields).currentProgress;
  b = (this->fields).targetProgress;
  (this->fields).currentTime = fVar4;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar3,b,fVar4,(MethodInfo *)0x0);
  if (this_01 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_01,fVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LoadingScreenHandler() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler__ctor
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
            );
  if (this_00 != (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameMode,System::Int32]::
    Dictionary_2_MV_Common_MVGameMode_System_Int32__Add
              (this_00,MVGameMode__Enum_Play,7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameMode,System::Int32]::
    Dictionary_2_MV_Common_MVGameMode_System_Int32__Add
              (this_00,MVGameMode__Enum_Edit,0x10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameMode,System::Int32]::
    Dictionary_2_MV_Common_MVGameMode_System_Int32__Add
              (this_00,MVGameMode__Enum_CharacterEditor,0xe,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    (this->fields).eventCountLookup = this_00;
    (this->fields).currentEventCount = 1;
    (this->fields).eventsCount = 0x11;
    uStack1 = 0;
    if (cRam_? == '\0') {
      pOStack2 = (Object_1__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      pOStack2 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

