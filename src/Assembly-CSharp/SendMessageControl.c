
/* Void ActivateAllChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateAllChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat == 9) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
              (this_00,0,(MethodInfo *)0x0);
    (this->fields).isSayChatIconVisible = 0;
  }
  pTVar1 = (this->fields).currentChat;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral___All__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).currentChat;
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                       (&CStack_3,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                 (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 7;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ActivateSayChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateSayChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat != 9) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
              (this_00,1,(MethodInfo *)0x0);
    (this->fields).isSayChatIconVisible = 1;
  }
  pTVar1 = (this->fields).currentChat;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral___Say__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).currentChat;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,(this->fields).sayChatColor.r,(this->fields).sayChatColor.g,
                 (this->fields).sayChatColor.b,(this->fields).sayChatColor.a,
                 (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 9;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ActivateTeamChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateTeamChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_00,(MethodInfo *)0x0), this_01 != (SkyParam *)0x0))
  {
    iVar1 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if (iVar1 < 2) {
      return;
    }
    if ((this->fields).selectedChat == 9) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (this_02,0,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = 0;
    }
    pTVar2 = (this->fields).currentChat;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)();
      (this->fields).selectedChat = 8;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
        if ((this->fields).selectedChat != 8) {
          cRam_? = 1;
          return;
        }
      }
      pTVar2 = (this->fields).currentChat;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_03 != (MVLocalPlayer *)0x0) {
        team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)this_03,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        pCVar3 = Styles::Styles_GetTeamColor
                           ((Color *)&stack0xffffffec,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_color.method)(pTVar2,pCVar3->r,pCVar3->g);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_Awake
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_00,StringLiteral__S,(MethodInfo *)0x0);
  (this->fields).whiteSpaceCheck = this_00;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pSVar1 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    object = TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate;
    if (pSVar1 != (SkyParam *)0x0) {
      pDVar2 = (Delegate *)(pSVar1->fields).TopColor.g;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)object,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
                 (MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDVar4 != (Delegate *)0x0) {
        if ((MVTeamManager_OnTeamsUpdatedDelegate__Class *)pDVar4->klass ==
            TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pDVar2 = pDVar4;
        }
        pAVar5 = (Action__Class *)TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate;
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      (pSVar1->fields).TopColor.g = (float)pDVar2;
      this_02 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVAvatar *)0x0) {
        pMVar6 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0);
        if (pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          pDVar2 = (Delegate *)(pMVar6->fields)._._.sendInterval;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)&UNK_?,
                     MethodInfo__SendMessageControl__ChangeTeamChatColor__,(MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pDVar2 = (Delegate *)0x0;
          if (pDVar4 == (Delegate *)0x0) {
code_?:
            (pMVar6->fields)._._.sendInterval = (float)pDVar2;
            return;
          }
          if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
            pDVar2 = pDVar4;
          }
          pAVar5 = TypeInfo__System__Action;
          if (pDVar2 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pDVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pDVar4,pAVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ChangeTeamChatColor() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ChangeTeamChatColor
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat != 8) {
    return;
  }
  pTVar1 = (this->fields).currentChat;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)(pTVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String CreateChatCommandsHelpTxt() */

String * Assembly-CSharp.dll::SendMessageControl::SendMessageControl_CreateChatCommandsHelpTxt
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (TypeInfo__System__String->static_fields->Empty,
                      StringLiteral_u000AType___yes_to_nod_your_head_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_u000AType___no_to_shake_your_head_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_u000AType___wave_to_wave_your_arms_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                      (MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_u000AType___team_to_enter_team_chat_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_u000AType___say_to_enter_say_chat_,(MethodInfo *)0x0);
  str1 = TM::TM__(StringLiteral_u000Au000AType___hd_to_enable_HD_mode_u000A,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String CreateHelpTxt() */

String * Assembly-CSharp.dll::SendMessageControl::SendMessageControl_CreateHelpTxt
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_u000A;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar2 == 0) {
    pSVar3 = TM::TM__(StringLiteral_u000AType___c_to_see_available_chat_,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (MVar4 == MVGameMode__Enum_CharacterEditor) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      return TypeInfo__System__String->static_fields->Empty;
    }
    if (MVar4 == MVGameMode__Enum_Edit) {
      pSVar3 = TM::TM__(StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
      return pSVar1;
    }
    if (MVar4 != MVGameMode__Enum_Play) {
      return pSVar1;
    }
  }
  pSVar3 = TM::TM__(StringLiteral__M__Menu,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void EnforceCharacterLimit() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_EnforceCharacterLimit
               (SendMessageControl *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  if ((pIVar1 != (InputField *)0x0) &&
     (this_00 = (Collection_1_VoxelHit_ *)
                TriggerCube::TriggerCube_get_InputSignalReceiver
                          ((TriggerCube *)pIVar1,(MethodInfo *)0x0),
     this_00 != (Collection_1_VoxelHit_ *)0x0)) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    pPVar3 = (PrefabPool *)(this->fields).inputField;
    if (pPVar3 != (PrefabPool *)0x0) {
      pOVar4 = PrefabPool::PrefabPool_get_MVSpawnPointRedPrefab(pPVar3,(MethodInfo *)0x0);
      if ((int)pIVar2 < (int)pOVar4) {
        return;
      }
      pPVar3 = (PrefabPool *)(this->fields).inputField;
      if (pPVar3 != (PrefabPool *)0x0) {
        pOVar4 = PrefabPool::PrefabPool_get_MVSpawnPointRedPrefab(pPVar3,(MethodInfo *)0x0);
        value = mscorlib.dll::System::String::String_Substring_1
                          ((String *)this_00,0,(int32_t)((int)&pOVar4[-1].fields.mainCollider + 3),
                           (MethodInfo *)0x0);
        pIVar1 = (this->fields).inputField;
        if (pIVar1 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVGameMsgType GetNextChat() */

MVGameMsgType__Enum
Assembly-CSharp.dll::SendMessageControl::SendMessageControl_GetNextChat
          (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVar1 = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
  if ((int)MVar1 < 10) {
    if (MVar1 == MVGameMsgType__Enum_TeamChat) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this_00,(MethodInfo *)0x0);
        if (this_01 != (SkyParam *)0x0) {
          iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0)
          ;
          MVar1 = MVGameMsgType__Enum_TeamChat;
          if (iVar2 < 2) {
            MVar1 = MVGameMsgType__Enum_SayChat;
          }
          return MVar1;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      MVar1 = (*pcVar3)();
      return MVar1;
    }
  }
  else {
    MVar1 = MVGameMsgType__Enum_Chat;
  }
  return MVar1;
}


/* Boolean HandleChatCommands(String) */

bool Assembly-CSharp.dll::SendMessageControl::SendMessageControl_HandleChatCommands
               (SendMessageControl *this,String *chatMsg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_1 = 0;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__h,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar3 = SendMessageControl_CreateHelpTxt((MethodInfo *)0x0);
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    return bStack_1;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__f,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__SendMessageControl->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IToggleFps_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)0x0,
                 MethodInfo__SendMessageControl___HandleChatCommands_m__0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>__EventFunction_System__Object__void__
                );
      TypeInfo__SendMessageControl->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IToggleFps_ *)pUVar4;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__SendMessageControl->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IToggleFps>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>_
              );
    return bStack_1;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__r,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffac);
    pIStack_6 = (IAdManager__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_6);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral__0__x__1_,pOVar5,arg1,(MethodInfo *)0x0);
    goto code_?;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__m,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                        ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
    uVar8 = pVVar7->x;
    iVar9 = (int32_t)pVVar7->y;
    fVar10 = pVVar7->z;
    iVar11 = iVar9;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        (&QStack_13,(MethodInfo *)0x0);
    QStack_13.x = pQVar12->x;
    QStack_13.y = pQVar12->y;
    QStack_13.z = pQVar12->z;
    QStack_13.w = pQVar12->w;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral_Math_validation_test,(MethodInfo *)0x0);
    vector.y = (float)iVar11;
    vector.x = (float)uVar8;
    vector.z = fVar10;
    bStack_14 = MathFunctions::MathFunctions_IsVectorFloatsValid(vector,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_14);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Vector3_one_,pOVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    vector_00.y = (float)iVar9;
    vector_00.x = INFINITY;
    vector_00.z = fVar10;
    bStack_15 = MathFunctions::MathFunctions_IsVectorFloatsValid(vector_00,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_15);
    pSVar3 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_vector3_x___float_PositiveInfini,pOVar5,
                         (MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    vector_01.y = (float)iVar9;
    vector_01.x = NAN;
    vector_01.z = fVar10;
    bStack_16 = MathFunctions::MathFunctions_IsVectorFloatsValid(vector_01,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean);
    pSVar3 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_vector3_x___float_NaN_,pOVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    quaternion.y = QStack_13.y;
    quaternion.x = QStack_13.x;
    quaternion.z = QStack_13.z;
    quaternion.w = QStack_13.w;
    bStack_17 = MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?();
    pSVar3 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Quaternion_identity_,pOVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    fVar18 = QStack_13.z;
    fVar10 = QStack_13.y;
    QStack_13.x = QStack_13.w;
    QStack_13.y = QStack_13.w;
    QStack_13.z = QStack_13.w;
    quaternion_00.y = fVar10;
    quaternion_00.x = INFINITY;
    quaternion_00.z = fVar18;
    quaternion_00.w = QStack_13.w;
    bStack_19 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                          (quaternion_00,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?();
    pSVar3 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_q_x___float_PositiveInfinity_,pOVar5,
                         (MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    QStack_13.w = (float)&UNK_?;
    quaternion_01.y = fVar10;
    quaternion_01.x = NAN;
    quaternion_01.z = (float)&UNK_?;
    quaternion_01.w._0_1_ = SUB41(QStack_13.x,0);
    quaternion_01.w._1_2_ = (short)((uint)QStack_13.x >> 8);
    quaternion_01.w._3_1_ = (char)((uint)QStack_13.x >> 0x18);
    bStack_20 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                          (quaternion_01,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?();
    QStack_13.w = (float)&UNK_?;
    pSVar3 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_q_x___float_NaN_,pOVar5,(MethodInfo *)0x0);
    QStack_13.w = (float)&UNK_?;
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
    return bStack_1;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__c,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                        (TypeInfo__System__String->static_fields->Empty,
                         StringLiteral_u000AType___yes_to_nod_your_head_,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                        (pSVar3,StringLiteral_u000AType___no_to_shake_your_head_,(MethodInfo *)0x0)
    ;
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                        (pSVar3,StringLiteral_u000AType___wave_to_wave_your_arms_,(MethodInfo *)0x0
                        );
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                        (pSVar3,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                         (MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                        (pSVar3,StringLiteral_u000AType___team_to_enter_team_chat_,
                         (MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                        (pSVar3,StringLiteral_u000AType___say_to_enter_say_chat_,(MethodInfo *)0x0)
    ;
    pSVar21 = TM::TM__(StringLiteral_u000Au000AType___hd_to_enable_HD_mode_u000A,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_2(pSVar3,pSVar21,(MethodInfo *)0x0);
    goto code_?;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__hd,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVQualitySettings);
    }
    iVar9 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVQualitySettings);
    }
    MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar9 == 0),(MethodInfo *)0x0);
    return bStack_1;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__ru,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Remote_Playmode_Avatar_should_re,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Build_and_play_mode_UI_not_imple,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__ChatCommandManager);
    }
    ChatCommandManager::ChatCommandManager_ChatCommandActivated
              (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
    return bStack_1;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__gp,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    bVar2 = GamePassesManager::GamePassesManager_get_ShowGamePassDataInConsole((MethodInfo *)0x0);
    GamePassesManager::GamePassesManager_set_ShowGamePassDataInConsole(bVar2 == 0,(MethodInfo *)0x0)
    ;
    return bStack_1;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__rgp,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__dt,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar22 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if ((pPVar22 != (PlayerPlanetData *)0x0) &&
         (this_00 = (pPVar22->fields).playerPlanetMetaData,
         this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
        bStack_15 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                    PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                              (this_00,(MethodInfo *)0x0);
        pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_15);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_resultDailyWelcomeRewardClaimedT,pOVar5,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__DateTime);
        }
        pDVar23 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                            ((DateTime *)&stack0xffffff80,(MethodInfo *)0x0);
        fVar10 = *(float *)&(pDVar23->ticks)._ticks;
        fVar18 = *(float *)((int)&(pDVar23->ticks)._ticks + 4);
        fVar24 = (float)pDVar23->kind;
        fVar25 = *(float *)&pDVar23->field_0xc;
        pPVar22 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if ((pPVar22 != (PlayerPlanetData *)0x0) &&
           ((pPVar22->fields).playerPlanetMetaData != (PlayerPlanetMetaDataClient *)0x0)) {
          QStack_13.x = fVar10;
          QStack_13.y = fVar18;
          QStack_13.z = fVar24;
          QStack_13.w = fVar25;
          pOVar5 = (Object *)func_?(TypeInfo__System__DateTime,&QStack_13);
          pSVar3 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_utcNow_,pOVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          pPVar22 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if ((pPVar22 != (PlayerPlanetData *)0x0) &&
             ((pPVar22->fields).playerPlanetMetaData != (PlayerPlanetMetaDataClient *)0x0)) {
            pOVar5 = (Object *)func_?(TypeInfo__System__DateTime,&stack0xffffffd0);
            pSVar3 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_GamePassesManager_PlayerPlanetDa,pOVar5,
                                 (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar3,(MethodInfo *)0x0);
            func_?(&stack0xffffff60,0);
            pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffac);
            pSVar3 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_lastDailyWelcomeRewardClaim_DayO,pOVar5,
                                 (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar3,(MethodInfo *)0x0);
            pIStack_6 = (IAdManager__Class *)func_?();
            pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_6);
            pSVar3 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_utcNow_DayOfYear_,pOVar5,(MethodInfo *)0x0
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar3,(MethodInfo *)0x0);
            iVar26 = func_?(&stack0xffffff60,0);
            iVar27 = func_?(&stack0xffffff70,0);
            pSVar3 = StringLiteral_resultDebug_;
            if (iVar26 == iVar27) {
              iVar26 = func_?();
              iVar27 = func_?();
              bStack_14 = iVar26 == iVar27;
            }
            else {
              bStack_14 = false;
            }
            pOVar5 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat
                                ((Object *)pSVar3,pOVar5,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar3,(MethodInfo *)0x0);
            return bStack_1;
          }
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__ter,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Testing_context__chat_msg_test_e,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_chat_msg_test_error,(MethodInfo *)0x0);
      return bStack_1;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__tex,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Testing_context__chat_msg_test_e,(MethodInfo *)0x0);
      this_06 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(this_06,StringLiteral_chat_msg_test_ex,(MethodInfo *)0x0);
      func_?(this_06,0,MethodInfo__SendMessageControl__HandleChatCommands_System__String_);
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__sat,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return bStack_1;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__build,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar3 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
      if (this_02 != (KoGaMaSettingsContainer *)0x0) {
        pSVar21 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                            (this_02,(MethodInfo *)0x0);
        this_03 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                  MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
        if (this_03 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
          pOVar5 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              (this_03,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Format_1
                              (pSVar3,(Object *)pSVar21,pOVar5,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
          return bStack_1;
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__no,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__ChatCommandManager);
      }
      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
      return bStack_1;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__yes,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__ChatCommandManager);
      }
      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
      return bStack_1;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__wave,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__ChatCommandManager);
      }
      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
      return bStack_1;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__ad,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__url,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (this_01 != (GameSessionData *)0x0) {
          bStack_15 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]
                      ::ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                                ((ReadOnlyCollection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_15);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_Testing__Redirect_allowed__,pOVar5,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          return bStack_1;
        }
        goto code_?;
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__iad,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (chatMsg,StringLiteral__rad,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar28 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,
                     MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                    );
          if (pIVar28 != (IAdManager *)0x0) {
            pIStack_6 = pIVar28->klass;
            uVar29 = 0;
            uVar30._0_1_ = (pIStack_6->_1).rank;
            uVar30._1_1_ = (pIStack_6->_1).minimumAlignment;
            if (uVar30 != 0) {
              do {
                if (pIStack_6->interfaceOffsets[uVar29].interfaceType ==
                    (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                  ppMVar31 = &(&(pIStack_6->vtable).RequestRewardedAd)
                              [pIStack_6->interfaceOffsets[uVar29].offset].method;
                  goto code_?;
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 < uVar30);
            }
            ppMVar31 = (MethodInfo **)
                       func_?(pIVar28,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6
                                      );
code_?:
            (*(code *)*ppMVar31)(pIVar28,pUVar4,0,ppMVar31[1]);
            return bStack_1;
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (chatMsg,StringLiteral__adtest,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar28 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          pWVar32 = TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager;
          iVar26 = func_?(pIVar28,
                                   TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
          if (iVar26 != 0) {
            pMVar33 = (MethodInfo *)0x0;
            pWVar34 = (WebAdManager *)func_?(pIVar28,pWVar32);
            Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_CreateAdManagerHack
                      (pWVar34,pMVar33);
            return bStack_1;
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (chatMsg,StringLiteral__gdforce,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar2 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__embedforce,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            fVar10 = 0.0;
            uVar35 = 0;
            uVar36 = 0;
            fVar18 = 7.00649e-45;
            fVar24 = 2.3694278e-38;
            uVar37 = 0x101;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pIVar28 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            pWVar32 = TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager;
            iVar26 = func_?(pIVar28,
                                     TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
            if (iVar26 == 0) goto code_?;
            fVar25 = (float)CONCAT13(uVar36,CONCAT21(uVar37,uVar35));
            goto code_?;
          }
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar2 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__pokiforce,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            bVar2 = mscorlib.dll::System::String::String_op_Equality
                              (chatMsg,StringLiteral__export,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              if ((((uint)(TypeInfo__ObjExportHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__ObjExportHandler->_1).cctor_started == 0)) {
                func_?();
              }
              ObjExportHandler::ObjExportHandler_InitializePicking((MethodInfo *)0x0);
              return bStack_1;
            }
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            bVar2 = mscorlib.dll::System::String::String_op_Equality
                              (chatMsg,StringLiteral__exportself,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              if ((((uint)(TypeInfo__ObjExportHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__ObjExportHandler->_1).cctor_started == 0)) {
                func_?();
              }
              ObjExportHandler::ObjExportHandler_ExportSelfAvatar((MethodInfo *)0x0);
              return bStack_1;
            }
            if (chatMsg != (String *)0x0) {
              uVar38 = mscorlib.dll::System::String::String_get_Chars(chatMsg,0,(MethodInfo *)0x0);
              if (uVar38 != 0x2f) {
                return 1;
              }
              TextCommand::TextCommand_Resolve(chatMsg,(MethodInfo *)0x0);
              return bStack_1;
            }
            goto code_?;
          }
          QStack_13.y = 2.8026e-45;
        }
        else {
          QStack_13.y = 1.4013e-45;
        }
        QStack_13.z = 0.0;
        QStack_13.x = 0.0;
        QStack_13.w = 1.4013e-45;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar28 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pWVar32 = TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager;
        iVar26 = func_?();
        fVar10 = QStack_13.x;
        fVar18 = QStack_13.y;
        fVar24 = QStack_13.z;
        fVar25 = QStack_13.w;
        if (iVar26 != 0) {
code_?:
          pMVar33 = (MethodInfo *)0x0;
          pWVar34 = (WebAdManager *)func_?(pIVar28,pWVar32);
          site.siteEnum = (int32_t)fVar18;
          site.sites = (List_1_System_String_ *)fVar10;
          site._8_4_ = fVar24;
          site._12_4_ = fVar25;
          Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_ForceCreateEmbeddedSiteSDK
                    (pWVar34,site,pMVar33);
          return bStack_1;
        }
        goto code_?;
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar28 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      if (pIVar28 == (IAdManager *)0x0) goto code_?;
      cVar39 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar28);
      if (cVar39 == '\0') {
        return bStack_1;
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar28 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,
               MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
              );
    if (pIVar28 != (IAdManager *)0x0) {
      func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar28,pUVar4,0);
      return bStack_1;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_04 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_04 != (MVJetPack *)0x0) &&
       (this_05 = MVJetPack::MVJetPack_get_Shield(this_04,(MethodInfo *)0x0),
       this_05 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetPlayerPlanetData
                ((MVNetworkGame_OperationRequests *)this_05,(MethodInfo *)0x0);
      return bStack_1;
    }
  }
code_?:
  func_?(0);
  pcVar40 = (code *)swi(3);
  bVar2 = (*pcVar40)();
  return bVar2;
}


/* Boolean HandleChatSwapCommand(String) */

bool Assembly-CSharp.dll::SendMessageControl::SendMessageControl_HandleChatSwapCommand
               (SendMessageControl *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (message != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_Equals_4
                      (message,StringLiteral__all,StringComparison__Enum_OrdinalIgnoreCase,
                       (MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_Equals_4
                        (message,StringLiteral__team,StringComparison__Enum_OrdinalIgnoreCase,
                         (MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_Equals_4
                          (message,StringLiteral__say,StringComparison__Enum_OrdinalIgnoreCase,
                           (MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
        SendMessageControl_ActivateSayChat((SendMessageControl *)message,(MethodInfo *)0x0);
      }
      else {
        SendMessageControl_ActivateTeamChat(this,(MethodInfo *)0x0);
        message = (String *)this;
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar2 = (((SendMessageControl *)message)->fields).inputField;
      if (pIVar2 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
        return 1;
      }
    }
    else {
      SendMessageControl_SwapChat(this,MVGameMsgType__Enum_Chat,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar2 = (this->fields).inputField;
      if (pIVar2 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void InitializeToSayChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_InitializeToSayChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat != 9) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
              (this_00,1,(MethodInfo *)0x0);
    (this->fields).isSayChatIconVisible = 1;
  }
  pTVar1 = (this->fields).currentChat;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral___Say__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).currentChat;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,(this->fields).sayChatColor.r,(this->fields).sayChatColor.g,
                 (this->fields).sayChatColor.b,(this->fields).sayChatColor.a,
                 (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 9;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator OOMTest() */

IEnumerator *
Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OOMTest
          (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SendMessageControl___OOMTest_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnAdShownCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnAdShownCallback
               (SendMessageControl *this,InterstitialAdResult__Enum interstitialResult,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult,
                                  &interstitialResult);
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pIVar3 = (InterstitialAdResult__Enum *)func_?(piVar1);
    interstitialResult = *pIVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_WebGL_Ad_shown__,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAdShownCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnAdShownCallback_1
               (SendMessageControl *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult,&result
                                 );
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pRVar3 = (RewardedAdResult__Enum *)func_?(piVar1);
    result = *pRVar3;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_WebGL_Ad_shown__,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnDestroy
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                         ((DayNightCycle *)pMVar2,(MethodInfo *)0x0), pSVar3 != (SkyParam *)0x0)) {
    pDVar4 = (Delegate *)(pSVar3->fields).TopColor.g;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,unaff_EDI,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pDVar4 = (Delegate *)0x0;
    if (pDVar6 != (Delegate *)0x0) {
      if ((MVTeamManager_OnTeamsUpdatedDelegate__Class *)pDVar6->klass ==
          TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pDVar4 = pDVar6;
      }
      pAVar7 = (Action__Class *)TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate;
      if (pDVar4 == (Delegate *)0x0) goto code_?;
    }
    (pSVar3->fields).TopColor.g = (float)pDVar4;
    this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVAvatar *)0x0) &&
       (pMVar8 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
       pMVar8 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
      pDVar4 = (Delegate *)(pMVar8->fields)._._.sendInterval;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)&UNK_?,
                 MethodInfo__SendMessageControl__ChangeTeamChatColor__,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      pDVar4 = (Delegate *)0x0;
      if (pDVar6 == (Delegate *)0x0) {
code_?:
        (pMVar8->fields)._._.sendInterval = (float)pDVar4;
        return;
      }
      if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
        pDVar4 = pDVar6;
      }
      pAVar7 = TypeInfo__System__Action;
      if (pDVar4 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDVar6 = extraout_ECX;
  pAVar7 = extraout_EDX;
code_?:
  func_?(pDVar6,pAVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnInputFieldChange() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnInputFieldChange
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 != (InputField *)0x0) {
    this_00 = (Collection_1_VoxelHit_ *)
              TriggerCube::TriggerCube_get_InputSignalReceiver
                        ((TriggerCube *)pIVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      ((String *)this_00,TypeInfo__System__String->static_fields->Empty,
                       (MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (this_00 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Substring_1
                         ((String *)this_00,(int32_t)((int)&pIVar3[-1].monitor + 3),1,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                           ((String *)this_00,0,(int32_t)((int)&pIVar3[-1].monitor + 3),
                            (MethodInfo *)0x0);
        bVar2 = SendMessageControl_HandleChatSwapCommand(this,pSVar4,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
      }
    }
    if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
      iVar5 = mscorlib.dll::System::String::String_IndexOf_5
                        ((String *)this_00,StringLiteral_u000A,(MethodInfo *)0x0);
      if (-1 < iVar5) {
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                          ((MethodInfo *)0x0);
        (this->fields).frameCountSent = iVar5;
        SendMessageControl_Send(this,(MethodInfo *)0x0);
        return;
      }
      iVar5 = mscorlib.dll::System::String::String_IndexOf_5
                        ((String *)this_00,StringLiteral_u0009,(MethodInfo *)0x0);
      if (iVar5 < 0) {
        SendMessageControl_EnforceCharacterLimit(this,(MethodInfo *)0x0);
        bVar2 = (this->fields).isSayChatIconVisible;
        if ((this->fields).selectedChat == 9) {
          if (bVar2 == 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar6 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                      (pMVar6,1,(MethodInfo *)0x0);
            (this->fields).isSayChatIconVisible = 1;
          }
        }
        else if (bVar2 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar6 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                    (pMVar6,0,(MethodInfo *)0x0);
          (this->fields).isSayChatIconVisible = 0;
        }
        iVar7 = (this->fields).frameCountSent;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                          ((MethodInfo *)0x0);
        if (iVar7 == iVar5) {
          pIVar1 = (this->fields).inputField;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          if (pIVar1 == (InputField *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
        }
        return;
      }
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Substring_1
                         ((String *)this_00,0,(int32_t)((int)&pIVar3[-1].monitor + 3),
                          (MethodInfo *)0x0);
      pIVar1 = (this->fields).inputField;
      if (pIVar1 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar1,pSVar4,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        newChat = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
        if (9 < (int)newChat) {
          SendMessageControl_SwapChat(this,MVGameMsgType__Enum_Chat,(MethodInfo *)0x0);
          return;
        }
        if (newChat == MVGameMsgType__Enum_TeamChat) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_01 == (MVNetworkGame *)0x0) ||
             (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)this_01,(MethodInfo *)0x0),
             this_02 == (SkyParam *)0x0)) goto code_?;
          iVar5 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_02,(MethodInfo *)0x0)
          ;
          if (iVar5 < 2) {
            newChat = MVGameMsgType__Enum_SayChat;
          }
        }
        SendMessageControl_SwapChat(this,newChat,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnInputFocusChange(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnInputFocusChange
               (SendMessageControl *this,bool isFocused,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat == 9) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
              (this_00,isFocused,(MethodInfo *)0x0);
    (this->fields).isSayChatIconVisible = isFocused;
  }
  return;
}


/* Void SanitizeMessage(String ByRef, String) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SanitizeMessage
               (SendMessageControl *this,String **message,String *tagToSanitize,MethodInfo *method)

{
  bVar1 = false;
  if ((*message != (String *)0x0) &&
     (pSVar2 = mscorlib.dll::System::String::String_ToLower(*message,(MethodInfo *)0x0),
     pSVar2 != (String *)0x0)) {
    val = mscorlib.dll::System::String::String_ToCharArray(pSVar2,(MethodInfo *)0x0);
    startIndex_00 = 0;
    uVar3 = 0;
    ppSVar4 = message;
    while (val != (Char__Array *)0x0) {
      if ((int)val->max_length <= (int)uVar3) {
        return;
      }
      if (val->max_length <= uVar3) goto code_?;
      if ((val->vector[uVar3] == 0x3c) && (!bVar1)) {
        bVar1 = true;
        startIndex_00 = uVar3;
      }
      sVar5 = func_?(uVar3);
      message = ppSVar4;
      if ((sVar5 == 0x3e) && (bVar1)) {
        method_00 = (uVar3 + 1) - startIndex_00;
        pSVar2 = mscorlib.dll::System::String::String_CreateString_5
                           ((String *)0x0,val,startIndex_00,method_00,(MethodInfo *)method_00);
        sVar5 = func_?();
        bVar1 = false;
        if (sVar5 != 0x20) {
          if (pSVar2 == (String *)0x0) break;
          startIndex = 0;
          bVar6 = mscorlib.dll::System::String::String_Contains
                            (pSVar2,tagToSanitize,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            if (*ppSVar4 == (String *)0x0) break;
            message = (String **)
                      mscorlib.dll::System::String::String_Remove_1
                                (*ppSVar4,startIndex,startIndex,(MethodInfo *)0x0);
            *ppSVar4 = (String *)message;
            if (((String *)message == (String *)0x0) ||
               (pSVar2 = mscorlib.dll::System::String::String_ToLower
                                   ((String *)message,(MethodInfo *)0x0), pSVar2 == (String *)0x0))
            break;
            tagToSanitize = (String *)&UNK_?;
            val = mscorlib.dll::System::String::String_ToCharArray(pSVar2,(MethodInfo *)0x0);
            uVar3 = startIndex - 1;
            startIndex_00 = startIndex;
            bVar1 = false;
          }
        }
      }
      uVar3 = uVar3 + 1;
      ppSVar4 = message;
    }
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Send() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_Send
               (SendMessageControl *this,MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).sendMessageCooldownTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 < fVar1) {
    SendMessageControl_EnforceCharacterLimit(this,(MethodInfo *)0x0);
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pIVar3 = (this->fields).inputField;
  (this->fields).sendMessageCooldownTime = fVar1 + _UNK_?;
  if (pIVar3 != (InputField *)0x0) {
    pSVar4 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar5 = TypeInfo__System__String->static_fields->Empty;
    if ((((uint)(TypeInfo__System__Text__RegularExpressions__Regex->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    }
    pSVar5 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                       (pSVar4,StringLiteral__r_n___n,pSVar5,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_size;
    this = (SendMessageControl *)0x0;
    if ((pSVar5 != (String *)0x0) &&
       (pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar5,(MethodInfo *)0x0),
       pSVar6 != (String *)0x0)) {
      val = mscorlib.dll::System::String::String_ToCharArray(pSVar6,(MethodInfo *)0x0);
      startIndex = 0;
      uVar7 = 0;
      if (val != (Char__Array *)0x0) {
        while ((int)uVar7 < (int)val->max_length) {
          if (val->max_length <= uVar7) goto code_?;
          startIndex_00 = startIndex;
          if ((val->vector[uVar7] == 0x3c) && (this._3_1_ == '\0')) {
            startIndex_00 = uVar7;
          }
          this = (SendMessageControl *)&UNK_?;
          sVar8 = func_?();
          startIndex = startIndex_00;
          if (sVar8 == 0x3e) {
            this = (SendMessageControl *)((uVar7 + 1) - startIndex_00);
            startIndex = 0;
            pSVar5 = (String *)&UNK_?;
            count = this;
            pSVar6 = mscorlib.dll::System::String::String_CreateString_5
                               ((String *)0x0,val,startIndex_00,(int32_t)this,(MethodInfo *)0x0);
            sVar8 = func_?();
            if (sVar8 != 0x20) {
              if (pSVar6 == (String *)0x0) goto code_?;
              this = (SendMessageControl *)pSVar4;
              bVar9 = mscorlib.dll::System::String::String_Contains(pSVar6,pSVar4,(MethodInfo *)0x0)
              ;
              if (bVar9 != 0) {
                this = (SendMessageControl *)&UNK_?;
                pSVar5 = mscorlib.dll::System::String::String_Remove_1
                                   (pSVar5,startIndex,(int32_t)count,(MethodInfo *)0x0);
                if ((pSVar5 == (String *)0x0) ||
                   (pSVar6 = mscorlib.dll::System::String::String_ToLower(pSVar5,(MethodInfo *)0x0),
                   pSVar6 == (String *)0x0)) goto code_?;
                val = mscorlib.dll::System::String::String_ToCharArray(pSVar6,(MethodInfo *)0x0);
                uVar7 = startIndex - 1;
              }
            }
          }
          uVar7 = uVar7 + 1;
          if (val == (Char__Array *)0x0) goto code_?;
        }
        pIVar3 = (this_03->fields).inputField;
        if (pIVar3 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar3,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
          this_00 = (this_03->fields).whiteSpaceCheck;
          if ((this_00 != (Regex *)0x0) &&
             (this_04 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                                  (this_00,pSVar5,(MethodInfo *)0x0), this_04 != (Match *)0x0)) {
            pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                                (MethodInfo *)0x0);
            if ((int)pOVar10 < 1) {
              this_02 = (this_03->fields).DoSend;
              if (this_02 == (UnityAction_1_System_Boolean_ *)0x0) {
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
              UnityAction_1_System_Boolean__Invoke
                        (this_02,0,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_)
              ;
              return;
            }
            pLVar11 = (this_03->fields).spamList;
            index = 0;
            if (pLVar11 != (List_1_System_Single_ *)0x0) goto code_?;
          }
        }
      }
    }
  }
  goto code_?;
  while( true ) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                       ((MethodInfo *)0x0);
    pLVar11 = (this_03->fields).spamList;
    if (pLVar11 == (List_1_System_Single_ *)0x0) break;
    fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
             List_1_System_Single__get_Item
                       (pLVar11,index,
                        MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    pfVar12 = &(this_03->fields).intervalForMessages;
    if (*pfVar12 <= fVar1 - fVar2 && fVar1 - fVar2 != *pfVar12) {
      pLVar11 = (this_03->fields).spamList;
      if (pLVar11 == (List_1_System_Single_ *)0x0) break;
      fVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
               List_1_System_Single__get_Item
                         (pLVar11,index,
                          MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__Remove
                (pLVar11,fVar1,MethodInfo__System__Collections__Generic__List<float>__Remove_float_
                );
    }
    pLVar11 = (this_03->fields).spamList;
    index = index + 1;
    if (pLVar11 == (List_1_System_Single_ *)0x0) break;
code_?:
    pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11,
                        MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    if ((int)pOVar10 <= index) {
      pLVar11 = (this_03->fields).spamList;
      if (pLVar11 != (List_1_System_Single_ *)0x0) {
        pSVar4 = (String *)&UNK_?;
        pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11,
                            MethodInfo__System__Collections__Generic__List<float>__get_Count__);
        if ((this_03->fields).maxMessagesPerInterval < (int)pOVar10) {
          this_01 = (AvatarMotor_OnActiveBounceDelegate *)(this_03->fields).SpamWarning;
          if (this_01 == (AvatarMotor_OnActiveBounceDelegate *)0x0) {
            return;
          }
          AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        pLVar11 = (this_03->fields).spamList;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                           ((MethodInfo *)0x0);
        if (pLVar11 != (List_1_System_Single_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
          List_1_System_Single__Add
                    (pLVar11,fVar1,
                     MethodInfo__System__Collections__Generic__List<float>__Add_float_);
          SendMessageControl_SendChatMessage(this_03,pSVar4,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SendChatMessage(String) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SendChatMessage
               (SendMessageControl *this,String *chatMsg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (chatMsg == (String *)0x0) goto code_?;
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)chatMsg,(MethodInfo *)0x0);
    if (0x100 < (int)pIVar2) {
      chatMsg = mscorlib.dll::System::String::String_Substring_1(chatMsg,0,0x100,(MethodInfo *)0x0);
    }
    bVar1 = SendMessageControl_HandleChatSwapCommand(this,chatMsg,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    bVar1 = SendMessageControl_HandleChatCommands(this,chatMsg,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).selectedChat == 9) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar3 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                  (pMVar3,0,(MethodInfo *)0x0);
        (this->fields).isSayChatIconVisible = 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      gameMsgData = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)gameMsgData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pSVar4 = (String *)func_?();
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_01 == (MVNetworkGame *)0x0) ||
         (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
      value = (CrossPlatformInputManager_VirtualButton *)func_?();
      if (gameMsgData == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)gameMsgData,pSVar4,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar4 = (String *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)gameMsgData,pSVar4,(CrossPlatformInputManager_VirtualButton *)chatMsg,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pMVar3 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostChatMsg
                (pMVar3,gameMsgData,(this->fields).selectedChat,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).DoSend;
    if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
      UnityAction_1_System_Boolean__Invoke
                (this_00,0,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    }
  }
  return;
}


/* Void SetToNextChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetToNextChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVar1 = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
  if ((int)MVar1 < 10) {
    if (MVar1 == MVGameMsgType__Enum_TeamChat) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this_00,(MethodInfo *)0x0);
        if (this_01 != (SkyParam *)0x0) {
          iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0)
          ;
          MVar1 = MVGameMsgType__Enum_TeamChat;
          if (iVar2 < 2) {
            MVar1 = MVGameMsgType__Enum_SayChat;
          }
          SendMessageControl_SwapChat(this,MVar1,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    MVar1 = MVGameMsgType__Enum_Chat;
  }
  SendMessageControl_SwapChat(this,MVar1,(MethodInfo *)0x0);
  return;
}


/* Void ShowBuildInformation() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ShowBuildInformation
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (this_00 != (KoGaMaSettingsContainer *)0x0) {
    arg0 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                     (this_00,(MethodInfo *)0x0);
    this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
              MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
      arg1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Format_1
                         (pSVar1,(Object *)arg0,arg1,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SwapChat(MVGameMsgType) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SwapChat
               (SendMessageControl *this,MVGameMsgType__Enum newChat,MethodInfo *method)

{
  if (newChat != MVGameMsgType__Enum_Chat) {
    if (newChat == MVGameMsgType__Enum_TeamChat) {
      SendMessageControl_ActivateTeamChat(this,(MethodInfo *)0x0);
      return;
    }
    if (newChat == MVGameMsgType__Enum_SayChat) {
      SendMessageControl_ActivateSayChat(this,(MethodInfo *)0x0);
    }
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat == 9) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
              (this_00,0,(MethodInfo *)0x0);
    (this->fields).isSayChatIconVisible = 0;
  }
  pTVar1 = (this->fields).currentChat;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,StringLiteral___All__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).currentChat;
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                       (&CStack_3,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
                 (pTVar1->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 7;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ToggleHD() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ToggleHD
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  iVar1 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar1 == 0),(MethodInfo *)0x0);
  return;
}


/* Void <HandleChatCommands>m__0(IToggleFps, BaseEventData) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl__HandleChatCommands_m__0
               (IToggleFps *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IToggleFps *)0x0) {
    func_?(0,TypeInfo__IToggleFps,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SendMessageControl() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl__ctor
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).intervalForMessages = 5.0;
  (this->fields).maxMessagesPerInterval = 5;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<float>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<float>__List__);
  (this->fields).spamList = (List_1_System_Single_ *)pLVar1;
  (this->fields).selectedChat = 7;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  (this->fields).oomBytes = (List_1_System_Byte__1 *)pLVar1;
  (this->fields).bytesPerFrame = 0x100000;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_SayChatColor(Color) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_set_SayChatColor
               (SendMessageControl *this,Color value,MethodInfo *method)

{
  (this->fields).sayChatColor.r = value.r;
  (this->fields).sayChatColor.g = value.g;
  (this->fields).sayChatColor.b = value.b;
  (this->fields).sayChatColor.a = value.a;
  return;
}

