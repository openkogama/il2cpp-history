
/* Void AddAdminMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddAdminMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__color___0___1___color_);
    cRam_? = '\x01';
  }
  uStack_1 = CONCAT13(5,(undefined3)uStack_1);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    arg1.m_Index = 0;
    if (TVar2.m_Index != 0) {
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        arg1 = TVar2;
      }
      pSVar3 = TypeInfo__System__String;
      if ((Object *)arg1.m_Index == (Object *)0x0) goto code_?;
    }
    CVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                      ((this->fields).systemMessageColor,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar5 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar4 & 0xffffffff),method);
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__color___0___1___color_,(Object *)pSVar5,
                        (Object *)arg1.m_Index,(MethodInfo *)0x0);
    ChatControllerUGUI_AddLine(this,pSVar5,(MethodInfo *)0x0);
    return;
  }
  TVar2.m_Index = func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(TVar2.m_Index,pSVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddChatLine(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddChatLine
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__color___0____1______color__colo);
    cRam_? = '\x01';
  }
  uStack_1 = 5;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar4.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar4 = TVar3;
      }
      if ((Object *)TVar4.m_Index != (Object *)0x0) goto code_?;
      func_?(TVar3.m_Index,TypeInfo__System__String);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
      goto code_?;
    }
code_?:
    uStack_6 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_6);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?(TVar3.m_Index);
      iVar9 = *piVar8;
      CStack_10.r = (this->fields).chatMessageDefaultNameColor.r;
      CStack_10.g = (this->fields).chatMessageDefaultNameColor.g;
      CStack_10.b = (this->fields).chatMessageDefaultNameColor.b;
      CStack_10.a = (this->fields).chatMessageDefaultNameColor.a;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar12 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,iVar9,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar11->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          iVar9 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
          if (1 < iVar9) {
            if (pMVar12 == (MVPlayer *)0x0) goto code_?;
            method_00 = (MethodInfo *)(pMVar12->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar13 = Styles::Styles_GetTeamColor
                                (&CStack_10,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            CStack_10.r = pCVar13->r;
            CStack_10.g = pCVar13->g;
            CStack_10.b = pCVar13->b;
            CStack_10.a = pCVar13->a;
          }
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar11 != (MVNetworkGame *)0x0) && (pMVar12 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar11->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar14 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar12->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            pSStack_15 = StringLiteral__color___0____1______color__colo;
            if (bVar14 != 0) {
              CStack_10.r = (this->fields).friendNameColor.r;
              CStack_10.g = (this->fields).friendNameColor.g;
              CStack_10.b = (this->fields).friendNameColor.b;
              CStack_10.a = (this->fields).friendNameColor.a;
            }
            args = (Object__Array *)func_?(TypeInfo__System__Object,4);
            c.g = CStack_10.g;
            c.r = CStack_10.r;
            c.b = CStack_10.b;
            c.a = CStack_10.a;
            CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pSVar17 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar16 & 0xffffffff),method_01)
            ;
            if (args != (Object__Array *)0x0) {
              if (pSVar17 != (String *)0x0) {
                iVar18 = func_?(pSVar17,(args->klass->_0).element_class);
                if (iVar18 == 0) goto code_?;
              }
              if (args->max_length != 0) {
                args->vector[0] = (Object *)pSVar17;
                func_?(args->vector,pSVar17);
                pUVar19 = (pMVar12->fields)._UserProfileData_k__BackingField;
                if (pUVar19 == (UserProfileData *)0x0) goto code_?;
                pSVar17 = (pUVar19->fields).UserName;
                if (pSVar17 != (String *)0x0) {
                  iVar18 = func_?(pSVar17,(args->klass->_0).element_class);
                  if (iVar18 == 0) goto code_?;
                }
                if (1 < args->max_length) {
                  args->vector[1] = (Object *)pSVar17;
                  func_?(args->vector + 1,pSVar17);
                  CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                  pSVar17 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                  if (pSVar17 != (String *)0x0) {
                    iVar18 = func_?(pSVar17,(args->klass->_0).element_class);
                    if (iVar18 == 0) goto code_?;
                  }
                  if (2 < args->max_length) {
                    args->vector[2] = (Object *)pSVar17;
                    func_?(args->vector + 2,pSVar17);
                    if ((Object *)TVar4.m_Index != (Object *)0x0) {
                      iVar18 = func_?(TVar4.m_Index,(args->klass->_0).element_class);
                      if (iVar18 == 0) goto code_?;
                    }
                    if (3 < args->max_length) {
                      args->vector[3] = (Object *)TVar4.m_Index;
                      func_?(args->vector + 3,TVar4.m_Index);
                      pSVar17 = mscorlib.dll::System::String::String_Format_3
                                          (pSStack_15,args,(MethodInfo *)0x0);
                      ChatControllerUGUI_AddLine(this,pSVar17,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
code_?:
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void AddLine(String) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddLine
               (ChatControllerUGUI *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
  if ((pQVar1->fields)._size < 0x32) {
    if (cRam_? == '\0') {
      func_?(&
                      UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                     );
      cRam_? = '\x01';
    }
    original = (this->fields).consoleLinePrefab;
    pTVar2 = (Transform *)(this->fields).contentPanel;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_01 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)original,pTVar2,0,
                         UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                        );
    pQVar1 = (this->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar1,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (this_01 == (Component *)0x0) goto code_?;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                     );
      cRam_? = '\x01';
    }
    pQVar1 = (this->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    this_01 = (Component *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar1,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                        );
    pQVar1 = (this->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar1,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (this_01 == (Component *)0x0) goto code_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar2,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (pTVar2,(MethodInfo *)0x0);
  }
  (*(code *)this_01->klass[3]._1.actualSize)();
  this_00 = (this->fields).scrollRect;
  if (this_00 != (ScrollRect *)0x0) {
    fVar3 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
            ScrollRect_get_verticalNormalizedPosition(this_00,(MethodInfo *)0x0);
    if (fVar3 == _UNK_?) {
code_?:
      ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar4 == MVGameMode__Enum_Play) {
        (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
      }
      return;
    }
    pVVar5 = (this->fields).textGroup;
    if (pVVar5 != (VerticalLayoutGroup *)0x0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pVVar5,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pVVar5 = (this->fields).textGroup;
        if (pVVar5 != (VerticalLayoutGroup *)0x0) {
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pVVar5,(MethodInfo *)0x0);
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,1,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddWarningMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddWarningMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  auStack_1._8_4_ = unaff_EBP;
  auStack_1._4_4_ = in_ECX;
  auStack_1._0_4_ = unaff_EBX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__color___0___1___color_);
    cRam_? = '\x01';
  }
  uStack_2 = 5;
  key = (Object *)func_?(TypeInfo__System__Byte,&uStack_2);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index != 0) {
      this_00.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        this_00 = TVar3;
      }
      pSVar4 = TypeInfo__System__String;
      if ((String *)this_00.m_Index != (String *)0x0) {
        if (0x600 < (((String *)this_00.m_Index)->fields)._stringLength) {
          auVar5._8_4_ = 0;
          auVar5._0_8_ = auStack_1._4_8_;
          auStack_1 = auVar5 << 0x20;
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_00.m_Index,0,0x600,(MethodInfo *)0x0);
        }
        pCVar6 = &(this->fields).warningColor;
        auStack_1._0_4_ = pCVar6->r;
        auStack_1._4_4_ = pCVar6->g;
        auStack_1._8_4_ = pCVar6->b;
        CVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          (*pCVar6,(MethodInfo *)0x0);
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar8 = Styles::Styles_ColorToHex
                           ((Color32)((ulonglong)CVar7 & 0xffffffff),in_stack_9);
        pSVar8 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__color___0___1___color_,(Object *)pSVar8,
                            (Object *)this_00.m_Index,(MethodInfo *)0x0);
        ChatControllerUGUI_AddLine(this,pSVar8,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  auStack_1._0_4_ = &UNK_?;
  TVar3.m_Index = func_?();
  pSVar4 = extraout_ECX;
code_?:
  auStack_1._0_4_ = pSVar4;
  func_?(TVar3.m_Index,pSVar4);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Awake
               (ChatControllerUGUI *this,MethodInfo *method)

{
  pRVar1 = (this->fields).inputAreaRoot;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).inputAreaDeactivated;
      if (pRVar1 != (RectTransform *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          this_00 = (this->fields).enterChatButton;
          (this->fields).startTime = fVar3;
          if (this_00 != (ConsoleDragAndTapHandler *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ChatFocusChanged(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged
               (ChatControllerUGUI *this,bool enterChatMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  if (enterChatMode == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      bVar1 = false;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
      cVar3 = func_?(1,TypeInfo__IEditModeUI,pIVar2);
      bVar1 = cVar3 == '\0';
    }
    pSVar4 = (this->fields).messageController;
    if (pSVar4 != (SendMessageControl *)0x0) {
      SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
                (pSVar4,0,(MethodInfo *)0x0);
      bVar5 = bVar1;
      if ((this->fields).currentlyInLobbyState == 0) {
        bVar5 = true;
      }
      if (bVar5 == false) {
code_?:
        (this->fields).shouldUpdateFade = 1;
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
        MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar6 == MVGameMode__Enum_Play) {
          (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
        }
        return;
      }
      pIVar7 = (this->fields).inputField;
      if (pIVar7 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                  (pIVar7,(MethodInfo *)0x0);
        pRVar8 = (this->fields).inputAreaDeactivated;
        if ((pRVar8 != (RectTransform *)0x0) &&
           (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar8,(MethodInfo *)0x0), pGVar9 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar9,bVar1 ^ 1,(MethodInfo *)0x0);
          pRVar8 = (this->fields).inputAreaRoot;
          if ((pRVar8 != (RectTransform *)0x0) &&
             (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar8,(MethodInfo *)0x0),
             pGVar9 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar9,10,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pRVar8 = (this->fields).inputAreaRoot;
    if (pRVar8 != (RectTransform *)0x0) {
      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar8,(MethodInfo *)0x0);
      bVar10 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (pGVar9 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar9,bVar10 == 0,(MethodInfo *)0x0);
        pRVar8 = (this->fields).inputAreaDeactivated;
        if (pRVar8 != (RectTransform *)0x0) {
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar8,(MethodInfo *)0x0);
          bVar10 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (pGVar9 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar9,bVar10,(MethodInfo *)0x0);
            pIVar7 = (this->fields).inputField;
            if (pIVar7 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
                        (pIVar7,(MethodInfo *)0x0);
              pSVar4 = (this->fields).messageController;
              if (pSVar4 != (SendMessageControl *)0x0) {
                SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
                          (pSVar4,1,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ChatHotkeyPressed() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatHotkeyPressed
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 != (InputField *)0x0) {
    if ((pIVar1->fields).m_AllowInput == 0) {
      if ((this->fields).promptRegisterForChat != 0) {
        bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar2 != 0) {
          (this->fields).promptRegisterForChat = 0;
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__NotificationController);
          }
          NotificationController::NotificationController_PushNotification_1
                    (NotificationType__Enum_RegisterToChat,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
        }
      }
      ChatControllerUGUI_ChatFocusChanged(this,1,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String FormatSayChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_FormatSayChatMessage
                   (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__says_);
    func_?(&StringLiteral__color___0____1_____color__color);
    cRam_? = '\x01';
  }
  uStack_1 = 5;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar4.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar4 = TVar3;
      }
      if ((Object *)TVar4.m_Index != (Object *)0x0) goto code_?;
      func_?(TVar3.m_Index,TypeInfo__System__String);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
      goto code_?;
    }
code_?:
    uStack_6 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_6);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?(TVar3.m_Index);
      pSVar9 = StringLiteral__says_;
      iVar10 = *piVar8;
      CStack_11.r = (this->fields).chatMessageDefaultNameColor.r;
      CStack_11.g = (this->fields).chatMessageDefaultNameColor.g;
      CStack_11.b = (this->fields).chatMessageDefaultNameColor.b;
      CStack_11.a = (this->fields).chatMessageDefaultNameColor.a;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar12->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar13 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,iVar10,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        pMStack_14 = pMVar13;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar12->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          iVar10 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
          if (1 < iVar10) {
            if (pMVar13 == (MVPlayer *)0x0) goto code_?;
            method_00 = (MethodInfo *)(pMVar13->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar15 = Styles::Styles_GetTeamColor
                                (&CStack_11,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            CStack_11.r = pCVar15->r;
            CStack_11.g = pCVar15->g;
            CStack_11.b = pCVar15->b;
            CStack_11.a = pCVar15->a;
          }
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar12 != (MVNetworkGame *)0x0) && (pMVar13 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar12->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar16 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar13->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar16 != 0) {
              CStack_11.r = (this->fields).friendNameColor.r;
              CStack_11.g = (this->fields).friendNameColor.g;
              CStack_11.b = (this->fields).friendNameColor.b;
              CStack_11.a = (this->fields).friendNameColor.a;
            }
            args = (Object__Array *)func_?(TypeInfo__System__Object,6);
            c.g = CStack_11.g;
            c.r = CStack_11.r;
            c.b = CStack_11.b;
            c.a = CStack_11.a;
            CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pSVar18 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar17 & 0xffffffff),method_01)
            ;
            if (args != (Object__Array *)0x0) {
              if ((pSVar18 != (String *)0x0) &&
                 (iVar19 = func_?(pSVar18,(args->klass->_0).element_class), iVar19 == 0))
              goto code_?;
              if (args->max_length != 0) {
                args->vector[0] = (Object *)pSVar18;
                func_?(args->vector,pSVar18);
                pUVar20 = (pMStack_14->fields)._UserProfileData_k__BackingField;
                if (pUVar20 == (UserProfileData *)0x0) goto code_?;
                pSVar18 = (pUVar20->fields).UserName;
                if ((pSVar18 != (String *)0x0) &&
                   (iVar19 = func_?(pSVar18,(args->klass->_0).element_class), iVar19 == 0))
                goto code_?;
                if (1 < args->max_length) {
                  args->vector[1] = (Object *)pSVar18;
                  func_?(args->vector + 1,pSVar18);
                  CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).sayColor,(MethodInfo *)0x0);
                  pSVar18 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar17 & 0xffffffff),method_00);
                  if ((pSVar18 != (String *)0x0) &&
                     (iVar19 = func_?(pSVar18,(args->klass->_0).element_class), iVar19 == 0
                     )) goto code_?;
                  if (2 < args->max_length) {
                    args->vector[2] = (Object *)pSVar18;
                    func_?(args->vector + 2,pSVar18);
                    if ((pSVar9 != (String *)0x0) &&
                       (iVar19 = func_?(pSVar9,(args->klass->_0).element_class),
                       iVar19 == 0)) goto code_?;
                    if (3 < args->max_length) {
                      args->vector[3] = (Object *)pSVar9;
                      func_?(args->vector + 3,pSVar9);
                      CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                      pSVar9 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar17 & 0xffffffff),method_00);
                      if ((pSVar9 != (String *)0x0) &&
                         (iVar19 = func_?(pSVar9,(args->klass->_0).element_class),
                         iVar19 == 0)) goto code_?;
                      if (4 < args->max_length) {
                        args->vector[4] = (Object *)pSVar9;
                        func_?(args->vector + 4,pSVar9);
                        if (((Object *)TVar4.m_Index != (Object *)0x0) &&
                           (iVar19 = func_?(TVar4.m_Index,(args->klass->_0).element_class)
                           , iVar19 == 0)) goto code_?;
                        if (5 < args->max_length) {
                          args->vector[5] = (Object *)TVar4.m_Index;
                          func_?(args->vector + 5,TVar4.m_Index);
                          pSVar9 = mscorlib.dll::System::String::String_Format_3
                                              (StringLiteral__color___0____1_____color__color,args,
                                               (MethodInfo *)0x0);
                          return pSVar9;
                        }
                      }
                    }
                  }
                }
              }
code_?:
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar21 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar21)();
  return pSVar9;
}


/* String FormatTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_FormatTeamChatMessage
                   (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral__Team_);
    func_?(&StringLiteral__color___0____1_____color__color);
    cRam_? = '\x01';
  }
  uStack_1 = 5;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar4.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar4 = TVar3;
      }
      if ((Object *)TVar4.m_Index != (Object *)0x0) goto code_?;
      func_?(TVar3.m_Index,TypeInfo__System__String);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
code_?:
      uVar5 = func_?(0);
      func_?(uVar5);
      goto code_?;
    }
code_?:
    uStack_6 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_6);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?(TVar3.m_Index);
      pSVar9 = StringLiteral__Team_;
      iVar10 = *piVar8;
      fStack_11 = (this->fields).chatMessageDefaultNameColor.r;
      fStack_12 = (this->fields).chatMessageDefaultNameColor.g;
      fStack_13 = (this->fields).chatMessageDefaultNameColor.b;
      fStack_14 = (this->fields).chatMessageDefaultNameColor.a;
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar15->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar16 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,iVar10,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        pMStack_17 = pMVar16;
        pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar15 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar15->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          iVar10 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
          if (1 < iVar10) {
            if (pMVar16 == (MVPlayer *)0x0) goto code_?;
            method_00 = (MethodInfo *)(pMVar16->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar18 = Styles::Styles_GetTeamColor
                                (&CStack_19,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            fStack_11 = pCVar18->r;
            fStack_12 = pCVar18->g;
            fStack_13 = pCVar18->b;
            fStack_14 = pCVar18->a;
          }
          CStack_19.r = fStack_11;
          CStack_19.g = fStack_12;
          CStack_19.b = fStack_13;
          CStack_19.a = fStack_14;
          pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar15 != (MVNetworkGame *)0x0) && (pMVar16 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar15->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar20 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar16->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar20 != 0) {
              CStack_19.r = (this->fields).friendNameColor.r;
              CStack_19.g = (this->fields).friendNameColor.g;
              CStack_19.b = (this->fields).friendNameColor.b;
              CStack_19.a = (this->fields).friendNameColor.a;
            }
            args = (Object__Array *)func_?(TypeInfo__System__Object,6);
            c.g = CStack_19.g;
            c.r = CStack_19.r;
            c.b = CStack_19.b;
            c.a = CStack_19.a;
            CVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pSVar22 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar21 & 0xffffffff),method_01)
            ;
            if (args != (Object__Array *)0x0) {
              if ((pSVar22 != (String *)0x0) &&
                 (iVar23 = func_?(pSVar22,(args->klass->_0).element_class), iVar23 == 0))
              goto code_?;
              if (args->max_length != 0) {
                args->vector[0] = (Object *)pSVar22;
                func_?(args->vector,pSVar22);
                pUVar24 = (pMStack_17->fields)._UserProfileData_k__BackingField;
                if (pUVar24 == (UserProfileData *)0x0) goto code_?;
                pSVar22 = (pUVar24->fields).UserName;
                if ((pSVar22 != (String *)0x0) &&
                   (iVar23 = func_?(pSVar22,(args->klass->_0).element_class), iVar23 == 0))
                goto code_?;
                if (1 < args->max_length) {
                  args->vector[1] = (Object *)pSVar22;
                  func_?(args->vector + 1,pSVar22);
                  c_00.g = fStack_12;
                  c_00.r = fStack_11;
                  c_00.b = fStack_13;
                  c_00.a = fStack_14;
                  CVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     (c_00,(MethodInfo *)0x0);
                  pSVar22 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar21 & 0xffffffff),method_00);
                  if ((pSVar22 != (String *)0x0) &&
                     (iVar23 = func_?(pSVar22,(args->klass->_0).element_class), iVar23 == 0
                     )) goto code_?;
                  if (2 < args->max_length) {
                    args->vector[2] = (Object *)pSVar22;
                    func_?(args->vector + 2,pSVar22);
                    if ((pSVar9 != (String *)0x0) &&
                       (iVar23 = func_?(pSVar9,(args->klass->_0).element_class),
                       iVar23 == 0)) goto code_?;
                    if (3 < args->max_length) {
                      args->vector[3] = (Object *)pSVar9;
                      func_?(args->vector + 3,pSVar9);
                      CVar21 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                      pSVar9 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar21 & 0xffffffff),method_00);
                      if ((pSVar9 != (String *)0x0) &&
                         (iVar23 = func_?(pSVar9,(args->klass->_0).element_class),
                         iVar23 == 0)) goto code_?;
                      if (4 < args->max_length) {
                        args->vector[4] = (Object *)pSVar9;
                        func_?(args->vector + 4,pSVar9);
                        if (((Object *)TVar4.m_Index != (Object *)0x0) &&
                           (iVar23 = func_?(TVar4.m_Index,(args->klass->_0).element_class)
                           , iVar23 == 0)) goto code_?;
                        if (5 < args->max_length) {
                          args->vector[5] = (Object *)TVar4.m_Index;
                          func_?(args->vector + 5,TVar4.m_Index);
                          pSVar9 = mscorlib.dll::System::String::String_Format_3
                                              (StringLiteral__color___0____1_____color__color,args,
                                               (MethodInfo *)0x0);
                          return pSVar9;
                        }
                      }
                    }
                  }
                }
              }
code_?:
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar25 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar25)();
  return pSVar9;
}


/* Void HandleSayChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_HandleSayChatMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int *)func_?(TVar1.m_Index);
        iVar3 = *piVar2;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
          if (pMVar5 != (MVLocalPlayer *)0x0) {
            if ((pMVar5->fields)._._ActorNr_k__BackingField == iVar3) {
              text = ChatControllerUGUI_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
              ChatControllerUGUI_AddLine(this,text,(MethodInfo *)0x0);
            }
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (pMVar5 != (MVLocalPlayer *)0x0) {
                bVar6 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar5,(MethodInfo *)0x0);
                if (bVar6 != 0) {
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (this_00 == (GameObject *)0x0) goto code_?;
                  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeInHierarchy(this_00,(MethodInfo *)0x0);
                  if ((bVar6 != 0) &&
                     (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                      OnSayChatMessageRecieved !=
                      (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0)) {
                    pAVar7 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                             OnSayChatMessageRecieved;
                    (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code,iVar3,data)
                    ;
                  }
                }
                return;
              }
            }
          }
        }
      }
      else {
        func_?(TVar1.m_Index,TypeInfo__System__Int32);
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_HandleTeamChatMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar2 = (int32_t *)func_?(TVar1.m_Index);
      actorNr = *piVar2;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        other = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                          (this_00,actorNr,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (this_01 != (MVLocalPlayer *)0x0) {
            bVar4 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)this_01,other,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              text = ChatControllerUGUI_FormatTeamChatMessage(this,data,(MethodInfo *)0x0);
              ChatControllerUGUI_AddLine(this,text,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
  TVar1.m_Index = func_?();
code_?:
  func_?(TVar1.m_Index);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Initialize
               (ChatControllerUGUI *this,MethodInfo *method)

{
  (this->fields).waitForLocalPlayerReady = 1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        ChatControllerUGUI_InitializeReady(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeReady() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_InitializeReady
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 0;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (this_02,(MethodInfo *)0x0);
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    ChatControllerUGUI_ChatFocusChanged(this,MVar1 != MVGameMode__Enum_Edit,(MethodInfo *)0x0);
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_Play) {
      pIVar2 = (this->fields).inputField;
      (this->fields).shouldUpdateFade = 0;
      if (pIVar2 == (InputField *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
                (pIVar2,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).enterChatButton;
    if (this_00 != (ConsoleDragAndTapHandler *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
        pRVar5 = (this->fields).inputAreaRoot;
        if (pRVar5 != (RectTransform *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar5,(MethodInfo *)0x0);
          bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
            pRVar5 = (this->fields).inputAreaDeactivated;
            if (pRVar5 != (RectTransform *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar5,(MethodInfo *)0x0);
              bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                ((MethodInfo *)0x0);
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,bVar4,(MethodInfo *)0x0);
                (this->fields).currentlyInLobbyState = 1;
                MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                if (MVar1 != MVGameMode__Enum_Edit) {
code_?:
                  pAVar6 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                           OnSayChatMessageHeard;
                  this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                             *)func_?();
                  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP
                  ::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                  __Il2CppFullySharedGenericType]::
                  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                            (this_03,(Object *)this,
                             MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                             ,(MethodInfo *)0x0);
                  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar6,(Delegate *)this_03,(MethodInfo *)0x0);
                  if (pDVar7 == (Delegate *)0x0) {
                    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
                         (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                          *)0x0;
code_?:
                    func_?();
                    return;
                  }
                  pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                            *)func_?();
                  if (pAVar6 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                                 *)0x0) {
                    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
                         pAVar6;
                    iVar8 = func_?();
                    if (iVar8 != 0) goto code_?;
                  }
                  goto code_?;
                }
                pIVar2 = (this->fields).inputField;
                if (pIVar2 != (InputField *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                            (pIVar2,(MethodInfo *)0x0);
                  this_01 = (this->fields).messageController;
                  if (this_01 != (SendMessageControl *)0x0) {
                    SendMessageControl::SendMessageControl_SetSayChatBubbleVisibleIfActive
                              (this_01,0,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Text InstantiateNewLine() */

Text * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_InstantiateNewLine
                 (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).consoleLinePrefab;
  parent = (Transform *)(this->fields).contentPanel;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)pTVar1,parent,0,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                             );
  this_00 = (this->fields).lines;
  if (this_00 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)this_00,(Object *)pTVar1,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    return pTVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pTVar1 = (Text *)(*pcVar2)();
  return pTVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnDestroy
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
         (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           func_?();
  if (pAVar1 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
     ) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar1;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnEnable
               (ChatControllerUGUI *this,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  pCVar2 = (this->fields).canvasGroup;
  if (pCVar2 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar2,1.0,(MethodInfo *)0x0);
    (this->fields).currFade = 0.0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pCVar2 = (this->fields).canvasGroup;
    (this->fields).startTime = fVar3;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLobbyStateChange(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
               (ChatControllerUGUI *this,bool cursorLocked,MethodInfo *method)

{
  (this->fields).currentlyInLobbyState = cursorLocked ^ 1;
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  (this->fields).shouldUpdateFade = cursorLocked;
  ChatControllerUGUI_ChatFocusChanged(this,0,(MethodInfo *)0x0);
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar2 = cursorLocked ^ 1;
  }
  else {
    bVar2 = 0;
  }
  pRVar3 = (this->fields).inputAreaRoot;
  if (pRVar3 != (RectTransform *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar3,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pRVar3 = (this->fields).inputAreaDeactivated;
      if (pRVar3 != (RectTransform *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar3,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,bVar2 ^ 1,(MethodInfo *)0x0);
          this_00 = (this->fields).scrollRect;
          if (this_00 != (ScrollRect *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
            ScrollRect_SetVerticalNormalizedPosition(this_00,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSayChatMessageHeard(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnSayChatMessageHeard
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  ChatControllerUGUI_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = (in_stack_2->fields).lines;
  if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
  if ((pQVar1->fields)._size < 0x32) {
    if (cRam_? == '\0') {
      func_?(&
                      UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                     );
      cRam_? = '\x01';
    }
    original = (in_stack_2->fields).consoleLinePrefab;
    pTVar3 = (Transform *)(in_stack_2->fields).contentPanel;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_01 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)original,pTVar3,0,
                         UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                        );
    pQVar1 = (in_stack_2->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar1,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (this_01 == (Component *)0x0) goto code_?;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                     );
      cRam_? = '\x01';
    }
    pQVar1 = (in_stack_2->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    this_01 = (Component *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar1,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                        );
    pQVar1 = (in_stack_2->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar1,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (this_01 == (Component *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar3,(Transform *)(in_stack_2->fields).contentPanel,0,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (pTVar3,(MethodInfo *)0x0);
  }
  (*(code *)this_01->klass[3]._1.actualSize)();
  this_00 = (in_stack_2->fields).scrollRect;
  if (this_00 != (ScrollRect *)0x0) {
    fVar4 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
            ScrollRect_get_verticalNormalizedPosition(this_00,(MethodInfo *)0x0);
    if (fVar4 == _UNK_?) {
code_?:
      ChatControllerUGUI_UpdateFadeTime(in_stack_2,(MethodInfo *)0x0);
      MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar5 == MVGameMode__Enum_Play) {
        (in_stack_2->fields).shouldUpdateFade =
             (in_stack_2->fields).currentlyInLobbyState == 0;
      }
      return;
    }
    pVVar6 = (in_stack_2->fields).textGroup;
    if (pVVar6 != (VerticalLayoutGroup *)0x0) {
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pVVar6,(MethodInfo *)0x0);
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,0,(MethodInfo *)0x0);
        pVVar6 = (in_stack_2->fields).textGroup;
        if (pVVar6 != (VerticalLayoutGroup *)0x0) {
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pVVar6,(MethodInfo *)0x0);
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,1,(MethodInfo *)0x0);
            goto code_?;
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void ReceiveMessage(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ReceiveMessage
               (ChatControllerUGUI *this,MVGameMsgType__Enum msgType,
               Dictionary_2_System_Object_System_Object_ *message,MethodInfo *method)

{
  switch(msgType) {
  case MVGameMsgType__Enum_AdminMsg:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__String);
      func_?(&TypeInfo__Styles);
      func_?(&StringLiteral__color___0___1___color_);
      cRam_? = '\x01';
    }
    msgType = CONCAT13(5,(undefined3)msgType);
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    bVar2 = 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                          pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_02.m_Index = 0;
      if (TVar3.m_Index != 0) {
        if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
          this_02 = TVar3;
        }
        if ((Dictionary_2_System_Object_System_Object_ *)this_02.m_Index ==
            (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
          unaff_EDI = (MVPlayer *)0x0;
          bVar2 = 0;
          func_?(TVar3.m_Index,TypeInfo__System__String);
          break;
        }
      }
      fVar4 = (this->fields).systemMessageColor.r;
      fVar5 = (this->fields).systemMessageColor.g;
      fVar6 = (this->fields).systemMessageColor.b;
      fVar7 = (this->fields).systemMessageColor.a;
code_?:
      c.g = fVar5;
      c.r = fVar4;
      c.b = fVar6;
      c.a = fVar7;
      CVar8 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c,(MethodInfo *)0x0);
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        message = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__Styles;
        msgType = (MVGameMsgType__Enum)&UNK_?;
        func_?();
      }
      message = (Dictionary_2_System_Object_System_Object_ *)0x0;
      msgType = CVar8.rgba;
      msgType = (MVGameMsgType__Enum)
                Styles::Styles_ColorToHex((Color32)((ulonglong)CVar8 & 0xffffffff),method);
      method = (MethodInfo *)0x0;
      message = (Dictionary_2_System_Object_System_Object_ *)this_02.m_Index;
      message = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::String::String_Format_1
                          (StringLiteral__color___0___1___color_,(Object *)msgType,
                           (Object *)this_02.m_Index,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      msgType = (MVGameMsgType__Enum)this;
      ChatControllerUGUI_AddLine(this,(String *)message,(MethodInfo *)0x0);
code_?:
      return;
    }
    break;
  default:
    goto code_?;
  case MVGameMsgType__Enum_Chat:
    ChatControllerUGUI_AddChatLine(this,message,(MethodInfo *)0x0);
    return;
  case MVGameMsgType__Enum_TeamChat:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    msgType = msgType & 0xffffff;
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    unaff_ESI = message;
    bVar2 = 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                          pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar9 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
      bVar2 = 0;
      if (TVar3.m_Index != 0) {
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = *(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) < pIVar10;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) != pIVar10) goto code_?;
        piVar11 = (int32_t *)func_?(TVar3.m_Index);
        unaff_EDI = (MVPlayer *)*piVar11;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          this_00 = (pMVar12->fields).playerContainer;
          bVar2 = 0;
          if (this_00 != (MVPlayerContainer *)0x0) {
            unaff_EDI = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                  (this_00,(int32_t)unaff_EDI,(MethodInfo *)0x0);
            pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            bVar2 = 0;
            if (pMVar12 != (MVNetworkGame *)0x0) {
              this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
              bVar2 = 0;
              if (this_01 != (MVLocalPlayer *)0x0) {
                bVar13 = MVPlayer::MVPlayer_IsOnSameTeam
                                  ((MVPlayer *)this_01,unaff_EDI,(MethodInfo *)0x0);
                if (bVar13 == 0) {
                  return;
                }
                text = ChatControllerUGUI_FormatTeamChatMessage
                                 ((ChatControllerUGUI *)0x0,unaff_ESI,(MethodInfo *)0x0);
                ChatControllerUGUI_AddLine((ChatControllerUGUI *)0x0,text,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVGameMsgType__Enum_SayChat:
    ChatControllerUGUI_HandleSayChatMessage(this,message,(MethodInfo *)0x0);
    return;
  case MVGameMsgType__Enum_Warning:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__String);
      func_?(&TypeInfo__Styles);
      func_?(&StringLiteral__color___0___1___color_);
      cRam_? = '\x01';
    }
    msgType = CONCAT13(5,(undefined3)msgType);
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    bVar2 = 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                          pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      bVar2 = 0;
      if (TVar3.m_Index != 0) {
        this_02.m_Index = (int32_t)(Dictionary_2_System_Object_System_Object_ *)0x0;
        if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
          this_02 = TVar3;
        }
        if ((Dictionary_2_System_Object_System_Object_ *)this_02.m_Index ==
            (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        if (0x600 < (int)(((Dictionary_2_System_Object_System_Object_ *)this_02.m_Index)->fields).
                         _buckets) {
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_02.m_Index,0,0x600,(MethodInfo *)0x0);
        }
        fVar4 = (this->fields).warningColor.r;
        fVar5 = (this->fields).warningColor.g;
        fVar6 = (this->fields).warningColor.b;
        fVar7 = (this->fields).warningColor.a;
        goto code_?;
      }
    }
  }
  uVar9 = func_?();
code_?:
  iVar14 = (int)uVar9;
  uVar15 = func_?(uVar9);
  bVar16 = *(byte *)&unaff_ESI->klass;
  uVar17 = CONCAT31((int3)((uint)uVar15 >> 8),bVar16);
  out(0x3c,bVar16);
  pbVar18 = (byte *)(extraout_ECX + 0x3c + (int)&stack0xfffffffc * 8);
  bVar19 = CARRY1(*pbVar18,extraout_DH) || CARRY1(*pbVar18 + extraout_DH,bVar2);
  *pbVar18 = *pbVar18 + extraout_DH + bVar2;
  do {
    pbVar18 = (byte *)(extraout_ECX + 0x3c + (int)&stack0xfffffffc * 8);
    bVar20 = CARRY1(*pbVar18,extraout_DH) || CARRY1(*pbVar18 + extraout_DH,bVar19);
    *pbVar18 = *pbVar18 + extraout_DH + bVar19;
    pbVar18 = (byte *)(extraout_ECX + 0x3c + (int)&stack0xfffffffc * 8);
    bVar2 = *pbVar18;
    bVar21 = *pbVar18;
    *pbVar18 = bVar21 + extraout_DH + bVar20;
    pcVar22 = (char *)((int)&unaff_EDI[-1].fields._RegionCode_k__BackingField + 3);
    *pcVar22 = *pcVar22 + bVar16 + (CARRY1(bVar2,extraout_DH) || CARRY1(bVar21 + extraout_DH,bVar20));
    bVar19 = bVar16 < 0x10;
    out(0x3c,uVar17);
    while( true ) {
      *(char *)(unaff_EBX + -0x18) =
           *(char *)(unaff_EBX + -0x18) + (char)((uint)uVar15 >> 8) + bVar19;
      bVar19 = bVar16 < 0x10;
      if (bVar16 == 0x10) break;
      if (-1 < (char)(bVar16 - 0x10)) {
        puVar23 = (undefined4 *)(iVar14 + -4);
        *(undefined1 **)(iVar14 + -4) = &stack0xfffffffc;
        if (cRam_? == '\0') {
          *(MethodInfo ***)(iVar14 + -8) =
               &MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__;
          puVar24 = (undefined1 *)(iVar14 + -0xc);
          *(undefined **)(iVar14 + -0xc) = &UNK_?;
          func_?();
          *(MethodInfo ***)(puVar24 + -4) =
               &
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
          ;
          puVar25 = puVar24 + -8;
          *(undefined **)(puVar24 + -8) = &UNK_?;
          func_?();
          puVar23 = (undefined4 *)(puVar25 + 8);
          cRam_? = '\x01';
        }
        puVar23[-1] = (undefined1 *)((int)&unaff_ESI->klass + 1);
        puVar23[-2] = unaff_EDI;
        iVar14 = *(int *)(iVar14 + 4);
        iVar26 = *(int *)(iVar14 + 0x20);
        puVar27 = puVar23 + -2;
        if (iVar26 != 0) {
          puVar23[-3] = 
          MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__;
          puVar23[-4] = iVar26;
          puVar23[-5] = &UNK_?;
          pOVar1 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)puVar23[-4],(MethodInfo *)puVar23[-3]);
          iVar26 = *(int *)(iVar14 + 0x20);
          puVar27 = puVar23;
          if (iVar26 != 0) {
            puVar23[-1] = 
            MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
            ;
            puVar23[-2] = pOVar1;
            puVar23[-3] = iVar26;
            puVar23[-4] = &UNK_?;
            mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
            Queue_1_System_Object__Enqueue
                      ((Queue_1_System_Object_ *)puVar23[-3],(Object *)puVar23[-2],
                       (MethodInfo *)puVar23[-1]);
            puVar27 = puVar23 + 3;
            if (pOVar1 != (Object *)0x0) {
              puVar23[2] = 0;
              puVar23[1] = pOVar1;
              *puVar23 = &UNK_?;
              pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)puVar23[1],(MethodInfo *)puVar23[2]);
              puVar27 = puVar23 + 5;
              if (pTVar28 != (Transform *)0x0) {
                puVar23[4] = 0;
                puVar23[3] = 0;
                puVar23[2] = *(undefined4 *)(iVar14 + 0x44);
                puVar23[1] = pTVar28;
                *puVar23 = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          ((Transform *)puVar23[1],(Transform *)puVar23[2],*(bool *)(puVar23 + 3),
                           (MethodInfo *)puVar23[4]);
                puVar23[4] = 0;
                puVar23[3] = pOVar1;
                puVar23[2] = &UNK_?;
                pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)puVar23[3],(MethodInfo *)puVar23[4]);
                puVar27 = puVar23 + 0xb;
                if (pTVar28 != (Transform *)0x0) {
                  puVar23[10] = 0;
                  puVar23[9] = pTVar28;
                  puVar23[8] = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                            ((Transform *)puVar23[9],(MethodInfo *)puVar23[10]);
                  return;
                }
              }
            }
          }
        }
        *(undefined **)((int)puVar27 + -4) = &UNK_?;
        func_?();
        pcVar29 = (code *)swi(3);
        (*pcVar29)();
        return;
      }
      if (bVar16 == 0x10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(0x3c,uVar17);
      pbVar18 = (byte *)((int)&(unaff_EDI->fields)._UserProfileData_k__BackingField + 1);
      bVar2 = *pbVar18 + (byte)unaff_EBX;
      bVar19 = CARRY1(*pbVar18,(byte)unaff_EBX) || CARRY1(bVar2,bVar16 < 0x10);
      *pbVar18 = bVar2 + (bVar16 < 0x10);
      unaff_EDI = (MVPlayer *)((int)&unaff_EDI->klass + 1);
    }
  } while( true );
}


/* Text ReuseLine() */

Text * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ReuseLine
                 (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    pTVar2 = (Text *)mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                     Queue_1_System_Object__Dequeue
                               ((Queue_1_System_Object_ *)pQVar1,
                                MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                               );
    pQVar1 = (this->fields).lines;
    if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)pQVar1,(Object *)pTVar2,
                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                );
      if (pTVar2 != (Text *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar3,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar3,(MethodInfo *)0x0);
            return pTVar2;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar2 = (Text *)(*pcVar4)();
  return pTVar2;
}


/* Void ScrollbarChanged(Vector2) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ScrollbarChanged
               (ChatControllerUGUI *this,Vector2 value,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Play) {
    (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
  }
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Start
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_);
    func_?(&MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_);
    func_?(&
                    MethodInfo__ChatControllerUGUI___Start_b__35_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&MethodInfo__ChatControllerUGUI__WarnForSpam__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__ChatControllerUGUI___Start_b__35_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pSVar1 = (this->fields).messageController;
  if (pSVar1 == (SendMessageControl *)0x0) goto code_?;
  a = (pSVar1->fields).DoSend;
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    _UNK_? = 0;
code_?:
    func_?();
    pSVar1 = (this->fields).messageController;
    if (pSVar1 == (SendMessageControl *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      a_00 = (pSVar1->fields).SpamWarning;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__ChatControllerUGUI__WarnForSpam__,
                 (MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a_00,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar2 == (Delegate *)0x0) {
code_?:
        func_?();
        pSVar1 = (this->fields).messageController;
        fVar3 = (this->fields).sayColor.g;
        fVar4 = (this->fields).sayColor.b;
        fVar5 = (this->fields).sayColor.a;
        if (pSVar1 != (SendMessageControl *)0x0) {
          (pSVar1->fields).sayChatColor.r = (this->fields).sayColor.r;
          (pSVar1->fields).sayChatColor.g = fVar3;
          (pSVar1->fields).sayChatColor.b = fVar4;
          (pSVar1->fields).sayChatColor.a = fVar5;
          pSVar1 = (this->fields).messageController;
          if (pSVar1 != (SendMessageControl *)0x0) {
            SendMessageControl::SendMessageControl_InitializeToSayChat(pSVar1,0,(MethodInfo *)0x0);
            pSVar6 = (this->fields).scrollRect;
            if (pSVar6 != (ScrollRect *)0x0) {
              this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pSVar6->fields).m_OnValueChanged;
              this_03 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
              UnityAction_1_UnityEngine_Vector2___ctor
                        (this_03,(Object *)this,
                         MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_,
                         (MethodInfo *)0x0);
              if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]
                ::UnityEvent_1_UnityEngine_Vector2__AddListener
                          (this_00,this_03,
                           MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                          );
                return;
              }
            }
          }
        }
        goto code_?;
      }
      pDVar7 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar7 = pDVar2;
      }
      if (pDVar7 != (Delegate *)0x0) {
        pDVar7 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar7 = pDVar2;
        }
        if (pDVar7 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
    func_?();
  }
  else {
    iVar8 = func_?();
    if (iVar8 == 0) goto code_?;
    _UNK_? = iVar8;
    iVar8 = func_?();
    if (iVar8 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SubscribeToMessages() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ChatControllerUGUI__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
             MethodInfo__ChatControllerUGUI__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnReceivedGameMsgDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Combine
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


/* Void Update() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Update
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if ((this->fields).waitForLocalPlayerReady == 0) {
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      if ((pIVar1->fields).m_AllowInput != 0) {
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
      }
      if (((this->fields).shouldUpdateFade != 0) &&
         (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         _UNK_? <= fVar2 - (this->fields).startTime)) {
        fVar2 = (this->fields).currFade;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        fVar4 = _UNK_?;
        fVar3 = fVar3 + fVar2;
        pCVar5 = (this->fields).canvasGroup;
        (this->fields).currFade = fVar3;
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (fVar4 < fVar3) {
          fVar3 = fVar4;
        }
        if (pCVar5 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar5,fVar3 * _UNK_? + fVar4,(MethodInfo *)0x0);
        if (_UNK_? <= (this->fields).currFade) {
          pCVar5 = (this->fields).canvasGroup;
          (this->fields).shouldUpdateFade = 0;
          if (pCVar5 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                    (pCVar5,0,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  else {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 != (MVNetworkGame *)0x0) &&
       (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
       pMVar7 != (MVLocalPlayer *)0x0)) {
      bVar8 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar7,(MethodInfo *)0x0);
      if (bVar8 != 0) {
code_?:
        ChatControllerUGUI_InitializeReady(this,(MethodInfo *)0x0);
        return;
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
         pMVar7 != (MVLocalPlayer *)0x0)) {
        bVar8 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(pMVar7,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          return;
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
           pMVar7 != (MVLocalPlayer *)0x0)) {
          if ((pMVar7->fields)._.playerState != 3) {
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateFadeTime() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime
               (ChatControllerUGUI *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  pCVar2 = (this->fields).canvasGroup;
  if (pCVar2 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar2,1.0,(MethodInfo *)0x0);
    (this->fields).currFade = 0.0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pCVar2 = (this->fields).canvasGroup;
    (this->fields).startTime = fVar3;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WarnForSpam() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_WarnForSpam
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Warning__You_are_sending_too_man);
    cRam_? = '\x01';
  }
  text = TM::TM__(StringLiteral_Warning__You_are_sending_too_man,(MethodInfo *)0x0);
  ChatControllerUGUI_AddLine(this,text,(MethodInfo *)0x0);
  return;
}


/* Void <Start>b__35_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI__Start_b__35_0
               (ChatControllerUGUI *this,IShortcutKeyRegister *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__,
             (MethodInfo *)0x0);
  if (x == (IShortcutKeyRegister *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister) {
        ppMVar5 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar3].offset].RegisterShortcutKey
                   .method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,0);
code_?:
  (*(code *)*ppMVar5)(x,0xf,1,ppMVar5[1]);
  return;
}


/* ChatControllerUGUI() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI__ctor
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_UnityEngine_UI_Text_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  (this->fields).lines = this_00;
  func_?(&(this->fields).lines,this_00);
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).warningColor.r = _UNK_?;
  (this->fields).warningColor.g = fVar3;
  (this->fields).warningColor.b = fVar2;
  (this->fields).warningColor.a = fVar1;
  (this->fields).promptRegisterForChat = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

