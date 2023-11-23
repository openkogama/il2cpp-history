
/* Void ActivateAllChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateAllChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral___All__);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat == 9) {
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (this_00,0,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = 0;
    }
  }
  pTVar2 = (this->fields).currentChat;
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,StringLiteral___All__,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this->fields).currentChat;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_color.method)
                (pTVar2,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                 (pTVar2->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 7;
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ActivateSayChat(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateSayChat
               (SendMessageControl *this,bool sayChatVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral___Say__);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((this->fields).selectedChat != 9) {
    bVar1 = sayChatVisible;
  }
  if (bVar1 != 0) {
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (this_00,1,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = 1;
    }
  }
  pTVar2 = (this->fields).currentChat;
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,StringLiteral___Say__,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this->fields).currentChat;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_color.method)
                (pTVar2,(this->fields).sayChatColor.r,(this->fields).sayChatColor.g,
                 (this->fields).sayChatColor.b,(this->fields).sayChatColor.a,
                 (pTVar2->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 9;
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ActivateTeamChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateTeamChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral___Team__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      return;
    }
    if (((this->fields).selectedChat == 9) &&
       (bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0),
       bVar3 == 0)) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (this_01,0,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = 0;
    }
    pTVar4 = (this->fields).currentChat;
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)();
      (this->fields).selectedChat = 8;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this->fields).selectedChat != 8) {
        return;
      }
      pTVar4 = (this->fields).currentChat;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar5 != (MVLocalPlayer *)0x0) {
        team = (pMVar5->fields)._._Team_k__BackingField;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,team,0,(MethodInfo *)0x0);
        if (pTVar4 != (Text *)0x0) {
          (*(code *)(pTVar4->klass->vtable).set_color.method)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_Awake
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&MethodInfo__SendMessageControl__ChangeTeamChatColor__);
    func_?(&StringLiteral__S);
    cRam_? = '\x01';
  }
  this_00 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor
            (this_00,StringLiteral__S,(MethodInfo *)0x0);
  (this->fields).whiteSpaceCheck = this_00;
  func_?(&(this->fields).whiteSpaceCheck,this_00);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
    pMVar3 = (pMVar2->fields).OnTeamsUpdated;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
               (MethodInfo *)0x0);
    pMVar3 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pMVar3 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (pMVar2->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    }
    else {
      pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar5 = pMVar3;
      }
      if (pMVar5 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      (pMVar2->fields).OnTeamsUpdated = pMVar5;
      pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar5 = pMVar3;
      }
      if (pMVar5 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
    }
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar6 = (pMVar1->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
      pAVar7 = (pMVar6->fields).OnPlayerListChanged;
      pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar4,(Object *)this,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
                 (MethodInfo *)0x0);
      pAVar7 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
      if (pAVar7 == (Action *)0x0) {
        (pMVar6->fields).OnPlayerListChanged = (Action *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 != (Action *)0x0) {
        (pMVar6->fields).OnPlayerListChanged = pAVar8;
        pAVar8 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar7;
        }
        if (pAVar8 != (Action *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ChangeTeamChatColor() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ChangeTeamChatColor
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat != 8) {
    return;
  }
  pTVar1 = (this->fields).currentChat;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 != (MVLocalPlayer *)0x0) {
    team = (pMVar2->fields)._._Team_k__BackingField;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar3 = Styles::Styles_GetTeamColor(&CStack_4,team,0,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      CStack_4.r = pCVar3->b;
      CStack_4.g = pCVar3->a;
      CStack_4.b = (float)(pTVar1->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pTVar1->klass->vtable).set_color.method)(pTVar1,pCVar3->r,pCVar3->g);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String CreateChatCommandsHelpTxt() */

String * Assembly-CSharp.dll::SendMessageControl::SendMessageControl_CreateChatCommandsHelpTxt
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u000AType___team_to_enter_team_chat_);
    func_?(&StringLiteral_u000AType___say_to_enter_say_chat_);
    func_?(&StringLiteral_u000AType___yes_to_nod_your_head_);
    func_?(&StringLiteral_u000Au000AType___hd_to_enable_HD_mode_u000A);
    func_?(&StringLiteral_u000Au000AType___all_to_enter_all_chat__);
    func_?(&StringLiteral_u000AType___wave_to_wave_your_arms_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_u000AType___no_to_shake_your_head_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (::StringLiteral__,StringLiteral_u000AType___yes_to_nod_your_head_,
                      (MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_u000AType___no_to_shake_your_head_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_u000AType___wave_to_wave_your_arms_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                      (MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_u000AType___team_to_enter_team_chat_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_u000AType___say_to_enter_say_chat_,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    str1 = TM::TM__(StringLiteral_u000Au000AType___hd_to_enable_HD_mode_u000A,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
    return pSVar1;
  }
  return pSVar1;
}


/* String CreateHelpTxt() */

String * Assembly-CSharp.dll::SendMessageControl::SendMessageControl_CreateHelpTxt
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A);
    func_?(&StringLiteral__M__Menu);
    func_?(&StringLiteral_u000AType___c_to_see_available_chat_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_u000A;
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar2 == 0) {
    pSVar3 = TM::TM__(StringLiteral_u000AType___c_to_see_available_chat_,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (MVar4 == MVGameMode__Enum_Edit) {
        pSVar3 = TM::TM__(StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
        return pSVar1;
      }
      if (MVar4 != MVGameMode__Enum_Play) {
        if (MVar4 != MVGameMode__Enum_CharacterEditor) {
          return pSVar1;
        }
        return ::StringLiteral__;
      }
    }
    pSVar3 = TM::TM__(StringLiteral__M__Menu,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* Void EnforceCharacterLimit() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_EnforceCharacterLimit
               (SendMessageControl *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  if ((pIVar1 != (InputField *)0x0) && (pSVar2 = (pIVar1->fields).m_Text, pSVar2 != (String *)0x0))
  {
    pIVar1 = (this->fields).inputField;
    if ((pIVar1->fields).m_CharacterLimit <= (pSVar2->fields)._stringLength) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar2,0,(pIVar1->fields).m_CharacterLimit + -1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inputField;
      if (pIVar1 == (InputField *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar1,pSVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVGameMsgType GetNextChat() */

MVGameMsgType__Enum
Assembly-CSharp.dll::SendMessageControl::SendMessageControl_GetNextChat
          (SendMessageControl *this,MethodInfo *method)

{
  MVar1 = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
  if ((int)MVar1 < 10) {
    if (MVar1 == MVGameMsgType__Enum_TeamChat) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
        iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
        MVar1 = MVGameMsgType__Enum_TeamChat;
        if (iVar3 < 2) {
          MVar1 = MVGameMsgType__Enum_SayChat;
        }
        return MVar1;
      }
      func_?();
      pcVar4 = (code *)swi(3);
      MVar1 = (*pcVar4)();
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
  pSVar1 = (String *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmbeddedSite);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IToggleFps>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                   );
    func_?(&TypeInfo__ObjExportHandler);
    func_?(&TypeInfo__MV__Common__Region);
    func_?(&
                    MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&
                    MethodInfo__SendMessageControl____c___HandleChatCommands_b__55_0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SendMessageControl____c);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
    func_?(&StringLiteral__export);
    func_?(&StringLiteral_Quaternion_identity_);
    func_?(&StringLiteral_resultDailyWelcomeRewardClaimedT);
    func_?(&StringLiteral__c);
    func_?(&StringLiteral__m);
    func_?(&StringLiteral__tex);
    func_?(&StringLiteral__wave);
    func_?(&StringLiteral_utcNow_);
    func_?(&StringLiteral__dt);
    func_?(&StringLiteral__ter);
    func_?(&StringLiteral_Vector3FromSerialize_result___);
    func_?(&StringLiteral_q_x___float_PositiveInfinity_);
    func_?(&StringLiteral__gp);
    func_?(&StringLiteral_AdManager___);
    func_?(&StringLiteral__pokiforce);
    func_?(&StringLiteral_Vector3FromSerialize___);
    func_?(&StringLiteral__convertSingle);
    func_?(&StringLiteral_allowsModals___);
    func_?(&StringLiteral__hd);
    func_?(&StringLiteral__ru);
    func_?(&StringLiteral_Vector3_one_);
    func_?(&StringLiteral__shaderInfo);
    func_?(&StringLiteral__admanager);
    func_?(&StringLiteral__region);
    func_?(&StringLiteral_vector3_x___float_PositiveInfini);
    func_?(&StringLiteral_WasInitializedSuccessfully___);
    func_?(&StringLiteral_Shader___0_u000AAniso_level___1_u000AFil);
    func_?(&StringLiteral_showPlayButtonAd___);
    func_?(&StringLiteral__r);
    func_?(&StringLiteral__adtest);
    func_?(&StringLiteral__0__x__1_);
    func_?(&StringLiteral_allowsRedirectToWebpage___);
    func_?(&StringLiteral_Build_and_play_mode_UI_not_imple);
    func_?(&StringLiteral_SiteEnum___);
    func_?(&StringLiteral_q_x___float_NaN_);
    func_?(&StringLiteral__rgp);
    func_?(&StringLiteral__sat);
    func_?(&StringLiteral_Site__);
    func_?(&StringLiteral__exportself);
    func_?(&StringLiteral__gdforce);
    func_?(&StringLiteral_Testing_context__chat_msg_test_e);
    func_?(&StringLiteral__embedforce);
    func_?(&StringLiteral__build);
    func_?(&StringLiteral__url);
    func_?(&StringLiteral_utcNow_DayOfYear_);
    func_?(&StringLiteral__f);
    func_?(&StringLiteral_Remote_Playmode_Avatar_should_re);
    func_?(&StringLiteral__h);
    func_?(&StringLiteral_allowsOpenInNewTab___);
    func_?(&StringLiteral__rad);
    func_?(&StringLiteral_vector3_x___float_NaN_);
    func_?(&StringLiteral_integratedSdk___);
    func_?(&StringLiteral_EmbeddedSiteSDKAvailable___);
    func_?(&StringLiteral_chat_msg_test_error);
    func_?(&StringLiteral_allowsFallbackAds___);
    func_?(&StringLiteral_showTouristPromotion___);
    func_?(&StringLiteral_Testing__Redirect_allowed__);
    func_?(&StringLiteral__iad);
    func_?(&StringLiteral_lastDailyWelcomeRewardClaim_DayO);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Math_validation_test);
    func_?(&StringLiteral_resultDebug_);
    func_?(&StringLiteral__yes);
    func_?(&StringLiteral__ad);
    func_?(&StringLiteral_Region___0_);
    func_?(&StringLiteral__no);
    func_?(&StringLiteral_GamePassesManager_PlayerPlanetDa);
    func_?(&StringLiteral_AdSDK___);
    cRam_? = '\x01';
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar3 = 0;
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__h,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__f,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SendMessageControl____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__SendMessageControl____c->static_fields->__9__55_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IToggleFps_ *)0x0) {
        if ((TypeInfo__SendMessageControl____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__SendMessageControl____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IToggleFps_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SendMessageControl____c___HandleChatCommands_b__55_0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SendMessageControl____c->static_fields->__9__55_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IToggleFps>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>_
                );
      *unaff_FS_OFFSET = pSVar1;
      return bVar3;
    }
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__r,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      pOVar5 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      pOVar6 = (Object *)func_?();
      pSVar7 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral__0__x__1_,pOVar5,pOVar6,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pSVar1;
      return bVar3;
    }
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__m,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      EVar9.klass = (Enum__Class *)(pVVar8->oneVector).x;
      EVar9.monitor = (MonitorData *)(pVVar8->oneVector).y;
      fVar10 = (pVVar8->oneVector).z;
      EVar11 = EVar9;
      pQVar12 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                          ((Quaternion *)&stack0xffffffcc,(MVWorldObject *)0x0,pMVar2);
      pMVar13 = EVar9.monitor;
      fVar14 = pQVar12->x;
      fVar15 = pQVar12->y;
      fVar16 = pQVar12->z;
      fVar17 = pQVar12->w;
      fVar18 = fVar15;
      fVar19 = fVar16;
      fVar20 = fVar17;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,StringLiteral_Math_validation_test,(MethodInfo *)0x0);
      vector.z = fVar10;
      vector.x = (float)EVar11.klass;
      vector.y = (float)EVar11.monitor;
      MathFunctions::MathFunctions_IsVectorFloatsValid(vector,(MethodInfo *)0x0);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Vector3_one_,pSVar1,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      pMVar21 = (MonitorData *)&UNK_?;
      vector_00.y = (float)pMVar13;
      vector_00.x = INFINITY;
      vector_00.z = fVar10;
      MathFunctions::MathFunctions_IsVectorFloatsValid(vector_00,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_vector3_x___float_PositiveInfini,pSVar1,(MethodInfo *)0x0)
      ;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      auVar22._2_4_ = pMVar21;
      auVar22._0_2_ = 0x7fc0;
      auVar22._6_4_ = fVar10;
      auVar22._10_2_ = 0;
      MathFunctions::MathFunctions_IsVectorFloatsValid((Vector3)(auVar22 << 0x10),(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_vector3_x___float_NaN_,pSVar1,(MethodInfo *)0x0);
      bVar4 = 0x10;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      quaternion.y = fVar18;
      quaternion.x = fVar14;
      quaternion.z = fVar19;
      quaternion.w = fVar20;
      MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Quaternion_identity_,pSVar7,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
      quaternion_00.y = fVar15;
      quaternion_00.x = INFINITY;
      quaternion_00.z = fVar16;
      quaternion_00.w = fVar17;
      MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion_00,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_q_x___float_PositiveInfinity_,pSVar7,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
      quaternion_01.y = fVar15;
      quaternion_01.x = NAN;
      quaternion_01.z = fVar16;
      quaternion_01.w = fVar17;
      MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion_01,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_q_x___float_NaN_,pSVar7,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pSVar1;
      return bVar4;
    }
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__c,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__hd,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar23 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
        if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar23 == 0),(MethodInfo *)0x0)
        ;
        *unaff_FS_OFFSET = pSVar1;
        return bVar3;
      }
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__ru,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Remote_Playmode_Avatar_should_re,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Build_and_play_mode_UI_not_imple,(MethodInfo *)0x0);
        if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ChatCommandManager::ChatCommandManager_ChatCommandActivated
                  (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pSVar1;
        return bVar3;
      }
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__gp,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        GamePassesManager::GamePassesManager_set_ShowGamePassDataInConsole
                  (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pSVar1;
        return bVar3;
      }
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__rgp,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        bVar4 = mscorlib.dll::System::String::String_op_Equality
                          (chatMsg,StringLiteral__dt,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          bVar4 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__ter,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Testing_context__chat_msg_test_e,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_chat_msg_test_error,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pSVar1;
            return bVar3;
          }
          pMVar2 = (MethodInfo *)chatMsg;
          bVar4 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__tex,(MethodInfo *)0x0);
          if (bVar4 != 0) goto code_?;
          bVar4 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__sat,(MethodInfo *)0x0);
          if (bVar4 != 0) goto code_?;
          bVar3 = 0;
          bVar4 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__shaderInfo,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            bVar3 = 0x10;
            pSVar1 = StringLiteral__build;
            bVar4 = mscorlib.dll::System::String::String_op_Equality
                              (chatMsg,StringLiteral__build,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              bVar4 = mscorlib.dll::System::String::String_op_Equality
                                (chatMsg,StringLiteral__region,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                if (chatMsg != (String *)0x0) {
                  bVar4 = mscorlib.dll::System::String::String_StartsWith
                                    (chatMsg,StringLiteral__convertSingle,(MethodInfo *)0x0);
                  if (bVar4 == 0) {
                    bVar4 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__no,(MethodInfo *)0x0);
                    if (bVar4 != 0) {
                      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                                (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pSVar1;
                      return bVar3;
                    }
                    bVar4 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__yes,(MethodInfo *)0x0);
                    if (bVar4 != 0) {
                      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                                (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pSVar1;
                      return bVar3;
                    }
                    bVar4 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__wave,(MethodInfo *)0x0);
                    if (bVar4 != 0) {
                      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                                (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pSVar1;
                      return bVar3;
                    }
                    bVar4 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__ad,(MethodInfo *)0x0);
                    if (bVar4 == 0) {
                      bVar4 = mscorlib.dll::System::String::String_op_Equality
                                        (chatMsg,StringLiteral__url,(MethodInfo *)0x0);
                      if (bVar4 == 0) {
                        bVar4 = mscorlib.dll::System::String::String_op_Equality
                                          (chatMsg,StringLiteral__iad,(MethodInfo *)0x0);
                        if (bVar4 != 0) goto code_?;
                        bVar4 = mscorlib.dll::System::String::String_op_Equality
                                          (chatMsg,StringLiteral__rad,(MethodInfo *)0x0);
                        if (bVar4 == 0) {
                          bVar4 = mscorlib.dll::System::String::String_op_Equality
                                            (chatMsg,StringLiteral__adtest,(MethodInfo *)0x0);
                          if (bVar4 != 0) {
                            MVGameControllerBase::MVGameControllerBase_get_AdManager
                                      ((MethodInfo *)0x0);
                            pWVar24 = (WebAdManager *)func_?();
                            if (pWVar24 != (WebAdManager *)0x0) {
                              Assets::Scripts::AdIntegration::Web::WebAdManager::
                              WebAdManager_CreateAdManagerHack(pWVar24,(MethodInfo *)0x0);
                              *unaff_FS_OFFSET = pSVar1;
                              return bVar3;
                            }
                            goto code_?;
                          }
                          bVar4 = mscorlib.dll::System::String::String_op_Equality
                                            (chatMsg,StringLiteral__admanager,(MethodInfo *)0x0);
                          if (bVar4 == 0) {
                            bVar4 = mscorlib.dll::System::String::String_op_Equality
                                              (chatMsg,StringLiteral__gdforce,(MethodInfo *)0x0);
                            if (bVar4 == 0) {
                              bVar4 = mscorlib.dll::System::String::String_op_Equality
                                                (chatMsg,StringLiteral__embedforce,(MethodInfo *)0x0
                                                );
                              if (bVar4 == 0) {
                                bVar4 = mscorlib.dll::System::String::String_op_Equality
                                                  (chatMsg,StringLiteral__pokiforce,
                                                   (MethodInfo *)0x0);
                                if (bVar4 == 0) {
                                  bVar4 = mscorlib.dll::System::String::String_op_Equality
                                                    (chatMsg,StringLiteral__export,(MethodInfo *)0x0
                                                    );
                                  if (bVar4 != 0) {
                                    if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    ObjExportHandler::ObjExportHandler_InitializePicking
                                              ((MethodInfo *)0x0);
                                    *unaff_FS_OFFSET = pSVar1;
                                    return bVar3;
                                  }
                                  bVar4 = mscorlib.dll::System::String::String_op_Equality
                                                    (chatMsg,StringLiteral__exportself,
                                                     (MethodInfo *)0x0);
                                  if (bVar4 != 0) {
                                    if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    ObjExportHandler::ObjExportHandler_ExportSelfAvatar
                                              ((MethodInfo *)0x0);
                                    *unaff_FS_OFFSET = pSVar1;
                                    return bVar3;
                                  }
                                  uVar25 = mscorlib.dll::System::String::String_get_Chars
                                                    (chatMsg,0,(MethodInfo *)0x0);
                                  if (uVar25 == 0x2f) {
                                    TextCommand::TextCommand_Resolve(chatMsg,(MethodInfo *)0x0);
                                    *unaff_FS_OFFSET = pSVar1;
                                    return bVar3;
                                  }
                                  *unaff_FS_OFFSET = pSVar1;
                                  return 1;
                                }
                                uVar26 = 0;
                                fVar14 = 0.0;
                                fVar15 = 1.4013e-45;
                                fVar10 = 2.8026e-45;
                                MVGameControllerBase::MVGameControllerBase_get_AdManager
                                          ((MethodInfo *)0x0);
                                pWVar24 = (WebAdManager *)func_?();
                                if (pWVar24 != (WebAdManager *)0x0) {
                                  site_01.siteEnum = (int32_t)fVar10;
                                  site_01.sites = (List_1_System_String_ *)uVar26;
                                  site_01._8_4_ = fVar14;
                                  site_01._12_4_ = fVar15;
                                  site_01.allowInHouseAds = 0;
                                  site_01.removeFullscreenButton = 0;
                                  site_01.hideSignUp = 0;
                                  site_01.noPlayButtonVideoIcon = 0;
                                  Assets::Scripts::AdIntegration::Web::WebAdManager::
                                  WebAdManager_ForceCreateEmbeddedSiteSDK
                                            (pWVar24,site_01,(MethodInfo *)0x0);
                                  *unaff_FS_OFFSET = pSVar1;
                                  return bVar3;
                                }
                              }
                              else {
                                uVar26 = 0;
                                fVar10 = 7.00649e-45;
                                fVar14 = 2.3694278e-38;
                                fVar15 = 9.21942e-41;
                                MVGameControllerBase::MVGameControllerBase_get_AdManager
                                          ((MethodInfo *)0x0);
                                pWVar24 = (WebAdManager *)func_?();
                                if (pWVar24 != (WebAdManager *)0x0) {
                                  site_00.siteEnum = (int32_t)fVar10;
                                  site_00.sites = (List_1_System_String_ *)uVar26;
                                  site_00._8_4_ = fVar14;
                                  site_00._12_4_ = fVar15;
                                  site_00.allowInHouseAds = 0;
                                  site_00.removeFullscreenButton = 0;
                                  site_00.hideSignUp = 0;
                                  site_00.noPlayButtonVideoIcon = 0;
                                  Assets::Scripts::AdIntegration::Web::WebAdManager::
                                  WebAdManager_ForceCreateEmbeddedSiteSDK
                                            (pWVar24,site_00,(MethodInfo *)0x0);
                                  *unaff_FS_OFFSET = pSVar1;
                                  return bVar3;
                                }
                              }
                            }
                            else {
                              uVar26 = 0;
                              fVar14 = 0.0;
                              fVar15 = 1.4013e-45;
                              fVar10 = 1.4013e-45;
                              MVGameControllerBase::MVGameControllerBase_get_AdManager
                                        ((MethodInfo *)0x0);
                              pWVar24 = (WebAdManager *)func_?();
                              if (pWVar24 != (WebAdManager *)0x0) {
                                site.siteEnum = (int32_t)fVar10;
                                site.sites = (List_1_System_String_ *)uVar26;
                                site._8_4_ = fVar14;
                                site._12_4_ = fVar15;
                                site.allowInHouseAds = 0;
                                site.removeFullscreenButton = 0;
                                site.hideSignUp = 0;
                                site.noPlayButtonVideoIcon = 0;
                                Assets::Scripts::AdIntegration::Web::WebAdManager::
                                WebAdManager_ForceCreateEmbeddedSiteSDK
                                          (pWVar24,site,(MethodInfo *)0x0);
                                *unaff_FS_OFFSET = pSVar1;
                                return bVar3;
                              }
                            }
                            goto code_?;
                          }
                          pIVar27 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                              ((MethodInfo *)0x0);
                          if (pIVar27 != (IAdManager *)0x0) {
                            pTVar28 = mscorlib.dll::System::Object::Object_GetType
                                                ((Object *)pIVar27,(MethodInfo *)0x0);
                            pSVar7 = StringLiteral_AdManager___;
                            if (pTVar28 == (Type *)0x0) {
                              pSVar29 = (String *)0x0;
                            }
                            else {
                              pSVar29 = (String *)func_?();
                            }
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (pSVar7,pSVar29,::StringLiteral__,(MethodInfo *)0x0
                                                );
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_get_AdManager
                                      ((MethodInfo *)0x0);
                            iVar30 = func_?();
                            if (iVar30 == 0) {
                              pIVar27 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                                  ((MethodInfo *)0x0);
                              this_02 = (AdSDKManager *)
                                        func_?(pIVar27,
                                                  TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager
                                                  );
                              if (this_02 != (AdSDKManager *)0x0) {
                                if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0)
                                {
                                  func_?(TypeInfo__System__Boolean);
                                }
                                pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                    ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
                                pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                    (StringLiteral_WasInitializedSuccessfully___,
                                                     pSVar7,::StringLiteral__,(MethodInfo *)0x0);
                                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                          (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                                pTVar28 = Assets::Scripts::AdIntegration::Web::AdSDKManager::
                                          AdSDKManager_get_AdSDKType(this_02,(MethodInfo *)0x0);
                                pSVar7 = StringLiteral_AdSDK___;
                                if (pTVar28 == (Type *)0x0) {
                                  pSVar29 = (String *)0x0;
                                }
                                else {
                                  pSVar29 = (String *)func_?(3,pTVar28);
                                }
                                pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                    (pSVar7,pSVar29,::StringLiteral__,
                                                     (MethodInfo *)0x0);
                                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                          (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                                *unaff_FS_OFFSET = pSVar1;
                                return bVar3;
                              }
                              goto code_?;
                            }
                            if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__System__Boolean);
                            }
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_EmbeddedSiteSDKAvailable___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                                                ((Enum *)&stack0xffffffb0,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_SiteEnum___,pSVar7,::StringLiteral__
                                                 ,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffff9c,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_showTouristPromotion___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffff9d,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_allowsOpenInNewTab___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffff9e,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_allowsRedirectToWebpage___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffff9f,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_allowsModals___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffffa0,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_integratedSdk___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffffa1,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_allowsFallbackAds___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                                ((Boolean *)&stack0xffffffa2,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                                (StringLiteral_showPlayButtonAd___,pSVar7,
                                                 ::StringLiteral__,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                            if (pSVar7 != (String *)0x0) {
                              iVar30 = func_?();
                              pSVar7 = *(String **)(iVar30 + 0xc);
                              while (bVar4 = mscorlib.dll::System::Collections::Generic::
                                             List`1[T]+Enumerator[System::Object]::
                                             List_1_T_Enumerator_System_Object__MoveNext
                                                       ((List_1_T_Enumerator_System_Object_ *)
                                                        &stack0xffffff70,
                                                                                                                
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                                  ), bVar4 != 0) {
                                pSVar29 = mscorlib.dll::System::String::String_Concat_4
                                                    (StringLiteral_Site__,pSVar7,::StringLiteral__,
                                                     (MethodInfo *)0x0);
                                pMVar2 = (MethodInfo *)&UNK_?;
                                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                          (MVGameMsgType__Enum_AdminMsg,pSVar29,(MethodInfo *)0x0);
                              }
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                                        ((Object *)&stack0xffffff70,
                                         (ExceptionArgument__Enum)
                                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                                         ,pMVar2);
                              *unaff_FS_OFFSET = pSVar1;
                              return bVar3;
                            }
                          }
                        }
                        else {
                          pIVar31 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                              ((MethodInfo *)0x0);
                          pIVar27 = pIVar31;
                          pUVar32 = (UnityAction_1_System_Int32Enum_ *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                    (pUVar32,(Object *)chatMsg,
                                     MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                                     ,(MethodInfo *)0x0);
                          if (pIVar31 != (IAdManager *)0x0) {
                            pIVar33 = pIVar31->klass;
                            uVar34 = 0;
                            uVar35._0_1_ = (pIVar33->_1).rank;
                            uVar35._1_1_ = (pIVar33->_1).minimumAlignment;
                            if (uVar35 != 0) {
                              do {
                                if (pIVar33->interfaceOffsets[uVar34].interfaceType ==
                                    (Il2CppClass *)
                                    TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                                  ppMVar36 = &(&(pIVar27->klass->vtable).RequestRewardedAd)
                                              [pIVar27->klass->interfaceOffsets[uVar34].offset].
                                              method;
                                  goto code_?;
                                }
                                uVar34 = uVar34 + 1;
                              } while (uVar34 < uVar35);
                            }
                            ppMVar36 = (MethodInfo **)func_?();
code_?:
                            (*(code *)*ppMVar36)();
                            *unaff_FS_OFFSET = pSVar1;
                            return bVar3;
                          }
                        }
                      }
                      else {
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        this_00 = TypeInfo__MVGameControllerBase->static_fields->
                                  _GameSessionData_k__BackingField;
                        if (this_00 != (GameSessionData *)0x0) {
                          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                          VerticalVirtualizationController`1[System::Object]::
                          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                                    ((VerticalVirtualizationController_1_System_Object_ *)this_00,
                                     (MethodInfo *)0x0);
                          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                              ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
                          pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                              (StringLiteral_Testing__Redirect_allowed__,pSVar7,
                                               (MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)pSVar7,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pSVar1;
                          return bVar3;
                        }
                      }
                    }
                    else {
                      pIVar27 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                          ((MethodInfo *)0x0);
                      if (pIVar27 != (IAdManager *)0x0) {
                        cVar37 = func_?();
                        if (cVar37 == '\0') goto code_?;
code_?:
                        pIVar27 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                            ((MethodInfo *)0x0);
                        pUVar32 = (UnityAction_1_System_Int32Enum_ *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (pUVar32,(Object *)chatMsg,
                                   MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                                   ,(MethodInfo *)0x0);
                        if (pIVar27 != (IAdManager *)0x0) {
                          func_?();
                          *unaff_FS_OFFSET = pSVar1;
                          return bVar3;
                        }
                      }
                    }
                  }
                  else {
                    pSVar7 = mscorlib.dll::System::String::String_Substring
                                        (chatMsg,0xe,(MethodInfo *)0x0);
                    if (pSVar7 != (String *)0x0) {
                      pSVar7 = mscorlib.dll::System::String::String_Trim(pSVar7,(MethodInfo *)0x0)
                      ;
                      pSVar29 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_Vector3FromSerialize___,pSVar7,
                                           ::StringLiteral__,(MethodInfo *)0x0);
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                (MVGameMsgType__Enum_AdminMsg,pSVar29,(MethodInfo *)0x0);
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      Extensions::Extensions_ToVector3FromSerializeString
                                ((Vector3 *)&stack0xffffffb0,pSVar7,(MethodInfo *)0x0);
                      pSVar7 = (String *)func_?();
                      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_Vector3FromSerialize_result___,pSVar7,
                                           ::StringLiteral__,(MethodInfo *)0x0);
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pSVar1;
                      return bVar3;
                    }
                  }
                }
              }
              else {
                pSVar7 = TM::TM__(StringLiteral_Region___0_,(MethodInfo *)0x0);
                pMVar38 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar38 != (MVNetworkGame *)0x0) {
                  pOVar5 = (Object *)func_?();
                  pSVar7 = mscorlib.dll::System::String::String_Format
                                      (pSVar7,pOVar5,(MethodInfo *)0x0);
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pSVar1;
                  return bVar3;
                }
              }
            }
            else {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pSVar7 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
              pKVar39 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
                                  ((MethodInfo *)0x0);
              if (pKVar39 != (KoGaMaSettingsContainer *)0x0) {
                pSVar29 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                                    (pKVar39,(MethodInfo *)0x0);
                pKVar39 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
                                    ((MethodInfo *)0x0);
                if (pKVar39 != (KoGaMaSettingsContainer *)0x0) {
                  pSVar7 = mscorlib.dll::System::String::String_Format_1
                                      (pSVar7,(Object *)pSVar29,
                                       (Object *)(pKVar39->fields).branchName,(MethodInfo *)0x0);
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pSVar1;
                  return bVar3;
                }
              }
            }
          }
          else {
            pSVar1 = TM::TM__(StringLiteral_Shader___0_u000AAniso_level___1_u000AFil,
                               (MethodInfo *)0x0);
            puVar40 = &UNK_?;
            pMVar41 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                ((MethodInfo *)0x0);
            if (((pMVar41 != (MaterialLoader *)0x0) &&
                (pMVar42 = (pMVar41->fields)._CubeModelMaterial_k__BackingField,
                pMVar42 != (Material *)0x0)) &&
               (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                    (pMVar42,(MethodInfo *)0x0), this_03 != (Shader *)0x0)) {
              pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                  ((Object_1 *)this_03,(MethodInfo *)0x0);
              pMVar41 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                  ((MethodInfo *)0x0);
              if (((pMVar41 != (MaterialLoader *)0x0) &&
                  (pMVar42 = (pMVar41->fields)._CubeModelMaterial_k__BackingField,
                  pMVar42 != (Material *)0x0)) &&
                 (pTVar43 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                            Material_get_mainTexture(pMVar42,(MethodInfo *)0x0),
                 pTVar43 != (Texture *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_get_anisoLevel
                          (pTVar43,(MethodInfo *)0x0);
                pOVar5 = (Object *)func_?();
                pMVar41 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                    ((MethodInfo *)0x0);
                if (((pMVar41 != (MaterialLoader *)0x0) &&
                    (pMVar42 = (pMVar41->fields)._CubeModelMaterial_k__BackingField,
                    pMVar42 != (Material *)0x0)) &&
                   (pTVar43 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_get_mainTexture(pMVar42,(MethodInfo *)0x0),
                   pTVar43 != (Texture *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_get_filterMode
                            (pTVar43,(MethodInfo *)0x0);
                  pOVar6 = (Object *)func_?();
                  pSVar1 = mscorlib.dll::System::String::String_Format_2
                                      (pSVar1,(Object *)pSVar7,pOVar5,pOVar6,(MethodInfo *)0x0);
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = puVar40;
                  return bVar3;
                }
              }
            }
          }
        }
        else {
          iVar30 = func_?();
          if ((iVar30 != 0) &&
             (*(PlayerPlanetMetaDataClient **)(iVar30 + 0x24) != (PlayerPlanetMetaDataClient *)0x0))
          {
            MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                      (*(PlayerPlanetMetaDataClient **)(iVar30 + 0x24),(MethodInfo *)0x0);
            if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                                ((Boolean *)&stack0xffffffe9,(MethodInfo *)0x0);
            pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_resultDailyWelcomeRewardClaimedT,pSVar1,
                                 (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar1,(MethodInfo *)0x0);
            if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
            iVar30 = func_?();
            if ((iVar30 != 0) && (*(int *)(iVar30 + 0x24) != 0)) {
              pSVar1 = mscorlib.dll::System::DateTime::DateTime_ToString
                                  ((DateTime *)&stack0xffffffbc,(MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_utcNow_,pSVar1,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar1,(MethodInfo *)0x0);
              iVar30 = func_?();
              if ((iVar30 != 0) && (*(int *)(iVar30 + 0x24) != 0)) {
                pSVar1 = mscorlib.dll::System::DateTime::DateTime_ToString
                                    ((DateTime *)(*(int *)(iVar30 + 0x24) + 0x10),(MethodInfo *)0x0)
                ;
                pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_GamePassesManager_PlayerPlanetDa,pSVar1,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar1,(MethodInfo *)0x0);
                mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                          ((DateTime *)&stack0xffffffa8,(MethodInfo *)0x0);
                pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&stack0xffffffdc,(MethodInfo *)0x0);
                pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_lastDailyWelcomeRewardClaim_DayO,pSVar1,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar1,(MethodInfo *)0x0);
                mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                          ((DateTime *)&stack0xffffffbc,(MethodInfo *)0x0);
                pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&stack0xffffffdc,(MethodInfo *)0x0);
                puVar40 = &UNK_?;
                pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_utcNow_DayOfYear_,pSVar1,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar1,(MethodInfo *)0x0);
                iVar23 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                                   ((DateTime *)&stack0xffffffa8,(MethodInfo *)0x0);
                iVar44 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                                   ((DateTime *)&stack0xffffffbc,(MethodInfo *)0x0);
                pSVar1 = StringLiteral_resultDebug_;
                if (iVar23 == iVar44) {
                  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  mscorlib.dll::System::DateTime::DateTime_get_Year
                            ((DateTime *)&stack0xffffffa8,(MethodInfo *)0x0);
                  mscorlib.dll::System::DateTime::DateTime_get_Year
                            ((DateTime *)&stack0xffffffbc,(MethodInfo *)0x0);
                }
                if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                                    ((Boolean *)&stack0xffffffea,(MethodInfo *)0x0);
                pSVar1 = mscorlib.dll::System::String::String_Concat_3
                                    (pSVar1,pSVar7,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar1,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = puVar40;
                return bVar3;
              }
            }
          }
        }
      }
      else {
        pMVar38 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar38 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar38->fields).operationRequests,
           this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetPlayerPlanetData
                    (this_01,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pSVar1;
          return bVar3;
        }
      }
      func_?();
code_?:
      func_?();
      func_?();
      method_00.m_value = 0;
      pOVar5 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                (pOVar5,(MethodInfo *)method_00.m_value);
      func_?();
      this_04 = (Exception *)func_?();
      pMVar2 = (MethodInfo *)0x0;
      pSVar1 = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(this_04,pSVar1,pMVar2);
      func_?();
      func_?();
      pcVar45 = (code *)swi(3);
      bVar4 = (*pcVar45)();
      return bVar4;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                        (::StringLiteral__,StringLiteral_u000AType___yes_to_nod_your_head_,
                         (MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                        (pSVar7,StringLiteral_u000AType___no_to_shake_your_head_,(MethodInfo *)0x0)
    ;
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                        (pSVar7,StringLiteral_u000AType___wave_to_wave_your_arms_,(MethodInfo *)0x0
                        );
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                        (pSVar7,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                         (MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                        (pSVar7,StringLiteral_u000AType___team_to_enter_team_chat_,
                         (MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                        (pSVar7,StringLiteral_u000AType___say_to_enter_say_chat_,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
code_?:
      pSVar29 = TM::TM__(in_stack_46,in_stack_47);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,pSVar29,(MethodInfo *)0x0);
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&StringLiteral_u000AType___c_to_see_available_chat_);
      func_?(&::StringLiteral__);
      func_?(&StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS);
      cRam_? = '\x01';
    }
    pSVar7 = StringLiteral_u000A;
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar4 == 0) {
      pSVar29 = TM::TM__(StringLiteral_u000AType___c_to_see_available_chat_,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,pSVar29,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      MVar48 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
      if (bVar4 == 0) {
        if (MVar48 == MVGameMode__Enum_Edit) {
          in_stack_47 = (MethodInfo *)0x0;
          in_stack_46 = StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS;
          goto code_?;
        }
        if (MVar48 != MVGameMode__Enum_Play) {
          if (MVar48 == MVGameMode__Enum_CharacterEditor) {
            pSVar7 = ::StringLiteral__;
          }
          goto code_?;
        }
      }
      pSVar29 = TM::TM__(StringLiteral__M__Menu,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,pSVar29,(MethodInfo *)0x0);
      pSVar29 = TM::TM__(StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A,
                         (MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,pSVar29,(MethodInfo *)0x0);
    }
  }
code_?:
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,pSVar7,(MethodInfo *)0x0);
code_?:
  *unaff_FS_OFFSET = pSVar1;
  return bVar3;
}


/* Boolean HandleChatSwapCommand(String) */

bool Assembly-CSharp.dll::SendMessageControl::SendMessageControl_HandleChatSwapCommand
               (SendMessageControl *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__all);
    func_?(&StringLiteral__team);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__say);
    cRam_? = '\x01';
  }
  if (message != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_Equals_2
                      (message,StringLiteral__all,StringComparison__Enum_OrdinalIgnoreCase,
                       (MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    if (bVar1 == 0) {
      newChat = MVGameMsgType__Enum_AchievementUnlocked;
      bVar1 = mscorlib.dll::System::String::String_Equals_2
                        (message,StringLiteral__team,StringComparison__Enum_OrdinalIgnoreCase,
                         (MethodInfo *)0x0);
      if (bVar1 == 0) {
        this = (SendMessageControl *)message;
        method_00 = (MethodInfo *)&UNK_?;
        bVar1 = mscorlib.dll::System::String::String_Equals_2
                          (message,StringLiteral__say,StringComparison__Enum_OrdinalIgnoreCase,
                           (MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
      }
    }
    else {
      newChat = MVGameMsgType__Enum_Chat;
    }
    SendMessageControl_SwapChat(this,newChat,method_00);
    this_00 = (this->fields).inputField;
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,::StringLiteral__,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void InitializeToSayChat(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_InitializeToSayChat
               (SendMessageControl *this,bool sayChatVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral___Say__);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((this->fields).selectedChat != 9) {
    bVar1 = sayChatVisible;
  }
  if (bVar1 != 0) {
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (this_00,1,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = 1;
    }
  }
  pTVar2 = (this->fields).currentChat;
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,StringLiteral___Say__,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this->fields).currentChat;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_color.method)
                (pTVar2,(this->fields).sayChatColor.r,(this->fields).sayChatColor.g,
                 (this->fields).sayChatColor.b,(this->fields).sayChatColor.a,
                 (pTVar2->klass->vtable).get_raycastTarget.methodPtr);
      (this->fields).selectedChat = 9;
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator OOMTest() */

IEnumerator *
Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OOMTest
          (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SendMessageControl___OOMTest_d__58);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SendMessageControl___OOMTest_d__58;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnAdShownCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnAdShownCallback
               (SendMessageControl *this,InterstitialAdResult__Enum interstitialResult,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    func_?(&StringLiteral_WebGL_Ad_shown__);
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_WebGL_Ad_shown__,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  EStack_1.monitor = (MonitorData *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Void OnAdShownCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnAdShownCallback_1
               (SendMessageControl *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    func_?(&StringLiteral_WebGL_Ad_shown__);
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_WebGL_Ad_shown__,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  EStack_1.monitor = (MonitorData *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnDestroy
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    func_?(&MethodInfo__SendMessageControl__ChangeTeamChatColor__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    pMVar4 = (pMVar3->fields).OnTeamsUpdated;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,unaff_EBX,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
               (MethodInfo *)0x0);
    pMVar4 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pMVar4 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (pMVar3->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    }
    else {
      pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar4->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      (pMVar3->fields).OnTeamsUpdated = pMVar6;
      pMVar6 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar4->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar6 = pMVar4;
      }
      if (pMVar6 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
    }
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar7 = (pMVar2->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
      pAVar8 = (pMVar7->fields).OnPlayerListChanged;
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,unaff_EBX,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
                 (MethodInfo *)0x0);
      pAVar8 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pAVar8 == (Action *)0x0) {
        (pMVar7->fields).OnPlayerListChanged = (Action *)0x0;
        func_?();
        return;
      }
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 != (Action *)0x0) {
        (pMVar7->fields).OnPlayerListChanged = pAVar9;
        pAVar9 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar8;
        }
        if (pAVar9 != (Action *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnInputFieldChange() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnInputFieldChange
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u000A);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_u0009);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  pSVar2 = (pIVar1->fields).m_Text;
  bVar3 = mscorlib.dll::System::String::String_op_Inequality
                    (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    if (pSVar2 == (String *)0x0) goto code_?;
  }
  else {
    if (pSVar2 == (String *)0x0) goto code_?;
    pSVar4 = mscorlib.dll::System::String::String_Substring_1
                       (pSVar2,(pSVar2->fields)._stringLength + -1,1,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar4 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar2,0,(pSVar2->fields)._stringLength + -1,(MethodInfo *)0x0);
      bVar3 = SendMessageControl_HandleChatSwapCommand(this,pSVar4,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      goto code_?;
    }
  }
  iVar5 = mscorlib.dll::System::String::String_IndexOf_5
                    (pSVar2,StringLiteral_u000A,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
  if (-1 < iVar5) {
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    (this->fields).frameCountSent = iVar5;
    SendMessageControl_Send(this,(MethodInfo *)0x0);
    return;
  }
  iVar5 = mscorlib.dll::System::String::String_IndexOf_5
                    (pSVar2,StringLiteral_u0009,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
  if (-1 < iVar5) {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1
                       (pSVar2,0,(pSVar2->fields)._stringLength + -1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar1,pSVar2,(MethodInfo *)0x0);
      newChat = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
      if (9 < (int)newChat) {
        SendMessageControl_SwapChat(this,MVGameMsgType__Enum_Chat,(MethodInfo *)0x0);
        return;
      }
      if (newChat == MVGameMsgType__Enum_TeamChat) {
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 == (MVNetworkGame *)0x0) ||
           (this_00 = (pMVar6->fields).teamManager, this_00 == (MVTeamManager *)0x0))
        goto code_?;
        iVar5 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
        if (iVar5 < 2) {
          newChat = MVGameMsgType__Enum_SayChat;
        }
      }
      SendMessageControl_SwapChat(this,newChat,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  SendMessageControl_EnforceCharacterLimit(this,(MethodInfo *)0x0);
  if ((this->fields).selectedChat == 9) {
    if ((this->fields).isSayChatIconVisible == 0) {
      bVar3 = 1;
      goto code_?;
    }
    if ((this->fields).selectedChat != 9) goto code_?;
  }
  else {
code_?:
    if ((this->fields).isSayChatIconVisible != 0) {
      bVar3 = 0;
code_?:
      SendMessageControl_SetSayChatBubbleVisible(this,bVar3,(MethodInfo *)0x0);
    }
  }
  iVar7 = (this->fields).frameCountSent;
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (iVar7 == iVar5) {
    pIVar1 = (this->fields).inputField;
    if (pIVar1 == (InputField *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (pIVar1,::StringLiteral__,(MethodInfo *)0x0);
  }
  return;
}


/* Void SanitizeMessage(String ByRef, String) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SanitizeMessage
               (String **message,String *tagToSanitize,MethodInfo *method)

{
  if ((*message != (String *)0x0) &&
     (pSVar1 = mscorlib.dll::System::String::String_ToLower(*message,(MethodInfo *)0x0),
     pSVar1 != (String *)0x0)) {
    val = mscorlib.dll::System::String::String_ToCharArray(pSVar1,(MethodInfo *)0x0);
    startIndex = 0;
    uVar2 = 0;
    if (val != (Char__Array *)0x0) {
      bVar3 = 0;
      do {
        if ((int)val->max_length <= (int)uVar2) {
          return;
        }
        if (val->max_length <= uVar2) goto code_?;
        if ((val->vector[uVar2] == 0x3c) && (bVar3 == 0)) {
          bVar3 = 1;
          startIndex = uVar2;
        }
        if ((bVar3 & val->vector[uVar2] == 0x3e) != 0) {
          bVar3 = 0;
          pSVar1 = mscorlib.dll::System::String::String_CreateString_3
                             ((String *)0x0,val,startIndex,(uVar2 + 1) - startIndex,
                              (MethodInfo *)0x0);
          if (val->max_length <= startIndex + 1) goto code_?;
          if (val->vector[startIndex + 1] != 0x20) {
            if (pSVar1 == (String *)0x0) break;
            bVar4 = mscorlib.dll::System::String::String_Contains
                              (pSVar1,tagToSanitize,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if (pSVar1->klass == (String__Class *)0x0) break;
              tagToSanitize = (String *)&UNK_?;
              pSVar5 = (String__Class *)
                       mscorlib.dll::System::String::String_Remove
                                 ((String *)pSVar1->klass,startIndex,(uVar2 + 1) - startIndex,
                                  (MethodInfo *)0x0);
              pSVar1->klass = pSVar5;
              func_?();
              if ((pSVar1->klass == (String__Class *)0x0) ||
                 (pSVar1 = mscorlib.dll::System::String::String_ToLower
                                     ((String *)pSVar1->klass,(MethodInfo *)0x0),
                 pSVar1 == (String *)0x0)) break;
              val = mscorlib.dll::System::String::String_ToCharArray(pSVar1,(MethodInfo *)0x0);
              uVar2 = startIndex - 1;
            }
          }
        }
        uVar2 = uVar2 + 1;
      } while (val != (Char__Array *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Send() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_Send
               (SendMessageControl *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Remove_float_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&StringLiteral_size);
    func_?(&StringLiteral__r_n___n);
    func_?(&::StringLiteral__);
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
    pSVar4 = (pIVar3->fields).m_Text;
    if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    }
    pSVar4 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                        (pSVar4,StringLiteral__r_n___n,::StringLiteral__,(MethodInfo *)0x0);
    if (pSVar4 != (String *)0x0) {
      pSVar5 = (String *)&UNK_?;
      pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar4,(MethodInfo *)0x0);
      if (pSVar4 != (String *)0x0) {
        input = (String *)&UNK_?;
        val = mscorlib.dll::System::String::String_ToCharArray(pSVar4,(MethodInfo *)0x0);
        pSVar4 = (String *)0x0;
        pSVar6 = (String *)0x0;
        pSVar7 = (String *)0x0;
        if (val != (Char__Array *)0x0) {
          this._3_1_ = 0;
          do {
            if ((int)val->max_length <= (int)pSVar7) {
              pIVar3 = (this_01->fields).inputField;
              if (pIVar3 != (InputField *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                          (pIVar3,::StringLiteral__,(MethodInfo *)0x0);
                this_00 = (this_01->fields).whiteSpaceCheck;
                if ((this_00 != (Regex *)0x0) &&
                   (pMVar8 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                                        (this_00,input,(MethodInfo *)0x0), pMVar8 != (Match *)0x0))
                {
                  if ((pMVar8->fields)._._._Length_k__BackingField < 1) {
                    pUVar9 = (this_01->fields).DoSend;
                    if (pUVar9 == (UnityAction_1_System_Boolean_ *)0x0) {
                      return;
                    }
                    (*(pUVar9->fields)._._.invoke_impl)();
                    return;
                  }
                  pLVar10 = (this_01->fields).spamList;
                  index = 0;
                  if (pLVar10 != (List_1_System_Single_ *)0x0) goto code_?;
                }
              }
              break;
            }
            if ((String *)val->max_length <= pSVar7) goto code_?;
            if ((val->vector[(int)pSVar7] == 0x3c) && (this._3_1_ == 0)) {
              this._3_1_ = 1;
              pSVar4 = pSVar7;
              pSVar6 = pSVar7;
            }
            pSVar11 = pSVar5;
            if ((this._3_1_ & val->vector[(int)pSVar7] == 0x3e) != 0) {
              this._3_1_ = 0;
              this_02 = mscorlib.dll::System::String::String_CreateString_3
                                  ((String *)0x0,val,(int32_t)pSVar4,
                                   (int)pSVar7 + (1 - (int)pSVar4),(MethodInfo *)0x0);
              pSVar4 = pSVar6;
              if ((undefined1 *)val->max_length <= (undefined1 *)((int)&pSVar4->klass + 1U))
              goto code_?;
              pSVar11 = pSVar5;
              pSVar6 = pSVar4;
              if (val->vector[(int)((int)&pSVar4->klass + 1)] != 0x20) {
                if (this_02 == (String *)0x0) break;
                pSVar11 = (String *)&UNK_?;
                pSVar4 = this_02;
                bVar12 = mscorlib.dll::System::String::String_Contains
                                   (this_02,pSVar5,(MethodInfo *)0x0);
                pSVar6 = pSVar4;
                input = pSVar5;
                if (bVar12 != 0) {
                  if (pSVar5 == (String *)0x0) break;
                  input = mscorlib.dll::System::String::String_Remove
                                    (pSVar5,(int32_t)pSVar4,(int)pSVar7 + (1 - (int)pSVar4),
                                     (MethodInfo *)0x0);
                  this._3_1_ = (byte)((uint)&stack0xfffffff8 >> 0x18);
                  func_?();
                  if ((input == (String *)0x0) ||
                     (pSVar5 = mscorlib.dll::System::String::String_ToLower
                                          (input,(MethodInfo *)0x0), pSVar5 == (String *)0x0))
                  break;
                  val = mscorlib.dll::System::String::String_ToCharArray(pSVar5,(MethodInfo *)0x0);
                  pSVar7 = (String *)&pSVar4[-1].fields.field_0x7;
                  pSVar6 = pSVar4;
                }
              }
            }
            pSVar7 = (String *)((int)&pSVar7->klass + 1);
            pSVar5 = pSVar11;
          } while (val != (Char__Array *)0x0);
        }
      }
    }
  }
  goto code_?;
  while( true ) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                       ((MethodInfo *)0x0);
    pLVar10 = (this_01->fields).spamList;
    if (pLVar10 == (List_1_System_Single_ *)0x0) break;
    fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
             List_1_System_Single__get_Item
                       (pLVar10,index,
                        MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    pfVar13 = &(this_01->fields).intervalForMessages;
    if (*pfVar13 <= fVar1 - fVar2 && fVar1 - fVar2 != *pfVar13) {
      pLVar10 = (this_01->fields).spamList;
      if (pLVar10 == (List_1_System_Single_ *)0x0) break;
      fVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
               List_1_System_Single__get_Item
                         (pLVar10,index,
                          MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      input = (String *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__Remove
                (pLVar10,fVar1,MethodInfo__System__Collections__Generic__List<float>__Remove_float_
                );
    }
    pLVar10 = (this_01->fields).spamList;
    index = index + 1;
    if (pLVar10 == (List_1_System_Single_ *)0x0) break;
code_?:
    if ((pLVar10->fields)._size <= index) {
      pLVar10 = (this_01->fields).spamList;
      if (pLVar10 != (List_1_System_Single_ *)0x0) {
        if ((this_01->fields).maxMessagesPerInterval < (pLVar10->fields)._size) {
          pUVar14 = (this_01->fields).SpamWarning;
          if (pUVar14 == (UnityAction *)0x0) {
            return;
          }
          (*(pUVar14->fields)._._.invoke_impl)
                    ((pUVar14->fields)._._.method_code,(pUVar14->fields)._._.method);
          return;
        }
        pLVar10 = (this_01->fields).spamList;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                           ((MethodInfo *)0x0);
        pMVar15 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
        piVar16 = &(pLVar10->fields)._version;
        *piVar16 = *piVar16 + 1;
        pSVar17 = (pLVar10->fields)._items;
        if (pSVar17 != (Single__Array *)0x0) {
          uVar18 = (pLVar10->fields)._size;
          if (uVar18 < pSVar17->max_length) {
            (pLVar10->fields)._size = uVar18 + 1;
            if (pSVar17->max_length <= uVar18) goto code_?;
            pSVar17->vector[uVar18] = fVar1;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__AddWithResize
                      (pLVar10,fVar1,pMVar15->klass->rgctx_data[0xe].method);
          }
          SendMessageControl_SendChatMessage(this_01,input,(MethodInfo *)0x0);
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
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SendChatMessage(String) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SendChatMessage
               (SendMessageControl *this,String *chatMsg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = chatMsg;
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (this_00 == (String *)0x0) goto code_?;
    if (0x100 < (this_00->fields)._stringLength) {
      this_00 = mscorlib.dll::System::String::String_Substring_1(this_00,0,0x100,(MethodInfo *)0x0);
    }
    bVar1 = SendMessageControl_HandleChatSwapCommand(this,this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    chatMsg = (String *)0x0;
    bVar1 = SendMessageControl_HandleChatCommands(this,this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      method = (MethodInfo *)0x0;
      chatMsg = (String *)this;
      SendMessageControl_SetSayChatBubbleVisibleIfActive(this,0,(MethodInfo *)0x0);
      method = (MethodInfo *)&UNK_?;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      method = (MethodInfo *)&UNK_?;
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      method = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
      ;
      chatMsg = (String *)this_02;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      method = (MethodInfo *)((int)&chatMsg + 3);
      chatMsg = (String *)TypeInfo__System__Byte;
      func_?();
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame *)0x0) {
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pOVar3 = (Object *)&UNK_?;
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
      if ((pMVar4 == (MVLocalPlayer *)0x0) ||
         (value = (Object *)func_?(),
         this_02 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar3,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar3 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar3,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostChatMsg
                (this_01,(Dictionary_2_System_Object_System_Object_ *)this_02,
                 (this->fields).selectedChat,(MethodInfo *)0x0);
    }
    pUVar5 = (this->fields).DoSend;
    if (pUVar5 != (UnityAction_1_System_Boolean_ *)0x0) {
      method = (pUVar5->fields)._._.method_code;
      chatMsg = (String *)&UNK_?;
      (*(pUVar5->fields)._._.invoke_impl)();
    }
  }
  return;
}


/* Void SetSayChatBubbleVisible(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetSayChatBubbleVisible
               (SendMessageControl *this,bool visible,MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
              (this_00,visible,(MethodInfo *)0x0);
    (this->fields).isSayChatIconVisible = visible;
  }
  return;
}


/* Void SetSayChatBubbleVisibleIfActive(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
               (SendMessageControl *this,bool visible,MethodInfo *method)

{
  if ((this->fields).selectedChat == 9) {
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (this_00,visible,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = visible;
    }
  }
  return;
}


/* Void SetToNextChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetToNextChat
               (SendMessageControl *this,MethodInfo *method)

{
  MVar1 = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
  if ((int)MVar1 < 10) {
    if (MVar1 == MVGameMsgType__Enum_TeamChat) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
        iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
        MVar1 = MVGameMsgType__Enum_TeamChat;
        if (iVar3 < 2) {
          MVar1 = MVGameMsgType__Enum_SayChat;
        }
        SendMessageControl_SwapChat(this,MVar1,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Version___0_u000ABranch___1_);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
  pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
    arg0 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                     (pKVar2,(MethodInfo *)0x0);
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_Format_1
                         (pSVar1,(Object *)arg0,(Object *)(pKVar2->fields).branchName,
                          (MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SwapChat(MVGameMsgType) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SwapChat
               (SendMessageControl *this,MVGameMsgType__Enum newChat,MethodInfo *method)

{
  if (newChat == MVGameMsgType__Enum_Chat) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral___All__);
      cRam_? = '\x01';
    }
    if (((this->fields).selectedChat == 9) &&
       (bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0),
       bVar1 == 0)) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                (pMVar2,0,(MethodInfo *)0x0);
      (this->fields).isSayChatIconVisible = 0;
    }
    pTVar3 = (this->fields).currentChat;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,StringLiteral___All__,
                 (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar3 = (this->fields).currentChat;
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_color.method)
                  (pTVar3,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                   (pTVar3->klass->vtable).get_raycastTarget.methodPtr);
        (this->fields).selectedChat = 7;
        return;
      }
    }
  }
  else {
    if (newChat != MVGameMsgType__Enum_TeamChat) {
      if (newChat == MVGameMsgType__Enum_SayChat) {
        SendMessageControl_ActivateSayChat(this,1,(MethodInfo *)0x0);
      }
      return;
    }
    if (cRam_? == '\0') {
      func_?(&StringLiteral___Team__);
      cRam_? = '\x01';
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar4->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      iVar5 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
      if (iVar5 < 2) {
        return;
      }
      if (((this->fields).selectedChat == 9) &&
         (bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
         , bVar1 == 0)) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar2 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
                  (pMVar2,0,(MethodInfo *)0x0);
        (this->fields).isSayChatIconVisible = 0;
      }
      pTVar3 = (this->fields).currentChat;
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,StringLiteral___Team__,
                   (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        (this->fields).selectedChat = 8;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__Styles);
          cRam_? = '\x01';
        }
        if ((this->fields).selectedChat != 8) {
          return;
        }
        pTVar3 = (this->fields).currentChat;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar6 != (MVLocalPlayer *)0x0) {
          team = (pMVar6->fields)._._Team_k__BackingField;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pCVar7 = Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,team,0,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_color.method)
                      (pTVar3,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                       (pTVar3->klass->vtable).get_raycastTarget.methodPtr);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ToggleHD() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ToggleHD(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  iVar1 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar1 == 0),(MethodInfo *)0x0);
  return;
}


/* SendMessageControl() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl__ctor
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<float>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<float>);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  (this->fields).intervalForMessages = 5.0;
  (this->fields).maxMessagesPerInterval = 5;
  this_00 = (List_1_System_Single_ *)
            func_?(TypeInfo__System__Collections__Generic__List<float>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<float>__List__);
  (this->fields).spamList = this_00;
  func_?(&(this->fields).spamList,this_00);
  (this->fields).selectedChat = 7;
  this_01 = (List_1_System_Byte_ *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  (this->fields).oomBytes = this_01;
  func_?(&(this->fields).oomBytes,this_01);
  (this->fields).bytesPerFrame = 0x100000;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

