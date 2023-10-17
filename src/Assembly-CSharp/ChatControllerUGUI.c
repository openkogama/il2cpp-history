
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
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    arg1 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
        arg1 = pOVar2;
      }
      pSVar3 = TypeInfo__System__String;
      if (arg1 == (Object *)0x0) goto code_?;
    }
    CVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                      ((this->fields).systemMessageColor,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar5 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar4 & 0xffffffff),method);
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__color___0___1___color_,(Object *)pSVar5,arg1,
                        (MethodInfo *)0x0);
    ChatControllerUGUI_AddLine(this,pSVar5,(MethodInfo *)0x0);
    return;
  }
  pOVar2 = (Object *)func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(pOVar2,pSVar3);
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
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar2 = (Object *)0x0;
    if (pOVar3 != (Object *)0x0) {
      if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
        pOVar2 = pOVar3;
      }
      if (pOVar2 != (Object *)0x0) goto code_?;
      func_?(pOVar3,TypeInfo__System__String);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
      goto code_?;
    }
code_?:
    uStack_5 = 0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar7 = (int32_t *)func_?(pOVar3);
      iVar8 = *piVar7;
      CStack_9.r = (this->fields).chatMessageDefaultNameColor.r;
      CStack_9.g = (this->fields).chatMessageDefaultNameColor.g;
      CStack_9.b = (this->fields).chatMessageDefaultNameColor.b;
      CStack_9.a = (this->fields).chatMessageDefaultNameColor.a;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar10 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar11 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,iVar8,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar10 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar10->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          iVar8 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
          if (1 < iVar8) {
            if (pMVar11 == (MVPlayer *)0x0) goto code_?;
            method_00 = (MethodInfo *)(pMVar11->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar12 = Styles::Styles_GetTeamColor
                                (&CStack_9,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            CStack_9.r = pCVar12->r;
            CStack_9.g = pCVar12->g;
            CStack_9.b = pCVar12->b;
            CStack_9.a = pCVar12->a;
          }
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar10 != (MVNetworkGame *)0x0) && (pMVar11 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar10->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar13 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar11->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            pSStack_14 = StringLiteral__color___0____1______color__colo;
            if (bVar13 != 0) {
              CStack_9.r = (this->fields).friendNameColor.r;
              CStack_9.g = (this->fields).friendNameColor.g;
              CStack_9.b = (this->fields).friendNameColor.b;
              CStack_9.a = (this->fields).friendNameColor.a;
            }
            args = (Object__Array *)func_?(TypeInfo__System__Object,4);
            c.g = CStack_9.g;
            c.r = CStack_9.r;
            c.b = CStack_9.b;
            c.a = CStack_9.a;
            CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pSVar16 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar15 & 0xffffffff),method_01)
            ;
            if (args != (Object__Array *)0x0) {
              if (pSVar16 != (String *)0x0) {
                iVar17 = func_?(pSVar16,(args->klass->_0).element_class);
                if (iVar17 == 0) goto code_?;
              }
              if (args->max_length != 0) {
                args->vector[0] = (Object *)pSVar16;
                func_?(args->vector,pSVar16);
                pUVar18 = (pMVar11->fields)._UserProfileData_k__BackingField;
                if (pUVar18 == (UserProfileData *)0x0) goto code_?;
                pSVar16 = (pUVar18->fields).UserName;
                if (pSVar16 != (String *)0x0) {
                  iVar17 = func_?(pSVar16,(args->klass->_0).element_class);
                  if (iVar17 == 0) goto code_?;
                }
                if (1 < args->max_length) {
                  args->vector[1] = (Object *)pSVar16;
                  func_?(args->vector + 1,pSVar16);
                  CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                  pSVar16 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar15 & 0xffffffff),method_00);
                  if (pSVar16 != (String *)0x0) {
                    iVar17 = func_?(pSVar16,(args->klass->_0).element_class);
                    if (iVar17 == 0) goto code_?;
                  }
                  if (2 < args->max_length) {
                    args->vector[2] = (Object *)pSVar16;
                    func_?(args->vector + 2,pSVar16);
                    if (pOVar2 != (Object *)0x0) {
                      iVar17 = func_?(pOVar2,(args->klass->_0).element_class);
                      if (iVar17 == 0) goto code_?;
                    }
                    if (3 < args->max_length) {
                      args->vector[3] = pOVar2;
                      func_?(args->vector + 3,pOVar2);
                      pSVar16 = mscorlib.dll::System::String::String_Format_3
                                          (pSStack_14,args,(MethodInfo *)0x0);
                      ChatControllerUGUI_AddLine(this,pSVar16,(MethodInfo *)0x0);
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
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  (*(code *)this_01->klass[3]._1.instance_size)();
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
    pSVar3 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pSVar3 != (String *)0x0) {
      this_00 = (String *)0x0;
      if (pSVar3->klass == TypeInfo__System__String) {
        this_00 = pSVar3;
      }
      pSVar4 = TypeInfo__System__String;
      if (this_00 != (String *)0x0) {
        if (0x600 < (this_00->fields)._stringLength) {
          auVar5._8_4_ = 0;
          auVar5._0_8_ = auStack_1._4_8_;
          auStack_1 = auVar5 << 0x20;
          mscorlib.dll::System::String::String_Substring_1(this_00,0,0x600,(MethodInfo *)0x0);
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
        pSVar3 = Styles::Styles_ColorToHex
                           ((Color32)((ulonglong)CVar7 & 0xffffffff),in_stack_8);
        pSVar3 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__color___0___1___color_,(Object *)pSVar3,(Object *)this_00
                            ,(MethodInfo *)0x0);
        ChatControllerUGUI_AddLine(this,pSVar3,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  auStack_1._0_4_ = &UNK_?;
  pSVar3 = (String *)func_?();
  pSVar4 = extraout_ECX;
code_?:
  auStack_1._0_4_ = pSVar4;
  func_?(pSVar3,pSVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
                      (pGVar9,0x8a,(MethodInfo *)0x0);
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
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar2 = (Object *)0x0;
    if (pOVar3 != (Object *)0x0) {
      if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
        pOVar2 = pOVar3;
      }
      if (pOVar2 != (Object *)0x0) goto code_?;
      func_?(pOVar3,TypeInfo__System__String);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
      goto code_?;
    }
code_?:
    uStack_5 = 0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar7 = (int32_t *)func_?(pOVar3);
      pSVar8 = StringLiteral__says_;
      iVar9 = *piVar7;
      CStack_10.r = (this->fields).chatMessageDefaultNameColor.r;
      CStack_10.g = (this->fields).chatMessageDefaultNameColor.g;
      CStack_10.b = (this->fields).chatMessageDefaultNameColor.b;
      CStack_10.a = (this->fields).chatMessageDefaultNameColor.a;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar12 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,iVar9,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        pMStack_13 = pMVar12;
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
            pCVar14 = Styles::Styles_GetTeamColor
                                (&CStack_10,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            CStack_10.r = pCVar14->r;
            CStack_10.g = pCVar14->g;
            CStack_10.b = pCVar14->b;
            CStack_10.a = pCVar14->a;
          }
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar11 != (MVNetworkGame *)0x0) && (pMVar12 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar11->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar15 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar12->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar15 != 0) {
              CStack_10.r = (this->fields).friendNameColor.r;
              CStack_10.g = (this->fields).friendNameColor.g;
              CStack_10.b = (this->fields).friendNameColor.b;
              CStack_10.a = (this->fields).friendNameColor.a;
            }
            args = (Object__Array *)func_?(TypeInfo__System__Object,6);
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
              if ((pSVar17 != (String *)0x0) &&
                 (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
              goto code_?;
              if (args->max_length != 0) {
                args->vector[0] = (Object *)pSVar17;
                func_?(args->vector,pSVar17);
                pUVar19 = (pMStack_13->fields)._UserProfileData_k__BackingField;
                if (pUVar19 == (UserProfileData *)0x0) goto code_?;
                pSVar17 = (pUVar19->fields).UserName;
                if ((pSVar17 != (String *)0x0) &&
                   (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
                goto code_?;
                if (1 < args->max_length) {
                  args->vector[1] = (Object *)pSVar17;
                  func_?(args->vector + 1,pSVar17);
                  CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).sayColor,(MethodInfo *)0x0);
                  pSVar17 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                  if ((pSVar17 != (String *)0x0) &&
                     (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0
                     )) goto code_?;
                  if (2 < args->max_length) {
                    args->vector[2] = (Object *)pSVar17;
                    func_?(args->vector + 2,pSVar17);
                    if ((pSVar8 != (String *)0x0) &&
                       (iVar18 = func_?(pSVar8,(args->klass->_0).element_class),
                       iVar18 == 0)) goto code_?;
                    if (3 < args->max_length) {
                      args->vector[3] = (Object *)pSVar8;
                      func_?(args->vector + 3,pSVar8);
                      CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                      pSVar8 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                      if ((pSVar8 != (String *)0x0) &&
                         (iVar18 = func_?(pSVar8,(args->klass->_0).element_class),
                         iVar18 == 0)) goto code_?;
                      if (4 < args->max_length) {
                        args->vector[4] = (Object *)pSVar8;
                        func_?(args->vector + 4,pSVar8);
                        if ((pOVar2 != (Object *)0x0) &&
                           (iVar18 = func_?(pOVar2,(args->klass->_0).element_class),
                           iVar18 == 0)) goto code_?;
                        if (5 < args->max_length) {
                          args->vector[5] = pOVar2;
                          func_?(args->vector + 5,pOVar2);
                          pSVar8 = mscorlib.dll::System::String::String_Format_3
                                              (StringLiteral__color___0____1_____color__color,args,
                                               (MethodInfo *)0x0);
                          return pSVar8;
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
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar20 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar20)();
  return pSVar8;
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
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar2 = (Object *)0x0;
    if (pOVar3 != (Object *)0x0) {
      if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
        pOVar2 = pOVar3;
      }
      if (pOVar2 != (Object *)0x0) goto code_?;
      func_?(pOVar3,TypeInfo__System__String);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
      goto code_?;
    }
code_?:
    uStack_5 = 0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar7 = (int32_t *)func_?(pOVar3);
      pSVar8 = StringLiteral__Team_;
      iVar9 = *piVar7;
      fStack_10 = (this->fields).chatMessageDefaultNameColor.r;
      fStack_11 = (this->fields).chatMessageDefaultNameColor.g;
      fStack_12 = (this->fields).chatMessageDefaultNameColor.b;
      fStack_13 = (this->fields).chatMessageDefaultNameColor.a;
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar14 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar14->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar15 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,iVar9,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&UNK_?;
        pMStack_16 = pMVar15;
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar14 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar14->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          iVar9 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
          if (1 < iVar9) {
            if (pMVar15 == (MVPlayer *)0x0) goto code_?;
            method_00 = (MethodInfo *)(pMVar15->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar17 = Styles::Styles_GetTeamColor
                                (&CStack_18,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            fStack_10 = pCVar17->r;
            fStack_11 = pCVar17->g;
            fStack_12 = pCVar17->b;
            fStack_13 = pCVar17->a;
          }
          CStack_18.r = fStack_10;
          CStack_18.g = fStack_11;
          CStack_18.b = fStack_12;
          CStack_18.a = fStack_13;
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar14 != (MVNetworkGame *)0x0) && (pMVar15 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar14->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar19 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar15->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar19 != 0) {
              CStack_18.r = (this->fields).friendNameColor.r;
              CStack_18.g = (this->fields).friendNameColor.g;
              CStack_18.b = (this->fields).friendNameColor.b;
              CStack_18.a = (this->fields).friendNameColor.a;
            }
            args = (Object__Array *)func_?(TypeInfo__System__Object,6);
            c.g = CStack_18.g;
            c.r = CStack_18.r;
            c.b = CStack_18.b;
            c.a = CStack_18.a;
            CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pSVar21 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar20 & 0xffffffff),method_01)
            ;
            if (args != (Object__Array *)0x0) {
              if ((pSVar21 != (String *)0x0) &&
                 (iVar22 = func_?(pSVar21,(args->klass->_0).element_class), iVar22 == 0))
              goto code_?;
              if (args->max_length != 0) {
                args->vector[0] = (Object *)pSVar21;
                func_?(args->vector,pSVar21);
                pUVar23 = (pMStack_16->fields)._UserProfileData_k__BackingField;
                if (pUVar23 == (UserProfileData *)0x0) goto code_?;
                pSVar21 = (pUVar23->fields).UserName;
                if ((pSVar21 != (String *)0x0) &&
                   (iVar22 = func_?(pSVar21,(args->klass->_0).element_class), iVar22 == 0))
                goto code_?;
                if (1 < args->max_length) {
                  args->vector[1] = (Object *)pSVar21;
                  func_?(args->vector + 1,pSVar21);
                  c_00.g = fStack_11;
                  c_00.r = fStack_10;
                  c_00.b = fStack_12;
                  c_00.a = fStack_13;
                  CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     (c_00,(MethodInfo *)0x0);
                  pSVar21 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar20 & 0xffffffff),method_00);
                  if ((pSVar21 != (String *)0x0) &&
                     (iVar22 = func_?(pSVar21,(args->klass->_0).element_class), iVar22 == 0
                     )) goto code_?;
                  if (2 < args->max_length) {
                    args->vector[2] = (Object *)pSVar21;
                    func_?(args->vector + 2,pSVar21);
                    if ((pSVar8 != (String *)0x0) &&
                       (iVar22 = func_?(pSVar8,(args->klass->_0).element_class),
                       iVar22 == 0)) goto code_?;
                    if (3 < args->max_length) {
                      args->vector[3] = (Object *)pSVar8;
                      func_?(args->vector + 3,pSVar8);
                      CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                      pSVar8 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar20 & 0xffffffff),method_00);
                      if ((pSVar8 != (String *)0x0) &&
                         (iVar22 = func_?(pSVar8,(args->klass->_0).element_class),
                         iVar22 == 0)) goto code_?;
                      if (4 < args->max_length) {
                        args->vector[4] = (Object *)pSVar8;
                        func_?(args->vector + 4,pSVar8);
                        if ((pOVar2 != (Object *)0x0) &&
                           (iVar22 = func_?(pOVar2,(args->klass->_0).element_class),
                           iVar22 == 0)) goto code_?;
                        if (5 < args->max_length) {
                          args->vector[5] = pOVar2;
                          func_?(args->vector + 5,pOVar2);
                          pSVar8 = mscorlib.dll::System::String::String_Format_3
                                              (StringLiteral__color___0____1_____color__color,args,
                                               (MethodInfo *)0x0);
                          return pSVar8;
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
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar24 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar24)();
  return pSVar8;
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int *)func_?(pOVar1);
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
        func_?(pOVar1,TypeInfo__System__Int32);
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar2 = (int32_t *)func_?(pOVar1);
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
  pOVar1 = (Object *)func_?();
code_?:
  func_?(pOVar1);
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
                if (MVar1 == MVGameMode__Enum_Edit) {
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
                else {
code_?:
                  pAVar6 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                           OnSayChatMessageHeard;
                  this_03 = (Action_1_Object_ *)
                            func_?(
                                           TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                           );
                  if (this_03 != (Action_1_Object_ *)0x0) {
                    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                              (this_03,(Object *)this,
                               MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                               ,(MethodInfo *)0x0);
                    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar6,(Delegate *)this_03,(MethodInfo *)0x0);
                    if (pDVar7 == (Delegate *)0x0) {
                      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard
                           = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                              *)0x0;
code_?:
                      func_?();
                      return;
                    }
                    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                              *)func_?();
                    if (pAVar6 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                                   *)0x0) {
                      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard
                           = pAVar6;
                      iVar8 = func_?();
                      if (iVar8 != 0) goto code_?;
                    }
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
  this_00 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
  if (this_00 == (Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
    if (pAVar1 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  0x0) {
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
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
  (*(code *)this_01->klass[3]._1.instance_size)();
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
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (message,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_03 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (pDVar2->klass ==
            (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
          this_03 = pDVar2;
        }
        if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      fVar3 = (this->fields).systemMessageColor.r;
      fVar4 = (this->fields).systemMessageColor.g;
      fVar5 = (this->fields).systemMessageColor.b;
      fVar6 = (this->fields).systemMessageColor.a;
code_?:
      c.g = fVar4;
      c.r = fVar3;
      c.b = fVar5;
      c.a = fVar6;
      CVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c,(MethodInfo *)0x0);
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        message = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__Styles;
        msgType = (MVGameMsgType__Enum)&UNK_?;
        func_?();
      }
      message = (Dictionary_2_System_Object_System_Object_ *)0x0;
      msgType = CVar7.rgba;
      msgType = (MVGameMsgType__Enum)
                Styles::Styles_ColorToHex((Color32)((ulonglong)CVar7 & 0xffffffff),method);
      method = (MethodInfo *)0x0;
      message = this_03;
      message = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::String::String_Format_1
                          (StringLiteral__color___0___1___color_,(Object *)msgType,(Object *)this_03
                           ,(MethodInfo *)0x0);
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
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (message,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar8 = CONCAT44(TypeInfo__System__Int32,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar9 = (int32_t *)func_?(pOVar1);
        actorNr = *piVar9;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar10 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
          other = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            (this_00,actorNr,(MethodInfo *)0x0);
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar10 != (MVNetworkGame *)0x0) &&
             (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
             this_01 != (MVLocalPlayer *)0x0)) {
            bVar11 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)this_01,other,(MethodInfo *)0x0);
            if (bVar11 == 0) {
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
    if ((message != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (message,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      this_03 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pDVar2->klass ==
          (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
        this_03 = pDVar2;
      }
      if (this_03 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (0x600 < (int)(this_03->fields)._buckets) {
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_03,0,0x600,(MethodInfo *)0x0);
        }
        fVar3 = (this->fields).warningColor.r;
        fVar4 = (this->fields).warningColor.g;
        fVar5 = (this->fields).warningColor.b;
        fVar6 = (this->fields).warningColor.a;
        goto code_?;
      }
code_?:
      func_?(pDVar2,TypeInfo__System__String);
    }
  }
  uVar8 = func_?();
code_?:
  uVar12 = func_?(uVar8);
  *(char *)(&unaff_ESI->klass + unaff_EBX) = *(char *)(&unaff_ESI->klass + unaff_EBX) + extraout_DL;
  pcVar13 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + (char)(uVar12 >> 8),
                                      (char)unaff_EBX));
  *pcVar13 = *pcVar13 + ((byte)uVar12 ^ 0x10);
  *(char *)(uVar12 ^ 0x5e800) = *(char *)(uVar12 ^ 0x5e800) + (char)unaff_EBX;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pQVar14 = (this->fields).lines;
  if (pQVar14 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    this_02 = (Component *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar14,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                        );
    pQVar14 = (this->fields).lines;
    if (pQVar14 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)pQVar14,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                );
      if ((this_02 != (Component *)0x0) &&
         (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_02,(MethodInfo *)0x0), pTVar15 != (Transform *)0x0)) {
        message = (Dictionary_2_System_Object_System_Object_ *)((uint)message & 0xff000000);
        msgType = MVGameMsgType__Enum_AvatarKilled;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar15,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
        message = (Dictionary_2_System_Object_System_Object_ *)((uint)message & 0xff000000);
        msgType = (uint)this_02 >> 8;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_02,(MethodInfo *)0x0);
        if (pTVar15 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar15,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
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
  if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
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
    pUVar2 = (pSVar1->fields).DoSend;
    this_01 = (UnityAction_1_System_ByteEnum_ *)func_?();
    if (this_01 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pSVar1->fields).DoSend = (UnityAction_1_System_Boolean_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_1_System_Boolean_ *)func_?();
      if (pUVar2 == (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
      (pSVar1->fields).DoSend = pUVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    pSVar1 = (this->fields).messageController;
    if (pSVar1 == (SendMessageControl *)0x0) goto code_?;
    pUVar5 = (pSVar1->fields).SpamWarning;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__ChatControllerUGUI__WarnForSpam__,
               (MethodInfo *)0x0);
    pUVar5 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUVar5 == (UnityAction *)0x0) {
      (pSVar1->fields).SpamWarning = (UnityAction *)0x0;
code_?:
      func_?();
      pSVar1 = (this->fields).messageController;
      fVar6 = (this->fields).sayColor.g;
      fVar7 = (this->fields).sayColor.b;
      fVar8 = (this->fields).sayColor.a;
      if (pSVar1 != (SendMessageControl *)0x0) {
        (pSVar1->fields).sayChatColor.r = (this->fields).sayColor.r;
        (pSVar1->fields).sayChatColor.g = fVar6;
        (pSVar1->fields).sayChatColor.b = fVar7;
        (pSVar1->fields).sayChatColor.a = fVar8;
        pSVar1 = (this->fields).messageController;
        if (pSVar1 != (SendMessageControl *)0x0) {
          SendMessageControl::SendMessageControl_InitializeToSayChat(pSVar1,0,(MethodInfo *)0x0);
          pSVar9 = (this->fields).scrollRect;
          if (pSVar9 != (ScrollRect *)0x0) {
            this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pSVar9->fields).m_OnValueChanged;
            this_03 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            if (this_03 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
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
      }
      goto code_?;
    }
    pUVar10 = (UnityAction *)0x0;
    if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar10 = pUVar5;
    }
    if (pUVar10 != (UnityAction *)0x0) {
      (pSVar1->fields).SpamWarning = pUVar10;
      pUVar10 = (UnityAction *)0x0;
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar10 = pUVar5;
      }
      if (pUVar10 != (UnityAction *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__,
               (MethodInfo *)0x0);
    if (x != (IShortcutKeyRegister *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0xf);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (this_00 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
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
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

