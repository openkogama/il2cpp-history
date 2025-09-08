
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
  *unaff_FS_OFFSET = (int)&stack0xffffffe4;
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
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__ObjExportHandler);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__MV__Common__Region);
    func_?(&TypeInfo__ScreenSizeOptimizer);
    func_?(&
                    MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&
                    MethodInfo__SendMessageControl____c___HandleChatCommands_b__56_0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SendMessageControl____c);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
    func_?(&StringLiteral__export);
    func_?(&StringLiteral_EmbeddedSiteSDKAvailable____0__);
    func_?(&StringLiteral_Quaternion_identity_);
    func_?(&StringLiteral_resultDailyWelcomeRewardClaimedT);
    func_?(&StringLiteral_WasInitializedSuccessfully____0_);
    func_?(&StringLiteral__c);
    func_?(&StringLiteral__m);
    func_?(&StringLiteral_allowsFallbackAds____0__);
    func_?(&StringLiteral__tex);
    func_?(&StringLiteral__wave);
    func_?(&StringLiteral_utcNow_);
    func_?(&StringLiteral__dt);
    func_?(&StringLiteral__ter);
    func_?(&StringLiteral_Vector3FromSerialize_result___);
    func_?(&StringLiteral_q_x___float_PositiveInfinity_);
    func_?(&StringLiteral_allowsRedirectToWebpage____0__);
    func_?(&StringLiteral__gp);
    func_?(&StringLiteral_AdManager___);
    func_?(&StringLiteral__pokiforce);
    func_?(&StringLiteral_Vector3FromSerialize___);
    func_?(&StringLiteral__convertSingle);
    func_?(&StringLiteral__hd);
    func_?(&StringLiteral_SiteEnum____0__);
    func_?(&StringLiteral__ru);
    func_?(&StringLiteral_Vector3_one_);
    func_?(&StringLiteral_hideGoldShop____0__);
    func_?(&StringLiteral__shaderInfo);
    func_?(&StringLiteral_showPlayButtonAd____0__);
    func_?(&StringLiteral__admanager);
    func_?(&StringLiteral__region);
    func_?(&StringLiteral_vector3_x___float_PositiveInfini);
    func_?(&StringLiteral_allowsModals____0__);
    func_?(&StringLiteral_Shader___0_u000AAniso_level___1_u000AFil);
    func_?(&StringLiteral__r);
    func_?(&StringLiteral__adtest);
    func_?(&StringLiteral_Build_and_play_mode_UI_not_imple);
    func_?(&StringLiteral_AdSDK____0__);
    func_?(&StringLiteral_Physical_Size___0__inchesu000APlayin);
    func_?(&StringLiteral_q_x___float_NaN_);
    func_?(&StringLiteral__rgp);
    func_?(&StringLiteral__materialInfo);
    func_?(&StringLiteral__sat);
    func_?(&StringLiteral_Site__);
    func_?(&StringLiteral__exportself);
    func_?(&StringLiteral__gdforce);
    func_?(&StringLiteral_Testing_context__chat_msg_test_e);
    func_?(&StringLiteral_allowInHouseAds____0__);
    func_?(&StringLiteral__embedforce);
    func_?(&StringLiteral_removeFullscreenButton____0__);
    func_?(&StringLiteral_showTouristPromotion____0__);
    func_?(&StringLiteral__build);
    func_?(&StringLiteral__url);
    func_?(&StringLiteral_Current_Resolution___0__x__1__yu000A);
    func_?(&StringLiteral_utcNow_DayOfYear_);
    func_?(&StringLiteral__f);
    func_?(&StringLiteral_noPlayButtonVideoIcon____0__);
    func_?(&StringLiteral_integratedSdk____0__);
    func_?(&StringLiteral_Remote_Playmode_Avatar_should_re);
    func_?(&StringLiteral__h);
    func_?(&StringLiteral__rad);
    func_?(&StringLiteral_vector3_x___float_NaN_);
    func_?(&StringLiteral_Playing_on_half_resolution___0_);
    func_?(&StringLiteral_chat_msg_test_error);
    func_?(&StringLiteral_Testing__Redirect_allowed__);
    func_?(&StringLiteral__iad);
    func_?(&StringLiteral_lastDailyWelcomeRewardClaim_DayO);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Math_validation_test);
    func_?(&StringLiteral_resultDebug_);
    func_?(&StringLiteral__yes);
    func_?(&StringLiteral_allowsOpenInNewTab____0__);
    func_?(&StringLiteral__ad);
    func_?(&StringLiteral_Region___0_);
    func_?(&StringLiteral__no);
    func_?(&StringLiteral_GamePassesManager_PlayerPlanetDa);
    func_?(&StringLiteral_hideSignUp____0__);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  bVar3 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__h,(MethodInfo *)0x0);
  bVar4 = (bool)uVar2;
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&StringLiteral_u000AType___c_to_see_available_chat_);
      func_?(&::StringLiteral__);
      func_?(&StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS);
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_u000A;
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar6 = TM::TM__(StringLiteral_u000AType___c_to_see_available_chat_,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar6,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      MVar7 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (MVar7 == MVGameMode__Enum_Edit) {
          pSVar6 = TM::TM__(StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS,
                             (MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar6,(MethodInfo *)0x0)
          ;
        }
        else {
          if (MVar7 == MVGameMode__Enum_Play) goto code_?;
          if (MVar7 == MVGameMode__Enum_CharacterEditor) {
            pSVar5 = ::StringLiteral__;
          }
        }
      }
      else {
code_?:
        pSVar6 = TM::TM__(StringLiteral__M__Menu,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar6 = TM::TM__(StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A,
                           (MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar6,(MethodInfo *)0x0);
      }
    }
code_?:
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
code_?:
    *unaff_FS_OFFSET = (int)pSVar1;
    return bVar4;
  }
  bVar3 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__f,(MethodInfo *)0x0);
  bVar4 = SUB21(uVar2,1);
  if (bVar3 != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    pGVar8 = root;
    if ((TypeInfo__SendMessageControl____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__SendMessageControl____c->static_fields->__9__56_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IToggleFps_ *)0x0) {
      root = pGVar8;
      if ((TypeInfo__SendMessageControl____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        root = pGVar8;
      }
      object = TypeInfo__SendMessageControl____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IToggleFps_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__SendMessageControl____c___HandleChatCommands_b__56_0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SendMessageControl____c->static_fields->__9__56_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IToggleFps>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>_
              );
    goto code_?;
  }
  bVar3 = mscorlib.dll::System::String::String_op_Equality
                    (chatMsg,StringLiteral__r,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__m,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar10._0_4_ = (pVVar9->oneVector).x;
      uVar10._4_4_ = (pVVar9->oneVector).y;
      fVar11 = (pVVar9->oneVector).z;
      uVar12 = uVar10;
      MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                ((Quaternion *)&stack0xffffff80,(MVWorldObject *)0x0,
                 (MethodInfo *)(undefined4)uVar10);
      uVar13 = (undefined4)(uVar12 >> 0x20);
      uVar10 = uVar10 & 0xffffffff00000000;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,StringLiteral_Math_validation_test,(MethodInfo *)0x0);
      vector.z = fVar11;
      vector.x = (float)(int)uVar10;
      vector.y = (float)(int)(uVar10 >> 0x20);
      MathFunctions::MathFunctions_IsVectorFloatsValid(vector,(MethodInfo *)0x0);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Vector3_one_,pSVar1,(MethodInfo *)0x0);
      fVar14 = 0.0;
      uVar15 = 3;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
      vector_00.y = (float)uVar13;
      vector_00.x = INFINITY;
      vector_00.z = fVar11;
      MathFunctions::MathFunctions_IsVectorFloatsValid(vector_00,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_vector3_x___float_PositiveInfini,pSVar1,(MethodInfo *)0x0)
      ;
      fVar16 = 0.0;
      fVar17 = 4.2039e-45;
      puVar18 = &UNK_?;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
      vector_01.y = (float)uVar13;
      vector_01.x = NAN;
      vector_01.z._0_1_ = SUB41(fVar11,0);
      vector_01.z._1_1_ = (char)((uint)fVar11 >> 8);
      vector_01.z._2_1_ = (char)((uint)fVar11 >> 0x10);
      vector_01.z._3_1_ = (char)((uint)fVar11 >> 0x18);
      MathFunctions::MathFunctions_IsVectorFloatsValid(vector_01,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_vector3_x___float_NaN_,pSVar6,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar6,(MethodInfo *)0x0);
      quaternion_01.y = fVar17;
      quaternion_01.x = (float)puVar18;
      quaternion_01.z = (float)pSVar1;
      quaternion_01.w = fVar16;
      MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion_01,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Quaternion_identity_,pSVar1,(MethodInfo *)0x0);
      pSVar1 = (String *)0x3;
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar6,(MethodInfo *)0x0);
      quaternion.y = (float)uVar15;
      quaternion.x = INFINITY;
      quaternion.z = (float)pSVar5;
      quaternion.w = fVar14;
      MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_q_x___float_PositiveInfinity_,pSVar6,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar6,(MethodInfo *)0x0);
      quaternion_00.y = (float)uVar15;
      quaternion_00.x = NAN;
      quaternion_00.z = (float)pSVar5;
      quaternion_00.w = fVar14;
      MathFunctions::MathFunctions_IsQuaternionFloatsValid(quaternion_00,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_q_x___float_NaN_,pSVar5,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__c,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (::StringLiteral__,StringLiteral_u000AType___yes_to_nod_your_head_,
                           (MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (pSVar5,StringLiteral_u000AType___no_to_shake_your_head_,
                           (MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (pSVar5,StringLiteral_u000AType___wave_to_wave_your_arms_,
                           (MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (pSVar5,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                           (MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (pSVar5,StringLiteral_u000AType___team_to_enter_team_chat_,
                           (MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                          (pSVar5,StringLiteral_u000AType___say_to_enter_say_chat_,
                           (MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__hd,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__ru,(MethodInfo *)0x0);
    if (bVar3 != 0) {
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
      goto code_?;
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__gp,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      GamePassesManager::GamePassesManager_set_ShowGamePassDataInConsole
                (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0,
                 (MethodInfo *)0x0);
      goto code_?;
    }
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (chatMsg,StringLiteral__rgp,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__dt,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        iVar19 = func_?();
        if ((iVar19 != 0) &&
           (*(PlayerPlanetMetaDataClient **)(iVar19 + 0x24) != (PlayerPlanetMetaDataClient *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
          PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                    (*(PlayerPlanetMetaDataClient **)(iVar19 + 0x24),(MethodInfo *)0x0);
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString
                              ((Boolean *)&stack0xffffffd3,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_resultDailyWelcomeRewardClaimedT,pSVar5,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
          iVar19 = func_?();
          if ((iVar19 != 0) && (*(int *)(iVar19 + 0x24) != 0)) {
            pSVar5 = mscorlib.dll::System::DateTime::DateTime_ToString
                                ((DateTime *)&stack0xffffff78,(MethodInfo *)0x0);
            pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_utcNow_,pSVar5,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            iVar19 = func_?();
            if ((iVar19 != 0) && (*(int *)(iVar19 + 0x24) != 0)) {
              pSVar5 = mscorlib.dll::System::DateTime::DateTime_ToString
                                  ((DateTime *)(*(int *)(iVar19 + 0x24) + 0x10),(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_GamePassesManager_PlayerPlanetDa,pSVar5,
                                   (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar5,(MethodInfo *)0x0);
              mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                        ((DateTime *)&stack0xffffff70,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0xffffff98,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_lastDailyWelcomeRewardClaim_DayO,pSVar5,
                                   (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar5,(MethodInfo *)0x0);
              mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                        ((DateTime *)&stack0xffffff78,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0xffffff98,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_utcNow_DayOfYear_,pSVar5,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar5,(MethodInfo *)0x0);
              iVar20 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                                 ((DateTime *)&stack0xffffff70,(MethodInfo *)0x0);
              iVar21 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                                 ((DateTime *)&stack0xffffff78,(MethodInfo *)0x0);
              pSVar5 = StringLiteral_resultDebug_;
              if (iVar20 == iVar21) {
                if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                mscorlib.dll::System::DateTime::DateTime_get_Year
                          ((DateTime *)&stack0xffffff70,(MethodInfo *)0x0);
                mscorlib.dll::System::DateTime::DateTime_get_Year
                          ((DateTime *)&stack0xffffff78,(MethodInfo *)0x0);
              }
              if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pSVar6 = mscorlib.dll::System::Boolean::Boolean_ToString
                                  ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                  (pSVar5,pSVar6,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar5,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__ter,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Testing_context__chat_msg_test_e,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_chat_msg_test_error,(MethodInfo *)0x0);
        goto code_?;
      }
      bVar3 = mscorlib.dll::System::String::String_op_Equality
                        (chatMsg,StringLiteral__tex,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (chatMsg,StringLiteral__sat,(MethodInfo *)0x0);
        if (bVar3 != 0) goto code_?;
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (chatMsg,StringLiteral__shaderInfo,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          bVar3 = mscorlib.dll::System::String::String_op_Equality
                            (chatMsg,StringLiteral__materialInfo,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            bVar3 = mscorlib.dll::System::String::String_op_Equality
                              (chatMsg,StringLiteral__build,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              bVar4 = 0;
              bVar3 = mscorlib.dll::System::String::String_op_Equality
                                (chatMsg,StringLiteral__region,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                if (chatMsg != (String *)0x0) {
                  uVar22 = 0x10;
                  bVar3 = mscorlib.dll::System::String::String_StartsWith
                                    (chatMsg,StringLiteral__convertSingle,(MethodInfo *)0x0);
                  bVar4 = (bool)uVar22;
                  if (bVar3 == 0) {
                    pSVar1 = chatMsg;
                    bVar3 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__no,(MethodInfo *)0x0);
                    bVar4 = (bool)uVar22;
                    if (bVar3 != 0) {
                      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                                (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
                      goto code_?;
                    }
                    bVar3 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__yes,(MethodInfo *)0x0);
                    bVar4 = (bool)uVar22;
                    if (bVar3 != 0) {
                      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                                (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
                      goto code_?;
                    }
                    bVar3 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__wave,(MethodInfo *)0x0);
                    bVar4 = (bool)uVar22;
                    if (bVar3 != 0) {
                      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      ChatCommandManager::ChatCommandManager_ChatCommandActivated
                                (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
                      goto code_?;
                    }
                    bVar3 = mscorlib.dll::System::String::String_op_Equality
                                      (chatMsg,StringLiteral__ad,(MethodInfo *)0x0);
                    bVar4 = (bool)uVar22;
                    if (bVar3 == 0) {
                      bVar3 = mscorlib.dll::System::String::String_op_Equality
                                        (chatMsg,StringLiteral__url,(MethodInfo *)0x0);
                      bVar4 = (bool)uVar22;
                      if (bVar3 == 0) {
                        bVar3 = mscorlib.dll::System::String::String_op_Equality
                                          (chatMsg,StringLiteral__iad,(MethodInfo *)0x0);
                        bVar4 = (bool)uVar22;
                        if (bVar3 != 0) goto code_?;
                        bVar3 = mscorlib.dll::System::String::String_op_Equality
                                          (chatMsg,StringLiteral__rad,(MethodInfo *)0x0);
                        bVar4 = (bool)uVar22;
                        if (bVar3 == 0) {
                          bVar3 = mscorlib.dll::System::String::String_op_Equality
                                            (chatMsg,StringLiteral__adtest,(MethodInfo *)0x0);
                          bVar4 = (bool)uVar22;
                          if (bVar3 != 0) {
                            MVGameControllerBase::MVGameControllerBase_get_AdManager
                                      ((MethodInfo *)0x0);
                            pWVar23 = (WebAdManager *)func_?();
                            if (pWVar23 != (WebAdManager *)0x0) {
                              Assets::Scripts::AdIntegration::Web::WebAdManager::
                              WebAdManager_CreateAdManagerHack(pWVar23,(MethodInfo *)0x0);
                            }
                            goto code_?;
                          }
                          bVar3 = mscorlib.dll::System::String::String_op_Equality
                                            (chatMsg,StringLiteral__admanager,(MethodInfo *)0x0);
                          bVar4 = (bool)uVar22;
                          if (bVar3 == 0) {
                            bVar3 = mscorlib.dll::System::String::String_op_Equality
                                              (chatMsg,StringLiteral__gdforce,(MethodInfo *)0x0);
                            if (bVar3 == 0) {
                              bVar3 = mscorlib.dll::System::String::String_op_Equality
                                                (chatMsg,StringLiteral__embedforce,(MethodInfo *)0x0
                                                );
                              if (bVar3 == 0) {
                                bVar3 = mscorlib.dll::System::String::String_op_Equality
                                                  (chatMsg,StringLiteral__pokiforce,
                                                   (MethodInfo *)0x0);
                                if (bVar3 == 0) {
                                  bVar3 = mscorlib.dll::System::String::String_op_Equality
                                                    (chatMsg,StringLiteral__export,(MethodInfo *)0x0
                                                    );
                                  if (bVar3 == 0) {
                                    bVar3 = mscorlib.dll::System::String::String_op_Equality
                                                      (chatMsg,StringLiteral__exportself,
                                                       (MethodInfo *)0x0);
                                    if (bVar3 == 0) {
                                      uVar24 = mscorlib.dll::System::String::String_get_Chars
                                                        (chatMsg,0,(MethodInfo *)0x0);
                                      if (uVar24 != 0x2f) {
                                        *unaff_FS_OFFSET = (int)pSVar1;
                                        return 1;
                                      }
                                      TextCommand::TextCommand_Resolve(chatMsg,(MethodInfo *)0x0);
                                    }
                                    else {
                                      if ((TypeInfo__ObjExportHandler->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      ObjExportHandler::ObjExportHandler_ExportSelfAvatar
                                                ((MethodInfo *)0x0);
                                    }
                                  }
                                  else {
                                    if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor
                                        == 0) {
                                      func_?();
                                    }
                                    ObjExportHandler::ObjExportHandler_InitializePicking
                                              ((MethodInfo *)0x0);
                                  }
                                }
                                else {
                                  fVar11 = 0.0;
                                  fVar17 = 0.0;
                                  fVar16 = 1.4013e-45;
                                  fVar14 = 2.8026e-45;
                                  MVGameControllerBase::MVGameControllerBase_get_AdManager
                                            ((MethodInfo *)0x0);
                                  pWVar23 = (WebAdManager *)func_?();
                                  if (pWVar23 != (WebAdManager *)0x0) {
                                    site_01.siteEnum = (int32_t)fVar14;
                                    site_01.sites = (List_1_System_String_ *)fVar11;
                                    site_01._8_4_ = fVar17;
                                    site_01._12_4_ = fVar16;
                                    site_01.allowInHouseAds = 0;
                                    site_01.removeFullscreenButton = 0;
                                    site_01.hideSignUp = 0;
                                    site_01.noPlayButtonVideoIcon = 0;
                                    Assets::Scripts::AdIntegration::Web::WebAdManager::
                                    WebAdManager_ForceCreateEmbeddedSiteSDK
                                              (pWVar23,site_01,(MethodInfo *)0x0);
                                  }
                                }
                              }
                              else {
                                fVar11 = 0.0;
                                fVar14 = 7.00649e-45;
                                fVar17 = 2.3694278e-38;
                                fVar16 = 9.21942e-41;
                                MVGameControllerBase::MVGameControllerBase_get_AdManager
                                          ((MethodInfo *)0x0);
                                pWVar23 = (WebAdManager *)func_?();
                                if (pWVar23 != (WebAdManager *)0x0) {
                                  site_00.siteEnum = (int32_t)fVar14;
                                  site_00.sites = (List_1_System_String_ *)fVar11;
                                  site_00._8_4_ = fVar17;
                                  site_00._12_4_ = fVar16;
                                  site_00.allowInHouseAds = 0;
                                  site_00.removeFullscreenButton = 0;
                                  site_00.hideSignUp = 0;
                                  site_00.noPlayButtonVideoIcon = 0;
                                  Assets::Scripts::AdIntegration::Web::WebAdManager::
                                  WebAdManager_ForceCreateEmbeddedSiteSDK
                                            (pWVar23,site_00,(MethodInfo *)0x0);
                                }
                              }
                            }
                            else {
                              fVar11 = 0.0;
                              fVar17 = 0.0;
                              fVar16 = 1.4013e-45;
                              fVar14 = 1.4013e-45;
                              MVGameControllerBase::MVGameControllerBase_get_AdManager
                                        ((MethodInfo *)0x0);
                              pWVar23 = (WebAdManager *)func_?();
                              if (pWVar23 != (WebAdManager *)0x0) {
                                site.siteEnum = (int32_t)fVar14;
                                site.sites = (List_1_System_String_ *)fVar11;
                                site._8_4_ = fVar17;
                                site._12_4_ = fVar16;
                                site.allowInHouseAds = 0;
                                site.removeFullscreenButton = 0;
                                site.hideSignUp = 0;
                                site.noPlayButtonVideoIcon = 0;
                                Assets::Scripts::AdIntegration::Web::WebAdManager::
                                WebAdManager_ForceCreateEmbeddedSiteSDK
                                          (pWVar23,site,(MethodInfo *)0x0);
                              }
                            }
                            goto code_?;
                          }
                          pIVar25 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                              ((MethodInfo *)0x0);
                          if (pIVar25 != (IAdManager *)0x0) {
                            pTVar26 = mscorlib.dll::System::Object::Object_GetType
                                                ((Object *)pIVar25,(MethodInfo *)0x0);
                            pSVar5 = StringLiteral_AdManager___;
                            if (pTVar26 == (Type *)0x0) {
                              pSVar6 = (String *)0x0;
                            }
                            else {
                              pSVar6 = (String *)func_?();
                            }
                            pSVar5 = mscorlib.dll::System::String::String_Concat_4
                                                (pSVar5,pSVar6,::StringLiteral__,(MethodInfo *)0x0
                                                );
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_get_AdManager
                                      ((MethodInfo *)0x0);
                            iVar19 = func_?();
                            bVar4 = (bool)(uVar22 >> 8);
                            if (iVar19 == 0) {
                              MVGameControllerBase::MVGameControllerBase_get_AdManager
                                        ((MethodInfo *)0x0);
                              this_01 = (AdSDKManager *)func_?();
                              if (this_01 != (AdSDKManager *)0x0) {
                                pOVar27 = (Object *)func_?();
                                pSVar5 = mscorlib.dll::System::String::String_Format
                                                    (StringLiteral_WasInitializedSuccessfully____0_,
                                                     pOVar27,(MethodInfo *)0x0);
                                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                          (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                                pTVar26 = Assets::Scripts::AdIntegration::Web::AdSDKManager::
                                          AdSDKManager_get_AdSDKType(this_01,(MethodInfo *)0x0);
                                pSVar5 = mscorlib.dll::System::String::String_Format
                                                    (StringLiteral_AdSDK____0__,(Object *)pTVar26,
                                                     (MethodInfo *)0x0);
                                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                          (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                              }
                              goto code_?;
                            }
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_EmbeddedSiteSDKAvailable____0__,
                                                 pOVar27,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            iVar28 = *(int *)(iVar19 + 0x28);
                            pMVar29 = *(MethodInfo **)(iVar19 + 0x38);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_SiteEnum____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_showTouristPromotion____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_allowsOpenInNewTab____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_allowsRedirectToWebpage____0__,
                                                 pOVar27,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_allowsModals____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_integratedSdk____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_allowsFallbackAds____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_showPlayButtonAd____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_hideGoldShop____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_allowInHouseAds____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_removeFullscreenButton____0__,pOVar27
                                                 ,(MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_hideSignUp____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            iVar19 = (uint)uVar22 << 0x10;
                            pOVar27 = (Object *)func_?();
                            pSVar5 = mscorlib.dll::System::String::String_Format
                                                (StringLiteral_noPlayButtonVideoIcon____0__,pOVar27,
                                                 (MethodInfo *)0x0);
                            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                            if (iVar28 != 0) {
                              iVar28 = func_?();
                              pSVar5 = *(String **)(iVar28 + 0xc);
                              while( true ) {
                                bVar3 = mscorlib.dll::System::Collections::Generic::
                                        List`1[T]+Enumerator[System::Object]::
                                        List_1_T_Enumerator_System_Object__MoveNext
                                                  ((List_1_T_Enumerator_System_Object_ *)
                                                   &stack0xffffff2c,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                                  );
                                bVar4 = (bool)((uint)iVar19 >> 0x18);
                                if (bVar3 == 0) break;
                                pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                                    (StringLiteral_Site__,pSVar5,::StringLiteral__,
                                                     (MethodInfo *)0x0);
                                pMVar29 = (MethodInfo *)&UNK_?;
                                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                          (MVGameMsgType__Enum_AdminMsg,pSVar6,(MethodInfo *)0x0);
                              }
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        ((Object *)&stack0xffffff2c,
                                         (ExceptionArgument__Enum)
                                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                                         ,pMVar29);
                              goto code_?;
                            }
                          }
                        }
                        else {
                          pIVar30 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                              ((MethodInfo *)0x0);
                          pIVar25 = pIVar30;
                          pUVar31 = (UnityAction_1_System_Int32Enum_ *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                    (pUVar31,(Object *)&UNK_?,
                                     MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                                     ,(MethodInfo *)0x0);
                          if (pIVar30 != (IAdManager *)0x0) {
                            pIVar32 = pIVar30->klass;
                            uVar33 = 0;
                            uVar22._0_1_ = (pIVar32->_1).rank;
                            uVar22._1_1_ = (pIVar32->_1).minimumAlignment;
                            if (uVar22 != 0) {
                              do {
                                if (pIVar32->interfaceOffsets[uVar33].interfaceType ==
                                    (Il2CppClass *)
                                    TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                                  ppMVar34 = &(&(pIVar25->klass->vtable).RequestRewardedAd)
                                              [pIVar25->klass->interfaceOffsets[uVar33].offset].
                                              method;
                                  goto code_?;
                                }
                                uVar33 = uVar33 + 1;
                              } while (uVar33 < uVar22);
                            }
                            ppMVar34 = (MethodInfo **)func_?();
code_?:
                            (*(code *)*ppMVar34)();
                            goto code_?;
                          }
                        }
                      }
                      else {
                        this_02 = (VerticalVirtualizationController_1_System_Object_ *)
                                  func_?();
                        if (this_02 != (VerticalVirtualizationController_1_System_Object_ *)0x0) {
                          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                          VerticalVirtualizationController`1[System::Object]::
                          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                                    (this_02,(MethodInfo *)0x0);
                          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString
                                              ((Boolean *)&stack0xffffffd6,(MethodInfo *)0x0);
                          pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                              (StringLiteral_Testing__Redirect_allowed__,pSVar5,
                                               (MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)pSVar5,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                    else {
                      pIVar25 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                          ((MethodInfo *)0x0);
                      if (pIVar25 != (IAdManager *)0x0) {
                        cVar35 = func_?();
                        if (cVar35 == '\0') goto code_?;
code_?:
                        pIVar25 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                            ((MethodInfo *)0x0);
                        pUVar31 = (UnityAction_1_System_Int32Enum_ *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  (pUVar31,(Object *)&UNK_?,
                                   MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                                   ,(MethodInfo *)0x0);
                        if (pIVar25 != (IAdManager *)0x0) {
                          func_?();
                          goto code_?;
                        }
                      }
                    }
                  }
                  else {
                    pSVar1 = mscorlib.dll::System::String::String_Substring
                                        (chatMsg,0xe,(MethodInfo *)0x0);
                    if (pSVar1 != (String *)0x0) {
                      pSVar5 = mscorlib.dll::System::String::String_Trim(pSVar1,(MethodInfo *)0x0)
                      ;
                      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_Vector3FromSerialize___,pSVar5,
                                           ::StringLiteral__,(MethodInfo *)0x0);
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
                      pSVar1 = chatMsg;
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                        pSVar1 = chatMsg;
                      }
                      Extensions::Extensions_ToVector3FromSerializeString
                                ((Vector3 *)&stack0xffffff48,pSVar5,(MethodInfo *)0x0);
                      pSVar5 = (String *)func_?();
                      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_Vector3FromSerialize_result___,pSVar5,
                                           ::StringLiteral__,(MethodInfo *)0x0);
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                                (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
              else {
                pSVar1 = TM::TM__(StringLiteral_Region___0_,(MethodInfo *)0x0);
                pMVar36 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar36 != (MVNetworkGame *)0x0) {
                  pOVar27 = (Object *)func_?();
                  pSVar5 = mscorlib.dll::System::String::String_Format
                                      (pSVar1,pOVar27,(MethodInfo *)0x0);
                  pSVar1 = (String *)0x0;
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            else {
              if (cRam_? == '\0') {
                bVar4 = 0x11;
                func_?();
                cRam_? = '\x01';
              }
              pSVar5 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
              pKVar37 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
                                  ((MethodInfo *)0x0);
              if (pKVar37 != (KoGaMaSettingsContainer *)0x0) {
                pSVar6 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                                    (pKVar37,(MethodInfo *)0x0);
                pKVar37 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
                                    ((MethodInfo *)0x0);
                if (pKVar37 != (KoGaMaSettingsContainer *)0x0) {
                  pSVar5 = mscorlib.dll::System::String::String_Format_1
                                      (pSVar5,(Object *)pSVar6,
                                       (Object *)(pKVar37->fields).branchName,(MethodInfo *)0x0);
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
          else {
            pMVar38 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                ((MethodInfo *)0x0);
            if (pMVar38 != (MaterialLoader *)0x0) {
              pSVar5 = MaterialLoader::MaterialLoader_MaterialLoaderInfo(pMVar38,(MethodInfo *)0x0)
              ;
              MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                        (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
          pSVar5 = TM::TM__(StringLiteral_Shader___0_u000AAniso_level___1_u000AFil,
                             (MethodInfo *)0x0);
          pMVar38 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0)
          ;
          if (((pMVar38 != (MaterialLoader *)0x0) &&
              (pMVar39 = (pMVar38->fields)._CubeModelMaterial_k__BackingField,
              pMVar39 != (Material *)0x0)) &&
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                  (pMVar39,(MethodInfo *)0x0), this_03 != (Shader *)0x0)) {
            pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                ((Object_1 *)this_03,(MethodInfo *)0x0);
            pMVar38 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                ((MethodInfo *)0x0);
            if ((pMVar38 != (MaterialLoader *)0x0) &&
               (pMVar39 = (pMVar38->fields)._CubeModelMaterial_k__BackingField,
               pMVar39 != (Material *)0x0)) {
              bVar4 = 0x10;
              pTVar40 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                  (pMVar39,(MethodInfo *)0x0);
              if (pTVar40 != (Texture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_get_anisoLevel
                          (pTVar40,(MethodInfo *)0x0);
                pSVar1 = (String *)&stack0xffffffcc;
                pOVar27 = (Object *)func_?();
                pMVar38 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                    ((MethodInfo *)0x0);
                if (((pMVar38 != (MaterialLoader *)0x0) &&
                    (pMVar39 = (pMVar38->fields)._CubeModelMaterial_k__BackingField,
                    pMVar39 != (Material *)0x0)) &&
                   (pTVar40 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_get_mainTexture(pMVar39,(MethodInfo *)0x0),
                   pTVar40 != (Texture *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_get_filterMode
                            (pTVar40,(MethodInfo *)0x0);
                  pOVar41 = (Object *)func_?();
                  pSVar5 = mscorlib.dll::System::String::String_Format_2
                                      (pSVar5,(Object *)pSVar6,pOVar27,pOVar41,(MethodInfo *)0x0);
                  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                            (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
    else {
      pMVar36 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar36 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar36->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetPlayerPlanetData
                  (this_00,(MethodInfo *)0x0);
        goto code_?;
      }
code_?:
      func_?();
    }
    func_?();
    func_?();
    pMVar29 = (MethodInfo *)0x0;
    pOVar27 = (Object *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar27,pMVar29);
    func_?();
    this_04 = (Exception *)func_?();
    pMVar29 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_04,pSVar1,pMVar29);
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    fVar11 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
    fVar14 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
    fVar42 = (float10)func_?();
    if ((float)fVar42 == 0.0) {
      iVar20 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      fVar11 = (float)iVar20;
      iVar20 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      fVar14 = (float)iVar20;
    }
    if (fVar11 * fVar11 + fVar14 * fVar14 < 0.0) {
      func_?();
    }
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    if (0.0 < fVar11) {
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    }
    args = (Object__Array *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    pOVar27 = (Object *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar27 != (Object *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar27;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    pOVar27 = (Object *)func_?();
    if ((pOVar27 != (Object *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar27;
    func_?();
    pOVar27 = (Object *)func_?();
    if ((pOVar27 != (Object *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar27;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    pOVar27 = (Object *)func_?();
    if ((pOVar27 == (Object *)0x0) || (iVar19 = func_?(), iVar19 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar27;
        func_?();
        pSVar5 = mscorlib.dll::System::String::String_Format_3
                            (StringLiteral_Current_Resolution___0__x__1__yu000A,args,
                             (MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
        pOVar27 = (Object *)func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar41 = (Object *)func_?();
        pSVar5 = mscorlib.dll::System::String::String_Format_1
                            (StringLiteral_Physical_Size___0__inchesu000APlayin,pOVar27,pOVar41,
                             (MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
        pOVar27 = (Object *)func_?();
        pSVar5 = mscorlib.dll::System::String::String_Format
                            (StringLiteral_Playing_on_half_resolution___0_,pOVar27,(MethodInfo *)0x0
                            );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  bVar4 = (*pcVar43)();
  return bVar4;
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
    func_?(&TypeInfo__SendMessageControl___OOMTest_d__59);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SendMessageControl___OOMTest_d__59;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
      cVar3 = '\0';
      do {
        if ((int)val->max_length <= (int)uVar2) {
          return;
        }
        if (val->max_length <= uVar2) goto code_?;
        if (cVar3 == '\0') {
          if (val->vector[uVar2] == 0x3c) {
            cVar3 = '\x01';
            startIndex = uVar2;
          }
        }
        else if ((val->vector[uVar2] == 0x3e) || (uVar2 == val->max_length - 1)) {
          pCVar4 = val;
          pSVar1 = mscorlib.dll::System::String::String_CreateString_3
                             ((String *)0x0,val,startIndex,(uVar2 + 1) - startIndex,
                              (MethodInfo *)0x0);
          cVar3 = (char)((uint)pCVar4 >> 0x18);
          if (pSVar1 == (String *)0x0) break;
          bVar5 = mscorlib.dll::System::String::String_Contains
                            (pSVar1,tagToSanitize,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            if (pSRam00000000 == (String *)0x0) break;
            pSRam00000000 =
                 mscorlib.dll::System::String::String_Remove
                           (pSRam00000000,startIndex,(uVar2 + 1) - startIndex,(MethodInfo *)0x0);
            func_?();
            if ((pSRam00000000 == (String *)0x0) ||
               (pSVar1 = mscorlib.dll::System::String::String_ToLower
                                   (pSRam00000000,(MethodInfo *)0x0), pSVar1 == (String *)0x0))
            break;
            val = mscorlib.dll::System::String::String_ToCharArray(pSVar1,(MethodInfo *)0x0);
            cVar3 = (char)((uint)pSVar1 >> 0x18);
            uVar2 = startIndex - 1;
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
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Remove_float_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&StringLiteral_quad);
    func_?(&StringLiteral_size);
    func_?(&StringLiteral__r_n___n);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_width);
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
    input = (pIVar3->fields).m_Text;
    pSStack_4 = input;
    if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    }
    pSStack_4 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                          (input,StringLiteral__r_n___n,::StringLiteral__,(MethodInfo *)0x0);
    SendMessageControl_SanitizeMessage(&pSStack_4,StringLiteral_size,(MethodInfo *)0x0);
    SendMessageControl_SanitizeMessage(&pSStack_4,StringLiteral_width,(MethodInfo *)0x0);
    SendMessageControl_SanitizeMessage(&pSStack_4,StringLiteral_quad,(MethodInfo *)0x0);
    pIVar3 = (this->fields).inputField;
    if (pIVar3 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar3,::StringLiteral__,(MethodInfo *)0x0);
      this_00 = (this->fields).whiteSpaceCheck;
      if ((this_00 != (Regex *)0x0) &&
         (pMVar5 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                              (this_00,pSStack_4,(MethodInfo *)0x0), pMVar5 != (Match *)0x0)) {
        if ((pMVar5->fields)._._._Length_k__BackingField < 1) {
          pUVar6 = (this->fields).DoSend;
          if (pUVar6 == (UnityAction_1_System_Boolean_ *)0x0) {
            return;
          }
          (*(pUVar6->fields)._._.invoke_impl)();
          return;
        }
        index = 0;
        pLVar7 = (this->fields).spamList;
        while (pLVar7 != (List_1_System_Single_ *)0x0) {
          if ((pLVar7->fields)._size <= index) {
            pLVar7 = (this->fields).spamList;
            if (pLVar7 != (List_1_System_Single_ *)0x0) {
              if ((this->fields).maxMessagesPerInterval < (pLVar7->fields)._size) {
                pUVar8 = (this->fields).SpamWarning;
                if (pUVar8 == (UnityAction *)0x0) {
                  return;
                }
                (*(pUVar8->fields)._._.invoke_impl)();
                return;
              }
              pLVar7 = (this->fields).spamList;
              fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                                 ((MethodInfo *)0x0);
              pMVar9 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
              piVar10 = &(pLVar7->fields)._version;
              *piVar10 = *piVar10 + 1;
              pSVar11 = (pLVar7->fields)._items;
              if (pSVar11 != (Single__Array *)0x0) {
                uVar12 = (pLVar7->fields)._size;
                if (uVar12 < pSVar11->max_length) {
                  (pLVar7->fields)._size = uVar12 + 1;
                  if (pSVar11->max_length <= uVar12) goto code_?;
                  pSVar11->vector[uVar12] = fVar1;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                  List_1_System_Single__AddWithResize
                            (pLVar7,fVar1,pMVar9->klass->rgctx_data[0xe].method);
                }
                SendMessageControl_SendChatMessage(this,pSStack_4,(MethodInfo *)0x0);
                return;
              }
            }
            break;
          }
          fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                             ((MethodInfo *)0x0);
          pLVar7 = (this->fields).spamList;
          if (pLVar7 == (List_1_System_Single_ *)0x0) break;
          fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                   List_1_System_Single__get_Item
                             (pLVar7,index,
                              MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
          pfVar13 = &(this->fields).intervalForMessages;
          if (*pfVar13 <= fVar1 - fVar2 && fVar1 - fVar2 != *pfVar13) {
            pLVar7 = (this->fields).spamList;
            if (pLVar7 == (List_1_System_Single_ *)0x0) break;
            fVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                     List_1_System_Single__get_Item
                               (pLVar7,index,
                                MethodInfo__System__Collections__Generic__List<float>__get_Item_int_
                               );
            mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__Remove
                      (pLVar7,fVar1,
                       MethodInfo__System__Collections__Generic__List<float>__Remove_float_);
          }
          index = index + 1;
          pLVar7 = (this->fields).spamList;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

