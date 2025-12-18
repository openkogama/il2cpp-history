
/* Void ActivateAllChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateAllChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral___All__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat == 9) {
    SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
  }
  pTVar1 = (this->fields).currentChat;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral___All__,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).currentChat;
    if (pTVar1 != (Text *)0x0) {
      uStack_2 = _UNK_?;
      uStack_3 = _UNK_?;
      (*(pTVar1->klass->vtable).set_color.methodPtr)
                (pTVar1,&uStack_2,(pTVar1->klass->vtable).set_color.method);
      (this->fields).selectedChat = 7;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ActivateSayChat(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateSayChat
               (SendMessageControl *this,bool sayChatVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral___Say__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((this->fields).selectedChat != 9) {
    bVar1 = sayChatVisible;
  }
  if (bVar1 != 0) {
    SendMessageControl_SetSayChatBubbleVisible(this,1,(MethodInfo *)0x0);
  }
  pTVar2 = (this->fields).currentChat;
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,StringLiteral___Say__,(pTVar2->klass->vtable).set_text.method);
    pTVar2 = (this->fields).currentChat;
    if (pTVar2 != (Text *)0x0) {
      fStack_3 = (this->fields).sayChatColor.r;
      fStack_4 = (this->fields).sayChatColor.g;
      fStack_5 = (this->fields).sayChatColor.b;
      fStack_6 = (this->fields).sayChatColor.a;
      (*(pTVar2->klass->vtable).set_color.methodPtr)
                (pTVar2,&fStack_3,(pTVar2->klass->vtable).set_color.method);
      (this->fields).selectedChat = 9;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ActivateTeamChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ActivateTeamChat
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral___Team__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        return;
      }
      if ((this->fields).selectedChat == 9) {
        SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
      }
      pTVar5 = (this->fields).currentChat;
      if (pTVar5 != (Text *)0x0) {
        pTVar6 = pTVar5->klass;
        method_00 = (pTVar6->vtable).set_text.method;
        player = (MVPlayer *)StringLiteral___Team__;
        (*(pTVar6->vtable).set_text.methodPtr)();
        bVar7 = cRam_? == '\0';
        (this->fields).selectedChat = 8;
        if (bVar7) {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields).selectedChat != 8) {
          return;
        }
        pTVar5 = (this->fields).currentChat;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
        if (extraout_RAX != 0) {
          team = *(MVTeam__Enum *)(extraout_RAX + 0x84);
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar8 = Styles::Styles_GetTeamColor(&CStack_9,team,0,(MethodInfo *)0x0);
          if (pTVar5 != (Text *)0x0) {
            CStack_9.r = pCVar8->r;
            CStack_9.g = pCVar8->g;
            CStack_9.b = pCVar8->b;
            CStack_9.a = pCVar8->a;
            (*(pTVar5->klass->vtable).set_color.methodPtr)
                      (pTVar5,&CStack_9,(pTVar5->klass->vtable).set_color.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_Awake
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SendMessageControl__ChangeTeamChatColor__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__S);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_00,StringLiteral__S,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).whiteSpaceCheck = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).whiteSpaceCheck >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     (pMVar8 = (pMVar7->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
    pMVar9 = (pMVar8->fields).OnTeamsUpdated;
    pNVar10 = (NavMesh_OnNavMeshPreUpdate *)
             FUN_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar10,(Object *)this,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
               (MethodInfo *)0x0);
    pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
    pMVar9 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    if (pMVar11 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (pMVar8->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    }
    else {
      pMVar12 = pMVar9;
      if (pMVar11->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar12 = pMVar11;
      }
      if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      (pMVar8->fields).OnTeamsUpdated = pMVar12;
      pMVar12 = pMVar9;
      if (pMVar11->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar12 = pMVar11;
      }
      if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar8->fields).OnTeamsUpdated >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 != (MVGameControllerBase *)0x0) &&
        (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
       (pMVar14 = (pMVar7->fields).playerContainer, pMVar14 != (MVPlayerContainer *)0x0)) {
      a = (pMVar14->fields).OnPlayerListChanged;
      pNVar10 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar10,(Object *)this,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
                 (MethodInfo *)0x0);
      pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)pNVar10,(MethodInfo *)0x0);
      if (pMVar11 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar14->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pMVar12 = pMVar9;
        if (pMVar11->klass ==
            (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
          pMVar12 = pMVar11;
        }
        if (pMVar12 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?(pMVar11);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        (pMVar14->fields).OnPlayerListChanged = (Action *)pMVar12;
        if (pMVar11->klass ==
            (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
          pMVar9 = pMVar11;
        }
        if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?(pMVar11);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar14->fields).OnPlayerListChanged >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ChangeTeamChatColor() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ChangeTeamChatColor
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).selectedChat != 8) {
    return;
  }
  pTVar1 = (this->fields).currentChat;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    team = *(MVTeam__Enum *)(extraout_RAX + 0x84);
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = Styles::Styles_GetTeamColor(&CStack_3,team,0,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      CStack_3.r = pCVar2->r;
      CStack_3.g = pCVar2->g;
      CStack_3.b = pCVar2->b;
      CStack_3.a = pCVar2->a;
      (*(pTVar1->klass->vtable).set_color.methodPtr)
                (pTVar1,&CStack_3,(pTVar1->klass->vtable).set_color.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String CreateChatCommandsHelpTxt() */

String * Assembly-CSharp.dll::SendMessageControl::SendMessageControl_CreateChatCommandsHelpTxt
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000AType___team_to_enter_team_chat_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000AType___say_to_enter_say_chat_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000AType___yes_to_nod_your_head_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000Au000AType___all_to_enter_all_chat__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000AType___wave_to_wave_your_arms_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000AType___no_to_shake_your_head_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (::StringLiteral__,StringLiteral_u000AType___yes_to_nod_your_head_,
                      (MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral_u000AType___no_to_shake_your_head_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral_u000AType___wave_to_wave_your_arms_,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                      (MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral_u000AType___team_to_enter_team_chat_,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_u000AType___say_to_enter_say_chat_;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    if ((StringLiteral_u000AType___say_to_enter_say_chat_ != (String *)0x0) &&
       ((StringLiteral_u000AType___say_to_enter_say_chat_->fields)._stringLength != 0)) {
      return StringLiteral_u000AType___say_to_enter_say_chat_;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((StringLiteral_u000AType___say_to_enter_say_chat_ == (String *)0x0) ||
     ((StringLiteral_u000AType___say_to_enter_say_chat_->fields)._stringLength == 0)) {
    return pSVar2;
  }
  iVar3 = (pSVar2->fields)._stringLength;
  pSVar4 = (String *)
           FUN_?((StringLiteral_u000AType___say_to_enter_say_chat_->fields)._stringLength +
                         iVar3,StringLiteral_u000AType___say_to_enter_say_chat_,0);
  if (pSVar4 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar5)();
    return pSVar1;
  }
  if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength) {
    puVar6 = &(pSVar4->fields)._firstChar;
    puVar7 = &(pSVar2->fields)._firstChar;
    uVar8 = (pSVar2->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
      puVar7 = &(pSVar4->fields)._firstChar + iVar3;
      puVar6 = &(pSVar1->fields)._firstChar;
      uVar8 = (pSVar1->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar5 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar5)();
    return pSVar1;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* String CreateHelpTxt() */

String * Assembly-CSharp.dll::SendMessageControl::SendMessageControl_CreateHelpTxt
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__M__Menu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000AType___c_to_see_available_chat_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_u000A;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 == (GameSessionData *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  if (0 < (pGVar2->fields).profileID) {
    pSVar4 = TM::TM__(StringLiteral_u000AType___c_to_see_available_chat_,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar4,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)TypeInfo__MVGameControllerBase->static_fields;
  if (*(bool *)&method_00->field7_0x38 != 0) {
    return pSVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 == (GameSessionData *)0x0) goto code_?;
  iVar5 = (pGVar2->fields).gameMode;
  bVar6 = MVNetworkGame::MVNetworkGame_get_IsPlaying((MVNetworkGame *)0x0,method_00);
  if (bVar6 == 0) {
    if (iVar5 == 0) {
code_?:
      pSVar4 = TM::TM__(StringLiteral_u000A_Right_mouse__Hold_to_looku000A_WAS,(MethodInfo *)0x0);
      goto code_?;
    }
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        return ::StringLiteral__;
      }
      if (iVar5 != 3) {
        if (iVar5 != 4) {
          return pSVar1;
        }
        goto code_?;
      }
    }
  }
  pSVar4 = TM::TM__(StringLiteral__M__Menu,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar4,(MethodInfo *)0x0);
  pSVar4 = TM::TM__(StringLiteral_u000A_H__Toggle_HD_Modeu000A_WASD__Moveu000A,(MethodInfo *)0x0);
code_?:
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar4,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void EnforceCharacterLimit() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_EnforceCharacterLimit
               (SendMessageControl *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  if ((pIVar1 == (InputField *)0x0) || (pSVar2 = (pIVar1->fields).m_Text, pSVar2 == (String *)0x0))
  {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (((this->fields).inputField)->fields).m_CharacterLimit;
  if ((pSVar2->fields)._stringLength < iVar4) {
    return;
  }
  pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,iVar4 + -1,(MethodInfo *)0x0);
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar5 = (pIVar1->fields).m_Text;
  if (pSVar5 == pSVar2) {
    return;
  }
  if (pSVar5 == (String *)0x0) {
code_?:
    if (pSVar2 == (String *)0x0) {
code_?:
      pSVar2 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar2 == (String *)0x0) goto code_?;
    if ((pSVar5->fields)._stringLength == (pSVar2->fields)._stringLength) {
      bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar5->fields)._firstChar,
                         (uint8_t *)&(pSVar2->fields)._firstChar,
                         (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar2 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar2,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((pIVar1->fields).m_LineType == 0) {
    if ((pSVar2 == (String *)0x0) ||
       (pSVar2 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar2,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar2 == (String *)0x0)) goto DAT_?;
    pSVar2 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar2,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((pIVar1->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((pIVar1->fields).m_CharacterValidation == 0)) {
    if (0 < (pIVar1->fields).m_CharacterLimit) {
      if (pSVar2 == (String *)0x0) goto DAT_?;
      iVar4 = (pIVar1->fields).m_CharacterLimit;
      if (iVar4 < (pSVar2->fields)._stringLength) {
        pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,iVar4,(MethodInfo *)0x0)
        ;
      }
    }
    (pIVar1->fields).m_Text = pSVar2;
    func_?(&(pIVar1->fields).m_Text);
  }
  else {
    bVar7 = iRam_? != 0;
    (pIVar1->fields).m_Text = ::StringLiteral__;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(pIVar1->fields).m_Text >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pIVar12 = (pIVar1->fields).m_OnValidateInput;
    if (pIVar12 == (InputField_OnValidateInput *)0x0) {
      pIVar12 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar13 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar7 = iRam_? != 0;
      (pIVar12->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar12->fields)._._.method = pMVar13;
      (pIVar12->fields)._._.m_target = (Object *)pIVar1;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(pIVar12->fields)._._.m_target >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uVar14 = pMVar13->parameters_count;
      (pIVar12->fields)._._.method_code = pIVar12;
      if ((pMVar13->flags & 0x10) == 0) {
        if (uVar14 != 2) goto code_?;
        pcVar3 = FUN_?;
      }
      else if (uVar14 == 3) {
        pcVar3 = FUN_?;
      }
      else {
code_?:
        (pIVar12->fields)._._.method_code = (pIVar12->fields)._._.m_target;
        pcVar3 = (pIVar12->fields)._._.method_ptr;
      }
      (pIVar12->fields)._._.invoke_impl = pcVar3;
      (pIVar12->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar2 == (String *)0x0) goto DAT_?;
    iVar15 = (pSVar2->fields)._stringLength;
    (pIVar1->fields).m_CaretSelectPosition = iVar15;
    (pIVar1->fields).m_CaretPosition = iVar15;
    if ((pIVar1->fields).m_CharacterLimit < 1) {
      iVar4 = (pSVar2->fields)._stringLength;
    }
    else {
      iVar4 = (pIVar1->fields).m_CharacterLimit;
      iVar16 = (pSVar2->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar16 < iVar4) {
        iVar4 = iVar16;
      }
    }
    uVar8 = 0;
    if (0 < iVar4) {
      puVar17 = &(pSVar2->fields)._firstChar;
      lVar9 = 0;
      do {
        pSVar5 = (pIVar1->fields).m_Text;
        if (pSVar5 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar2->fields)._stringLength <= (longlong)(ulonglong)uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pIVar12 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar12->fields)._._.invoke_impl)
                      ((pIVar12->fields)._._.method_code,(pIVar1->fields).m_Text,
                       (pSVar5->fields)._stringLength,*puVar17,(pIVar12->fields)._._.method);
        if (c != 0) {
          pSVar5 = (pIVar1->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4(pSVar5,str1,(MethodInfo *)0x0);
          (pIVar1->fields).m_Text = pSVar5;
          func_?(&(pIVar1->fields).m_Text);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar9 < iVar4);
    }
  }
  if ((pIVar1->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((pIVar1->fields).m_Keyboard,(pIVar1->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar2 = (pIVar1->fields).m_Text;
  if (pSVar2 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pSVar2->fields)._stringLength;
  if (iVar4 < (pIVar1->fields).m_CaretPosition) {
    (pIVar1->fields).m_CaretPosition = iVar4;
  }
  else if ((pIVar1->fields).m_CaretSelectPosition <= iVar4) goto code_?;
  (pIVar1->fields).m_CaretSelectPosition = iVar4;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)pIVar1,(MethodInfo *)0x0);
  if ((pIVar1->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(pIVar1->fields).m_OnValueChanged,
               (Object *)(pIVar1->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(pIVar1,(MethodInfo *)0x0);
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar5 = (pMVar4->fields).teams;
        if (pDVar5 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
          MVar1 = MVGameMsgType__Enum_TeamChat;
          if ((pDVar5->fields)._count - (pDVar5->fields)._freeCount < 2) {
            MVar1 = MVGameMsgType__Enum_SayChat;
          }
          return MVar1;
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      MVar1 = (*pcVar6)();
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
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IToggleFps>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjExportHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Region);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SendMessageControl____c___HandleChatCommands_b__56_0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SendMessageControl____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__export);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EmbeddedSiteSDKAvailable____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Quaternion_identity_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_resultDailyWelcomeRewardClaimedT);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WasInitializedSuccessfully____0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__m);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_allowsFallbackAds____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__tex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__wave);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_utcNow_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__dt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vector3FromSerialize_result___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_q_x___float_PositiveInfinity_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_allowsRedirectToWebpage____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__gp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdManager___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__pokiforce);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vector3FromSerialize___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__convertSingle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__hd);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SiteEnum____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ru);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vector3_one_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hideGoldShop____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__shaderInfo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showPlayButtonAd____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__admanager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__region);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vector3_x___float_PositiveInfini);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_allowsModals____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shader___0_u000AAniso_level___1_u000AFil);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__r);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__adtest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Build_and_play_mode_UI_not_imple);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdSDK____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Physical_Size___0__inchesu000APlayin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_q_x___float_NaN_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__rgp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__materialInfo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__sat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Site__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__exportself);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__gdforce);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Testing_context__chat_msg_test_e);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_allowInHouseAds____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__embedforce);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_removeFullscreenButton____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showTouristPromotion____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__build);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__url);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Current_Resolution___0__x__1__yu000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_utcNow_DayOfYear_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__f);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_noPlayButtonVideoIcon____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_integratedSdk____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remote_Playmode_Avatar_should_re);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__h);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__rad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vector3_x___float_NaN_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Playing_on_half_resolution___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_chat_msg_test_error);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Testing__Redirect_allowed__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__iad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lastDailyWelcomeRewardClaim_DayO);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Math_validation_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_resultDebug_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__yes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_allowsOpenInNewTab____0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Region___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__no);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GamePassesManager_PlayerPlanetDa);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_10.x = 0.0;
  VStackX_10.y = 0.0;
  auStack_1 = (undefined1  [8])0x0;
  uStack_2 = (Object *)((ulonglong)uStack_2._4_4_ << 0x20);
  aLStack_3[0]._list = (List_1_System_Object_ *)0x0;
  aLStack_3[0]._index = 0;
  aLStack_3[0]._version = 0;
  aLStack_3[0]._current = (Object *)0x0;
  DStackX_20._dateData = DStackX_20._dateData & 0xffffffffffffff00;
  if ((chatMsg == StringLiteral__h) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__h != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__h->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__h->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    pSVar5 = SendMessageControl_CreateHelpTxt((MethodInfo *)0x0);
    goto code_?;
  }
  if ((chatMsg == StringLiteral__f) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__f != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__f->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__f->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SendMessageControl____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SendMessageControl____c);
    }
    this_04 = TypeInfo__SendMessageControl____c->static_fields->__9__56_0;
    if (this_04 == (ExecuteEvents_EventFunction_1_IToggleFps_ *)0x0) {
      if (*(int *)&(TypeInfo__SendMessageControl____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SendMessageControl____c);
      }
      object = TypeInfo__SendMessageControl____c->static_fields->__9;
      this_04 = (ExecuteEvents_EventFunction_1_IToggleFps_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
                 MethodInfo__SendMessageControl____c___HandleChatCommands_b__56_0_IToggleFps__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SendMessageControl____c->static_fields->__9__56_0 = this_04;
      func_?(&TypeInfo__SendMessageControl____c->static_fields->__9__56_0);
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IToggleFps>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IToggleFps>_
              );
    return 0;
  }
  if ((chatMsg == StringLiteral__r) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__r != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__r->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__r->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    pSVar6 = TypeInfo__ScreenSizeOptimizer->static_fields;
    fVar7 = (pSVar6->originalSize).x;
    fVar8 = (pSVar6->originalSize).y;
    VStackX_10 = pSVar6->originalSize;
    fVar9 = (float)FUN_?();
    if (fVar9 == 0.0) {
      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      fVar7 = (float)iVar10;
      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      fVar8 = (float)iVar10;
    }
    fVar9 = fVar7 * fVar7 + fVar8 * fVar8;
    if (fVar9 < 0.0) {
      fVar9 = (float)FUN_?();
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    fVar12 = _UNK_?;
    if (0.0 < fVar11) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    }
    args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
    fVar11 = (float)UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                              ((MethodInfo *)0x0);
    VStackX_10.x = fVar11;
    lVar13 = FUN_?(uRam_?,&VStackX_10);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((lVar13 != 0) &&
       (lVar14 = FUN_?(lVar13,(args->klass->_0).element_class), lVar14 == 0)) {
      uVar15 = FUN_?();
      FUN_?(uVar15,0);
      pcVar16 = (code *)swi(3);
      bVar4 = (*pcVar16)();
      return bVar4;
    }
    FUN_?(args,0,lVar13);
    fVar11 = (float)UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                              ((MethodInfo *)0x0);
    VStackX_10.x = fVar11;
    lVar13 = FUN_?(uRam_?,&VStackX_10);
    if ((lVar13 != 0) &&
       (lVar14 = FUN_?(lVar13,(args->klass->_0).element_class), lVar14 == 0)) {
      uVar15 = FUN_?();
      FUN_?(uVar15,0);
      pcVar16 = (code *)swi(3);
      bVar4 = (*pcVar16)();
      return bVar4;
    }
    FUN_?(args,1,lVar13);
    VStackX_10.y = fVar8;
    VStackX_10.x = fVar7;
    lVar13 = FUN_?(TypeInfo__UnityEngine__Vector2,&VStackX_10);
    if ((lVar13 != 0) &&
       (lVar14 = FUN_?(lVar13,(args->klass->_0).element_class), lVar14 == 0)) {
      uVar15 = FUN_?();
      FUN_?(uVar15,0);
      pcVar16 = (code *)swi(3);
      bVar4 = (*pcVar16)();
      return bVar4;
    }
    FUN_?(args,2,lVar13);
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    VStackX_10.x = fVar7;
    lVar13 = FUN_?(uRam_?,&VStackX_10);
    if ((lVar13 != 0) &&
       (lVar13 = FUN_?(lVar13,(args->klass->_0).element_class), lVar13 == 0)) {
      uVar15 = FUN_?();
      FUN_?(uVar15,0);
      pcVar16 = (code *)swi(3);
      bVar4 = (*pcVar16)();
      return bVar4;
    }
    FUN_?(args,3);
    pSVar5 = StringLiteral_Current_Resolution___0__x__1__yu000A;
    auStack_17 = (undefined1  [8])0x0;
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)0x0;
    uStack_19 = (Object *)0x0;
    pOStack_20 = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
              ((ParamsArray *)auStack_17,args,(MethodInfo *)0x0);
    auStack_1 = auStack_17;
    uStack_2 = (Object *)uStack_18;
    uStack_21 = uStack_19;
    pOStack_22 = pOStack_20;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar5,(ParamsArray *)auStack_1,(MethodInfo *)0x0)
    ;
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    VStackX_10.x = fVar9 / fVar12;
    pOVar23 = (Object *)FUN_?(uRam_?,&VStackX_10);
    uVar24 = FUN_?();
    VStackX_10.x._0_1_ = uVar24;
    pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral_Physical_Size___0__inchesu000APlayin,pOVar23,pOVar25,
                         (MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    VStackX_10.x._0_1_ = TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution;
    pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
    pSVar5 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Playing_on_half_resolution___0_,pOVar23,(MethodInfo *)0x0);
    goto code_?;
  }
  if ((chatMsg == StringLiteral__m) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__m != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__m->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__m->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pEVar26 = *(Enum__Class **)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
    fVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
    auStack_17 = (undefined1  [8])pEVar26;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar27 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar8 = (pQVar27->identityQuaternion).y;
    pEVar28 = *(Enum__Class **)&pQVar27->identityQuaternion;
    pfVar29 = &(pQVar27->identityQuaternion).z;
    pOVar30 = *(Object **)pfVar29;
    pOVar25 = *(Object **)pfVar29;
    pOVar23 = *(Object **)pfVar29;
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral_Math_validation_test,(MethodInfo *)0x0);
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)CONCAT44(uStack_18._4_4_,fVar7);
    auStack_17 = (undefined1  [8])pEVar26;
    auStack_1 = (undefined1  [8])pEVar26;
    bVar4 = MathFunctions::MathFunctions_IsVectorFloatsValid
                       ((Vector3 *)auStack_17,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_False;
    if (bVar4 != 0) {
      pSVar5 = StringLiteral_True;
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Vector3_one_,pSVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    auStack_1._0_4_ = 0x7f800000;
    auStack_17 = auStack_1;
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)CONCAT44(uStack_18._4_4_,fVar7);
    bVar4 = MathFunctions::MathFunctions_IsVectorFloatsValid
                       ((Vector3 *)auStack_17,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_False;
    if (bVar4 != 0) {
      pSVar5 = StringLiteral_True;
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_vector3_x___float_PositiveInfini,pSVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    auStack_1._0_4_ = 0x7fc00000;
    auStack_17 = auStack_1;
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)CONCAT44(uStack_18._4_4_,fVar7);
    bVar4 = MathFunctions::MathFunctions_IsVectorFloatsValid
                       ((Vector3 *)auStack_17,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_False;
    if (bVar4 != 0) {
      pSVar5 = StringLiteral_True;
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_vector3_x___float_NaN_,pSVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    auStack_17 = (undefined1  [8])pEVar28;
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)pOVar23;
    bVar4 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                       ((Quaternion *)auStack_17,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_False;
    if (bVar4 != 0) {
      pSVar5 = StringLiteral_True;
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Quaternion_identity_,pSVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    auStack_17._4_4_ = fVar8;
    auStack_17._0_4_ = 0x7f800000;
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)pOVar25;
    bVar4 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                       ((Quaternion *)auStack_17,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_False;
    if (bVar4 != 0) {
      pSVar5 = StringLiteral_True;
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_q_x___float_PositiveInfinity_,pSVar5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    auStack_17._0_4_ = 0x7fc00000;
    uStack_18 = (List_1_T_Enumerator_System_Object_ *)pOVar30;
    bVar4 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                       ((Quaternion *)auStack_17,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = StringLiteral_False;
    if (bVar4 != 0) {
      pSVar5 = StringLiteral_True;
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_q_x___float_NaN_,pSVar5,(MethodInfo *)0x0);
    goto code_?;
  }
  if ((chatMsg == StringLiteral__c) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__c != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__c->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__c->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_u000AType___team_to_enter_team_chat_);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_u000AType___say_to_enter_say_chat_);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_u000AType___yes_to_nod_your_head_);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_u000Au000AType___all_to_enter_all_chat__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_u000AType___wave_to_wave_your_arms_);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_u000AType___no_to_shake_your_head_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (::StringLiteral__,StringLiteral_u000AType___yes_to_nod_your_head_,
                         (MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar5,StringLiteral_u000AType___no_to_shake_your_head_,(MethodInfo *)0x0)
    ;
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar5,StringLiteral_u000AType___wave_to_wave_your_arms_,(MethodInfo *)0x0
                        );
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar5,StringLiteral_u000Au000AType___all_to_enter_all_chat__,
                         (MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar5,StringLiteral_u000AType___team_to_enter_team_chat_,
                         (MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar5,StringLiteral_u000AType___say_to_enter_say_chat_,(MethodInfo *)0x0)
    ;
    goto code_?;
  }
  if ((chatMsg == StringLiteral__hd) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__hd != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__hd->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__hd->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    return 0;
  }
  if ((chatMsg == StringLiteral__ru) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__ru != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__ru->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__ru->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Remote_Playmode_Avatar_should_re,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Build_and_play_mode_UI_not_imple,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    ChatCommandManager::ChatCommandManager_ChatCommandActivated
              (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
    return 0;
  }
  if ((chatMsg == StringLiteral__gp) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__gp != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__gp->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__gp->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    bVar31 = FUN_?();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar32 = 0;
    if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) {
      bVar32 = bVar31 ^ 1;
    }
    if (bVar32 == 0) {
code_?:
      TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole = 1;
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__rgp_for_reset_player_datau000A);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
               (MethodInfo *)0x0);
    pPVar33 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar33 != (PlayerPlanetData *)0x0) {
      pSVar5 = (String *)
                (*(pPVar33->klass->vtable).ToString.methodPtr)
                          (pPVar33,(pPVar33->klass->vtable).ToString.method);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
      pPVar34 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (pPVar34 != (PlayerTierStateCalculator *)0x0) {
        pSVar5 = (String *)
                  (*(pPVar34->klass->vtable).ToString.methodPtr)
                            (pPVar34,(pPVar34->klass->vtable).ToString.method);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
        goto code_?;
      }
    }
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    bVar4 = (*pcVar16)();
    return bVar4;
  }
  if ((chatMsg == StringLiteral__rgp) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__rgp != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__rgp->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__rgp->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    pMVar35 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar35 != (MVNetworkGame *)0x0) &&
       (pMVar36 = (pMVar35->fields).operationRequests,
       pMVar36 != (MVNetworkGame_OperationRequests *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar37 = (pMVar36->fields).peer;
      this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      pMVar38 = 
      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar37 != (PhotonPeer *)0x0) {
        (*(pPVar37->klass->vtable).SendOperation.methodPtr)
                  (pPVar37,CONCAT71((int7)((ulonglong)pMVar38 >> 8),0x67),this_03,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar37->klass->vtable).SendOperation.method);
        return 0;
      }
    }
    goto code_?;
  }
  if ((chatMsg == StringLiteral__dt) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__dt != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__dt->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__dt->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    lVar13 = FUN_?();
    if ((lVar13 != 0) &&
       (*(PlayerPlanetMetaDataClient **)(lVar13 + 0x30) != (PlayerPlanetMetaDataClient *)0x0)) {
      bVar4 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
               PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                         (*(PlayerPlanetMetaDataClient **)(lVar13 + 0x30),(MethodInfo *)0x0);
      VStackX_10.x._0_1_ = bVar4;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&VStackX_10,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_resultDailyWelcomeRewardClaimedT,pSVar5,(MethodInfo *)0x0)
      ;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
        FUN_?();
      }
      DStackX_20 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
      lVar13 = FUN_?();
      if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x30) != 0)) {
        auStack_1 = *(undefined1 (*) [8])(*(longlong *)(lVar13 + 0x30) + 0x18);
        pSVar5 = mscorlib.dll::System::DateTime::DateTime_ToString(&DStackX_20,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_utcNow_,pSVar5,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        lVar13 = FUN_?();
        if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x30) != 0)) {
          pSVar5 = mscorlib.dll::System::DateTime::DateTime_ToString
                              ((DateTime *)(*(longlong *)(lVar13 + 0x30) + 0x18),(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_GamePassesManager_PlayerPlanetDa,pSVar5,
                               (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          fVar7 = (float)mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                                    ((DateTime *)auStack_1,(MethodInfo *)0x0);
          VStackX_10.x = fVar7;
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&VStackX_10,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_lastDailyWelcomeRewardClaim_DayO,pSVar5,
                               (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          VStackX_10.x = (float)mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                                          (&DStackX_20,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&VStackX_10,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_utcNow_DayOfYear_,pSVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          iVar10 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                             ((DateTime *)auStack_1,(MethodInfo *)0x0);
          iVar39 = mscorlib.dll::System::DateTime::DateTime_get_DayOfYear
                             (&DStackX_20,(MethodInfo *)0x0);
          pSVar5 = StringLiteral_resultDebug_;
          if (iVar10 == iVar39) {
            if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
              FUN_?();
            }
            iVar10 = mscorlib.dll::System::DateTime::DateTime_get_Year
                               ((DateTime *)auStack_1,(MethodInfo *)0x0);
            iVar39 = mscorlib.dll::System::DateTime::DateTime_get_Year
                               (&DStackX_20,(MethodInfo *)0x0);
            bVar40 = iVar10 == iVar39;
          }
          else {
            bVar40 = false;
          }
          VStackX_10.x._0_1_ = bVar40;
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pSVar41 = mscorlib.dll::System::Boolean::Boolean_ToString
                              ((Boolean *)&VStackX_10,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4(pSVar5,pSVar41,(MethodInfo *)0x0)
          ;
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
    goto code_?;
  }
  if ((chatMsg == StringLiteral__ter) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__ter != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__ter->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__ter->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Testing_context__chat_msg_test_e,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_chat_msg_test_error,(MethodInfo *)0x0);
    return 0;
  }
  if ((chatMsg == StringLiteral__tex) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__tex != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__tex->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__tex->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    uVar15 = func_?(&TypeInfo__UnityEngine__Debug);
    func_?(uVar15);
    pOVar23 = (Object *)func_?(&StringLiteral_Testing_context__chat_msg_test_e);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar23,(MethodInfo *)0x0);
    uVar15 = func_?(&TypeInfo__System__Exception);
    this_05 = (Exception *)func_?(uVar15);
    pSVar5 = (String *)func_?(&StringLiteral_chat_msg_test_ex);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_05,pSVar5,(MethodInfo *)0x0);
    uVar15 = func_?(&MethodInfo__SendMessageControl__HandleChatCommands_System__String_
                                );
    FUN_?(this_05,uVar15);
    pcVar16 = (code *)swi(3);
    bVar4 = (*pcVar16)();
    return bVar4;
  }
  if (chatMsg == StringLiteral__sat) {
    return 0;
  }
  if (((chatMsg != (String *)0x0) && (StringLiteral__sat != (String *)0x0)) &&
     (((chatMsg->fields)._stringLength == (StringLiteral__sat->fields)._stringLength &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__sat->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    return 0;
  }
  if ((chatMsg == StringLiteral__shaderInfo) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__shaderInfo != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__shaderInfo->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__shaderInfo->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    pSVar5 = TM::TM__(StringLiteral_Shader___0_u000AAniso_level___1_u000AFil,(MethodInfo *)0x0);
    pMVar42 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (((pMVar42 != (MaterialLoader *)0x0) &&
        (pMVar43 = (pMVar42->fields)._CubeModelMaterial_k__BackingField, pMVar43 != (Material *)0x0))
       && (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                               (pMVar43,(MethodInfo *)0x0), this_02 != (Shader *)0x0)) {
      pSVar41 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                          ((Object_1 *)this_02,(MethodInfo *)0x0);
      pMVar42 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if (((pMVar42 != (MaterialLoader *)0x0) &&
          (pMVar43 = (pMVar42->fields)._CubeModelMaterial_k__BackingField, pMVar43 != (Material *)0x0)
          ) && (pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_get_mainTexture(pMVar43,(MethodInfo *)0x0),
               pTVar44 != (Texture *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture>_UnityEngine__Texture_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Texture);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar45 = (pTVar44->fields)._.m_CachedPtr;
        if (pvVar45 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar44,(MethodInfo *)0x0);
          pcVar16 = (code *)swi(3);
          bVar4 = (*pcVar16)();
          return bVar4;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar16 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar16 = (code *)swi(3);
          bVar4 = (*pcVar16)();
          return bVar4;
        }
        pcRam_? = pcVar16;
        fVar7 = (float)(*pcRam_?)(pvVar45);
        VStackX_10.x = fVar7;
        pOVar23 = (Object *)FUN_?();
        pMVar42 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (((pMVar42 != (MaterialLoader *)0x0) &&
            (pMVar43 = (pMVar42->fields)._CubeModelMaterial_k__BackingField,
            pMVar43 != (Material *)0x0)) &&
           (pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                (pMVar43,(MethodInfo *)0x0), pTVar44 != (Texture *)0x0)) {
          fVar7 = (float)UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_get_filterMode
                                    (pTVar44,(MethodInfo *)0x0);
          VStackX_10.x = fVar7;
          pOVar25 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format_2
                              (pSVar5,(Object *)pSVar41,pOVar23,pOVar25,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  if ((chatMsg == StringLiteral__materialInfo) ||
     (((chatMsg != (String *)0x0 && (StringLiteral__materialInfo != (String *)0x0)) &&
      (((chatMsg->fields)._stringLength == (StringLiteral__materialInfo->fields)._stringLength &&
       (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(chatMsg->fields)._firstChar,
                            (uint8_t *)&(StringLiteral__materialInfo->fields)._firstChar,
                            (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar4 != 0)))))) {
    pMVar42 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (pMVar42 != (MaterialLoader *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Text__StringBuilder);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Is_using_sm3__);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__Set_Texture_Quality__);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__Is_Using_Mobile_Shader__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_01,(MethodInfo *)0x0);
      if ((this_01 != (StringBuilder *)0x0) &&
         (pSVar46 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (this_01,StringLiteral_Is_using_sm3__,(MethodInfo *)0x0),
         pSVar46 != (StringBuilder *)0x0)) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (pSVar46,(pMVar42->fields).isUsingSM3Shader,(MethodInfo *)0x0);
        pSVar46 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this_01,StringLiteral__Is_Using_Mobile_Shader__,(MethodInfo *)0x0);
        if (pSVar46 != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (pSVar46,(pMVar42->fields).isUsingMobileShader,(MethodInfo *)0x0);
          pSVar46 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (this_01,StringLiteral__Set_Texture_Quality__,(MethodInfo *)0x0);
          auStack_17 = (undefined1  [8])TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
          uStack_18 = (List_1_T_Enumerator_System_Object_ *)0xffffffffffffffff;
          uStack_19 = (Object *)CONCAT44(uStack_19._4_4_,(pMVar42->fields).selectedQuality);
          pSVar5 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_17,(MethodInfo *)0x0);
          if (pSVar46 != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (pSVar46,pSVar5,(MethodInfo *)0x0);
            pSVar5 = (String *)
                      (*(this_01->klass->vtable).ToString.methodPtr)
                                (this_01,(this_01->klass->vtable).ToString.method);
            goto code_?;
          }
        }
      }
    }
    goto code_?;
  }
  if ((chatMsg == StringLiteral__build) ||
     ((((chatMsg != (String *)0x0 && (StringLiteral__build != (String *)0x0)) &&
       ((chatMsg->fields)._stringLength == (StringLiteral__build->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__build->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Version___0_u000ABranch___1_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__3_5_14_0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar41 = StringLiteral__3_5_14_0;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_release_2025_12_17Maintenance);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                        (pSVar5,(Object *)pSVar41,
                         (Object *)StringLiteral_release_2025_12_17Maintenance,(MethodInfo *)0x0);
    goto code_?;
  }
  if (chatMsg == StringLiteral__region) {
code_?:
    pSVar5 = TM::TM__(StringLiteral_Region___0_,(MethodInfo *)0x0);
    pMVar35 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar35 == (MVNetworkGame *)0x0) goto code_?;
    VStackX_10.x._0_1_ = (pMVar35->fields)._Region_k__BackingField;
    pOVar23 = (Object *)FUN_?(TypeInfo__MV__Common__Region,&VStackX_10);
    pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,pOVar23,(MethodInfo *)0x0);
code_?:
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    return 0;
  }
  if (chatMsg == (String *)0x0) goto code_?;
  if ((StringLiteral__region != (String *)0x0) &&
     ((chatMsg->fields)._stringLength == (StringLiteral__region->fields)._stringLength)) {
    bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                       ((uint8_t *)&(chatMsg->fields)._firstChar,
                        (uint8_t *)&(StringLiteral__region->fields)._firstChar,
                        (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
    if (chatMsg == (String *)0x0) goto code_?;
  }
  bVar4 = mscorlib.dll::System::String::String_StartsWith
                     (chatMsg,StringLiteral__convertSingle,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pSVar5 = mscorlib.dll::System::String::String_Substring_1
                        (chatMsg,0xe,(chatMsg->fields)._stringLength + -0xe,(MethodInfo *)0x0);
    if (pSVar5 == (String *)0x0) goto code_?;
    pSVar5 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                        (pSVar5,String_TrimType__Enum_Both,(MethodInfo *)0x0);
    pSVar41 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_Vector3FromSerialize___,pSVar5,::StringLiteral__,
                         (MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar41,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar47 = Extensions::Extensions_ToVector3FromSerializeString
                        ((Vector3 *)auStack_17,pSVar5,(MethodInfo *)0x0);
    auStack_1 = *(undefined1 (*) [8])pVVar47;
    uStack_2 = (Object *)CONCAT44(uStack_2._4_4_,pVVar47->z);
    pSVar5 = (String *)FUN_?(auStack_1,0,0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_Vector3FromSerialize_result___,pSVar5,::StringLiteral__,
                         (MethodInfo *)0x0);
    goto code_?;
  }
  if ((chatMsg == StringLiteral__no) ||
     (((StringLiteral__no != (String *)0x0 &&
       ((chatMsg->fields)._stringLength == (StringLiteral__no->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__no->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    ChatCommandManager::ChatCommandManager_ChatCommandActivated
              (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
    return 0;
  }
  if ((chatMsg == StringLiteral__yes) ||
     (((StringLiteral__yes != (String *)0x0 &&
       ((chatMsg->fields)._stringLength == (StringLiteral__yes->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__yes->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    ChatCommandManager::ChatCommandManager_ChatCommandActivated
              (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
    return 0;
  }
  if ((chatMsg == StringLiteral__wave) ||
     (((StringLiteral__wave != (String *)0x0 &&
       ((chatMsg->fields)._stringLength == (StringLiteral__wave->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__wave->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    ChatCommandManager::ChatCommandManager_ChatCommandActivated
              (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
    return 0;
  }
  if ((chatMsg == StringLiteral__ad) ||
     (((StringLiteral__ad != (String *)0x0 &&
       ((chatMsg->fields)._stringLength == (StringLiteral__ad->fields)._stringLength)) &&
      (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(chatMsg->fields)._firstChar,
                           (uint8_t *)&(StringLiteral__ad->fields)._firstChar,
                           (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar4 != 0)))) {
    pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar48 == (IAdManager *)0x0) goto code_?;
    cVar49 = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar48);
    if (cVar49 == '\0') {
      return 0;
    }
  }
  else {
    if ((chatMsg == StringLiteral__url) ||
       (((StringLiteral__url != (String *)0x0 &&
         ((chatMsg->fields)._stringLength == (StringLiteral__url->fields)._stringLength)) &&
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(chatMsg->fields)._firstChar,
                             (uint8_t *)&(StringLiteral__url->fields)._firstChar,
                             (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 != 0)))) {
      lVar13 = FUN_?();
      if (lVar13 != 0) {
        VStackX_10.x._0_1_ = 1;
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString
                            ((Boolean *)&VStackX_10,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Testing__Redirect_allowed__,pSVar5,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        return 0;
      }
      goto code_?;
    }
    if ((chatMsg != StringLiteral__iad) &&
       (((StringLiteral__iad == (String *)0x0 ||
         ((chatMsg->fields)._stringLength != (StringLiteral__iad->fields)._stringLength)) ||
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(chatMsg->fields)._firstChar,
                             (uint8_t *)&(StringLiteral__iad->fields)._firstChar,
                             (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 == 0)))) {
      if ((chatMsg == StringLiteral__rad) ||
         (((StringLiteral__rad != (String *)0x0 &&
           ((chatMsg->fields)._stringLength == (StringLiteral__rad->fields)._stringLength)) &&
          (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(chatMsg->fields)._firstChar,
                               (uint8_t *)&(StringLiteral__rad->fields)._firstChar,
                               (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar4 != 0)))) {
        pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pUVar50 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar50,(Object *)this,
                   MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar48 != (IAdManager *)0x0) {
          FUN_?();
          return 0;
        }
      }
      else {
        if ((chatMsg == StringLiteral__adtest) ||
           (((StringLiteral__adtest != (String *)0x0 &&
             ((chatMsg->fields)._stringLength == (StringLiteral__adtest->fields)._stringLength)) &&
            (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(chatMsg->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral__adtest->fields)._firstChar,
                                 (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar4 != 0)))) {
          pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          lVar13 = func_?(pIVar48);
          if (lVar13 == 0) {
            return 0;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Creating_an_ad_manager_that_shou);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
                    (StringLiteral_Creating_an_ad_manager_that_shou,(MethodInfo *)0x0);
          uVar15 = FUN_?(TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
          *(undefined8 *)(lVar13 + 0x28) = uVar15;
          func_?(lVar13 + 0x28);
          *(undefined1 *)(lVar13 + 0x38) = 1;
          return 0;
        }
        if ((chatMsg != StringLiteral__admanager) &&
           (((StringLiteral__admanager == (String *)0x0 ||
             ((chatMsg->fields)._stringLength != (StringLiteral__admanager->fields)._stringLength))
            || (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)&(chatMsg->fields)._firstChar,
                                    (uint8_t *)&(StringLiteral__admanager->fields)._firstChar,
                                    (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0)
               , bVar4 == 0)))) {
          if ((chatMsg == StringLiteral__gdforce) ||
             (((StringLiteral__gdforce != (String *)0x0 &&
               ((chatMsg->fields)._stringLength == (StringLiteral__gdforce->fields)._stringLength))
              && (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)&(chatMsg->fields)._firstChar,
                                      (uint8_t *)&(StringLiteral__gdforce->fields)._firstChar,
                                      (longlong)(chatMsg->fields)._stringLength * 2,
                                      (MethodInfo *)0x0), bVar4 != 0)))) {
            auStack_17 = (undefined1  [8])0x0;
            uStack_18 = (List_1_T_Enumerator_System_Object_ *)0x0;
            uStack_19 = (Object *)0x0;
            pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            pWVar51 = (WebAdManager *)
                      func_?(pIVar48,
                                          TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager
                                         );
            if (pWVar51 == (WebAdManager *)0x0) {
              return 0;
            }
            auStack_1 = auStack_17;
            uStack_2._0_5_ = CONCAT14(uStack_18._4_1_,1);
            uStack_2._0_6_ = CONCAT15(uStack_18._5_1_,(undefined5)uStack_2);
            uStack_2._0_7_ = CONCAT16(uStack_18._6_1_,(undefined6)uStack_2);
            uStack_2 = (Object *)CONCAT17(uStack_18._7_1_,(undefined7)uStack_2);
            uStack_21._0_2_ = CONCAT11(uStack_19._1_1_,1);
            uStack_21._0_3_ = CONCAT12(uStack_19._2_1_,(undefined2)uStack_21);
            uStack_21._0_7_ = CONCAT43(uStack_19._3_4_,(undefined3)uStack_21);
            uStack_21 = (Object *)CONCAT17(uStack_19._7_1_,(undefined7)uStack_21);
            uStack_18 = (List_1_T_Enumerator_System_Object_ *)uStack_2;
            uStack_19 = uStack_21;
            Assets::Scripts::AdIntegration::Web::WebAdManager::
            WebAdManager_ForceCreateEmbeddedSiteSDK
                      (pWVar51,(EmbeddedSiteConfigData *)auStack_17,(MethodInfo *)0x0);
            return 0;
          }
          if ((chatMsg == StringLiteral__embedforce) ||
             (((StringLiteral__embedforce != (String *)0x0 &&
               ((chatMsg->fields)._stringLength == (StringLiteral__embedforce->fields)._stringLength
               )) && (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                         ((uint8_t *)&(chatMsg->fields)._firstChar,
                                          (uint8_t *)&(StringLiteral__embedforce->fields)._firstChar
                                          ,(longlong)(chatMsg->fields)._stringLength * 2,
                                          (MethodInfo *)0x0), bVar4 != 0)))) {
            auStack_17 = (undefined1  [8])0x0;
            uStack_18 = (List_1_T_Enumerator_System_Object_ *)0x0;
            uStack_19 = (Object *)0x0;
            pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            pWVar51 = (WebAdManager *)
                      func_?(pIVar48,
                                          TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager
                                         );
            if (pWVar51 == (WebAdManager *)0x0) {
              return 0;
            }
            auStack_1 = auStack_17;
            uStack_2 = (Object *)0x101010100000005;
            uStack_21._0_7_ = CONCAT43(uStack_19._3_4_,0x10100);
            uStack_21 = (Object *)CONCAT17(uStack_19._7_1_,(undefined7)uStack_21);
            uStack_18 = (List_1_T_Enumerator_System_Object_ *)0x101010100000005;
            uStack_19 = uStack_21;
            Assets::Scripts::AdIntegration::Web::WebAdManager::
            WebAdManager_ForceCreateEmbeddedSiteSDK
                      (pWVar51,(EmbeddedSiteConfigData *)auStack_17,(MethodInfo *)0x0);
            return 0;
          }
          if ((chatMsg != StringLiteral__pokiforce) &&
             (((StringLiteral__pokiforce == (String *)0x0 ||
               ((chatMsg->fields)._stringLength != (StringLiteral__pokiforce->fields)._stringLength)
               ) || (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                        ((uint8_t *)&(chatMsg->fields)._firstChar,
                                         (uint8_t *)&(StringLiteral__pokiforce->fields)._firstChar,
                                         (longlong)(chatMsg->fields)._stringLength * 2,
                                         (MethodInfo *)0x0), bVar4 == 0)))) {
            if ((chatMsg != StringLiteral__export) &&
               (((StringLiteral__export == (String *)0x0 ||
                 ((chatMsg->fields)._stringLength != (StringLiteral__export->fields)._stringLength))
                || (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                       ((uint8_t *)&(chatMsg->fields)._firstChar,
                                        (uint8_t *)&(StringLiteral__export->fields)._firstChar,
                                        (longlong)(chatMsg->fields)._stringLength * 2,
                                        (MethodInfo *)0x0), bVar4 == 0)))) {
              if ((chatMsg != StringLiteral__exportself) &&
                 (((StringLiteral__exportself == (String *)0x0 ||
                   ((chatMsg->fields)._stringLength !=
                    (StringLiteral__exportself->fields)._stringLength)) ||
                  (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                      ((uint8_t *)&(chatMsg->fields)._firstChar,
                                       (uint8_t *)&(StringLiteral__exportself->fields)._firstChar,
                                       (longlong)(chatMsg->fields)._stringLength * 2,
                                       (MethodInfo *)0x0), bVar4 == 0)))) {
                uVar52 = mscorlib.dll::System::String::String_get_Chars(chatMsg,0,(MethodInfo *)0x0)
                ;
                if (uVar52 != 0x2f) {
                  return 1;
                }
                TextCommand::TextCommand_Resolve(chatMsg,(MethodInfo *)0x0);
                return 0;
              }
              if (*(int *)&(TypeInfo__ObjExportHandler->_1).field_0x1c == 0) {
                FUN_?();
              }
              ObjExportHandler::ObjExportHandler_ExportSelfAvatar((MethodInfo *)0x0);
              return 0;
            }
            if (*(int *)&(TypeInfo__ObjExportHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            ObjExportHandler::ObjExportHandler_InitializePicking((MethodInfo *)0x0);
            return 0;
          }
          auStack_17 = (undefined1  [8])0x0;
          uStack_18 = (List_1_T_Enumerator_System_Object_ *)0x0;
          uStack_19 = (Object *)0x0;
          pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          pWVar51 = (WebAdManager *)
                    func_?(pIVar48,
                                        TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager)
          ;
          if (pWVar51 == (WebAdManager *)0x0) {
            return 0;
          }
          auStack_1 = auStack_17;
          uStack_2._0_5_ = CONCAT14(uStack_18._4_1_,2);
          uStack_2._0_6_ = CONCAT15(uStack_18._5_1_,(undefined5)uStack_2);
          uStack_2._0_7_ = CONCAT16(uStack_18._6_1_,(undefined6)uStack_2);
          uStack_2 = (Object *)CONCAT17(uStack_18._7_1_,(undefined7)uStack_2);
          uStack_21._0_2_ = CONCAT11(uStack_19._1_1_,1);
          uStack_21._0_3_ = CONCAT12(uStack_19._2_1_,(undefined2)uStack_21);
          uStack_21._0_7_ = CONCAT43(uStack_19._3_4_,(undefined3)uStack_21);
          uStack_21 = (Object *)CONCAT17(uStack_19._7_1_,(undefined7)uStack_21);
          uStack_18 = (List_1_T_Enumerator_System_Object_ *)uStack_2;
          uStack_19 = uStack_21;
          Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_ForceCreateEmbeddedSiteSDK
                    (pWVar51,(EmbeddedSiteConfigData *)auStack_17,(MethodInfo *)0x0);
          return 0;
        }
        pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar48 != (IAdManager *)0x0) {
          lVar13 = FUN_?(&(pIVar48->klass->_0).byval_arg);
          pSVar5 = StringLiteral_AdManager___;
          if (lVar13 == 0) {
            pSVar41 = (String *)0x0;
          }
          else {
            pSVar41 = (String *)func_?(3,lVar13);
          }
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                              (pSVar5,pSVar41,::StringLiteral__,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          lVar13 = func_?(pIVar48,
                                       TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager);
          if (lVar13 == 0) {
            pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            this_00 = (AdSDKManager *)
                      func_?(pIVar48,
                                          TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager
                                         );
            if (this_00 == (AdSDKManager *)0x0) {
              return 0;
            }
            VStackX_10.x._0_1_ = (this_00->fields).wasInitializedSuccessfully;
            pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
            pSVar5 = mscorlib.dll::System::String::String_Format
                                (StringLiteral_WasInitializedSuccessfully____0_,pOVar23,
                                 (MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
            arg0 = Assets::Scripts::AdIntegration::Web::AdSDKManager::AdSDKManager_get_AdSDKType
                             (this_00,(MethodInfo *)0x0);
            pSVar5 = mscorlib.dll::System::String::String_Format
                                (StringLiteral_AdSDK____0__,(Object *)arg0,(MethodInfo *)0x0);
            goto code_?;
          }
          VStackX_10.x._0_1_ = *(undefined1 *)(lVar13 + 0x38);
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_EmbeddedSiteSDKAvailable____0__,pOVar23,
                               (MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          auVar53 = *(undefined1 (*) [16])(lVar13 + 0x40);
          uStack_19 = *(Object **)(lVar13 + 0x50);
          VStackX_10.x = (float)*(undefined8 *)(lVar13 + 0x48);
          pOVar23 = (Object *)FUN_?(TypeInfo__EmbeddedSite,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_SiteEnum____0__,pOVar23,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = auVar53[0xc];
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_showTouristPromotion____0__,pOVar23,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = auVar53[0xd];
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_allowsOpenInNewTab____0__,pOVar23,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = auVar53[0xe];
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_allowsRedirectToWebpage____0__,pOVar23,
                               (MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = auVar53[0xf];
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_allowsModals____0__,pOVar23,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)uStack_19;
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_integratedSdk____0__,pOVar23,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          pOVar23 = uStack_19;
          VStackX_10.x._0_1_ = (bool)((ulonglong)uStack_19 >> 8);
          pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_allowsFallbackAds____0__,pOVar25,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)((ulonglong)pOVar23 >> 0x10);
          pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_showPlayButtonAd____0__,pOVar25,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)((ulonglong)pOVar23 >> 0x18);
          pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_hideGoldShop____0__,pOVar25,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)((ulonglong)pOVar23 >> 0x20);
          pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_allowInHouseAds____0__,pOVar25,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)((ulonglong)pOVar23 >> 0x28);
          pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_removeFullscreenButton____0__,pOVar25,(MethodInfo *)0x0
                              );
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)((ulonglong)pOVar23 >> 0x30);
          pOVar25 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_hideSignUp____0__,pOVar25,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          VStackX_10.x._0_1_ = (bool)((ulonglong)pOVar23 >> 0x38);
          pOVar23 = (Object *)FUN_?(lRam_?,&VStackX_10);
          pSVar5 = mscorlib.dll::System::String::String_Format
                              (StringLiteral_noPlayButtonVideoIcon____0__,pOVar23,(MethodInfo *)0x0)
          ;
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
          if (auVar53._0_8_ != 0) {
            puVar54 = (undefined8 *)FUN_?(auStack_17);
            aLStack_3[0]._list = (List_1_System_Object_ *)*puVar54;
            aLStack_3[0]._8_8_ = puVar54[1];
            aLStack_3[0]._current = (Object *)puVar54[2];
            auStack_17 = (undefined1  [8])0x0;
            uStack_18 = aLStack_3;
            while (bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      (aLStack_3,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                      ), bVar4 != 0) {
              pSVar5 = mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_Site__,(String *)aLStack_3[0]._current,
                                   ::StringLiteral__,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                        (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
            }
            return 0;
          }
        }
      }
      goto code_?;
    }
  }
  pIVar48 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  pUVar50 = (UnityAction_1_System_Int32Enum_ *)
            FUN_?(
                         TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (pUVar50,(Object *)this,
             MethodInfo__SendMessageControl__OnAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
             ,(MethodInfo *)0x0);
  if (pIVar48 != (IAdManager *)0x0) {
    FUN_?();
    return 0;
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar4 = (*pcVar16)();
  return bVar4;
}


/* Boolean HandleChatSwapCommand(String) */

bool Assembly-CSharp.dll::SendMessageControl::SendMessageControl_HandleChatSwapCommand
               (SendMessageControl *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__all);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__team);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__say);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__all;
  if (message == (String *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CompareInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (message == pSVar1) {
code_?:
    newChat = MVGameMsgType__Enum_Chat;
  }
  else {
    if ((pSVar1 != (String *)0x0) &&
       (iVar2 = (pSVar1->fields)._stringLength, (message->fields)._stringLength == iVar2)) {
      iVar3 = (message->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar3 = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_CompareOrdinalIgnoreCase
                        (message,0,iVar3,pSVar1,0,iVar2,(MethodInfo *)0x0);
      if (iVar3 == 0) goto code_?;
    }
    pSVar1 = StringLiteral__team;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Globalization__CompareInfo);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Globalization__CultureInfo);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (message == pSVar1) {
code_?:
      newChat = MVGameMsgType__Enum_TeamChat;
    }
    else {
      if ((pSVar1 != (String *)0x0) &&
         (iVar2 = (pSVar1->fields)._stringLength, (message->fields)._stringLength == iVar2)) {
        iVar3 = (message->fields)._stringLength;
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar3 = mscorlib.dll::System::Globalization::CompareInfo::
                CompareInfo_CompareOrdinalIgnoreCase
                          (message,0,iVar3,pSVar1,0,iVar2,(MethodInfo *)0x0);
        if (iVar3 == 0) goto code_?;
      }
      pSVar1 = StringLiteral__say;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Globalization__CompareInfo);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Globalization__CultureInfo);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (message != pSVar1) {
        if ((pSVar1 == (String *)0x0) ||
           (iVar2 = (pSVar1->fields)._stringLength, (message->fields)._stringLength != iVar2)) {
          return 0;
        }
        iVar3 = (message->fields)._stringLength;
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar3 = mscorlib.dll::System::Globalization::CompareInfo::
                CompareInfo_CompareOrdinalIgnoreCase
                          (message,0,iVar3,pSVar1,0,iVar2,(MethodInfo *)0x0);
        if (iVar3 != 0) {
          return 0;
        }
      }
      newChat = MVGameMsgType__Enum_SayChat;
    }
  }
  SendMessageControl_SwapChat(this,newChat,(MethodInfo *)0x0);
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (this_00,::StringLiteral__,1,(MethodInfo *)0x0);
    return 1;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void InitializeToSayChat(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_InitializeToSayChat
               (SendMessageControl *this,bool sayChatVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral___Say__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((this->fields).selectedChat != 9) {
    bVar1 = sayChatVisible;
  }
  if (bVar1 != 0) {
    SendMessageControl_SetSayChatBubbleVisible(this,1,(MethodInfo *)0x0);
  }
  pTVar2 = (this->fields).currentChat;
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,StringLiteral___Say__,(pTVar2->klass->vtable).set_text.method);
    pTVar2 = (this->fields).currentChat;
    if (pTVar2 != (Text *)0x0) {
      fStack_3 = (this->fields).sayChatColor.r;
      fStack_4 = (this->fields).sayChatColor.g;
      fStack_5 = (this->fields).sayChatColor.b;
      fStack_6 = (this->fields).sayChatColor.a;
      (*(pTVar2->klass->vtable).set_color.methodPtr)
                (pTVar2,&fStack_3,(pTVar2->klass->vtable).set_color.method);
      (this->fields).selectedChat = 9;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator OOMTest() */

IEnumerator *
Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OOMTest
          (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SendMessageControl___OOMTest_d__59);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__SendMessageControl___OOMTest_d__59);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void OnAdShownCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnAdShownCallback
               (SendMessageControl *this,InterstitialAdResult__Enum interstitialResult,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebGL_Ad_shown__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSStack_2 = (String *)CONCAT44(pSStack_2._4_4_,interstitialResult);
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_WebGL_Ad_shown__,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    pSStack_2 = pSVar3;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAdShownCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnAdShownCallback_1
               (SendMessageControl *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebGL_Ad_shown__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSStack_2 = (String *)CONCAT44(pSStack_2._4_4_,result);
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_WebGL_Ad_shown__,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    pSStack_2 = pSVar3;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnDestroy
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
      pMVar5 = (pMVar4->fields).OnTeamsUpdated;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)this,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
                 (MethodInfo *)0x0);
      pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pMVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
      pMVar5 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar4->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      }
      else {
        pMVar8 = pMVar5;
        if (pMVar7->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar8 = pMVar7;
        }
        if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (pMVar4->fields).OnTeamsUpdated = pMVar8;
        pMVar8 = pMVar5;
        if (pMVar7->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar8 = pMVar7;
        }
        if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(pMVar4->fields).OnTeamsUpdated >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar15 = (pMVar3->fields).playerContainer, pMVar15 != (MVPlayerContainer *)0x0)) {
        source = (pMVar15->fields).OnPlayerListChanged;
        pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar6,(Object *)this,MethodInfo__SendMessageControl__ChangeTeamChatColor__,
                   (MethodInfo *)0x0);
        pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)pNVar6,(MethodInfo *)0x0);
        if (pMVar7 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          (pMVar15->fields).OnPlayerListChanged = (Action *)0x0;
        }
        else {
          pMVar8 = pMVar5;
          if (pMVar7->klass ==
              (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
            pMVar8 = pMVar7;
          }
          if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
            FUN_?(pMVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (pMVar15->fields).OnPlayerListChanged = (Action *)pMVar8;
          if (pMVar7->klass ==
              (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action) {
            pMVar5 = pMVar7;
          }
          if (pMVar5 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
            FUN_?(pMVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? == 0) {
          return;
        }
        uVar10 = (uint)((ulonglong)&(pMVar15->fields).OnPlayerListChanged >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnInputFieldChange() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_OnInputFieldChange
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  pSVar2 = (pIVar1->fields).m_Text;
  if (pSVar2 == ::StringLiteral__) {
code_?:
    if (pSVar2 == (String *)0x0) goto code_?;
  }
  else {
    if (pSVar2 == (String *)0x0) goto code_?;
    if ((::StringLiteral__ == (String *)0x0) ||
       ((pSVar2->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) {
code_?:
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                          (pSVar2,(pSVar2->fields)._stringLength + -1,1,(MethodInfo *)0x0);
      if ((pSVar3 == ::StringLiteral__) ||
         ((((pSVar3 != (String *)0x0 && (::StringLiteral__ != (String *)0x0)) &&
           ((pSVar3->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
          (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar3->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                              (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar4 != 0)))) {
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar2,0,(pSVar2->fields)._stringLength + -1,(MethodInfo *)0x0);
        bVar4 = SendMessageControl_HandleChatSwapCommand(this,pSVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return;
        }
        goto code_?;
      }
    }
    else {
      bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar2->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                         (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        if (pSVar2 == (String *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  pSVar3 = StringLiteral_u000A;
  iVar5 = (pSVar2->fields)._stringLength;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CompareInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar3 == (String *)0x0) {
    uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar7 = (ArgumentNullException *)func_?(uVar6);
    pSVar2 = (String *)func_?(&StringLiteral_value);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar7,pSVar2,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                );
    FUN_?(pAVar7,uVar6);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((pSVar2->fields)._stringLength < 0) {
    uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar9 = (ArgumentOutOfRangeException *)func_?(uVar6);
    pSVar2 = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    pSVar3 = (String *)func_?(&StringLiteral_startIndex);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar9,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                );
    FUN_?(pAVar9,uVar6);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar5 < 0) || ((pSVar2->fields)._stringLength - iVar5 < 0)) {
    uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar9 = (ArgumentOutOfRangeException *)func_?(uVar6);
    pSVar2 = (String *)func_?(&StringLiteral_Count_must_be_positive_and_count);
    pSVar3 = (String *)func_?(&StringLiteral_count);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar9,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                );
    FUN_?(pAVar9,uVar6);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__Globalization__CompareInfo);
  }
  pCVar10 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
  if (pCVar10 == (CompareInfo *)0x0) goto code_?;
  iVar11 = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_IndexOfOrdinal
                    (pCVar10,pSVar2,pSVar3,0,iVar5,0,(MethodInfo *)0x0);
  pSVar3 = StringLiteral_u0009;
  if (-1 < iVar11) {
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    iVar11 = (*pcRam_?)();
    (this->fields).frameCountSent = iVar11;
    SendMessageControl_Send(this,(MethodInfo *)0x0);
    return;
  }
  iVar5 = (pSVar2->fields)._stringLength;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CompareInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar3 == (String *)0x0) {
    uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar7 = (ArgumentNullException *)func_?(uVar6);
    pSVar2 = (String *)func_?(&StringLiteral_value);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar7,pSVar2,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                );
    FUN_?(pAVar7,uVar6);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((pSVar2->fields)._stringLength < 0) {
    uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar9 = (ArgumentOutOfRangeException *)func_?(uVar6);
    pSVar2 = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    pSVar3 = (String *)func_?(&StringLiteral_startIndex);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar9,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                );
    FUN_?(pAVar9,uVar6);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar5 < 0) || ((pSVar2->fields)._stringLength - iVar5 < 0)) {
    uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar9 = (ArgumentOutOfRangeException *)func_?(uVar6);
    pSVar2 = (String *)func_?(&StringLiteral_Count_must_be_positive_and_count);
    pSVar3 = (String *)func_?(&StringLiteral_count);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar9,pSVar3,pSVar2,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                );
    FUN_?(pAVar9,uVar6);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__Globalization__CompareInfo);
  }
  pCVar10 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
  if (pCVar10 == (CompareInfo *)0x0) goto code_?;
  iVar11 = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_IndexOfOrdinal
                    (pCVar10,pSVar2,pSVar3,0,iVar5,0,(MethodInfo *)0x0);
  if (-1 < iVar11) {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1
                        (pSVar2,0,(pSVar2->fields)._stringLength + -1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar1,pSVar2,1,(MethodInfo *)0x0);
      newChat = (this->fields).selectedChat + MVGameMsgType__Enum_UserJoined;
      if (9 < (int)newChat) {
        SendMessageControl_SwapChat(this,MVGameMsgType__Enum_Chat,(MethodInfo *)0x0);
        return;
      }
      if (newChat != MVGameMsgType__Enum_TeamChat) {
code_?:
        SendMessageControl_SwapChat(this,newChat,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar12 != (MVGameControllerBase *)0x0) &&
          (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
         (pMVar14 = (pMVar13->fields).teamManager, pMVar14 != (MVTeamManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar15 = (pMVar14->fields).teams;
        if (pDVar15 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
          if ((pDVar15->fields)._count - (pDVar15->fields)._freeCount < 2) {
            newChat = MVGameMsgType__Enum_SayChat;
          }
          goto code_?;
        }
      }
    }
    goto code_?;
  }
  pIVar1 = (this->fields).inputField;
  if ((pIVar1 == (InputField *)0x0) || (pSVar2 = (pIVar1->fields).m_Text, pSVar2 == (String *)0x0)
     ) goto code_?;
  iVar5 = (((this->fields).inputField)->fields).m_CharacterLimit;
  if (iVar5 <= (pSVar2->fields)._stringLength) {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1
                        (pSVar2,0,iVar5 + -1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    if (pIVar1 == (InputField *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (pIVar1,pSVar2,1,(MethodInfo *)0x0);
  }
  if ((this->fields).selectedChat == 9) {
    if ((this->fields).isSayChatIconVisible == 0) {
      bVar4 = 1;
      goto code_?;
    }
    if ((this->fields).selectedChat != 9) goto code_?;
  }
  else {
code_?:
    if ((this->fields).isSayChatIconVisible != 0) {
      bVar4 = 0;
code_?:
      SendMessageControl_SetSayChatBubbleVisible(this,bVar4,(MethodInfo *)0x0);
    }
  }
  iVar5 = (this->fields).frameCountSent;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  iVar16 = (*pcRam_?)();
  if (iVar5 == iVar16) {
    pIVar1 = (this->fields).inputField;
    if (pIVar1 == (InputField *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (pIVar1,::StringLiteral__,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void SanitizeMessage(String ByRef, String) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SanitizeMessage
               (String **message,String *tagToSanitize,MethodInfo *method)

{
  bVar1 = false;
  if ((*message != (String *)0x0) &&
     (pSVar2 = mscorlib.dll::System::String::String_ToLower(*message,(MethodInfo *)0x0),
     pSVar2 != (String *)0x0)) {
    value = mscorlib.dll::System::String::String_ToCharArray(pSVar2,(MethodInfo *)0x0);
    startIndex = 0;
    uVar3 = 0;
    if (value != (Char__Array *)0x0) {
      lVar4 = 0;
      lVar5 = 0;
      lVar6 = 0;
      do {
        if ((int)value->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)value->max_length <= uVar3) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (bVar1) {
          if ((*(short *)((longlong)value->vector + lVar6) == 0x3e) ||
             (uVar3 == (int)value->max_length - 1U)) {
            iVar8 = uVar3 + 1;
            bVar1 = false;
            pSVar2 = mscorlib.dll::System::String::String_Ctor_1
                               (value,startIndex,iVar8 - startIndex,(MethodInfo *)0x0);
            if (pSVar2 == (String *)0x0) break;
            bVar9 = mscorlib.dll::System::String::String_Contains
                              (pSVar2,tagToSanitize,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              if (*message == (String *)0x0) break;
              pSVar2 = mscorlib.dll::System::String::String_Remove
                                 (*message,startIndex,iVar8 - startIndex,(MethodInfo *)0x0);
              *message = pSVar2;
              func_?(message);
              if ((*message == (String *)0x0) ||
                 (pSVar2 = mscorlib.dll::System::String::String_ToLower(*message,(MethodInfo *)0x0),
                 pSVar2 == (String *)0x0)) break;
              value = mscorlib.dll::System::String::String_ToCharArray(pSVar2,(MethodInfo *)0x0);
              lVar4 = lVar5 + -1;
              lVar6 = lVar5 * 2 + -2;
              uVar3 = uVar3 + (startIndex - iVar8);
            }
          }
        }
        else if (*(short *)((longlong)value->vector + lVar6) == 0x3c) {
          bVar1 = true;
          lVar5 = lVar4;
          startIndex = uVar3;
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 2;
      } while (value != (Char__Array *)0x0);
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Send() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_Send
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__Remove_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_quad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_size);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__r_n___n);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_width);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).sendMessageCooldownTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 < fVar1) {
    SendMessageControl_EnforceCharacterLimit(this,(MethodInfo *)0x0);
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar1 = (float)(*pcRam_?)();
  pIVar5 = (this->fields).inputField;
  (this->fields).sendMessageCooldownTime = fVar1 + _UNK_?;
  if (pIVar5 != (InputField *)0x0) {
    pSVar6 = (pIVar5->fields).m_Text;
    pSStackX_8 = pSVar6;
    if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSStackX_8 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                           (pSVar6,StringLiteral__r_n___n,::StringLiteral__,(MethodInfo *)0x0);
    SendMessageControl_SanitizeMessage(&pSStackX_8,StringLiteral_size,(MethodInfo *)0x0);
    SendMessageControl_SanitizeMessage(&pSStackX_8,StringLiteral_width,(MethodInfo *)0x0);
    SendMessageControl_SanitizeMessage(&pSStackX_8,StringLiteral_quad,(MethodInfo *)0x0);
    pIVar5 = (this->fields).inputField;
    if (pIVar5 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar5,::StringLiteral__,1,(MethodInfo *)0x0);
      this_00 = (this->fields).whiteSpaceCheck;
      if (this_00 != (Regex *)0x0) {
        if (pSStackX_8 == (String *)0x0) {
          uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
          this_01 = (ArgumentNullException *)func_?(uVar3);
          pSVar6 = (String *)func_?(&StringLiteral_input);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_01,pSVar6,(MethodInfo *)0x0);
          uVar3 = func_?(&
                                       MethodInfo__System__Text__RegularExpressions__Regex__Match_System__String_
                                      );
          FUN_?(this_01,uVar3);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = 0;
        startat = 0;
        if (((this_00->fields).roptions & 0x40) != 0) {
          startat = (pSStackX_8->fields)._stringLength;
        }
        pMVar8 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                           (this_00,0,-1,pSStackX_8,0,(pSStackX_8->fields)._stringLength,startat,
                            (MethodInfo *)0x0);
        if (pMVar8 != (Match *)0x0) {
          if ((pMVar8->fields)._._._Length_k__BackingField < 1) {
            pUVar9 = (this->fields).DoSend;
            if (pUVar9 != (UnityAction_1_System_Boolean_ *)0x0) {
              (*(pUVar9->fields)._._.invoke_impl)
                        ((pUVar9->fields)._._.method_code,0,(pUVar9->fields)._._.method);
            }
            return;
          }
          pLVar10 = (this->fields).spamList;
          if (pLVar10 != (List_1_System_Single_ *)0x0) {
            lVar11 = 0x20;
            do {
              if ((pLVar10->fields)._size <= (int)uVar7) {
                pLVar10 = (this->fields).spamList;
                if (pLVar10 != (List_1_System_Single_ *)0x0) {
                  if ((this->fields).maxMessagesPerInterval < (pLVar10->fields)._size) {
                    pUVar12 = (this->fields).SpamWarning;
                    if (pUVar12 == (UnityAction *)0x0) {
                      return;
                    }
                    (*(pUVar12->fields)._._.invoke_impl)
                              ((pUVar12->fields)._._.method_code,(pUVar12->fields)._._.method);
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  fVar1 = (float)(*pcRam_?)();
                  pMVar13 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
                  piVar14 = &(pLVar10->fields)._version;
                  *piVar14 = *piVar14 + 1;
                  pSVar15 = (pLVar10->fields)._items;
                  if (pSVar15 != (Single__Array *)0x0) {
                    uVar7 = (pLVar10->fields)._size;
                    if (uVar7 < (uint)pSVar15->max_length) {
                      (pLVar10->fields)._size = uVar7 + 1;
                      if ((uint)pSVar15->max_length <= uVar7) goto code_?;
                      pSVar15->vector[(int)uVar7] = fVar1;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
                      List_1_System_Single__AddWithResize
                                (pLVar10,fVar1,pMVar13->klass->rgctx_data[0xe].method);
                    }
                    SendMessageControl_SendChatMessage(this,pSStackX_8,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
                uVar3 = func_?(&UNK_?);
                FUN_?(uVar3,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar1 = (float)(*pcRam_?)();
              pLVar10 = (this->fields).spamList;
              if (pLVar10 == (List_1_System_Single_ *)0x0) break;
              if ((uint)(pLVar10->fields)._size <= uVar7) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pSVar15 = (pLVar10->fields)._items;
              if (pSVar15 == (Single__Array *)0x0) break;
              if ((uint)pSVar15->max_length <= uVar7) {
code_?:
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              fVar1 = fVar1 - *(float *)((longlong)pSVar15->vector + lVar11 + -0x20);
              pfVar16 = &(this->fields).intervalForMessages;
              if (*pfVar16 <= fVar1 && fVar1 != *pfVar16) {
                pLVar10 = (this->fields).spamList;
                uVar17 = FUN_?(pLVar10);
                FUN_?(pLVar10,uVar17,
                              MethodInfo__System__Collections__Generic__List<float>__Remove_float_);
              }
              pLVar10 = (this->fields).spamList;
              uVar7 = uVar7 + 1;
              lVar11 = lVar11 + 4;
            } while (pLVar10 != (List_1_System_Single_ *)0x0);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SendChatMessage(String) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SendChatMessage
               (SendMessageControl *this,String *chatMsg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (chatMsg != ::StringLiteral__) {
    if (chatMsg == (String *)0x0) goto DAT_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       ((chatMsg->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
      in_R9 = 0;
      bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(chatMsg->fields)._firstChar,
                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                         (longlong)(chatMsg->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      if (chatMsg == (String *)0x0) goto DAT_?;
    }
    iVar2 = (chatMsg->fields)._stringLength;
    if (0x100 < iVar2) {
      if (iVar2 + -0x100 < 0) {
        uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this_03 = (ArgumentOutOfRangeException *)func_?(uVar3);
        message = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
        paramName = (String *)func_?(&StringLiteral_length);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (this_03,paramName,message,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__System__String__Substring_int__int_);
        FUN_?(this_03,uVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      in_R9 = 0;
      chatMsg = mscorlib.dll::System::String::String_InternalSubString
                          (chatMsg,0,0x100,(MethodInfo *)0x0);
    }
    bVar1 = SendMessageControl_HandleChatSwapCommand(this,chatMsg,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    bVar1 = SendMessageControl_HandleChatCommands(this,chatMsg,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).selectedChat == 9) {
        SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      uVar6 = uStackX_10;
      lVar7 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
        }
        else {
          pOVar8 = (Object *)0x0;
        }
      }
      else {
        pOVar8 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
      }
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar12 == (MVNetworkGame *)0x0) ||
          (this_00 = (pMVar12->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar13 == (MVLocalPlayer *)0x0)) {
DAT_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStackX_10 = (pMVar13->fields)._._ActorNr_k__BackingField;
      value = (Object *)FUN_?(uRam_?,&uStackX_10);
      if (this_01 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto DAT_?;
      uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar8,value,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT31(uStackX_10._1_3_,5);
      pOVar8 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar8,(Object *)chatMsg,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar6 = (this->fields).selectedChat;
      if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      uStackX_10 = uVar6;
      pOVar8 = (Object *)FUN_?(uRam_?,&uStackX_10);
      if (this_02 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto DAT_?;
      uVar14 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar15 = (undefined7)((ulonglong)method_00 >> 8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_02,0x5a,pOVar8,(InsertionBehavior__Enum)uVar14,method_00);
      uVar3 = CONCAT71(uVar15,0x5b);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_02,0x5b,(Object *)this_01,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar14 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pPVar16 = (pMVar5->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar16 == (PhotonPeer *)0x0) goto DAT_?;
      (*(pPVar16->klass->vtable).SendOperation.methodPtr)
                (pPVar16,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x58),this_02,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar16->klass->vtable).SendOperation.method);
    }
    pUVar17 = (this->fields).DoSend;
    if (pUVar17 != (UnityAction_1_System_Boolean_ *)0x0) {
      (*(pUVar17->fields)._._.invoke_impl)
                ((pUVar17->fields)._._.method_code,0,(pUVar17->fields)._._.method);
    }
  }
  return;
}


/* Void SetSayChatBubbleVisible(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetSayChatBubbleVisible
               (SendMessageControl *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).profileID < 1) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_V);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      abStackX_20[0] = visible;
      value = (Object *)FUN_?(uRam_?,abStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_V,
                   value,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0xf5,(Object *)this_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),method_00);
          pPVar5 = (pMVar2->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar5 != (PhotonPeer *)0x0) {
            (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                      (pPVar5,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x5d),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar5->klass->vtable).SendOperation.method);
            (this->fields).isSayChatIconVisible = visible;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetSayChatBubbleVisibleIfActive(Boolean) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
               (SendMessageControl *this,bool visible,MethodInfo *method)

{
  if ((this->fields).selectedChat != 9) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT71(in_register_00000011,visible),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).profileID < 1) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_V);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      abStackX_20[0] = visible;
      value = (Object *)FUN_?(uRam_?,abStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_V,
                   value,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0xf5,(Object *)this_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),method_00);
          pPVar5 = (pMVar2->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar5 != (PhotonPeer *)0x0) {
            (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                      (pPVar5,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x5d),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar5->klass->vtable).SendOperation.method);
            (this->fields).isSayChatIconVisible = visible;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetToNextChat() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SetToNextChat
               (SendMessageControl *this,MethodInfo *method)

{
  iVar1 = (this->fields).selectedChat + 1;
  if (iVar1 < 10) {
    if (iVar1 == 8) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar5 = (pMVar4->fields).teams;
        if (pDVar5 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
          if ((pDVar5->fields)._count - (pDVar5->fields)._freeCount < 2) {
            iVar1 = 9;
          }
          goto Assembly_CSharp_dll_SendMessageControl_SendMessageControl_SwapChat;
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    iVar1 = 7;
  }
Assembly_CSharp_dll_SendMessageControl_SendMessageControl_SwapChat:
  if (iVar1 == 7) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral___All__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).selectedChat == 9) {
      SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
    }
    pTVar7 = (this->fields).currentChat;
    if (pTVar7 != (Text *)0x0) {
      (*(pTVar7->klass->vtable).set_text.methodPtr)
                (pTVar7,StringLiteral___All__,(pTVar7->klass->vtable).set_text.method);
      pTVar7 = (this->fields).currentChat;
      if (pTVar7 != (Text *)0x0) {
        CStack_8.r = _UNK_?;
        CStack_8.g = _UNK_?;
        CStack_8.b = _UNK_?;
        CStack_8.a = _UNK_?;
        (*(pTVar7->klass->vtable).set_color.methodPtr)
                  (pTVar7,&CStack_8,(pTVar7->klass->vtable).set_color.method);
        (this->fields).selectedChat = 7;
        return;
      }
    }
  }
  else {
    if (iVar1 != 8) {
      if (iVar1 != 9) {
        return;
      }
      SendMessageControl_ActivateSayChat(this,1,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral___Team__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar5 = (pMVar4->fields).teams;
      if (pDVar5 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        if ((pDVar5->fields)._count - (pDVar5->fields)._freeCount < 2) {
          return;
        }
        if ((this->fields).selectedChat == 9) {
          SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
        }
        pTVar7 = (this->fields).currentChat;
        if (pTVar7 != (Text *)0x0) {
          pTVar9 = pTVar7->klass;
          method_00 = (pTVar9->vtable).set_text.method;
          player = (MVPlayer *)StringLiteral___Team__;
          (*(pTVar9->vtable).set_text.methodPtr)();
          bVar10 = cRam_? == '\0';
          (this->fields).selectedChat = 8;
          if (bVar10) {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields).selectedChat != 8) {
            return;
          }
          pTVar7 = (this->fields).currentChat;
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (extraout_RAX != 0) {
            team = *(MVTeam__Enum *)(extraout_RAX + 0x84);
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar11 = Styles::Styles_GetTeamColor(&CStack_8,team,0,(MethodInfo *)0x0);
            if (pTVar7 != (Text *)0x0) {
              CStack_8.r = pCVar11->r;
              CStack_8.g = pCVar11->g;
              CStack_8.b = pCVar11->b;
              CStack_8.a = pCVar11->a;
              (*(pTVar7->klass->vtable).set_color.methodPtr)
                        (pTVar7,&CStack_8,(pTVar7->klass->vtable).set_color.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowBuildInformation() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_ShowBuildInformation
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Version___0_u000ABranch___1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Version___0_u000ABranch___1_,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__3_5_14_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  arg0 = StringLiteral__3_5_14_0;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_release_2025_12_17Maintenance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_2,(Object *)arg0,(Object *)StringLiteral_release_2025_12_17Maintenance,
             (MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void SwapChat(MVGameMsgType) */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl_SwapChat
               (SendMessageControl *this,MVGameMsgType__Enum newChat,MethodInfo *method)

{
  if (newChat == MVGameMsgType__Enum_Chat) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral___All__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).selectedChat == 9) {
      SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
    }
    pTVar1 = (this->fields).currentChat;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,StringLiteral___All__,(pTVar1->klass->vtable).set_text.method);
      pTVar1 = (this->fields).currentChat;
      if (pTVar1 != (Text *)0x0) {
        CStack_2.r = _UNK_?;
        CStack_2.g = _UNK_?;
        CStack_2.b = _UNK_?;
        CStack_2.a = _UNK_?;
        (*(pTVar1->klass->vtable).set_color.methodPtr)
                  (pTVar1,&CStack_2,(pTVar1->klass->vtable).set_color.method);
        (this->fields).selectedChat = 7;
        return;
      }
    }
  }
  else {
    if (newChat != MVGameMsgType__Enum_TeamChat) {
      if (newChat != MVGameMsgType__Enum_SayChat) {
        return;
      }
      SendMessageControl_ActivateSayChat(this,1,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral___Team__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar4->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar5->fields).teams;
      if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        if ((pDVar6->fields)._count - (pDVar6->fields)._freeCount < 2) {
          return;
        }
        if ((this->fields).selectedChat == 9) {
          SendMessageControl_SetSayChatBubbleVisible(this,0,(MethodInfo *)0x0);
        }
        pTVar1 = (this->fields).currentChat;
        if (pTVar1 != (Text *)0x0) {
          pTVar7 = pTVar1->klass;
          method_00 = (pTVar7->vtable).set_text.method;
          player = (MVPlayer *)StringLiteral___Team__;
          (*(pTVar7->vtable).set_text.methodPtr)();
          bVar8 = cRam_? == '\0';
          (this->fields).selectedChat = 8;
          if (bVar8) {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields).selectedChat != 8) {
            return;
          }
          pTVar1 = (this->fields).currentChat;
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (extraout_RAX != 0) {
            team = *(MVTeam__Enum *)(extraout_RAX + 0x84);
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar9 = Styles::Styles_GetTeamColor(&CStack_2,team,0,(MethodInfo *)0x0);
            if (pTVar1 != (Text *)0x0) {
              CStack_2.r = pCVar9->r;
              CStack_2.g = pCVar9->g;
              CStack_2.b = pCVar9->b;
              CStack_2.a = pCVar9->a;
              (*(pTVar1->klass->vtable).set_color.methodPtr)
                        (pTVar1,&CStack_2,(pTVar1->klass->vtable).set_color.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* SendMessageControl() */

void Assembly-CSharp.dll::SendMessageControl::SendMessageControl__ctor
               (SendMessageControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).intervalForMessages = 5.0;
  (this->fields).maxMessagesPerInterval = 5;
  pLVar1 = (List_1_System_Single_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<float>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<float>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).spamList = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spamList >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).selectedChat = 7;
  pLVar7 = (List_1_System_Byte_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  FUN_?(pLVar7,MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).oomBytes = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).oomBytes >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  (this->fields).bytesPerFrame = 0x100000;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

