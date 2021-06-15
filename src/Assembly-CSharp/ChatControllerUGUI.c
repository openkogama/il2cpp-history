
/* Void AddAdminMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddAdminMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = CONCAT13(5,(undefined3)uStack_1);
  key = (Type *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    arg1 = (Pool *)0x0;
    if (pPVar2 != (Pool *)0x0) {
      if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
        arg1 = pPVar2;
      }
      pSVar3 = TypeInfo__System__String;
      if (arg1 == (Pool *)0x0) goto code_?;
    }
    CVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                      ((this->fields).systemMessageColor,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar4 & 0xffffffff),method);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__color___0___1___color_,(Object *)pSVar5,(Object *)arg1,
                        (MethodInfo *)0x0);
    ChatControllerUGUI_AddLine(this,pSVar5,(MethodInfo *)0x0);
    return;
  }
  pPVar2 = (Pool *)func_?(0);
  pSVar3 = extraout_ECX;
code_?:
  func_?(pPVar2,pSVar3);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 5;
  pTVar2 = (Type *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar4 = (Pool *)0x0;
    if (pPVar3 == (Pool *)0x0) {
code_?:
      uStack_5 = 0;
      pTVar2 = (Type *)func_?(TypeInfo__System__Byte,&uStack_5);
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar6 = CONCAT44(TypeInfo__System__Int32,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar7 = (int32_t *)func_?(pPVar3);
        iVar8 = *piVar7;
        fStack_9 = (this->fields).chatMessageDefaultNameColor.r;
        puStack_10 = (undefined *)(this->fields).chatMessageDefaultNameColor.g;
        fVar11 = (this->fields).chatMessageDefaultNameColor.b;
        fVar12 = (this->fields).chatMessageDefaultNameColor.a;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if (this_00 != (MVAvatar *)0x0) {
          this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
          if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            this_02 = MVPlayerContainer::MVPlayerContainer_get_Item
                                ((MVPlayerContainer *)this_01,iVar8,(MethodInfo *)0x0);
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar13 != (MVNetworkGame *)0x0) {
              this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)pMVar13,(MethodInfo *)0x0);
              if (this_03 != (SkyParam *)0x0) {
                iVar8 = MVTeamManager::MVTeamManager_TeamCount
                                  ((MVTeamManager *)this_03,(MethodInfo *)0x0);
                if (1 < iVar8) {
                  if (this_02 == (MVPlayer *)0x0) goto code_?;
                  team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                         KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                         KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                   ((KogamaSettingNumericBase_1_System_Single_ *)this_02,
                                    (MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__Styles->_1).cctor_started == 0)) {
                    func_?(TypeInfo__Styles);
                  }
                  pCVar14 = Styles::Styles_GetTeamColor
                                     ((Color *)&fStack_9,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
                  fStack_9 = pCVar14->r;
                  puStack_10 = (undefined *)pCVar14->g;
                  fVar11 = pCVar14->b;
                  fVar12 = pCVar14->a;
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar13 != (MVNetworkGame *)0x0) {
                  method_00 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                        ((CloudyThemeBase *)pMVar13,(MethodInfo *)0x0);
                  if (this_02 != (MVPlayer *)0x0) {
                    pOVar15 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,
                                        (MethodInfo *)0x0);
                    if (method_00 != (ThemeSkybox *)0x0) {
                      bVar16 = FriendList::FriendList_IsFriend
                                        ((FriendList *)method_00,(int32_t)pOVar15,(MethodInfo *)0x0);
                      if (bVar16 != 0) {
                        fStack_9 = (this->fields).friendNameColor.r;
                        puStack_10 = (undefined *)(this->fields).friendNameColor.g;
                        fVar11 = (this->fields).friendNameColor.b;
                        fVar12 = (this->fields).friendNameColor.a;
                      }
                      method_01 = (MethodInfo *)&UNK_?;
                      args = (Object__Array *)func_?(TypeInfo__System__Object,4);
                      c.g = (float)puStack_10;
                      c.r = fStack_9;
                      c.b = fVar11;
                      c.a = fVar12;
                      CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                         (c,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__Styles->_1).cctor_started == 0)) {
                        func_?(TypeInfo__Styles);
                      }
                      pSVar18 = Styles::Styles_ColorToHex
                                          ((Color32)((ulonglong)CVar17 & 0xffffffff),
                                           (MethodInfo *)method_00);
                      if (args != (Object__Array *)0x0) {
                        if (pSVar18 != (String *)0x0) {
                          iVar19 = func_?(pSVar18,(args->klass->_0).element_class);
                          if (iVar19 == 0) goto code_?;
                        }
                        if (args->max_length == 0) goto code_?;
                        args->vector[0] = (Object *)pSVar18;
                        iVar8 = GamePointGainEffect::GamePointGainEffect_get_ID
                                          ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
                        if (iVar8 != 0) {
                          pOVar15 = *(Object **)(iVar8 + 0xc);
                          if (pOVar15 != (Object *)0x0) {
                            iVar19 = func_?(pOVar15,(args->klass->_0).element_class);
                            if (iVar19 == 0) goto code_?;
                          }
                          if (args->max_length < 2) goto code_?;
                          args->vector[1] = pOVar15;
                          CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::
                                   Color32_op_Implicit((this->fields).chatMessageColor,
                                                       (MethodInfo *)0x0);
                          pSVar18 = Styles::Styles_ColorToHex
                                              ((Color32)((ulonglong)CVar17 & 0xffffffff),method_01);
                          if (pSVar18 != (String *)0x0) {
                            iVar19 = func_?();
                            if (iVar19 == 0) goto code_?;
                          }
                          if (args->max_length < 3) goto code_?;
                          args->vector[2] = (Object *)pSVar18;
                          if (pPVar4 != (Pool *)0x0) {
                            iVar19 = func_?();
                            if (iVar19 == 0) goto code_?;
                          }
                          if (3 < args->max_length) {
                            args->vector[3] = (Object *)pPVar4;
                            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__System__String->_1).cctor_started == 0)) {
                              func_?();
                            }
                            pSVar18 = mscorlib.dll::System::String::String_Format_3
                                                ((String *)0x0,args,(MethodInfo *)0x0);
                            ChatControllerUGUI_AddLine(this,pSVar18,(MethodInfo *)0x0);
                            return;
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
      }
    }
    else {
      if ((String__Class *)pPVar3->klass == TypeInfo__System__String) {
        pPVar4 = pPVar3;
      }
      if (pPVar4 != (Pool *)0x0) goto code_?;
      func_?(pPVar3,TypeInfo__System__String);
code_?:
      uVar20 = func_?(0,0);
      func_?(uVar20);
code_?:
      uVar20 = func_?(0);
      func_?(uVar20);
code_?:
      uVar20 = func_?(0,0);
      func_?(uVar20);
code_?:
      uVar20 = func_?(0);
      func_?(uVar20);
code_?:
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
  }
code_?:
  uVar6 = func_?(0);
code_?:
  func_?(uVar6);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void AddLine(String) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddLine
               (ChatControllerUGUI *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
  pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     ((KogamaSettingNumericBase_1_System_Single_ *)pQVar1,
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__get_Count__
                     );
  if ((int)pIVar2 < 0x32) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    original = (this->fields).consoleLinePrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    item = (SmoothPhysicsMovement_Package *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                     );
    pQVar1 = (this->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (item == (SmoothPhysicsMovement_Package *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)item,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar3,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pQVar1 = (this->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    item = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
           Queue_1_SmoothPhysicsMovement_Package__Dequeue
                     ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                     );
    pQVar1 = (this->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (item == (SmoothPhysicsMovement_Package *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)item,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar3,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)item,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (pTVar3,(MethodInfo *)0x0);
  }
  if (item != (SmoothPhysicsMovement_Package *)0x0) {
    (*(code *)item->klass[3]._1.cctor_finished_or_no_cctor)();
    this_00 = (this->fields).scrollRect;
    if (this_00 != (ScrollRect *)0x0) {
      fVar4 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
              ScrollRect_get_verticalNormalizedPosition(this_00,(MethodInfo *)0x0);
      if (fVar4 == _UNK_?) {
code_?:
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar5 == MVGameMode__Enum_Play) {
          (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
        }
        return;
      }
      pVVar6 = (this->fields).textGroup;
      if (pVVar6 != (VerticalLayoutGroup *)0x0) {
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pVVar6,(MethodInfo *)0x0);
        if (pGVar7 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,0,(MethodInfo *)0x0);
          pVVar6 = (this->fields).textGroup;
          if (pVVar6 != (VerticalLayoutGroup *)0x0) {
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pVVar6,(MethodInfo *)0x0);
            if (pGVar7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,1,(MethodInfo *)0x0);
              goto code_?;
            }
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


/* Void AddWarningMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_AddWarningMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      this_00 = (Pool *)0x0;
      if ((String__Class *)pPVar1->klass == TypeInfo__System__String) {
        this_00 = pPVar1;
      }
      pSVar2 = TypeInfo__System__String;
      if (this_00 != (Pool *)0x0) {
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
        if (0x600 < (int)pIVar3) {
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_00,0,0x600,(MethodInfo *)0x0);
        }
        CVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          ((this->fields).warningColor,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = Styles::Styles_ColorToHex
                           ((Color32)((ulonglong)CVar4 & 0xffffffff),in_stack_6);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__color___0___1___color_,(Object *)pSVar5,(Object *)this_00
                            ,(MethodInfo *)0x0);
        ChatControllerUGUI_AddLine(this,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  pPVar1 = (Pool *)func_?(0);
  pSVar2 = extraout_ECX;
code_?:
  func_?(pPVar1,pSVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Awake
               (ChatControllerUGUI *this,MethodInfo *method)

{
  pRVar1 = (this->fields).inputAreaRoot;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).inputAreaDeactivated;
      if (pRVar1 != (RectTransform *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          this_00 = (this->fields).enterChatButton;
          (this->fields).startTime = fVar3;
          if (this_00 != (ConsoleDragAndTapHandler *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ChatFocusChanged(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatFocusChanged
               (ChatControllerUGUI *this,bool enterChatMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (enterChatMode == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar1 == (IEditModeUI *)0x0) {
      value = false;
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar1 == (IEditModeUI *)0x0) goto code_?;
      cVar2 = func_?();
      value = cVar2 == '\0';
    }
    pSVar3 = (this->fields).messageController;
    if (pSVar3 != (SendMessageControl *)0x0) {
      SendMessageControl::SendMessageControl_OnInputFocusChange(pSVar3,0,(MethodInfo *)0x0);
      if (((this->fields).currentlyInLobbyState != 0) && (value == false)) {
code_?:
        (this->fields).shouldUpdateFade = 1;
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar4 == MVGameMode__Enum_Play) {
          (this->fields).shouldUpdateFade = (this->fields).currentlyInLobbyState == 0;
        }
        return;
      }
      pIVar5 = (this->fields).inputField;
      if (pIVar5 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                  (pIVar5,(MethodInfo *)0x0);
        pRVar6 = (this->fields).inputAreaDeactivated;
        if ((pRVar6 != (RectTransform *)0x0) &&
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pRVar6,(MethodInfo *)0x0),
           pGVar7 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,value ^ 1,(MethodInfo *)0x0);
          pRVar6 = (this->fields).inputAreaRoot;
          if ((pRVar6 != (RectTransform *)0x0) &&
             (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar6,(MethodInfo *)0x0),
             pGVar7 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,value,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pRVar6 = (this->fields).inputAreaRoot;
    if (pRVar6 != (RectTransform *)0x0) {
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,bVar8 == 0,(MethodInfo *)0x0);
        pRVar6 = (this->fields).inputAreaDeactivated;
        if (pRVar6 != (RectTransform *)0x0) {
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar6,(MethodInfo *)0x0);
          bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,bVar8,(MethodInfo *)0x0);
            pIVar5 = (this->fields).inputField;
            if (pIVar5 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_ActivateInputField
                        (pIVar5,(MethodInfo *)0x0);
              pSVar3 = (this->fields).messageController;
              if (pSVar3 != (SendMessageControl *)0x0) {
                SendMessageControl::SendMessageControl_OnInputFocusChange
                          (pSVar3,1,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ChatHotkeyPressed() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ChatHotkeyPressed
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_isFocused
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((this->fields).promptRegisterForChat != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar1 != 0) {
          (this->fields).promptRegisterForChat = 0;
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String FormatSayChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_FormatSayChatMessage
                   (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = CONCAT13(5,(int3)in_stack_2);
  pTVar3 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar5 = (Pool *)0x0;
    if (pPVar4 == (Pool *)0x0) {
code_?:
      method_02 = (MethodInfo *)CONCAT13((char)((uint)uVar1 >> 0x18),(uint3)(ushort)uVar1);
      pTVar3 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
      pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar6 = CONCAT44(TypeInfo__System__Int32,pPVar4);
      if (pPVar4 != (Pool *)0x0) {
        if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar7 = (int32_t *)func_?(pPVar4);
        pSVar8 = StringLiteral__says_;
        iVar9 = *piVar7;
        fVar10 = (this->fields).chatMessageDefaultNameColor.r;
        fVar11 = (this->fields).chatMessageDefaultNameColor.g;
        fVar12 = (this->fields).chatMessageDefaultNameColor.b;
        fVar13 = (this->fields).chatMessageDefaultNameColor.a;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if ((this_00 != (MVAvatar *)0x0) &&
           (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
           this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
          this_02 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)this_01,iVar9,(MethodInfo *)0x0);
          this_04 = this_02;
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar14 != (MVNetworkGame *)0x0) &&
             (this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)pMVar14,(MethodInfo *)0x0),
             this_03 != (SkyParam *)0x0)) {
            iVar9 = MVTeamManager::MVTeamManager_TeamCount
                              ((MVTeamManager *)this_03,(MethodInfo *)0x0);
            if (1 < iVar9) {
              if (this_02 == (MVPlayer *)0x0) goto code_?;
              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)this_02,
                                (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pCVar15 = Styles::Styles_GetTeamColor
                                 ((Color *)&stack0xffffffe4,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
              fVar10 = pCVar15->r;
              fVar11 = pCVar15->g;
              fVar12 = pCVar15->b;
              fVar13 = pCVar15->a;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar14 != (MVNetworkGame *)0x0) &&
                (method_00 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                       ((CloudyThemeBase *)pMVar14,(MethodInfo *)0x0),
                this_02 != (MVPlayer *)0x0)) &&
               (pOVar16 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,
                                    (MethodInfo *)0x0), method_00 != (ThemeSkybox *)0x0)) {
              bVar17 = FriendList::FriendList_IsFriend
                                ((FriendList *)method_00,(int32_t)pOVar16,(MethodInfo *)0x0);
              if (bVar17 != 0) {
                fVar10 = (this->fields).friendNameColor.r;
                fVar11 = (this->fields).friendNameColor.g;
                fVar12 = (this->fields).friendNameColor.b;
                fVar13 = (this->fields).friendNameColor.a;
              }
              method_01 = (MethodInfo *)&UNK_?;
              args = (Object__Array *)func_?(TypeInfo__System__Object,6);
              c.g = fVar11;
              c.r = fVar10;
              c.b = fVar12;
              c.a = fVar13;
              CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                 (c,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pSVar19 = Styles::Styles_ColorToHex
                                  ((Color32)((ulonglong)CVar18 & 0xffffffff),(MethodInfo *)method_00
                                  );
              if (args != (Object__Array *)0x0) {
                if ((pSVar19 != (String *)0x0) &&
                   (iVar20 = func_?(pSVar19,(args->klass->_0).element_class), iVar20 == 0))
                goto code_?;
                if (args->max_length == 0) goto code_?;
                args->vector[0] = (Object *)pSVar19;
                iVar9 = GamePointGainEffect::GamePointGainEffect_get_ID
                                  ((GamePointGainEffect *)this_04,(MethodInfo *)0x0);
                if (iVar9 != 0) {
                  pOVar16 = *(Object **)(iVar9 + 0xc);
                  if ((pOVar16 != (Object *)0x0) &&
                     (iVar20 = func_?(pOVar16,(args->klass->_0).element_class), iVar20 == 0)
                     ) goto code_?;
                  if (args->max_length < 2) goto code_?;
                  args->vector[1] = pOVar16;
                  CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).sayColor,(MethodInfo *)0x0);
                  pSVar19 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar18 & 0xffffffff),method_01);
                  if ((pSVar19 != (String *)0x0) && (iVar20 = func_?(), iVar20 == 0))
                  goto code_?;
                  if (args->max_length < 3) goto code_?;
                  args->vector[2] = (Object *)pSVar19;
                  if ((pSVar8 != (String *)0x0) && (iVar20 = func_?(), iVar20 == 0))
                  goto code_?;
                  if (args->max_length < 4) goto code_?;
                  args->vector[3] = (Object *)pSVar8;
                  CVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                  pSVar8 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar18 & 0xffffffff),method_02);
                  if ((pSVar8 != (String *)0x0) && (iVar20 = func_?(), iVar20 == 0))
                  goto code_?;
                  if (args->max_length < 5) goto code_?;
                  args->vector[4] = (Object *)pSVar8;
                  if ((pPVar5 != (Pool *)0x0) && (iVar20 = func_?(), iVar20 == 0))
                  goto code_?;
                  if (5 < args->max_length) {
                    args->vector[5] = (Object *)pPVar5;
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pSVar8 = mscorlib.dll::System::String::String_Format_3
                                        (StringLiteral__color___0____1_____color__color,args,
                                         (MethodInfo *)0x0);
                    return pSVar8;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
        pPVar5 = pPVar4;
      }
      if (pPVar5 != (Pool *)0x0) goto code_?;
      func_?(pPVar4,TypeInfo__System__String);
code_?:
      uVar1 = func_?(0,0);
      func_?(uVar1);
code_?:
      uVar1 = func_?(0);
      func_?(uVar1);
code_?:
      uVar1 = func_?(0,0);
      func_?(uVar1);
code_?:
      uVar1 = func_?(0);
      func_?(uVar1);
code_?:
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
code_?:
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
  }
code_?:
  uVar6 = func_?(0);
code_?:
  func_?(uVar6);
  pcVar21 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar21)();
  return pSVar8;
}


/* String FormatTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_FormatTeamChatMessage
                   (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined *)CONCAT13(5,(uint3)uStack_1);
  pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar4 = (Pool *)0x0;
    if (pPVar3 == (Pool *)0x0) {
code_?:
      uStack_1._0_3_ = (uint3)(ushort)uStack_1;
      pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 2);
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar6 = (int32_t *)func_?(pPVar3);
        pSVar7 = StringLiteral__Team_;
        iVar8 = *piVar6;
        fVar9 = (this->fields).chatMessageDefaultNameColor.r;
        pMVar10 = (MethodInfo *)(this->fields).chatMessageDefaultNameColor.g;
        fVar11 = (this->fields).chatMessageDefaultNameColor.b;
        fVar12 = (this->fields).chatMessageDefaultNameColor.a;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if ((this_00 != (MVAvatar *)0x0) &&
           (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
           this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
          this_02 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)this_01,iVar8,(MethodInfo *)0x0);
          pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar13 != (MVNetworkGame *)0x0) &&
             (this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)pMVar13,(MethodInfo *)0x0),
             this_03 != (SkyParam *)0x0)) {
            iVar8 = MVTeamManager::MVTeamManager_TeamCount
                              ((MVTeamManager *)this_03,(MethodInfo *)0x0);
            if (1 < iVar8) {
              if (this_02 == (MVPlayer *)0x0) goto code_?;
              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)this_02,
                                (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pCVar14 = Styles::Styles_GetTeamColor
                                 ((Color *)&stack0xffffffd4,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
              fVar9 = pCVar14->r;
              pMVar10 = (MethodInfo *)pCVar14->g;
              fVar11 = pCVar14->b;
              fVar12 = pCVar14->a;
            }
            fVar15 = fVar11;
            fVar16 = fVar12;
            fVar17 = fVar9;
            method_02 = pMVar10;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar13 != (MVNetworkGame *)0x0) &&
                (method_00 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                       ((CloudyThemeBase *)pMVar13,(MethodInfo *)0x0),
                this_02 != (MVPlayer *)0x0)) &&
               (pOVar18 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,
                                    (MethodInfo *)0x0), method_00 != (ThemeSkybox *)0x0)) {
              bVar19 = FriendList::FriendList_IsFriend
                                ((FriendList *)method_00,(int32_t)pOVar18,(MethodInfo *)0x0);
              if (bVar19 != 0) {
                fVar9 = (this->fields).friendNameColor.r;
                pMVar10 = (MethodInfo *)(this->fields).friendNameColor.g;
                fVar15 = (this->fields).friendNameColor.b;
                fVar16 = (this->fields).friendNameColor.a;
              }
              method_01 = (MethodInfo *)&UNK_?;
              args = (Object__Array *)func_?(TypeInfo__System__Object,6);
              c.g = (float)pMVar10;
              c.r = fVar9;
              c.b = fVar15;
              c.a = fVar16;
              CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                 (c,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                func_?(TypeInfo__Styles);
              }
              pSVar21 = Styles::Styles_ColorToHex
                                  ((Color32)((ulonglong)CVar20 & 0xffffffff),(MethodInfo *)method_00
                                  );
              if (args != (Object__Array *)0x0) {
                if ((pSVar21 != (String *)0x0) &&
                   (iVar22 = func_?(pSVar21,(args->klass->_0).element_class), iVar22 == 0))
                goto code_?;
                if (args->max_length == 0) goto code_?;
                args->vector[0] = (Object *)pSVar21;
                iVar8 = GamePointGainEffect::GamePointGainEffect_get_ID
                                  ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
                if (iVar8 != 0) {
                  pOVar18 = *(Object **)(iVar8 + 0xc);
                  if ((pOVar18 != (Object *)0x0) &&
                     (iVar22 = func_?(pOVar18,(args->klass->_0).element_class), iVar22 == 0)
                     ) goto code_?;
                  if (args->max_length < 2) goto code_?;
                  args->vector[1] = pOVar18;
                  c_00.g = (float)method_02;
                  c_00.r = fVar17;
                  c_00.b = fVar11;
                  c_00.a = fVar12;
                  CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     (c_00,(MethodInfo *)0x0);
                  pSVar21 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar20 & 0xffffffff),method_01);
                  if ((pSVar21 != (String *)0x0) && (iVar22 = func_?(), iVar22 == 0))
                  goto code_?;
                  if (args->max_length < 3) goto code_?;
                  args->vector[2] = (Object *)pSVar21;
                  if ((pSVar7 != (String *)0x0) && (iVar22 = func_?(), iVar22 == 0))
                  goto code_?;
                  if (args->max_length < 4) goto code_?;
                  args->vector[3] = (Object *)pSVar7;
                  CVar20 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                     ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                  pSVar7 = Styles::Styles_ColorToHex
                                      ((Color32)((ulonglong)CVar20 & 0xffffffff),method_02);
                  if ((pSVar7 != (String *)0x0) && (iVar22 = func_?(), iVar22 == 0))
                  goto code_?;
                  if (args->max_length < 5) goto code_?;
                  args->vector[4] = (Object *)pSVar7;
                  if ((pPVar4 != (Pool *)0x0) && (iVar22 = func_?(), iVar22 == 0))
                  goto code_?;
                  if (5 < args->max_length) {
                    args->vector[5] = (Object *)pPVar4;
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pSVar7 = mscorlib.dll::System::String::String_Format_3
                                        (StringLiteral__color___0____1_____color__color,args,
                                         (MethodInfo *)0x0);
                    return pSVar7;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((String__Class *)pPVar3->klass == TypeInfo__System__String) {
        pPVar4 = pPVar3;
      }
      if (pPVar4 != (Pool *)0x0) goto code_?;
      func_?(pPVar3,TypeInfo__System__String);
code_?:
      uVar23 = func_?(0,0);
      func_?(uVar23);
code_?:
      uVar23 = func_?(0);
      func_?(uVar23);
code_?:
      uVar23 = func_?(0,0);
      func_?(uVar23);
code_?:
      uVar23 = func_?(0);
      func_?(uVar23);
code_?:
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
code_?:
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
  }
code_?:
  uVar5 = func_?(0);
code_?:
  func_?(uVar5);
  pcVar24 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar24)();
  return pSVar7;
}


/* Void HandleSayChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_HandleSayChatMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int *)func_?(pPVar1);
        arg1 = (String *)*piVar2;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                     NamedThemeAttribute_1_UnityEngine_Color__get_Name
                               ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0
                               );
            if (pSVar5 == arg1) {
              pSVar5 = ChatControllerUGUI_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
              ChatControllerUGUI_AddLine(this,pSVar5,(MethodInfo *)0x0);
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame *)0x0) {
              pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
              if (pMVar4 != (MVLocalPlayer *)0x0) {
                bVar6 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar4,(MethodInfo *)0x0);
                if (bVar6 != 0) {
                  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  if (this_01 == (GameObject *)0x0) goto code_?;
                  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
                  if ((bVar6 != 0) &&
                     (this_00 = (Action_2_Int32_Object_ *)
                                TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                                OnSayChatMessageRecieved, this_00 != (Action_2_Int32_Object_ *)0x0))
                  {
                    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                              (this_00,(int32_t)arg1,(Object *)data,
                               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                              );
                  }
                }
                return;
              }
            }
          }
        }
      }
      else {
        func_?(pPVar1,TypeInfo__System__Int32);
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_HandleTeamChatMessage
               (ChatControllerUGUI *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar2 = (int32_t *)func_?(pPVar1);
      actorNr = *piVar2;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVAvatar *)0x0) {
        this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
        if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          other = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            ((MVPlayerContainer *)this_01,actorNr,(MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame *)0x0) {
            this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
            if (this_03 != (MVLocalPlayer *)0x0) {
              bVar3 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)this_03,other,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                text = ChatControllerUGUI_FormatTeamChatMessage(this,data,(MethodInfo *)0x0);
                ChatControllerUGUI_AddLine(this,text,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  pPVar1 = (Pool *)func_?();
code_?:
  func_?(pPVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Initialize
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).waitForLocalPlayerReady = 0;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_02 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (this_02,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
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
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
        pRVar5 = (this->fields).inputAreaRoot;
        if (pRVar5 != (RectTransform *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar5,(MethodInfo *)0x0);
          bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
            pRVar5 = (this->fields).inputAreaDeactivated;
            if (pRVar5 != (RectTransform *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
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
                  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_03,(Object *)this,
                             MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                             ,
                             MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                            );
                  pAVar7 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                            *)mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar6,(Delegate *)this_03,(MethodInfo *)0x0);
                  _uStack00000048 =
                       CONCAT44(TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                ,pAVar7);
                  pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                            *)0x0;
                  if (pAVar7 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                                 *)0x0) {
code_?:
                    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
                         pAVar6;
                    return;
                  }
                  if (pAVar7->klass ==
                      TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                     ) {
                    pAVar6 = pAVar7;
                  }
                  if (pAVar6 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                                 *)0x0) goto code_?;
                  goto code_?;
                }
                pIVar2 = (this->fields).inputField;
                if (pIVar2 != (InputField *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_DeactivateInputField
                            (pIVar2,(MethodInfo *)0x0);
                  this_01 = (this->fields).messageController;
                  if (this_01 != (SendMessageControl *)0x0) {
                    SendMessageControl::SendMessageControl_OnInputFocusChange
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
  _uStack00000048 = func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Text InstantiateNewLine() */

Text * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_InstantiateNewLine
                 (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).consoleLinePrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)pTVar1,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                             );
  this_00 = (this->fields).lines;
  if (this_00 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
               (SmoothPhysicsMovement_Package *)pTVar1,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (pTVar1 != (Text *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
        return pTVar1;
      }
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatControllerUGUI__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pAStack2 =
       (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
  if (pAStack2 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pAStack2->klass ==
        TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  0x0) {
      pAStack3 =
           TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar1;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnEnable
               (ChatControllerUGUI *this,MethodInfo *method)

{
  (this->fields).shouldUpdateFade = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLobbyStateChange(Boolean) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_OnLobbyStateChange
               (ChatControllerUGUI *this,bool cursorLocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = cursorLocked ^ 1;
  (this->fields).currentlyInLobbyState = bVar1;
  ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
  (this->fields).shouldUpdateFade = cursorLocked;
  ChatControllerUGUI_ChatFocusChanged(this,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar2 != 0) {
    bVar1 = 0;
  }
  pRVar3 = (this->fields).inputAreaRoot;
  if (pRVar3 != (RectTransform *)0x0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pRVar3,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pRVar3 = (this->fields).inputAreaDeactivated;
      if (pRVar3 != (RectTransform *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar3,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,bVar1 ^ 1,(MethodInfo *)0x0);
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
  pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     ((KogamaSettingNumericBase_1_System_Single_ *)pQVar1,
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__get_Count__
                     );
  if ((int)pIVar3 < 0x32) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    original = (in_stack_2->fields).consoleLinePrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    item = (SmoothPhysicsMovement_Package *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                     );
    pQVar1 = (in_stack_2->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (item == (SmoothPhysicsMovement_Package *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)item,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,(Transform *)(in_stack_2->fields).contentPanel,0,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar1 = (in_stack_2->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    item = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
           Queue_1_SmoothPhysicsMovement_Package__Dequeue
                     ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                     );
    pQVar1 = (in_stack_2->fields).lines;
    if (pQVar1 == (Queue_1_UnityEngine_UI_Text_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (item == (SmoothPhysicsMovement_Package *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)item,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar4,(Transform *)(in_stack_2->fields).contentPanel,0,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)item,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (pTVar4,(MethodInfo *)0x0);
  }
  if (item != (SmoothPhysicsMovement_Package *)0x0) {
    (*(code *)item->klass[3]._1.cctor_finished_or_no_cctor)();
    this_00 = (in_stack_2->fields).scrollRect;
    if (this_00 != (ScrollRect *)0x0) {
      fVar5 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
              ScrollRect_get_verticalNormalizedPosition(this_00,(MethodInfo *)0x0);
      if (fVar5 == _UNK_?) {
code_?:
        ChatControllerUGUI_UpdateFadeTime(in_stack_2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar6 == MVGameMode__Enum_Play) {
          (in_stack_2->fields).shouldUpdateFade =
               (in_stack_2->fields).currentlyInLobbyState == 0;
        }
        return;
      }
      pVVar7 = (in_stack_2->fields).textGroup;
      if (pVVar7 != (VerticalLayoutGroup *)0x0) {
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pVVar7,(MethodInfo *)0x0);
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,0,(MethodInfo *)0x0);
          pVVar7 = (in_stack_2->fields).textGroup;
          if (pVVar7 != (VerticalLayoutGroup *)0x0) {
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pVVar7,(MethodInfo *)0x0);
            if (pGVar8 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,1,(MethodInfo *)0x0);
              goto code_?;
            }
          }
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


/* Void ReceiveMessage(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ReceiveMessage
               (ChatControllerUGUI *this,MVGameMsgType__Enum msgType,
               Dictionary_2_System_Object_System_Object_ *message,MethodInfo *method)

{
  switch(msgType) {
  case MVGameMsgType__Enum_Chat:
    ChatControllerUGUI_AddChatLine(this,message,(MethodInfo *)0x0);
    return;
  case MVGameMsgType__Enum_TeamChat:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    msgType = msgType & 0xffffff;
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    data = message;
    if ((message != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)message,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        actorNr = *piVar3;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if ((this_00 != (MVAvatar *)0x0) &&
           (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
           this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
          other = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            ((MVPlayerContainer *)this_01,actorNr,(MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_02 != (MVNetworkGame *)0x0) &&
             (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
             this_03 != (MVLocalPlayer *)0x0)) {
            bVar4 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)this_03,other,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              return;
            }
            pSVar5 = ChatControllerUGUI_FormatTeamChatMessage
                               ((ChatControllerUGUI *)0x0,data,(MethodInfo *)0x0);
            ChatControllerUGUI_AddLine((ChatControllerUGUI *)0x0,pSVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        func_?();
      }
    }
    break;
  case MVGameMsgType__Enum_SayChat:
    ChatControllerUGUI_HandleSayChatMessage(this,message,(MethodInfo *)0x0);
    return;
  default:
    if (msgType != MVGameMsgType__Enum_AdminMsg) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    msgType = CONCAT13(5,(undefined3)msgType);
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)message,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_04 = (Pool *)0x0;
      if (pPVar2 != (Pool *)0x0) {
        if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
          this_04 = pPVar2;
        }
        if (this_04 == (Pool *)0x0) goto code_?;
      }
      fVar6 = (this->fields).systemMessageColor.r;
      fVar7 = (this->fields).systemMessageColor.g;
      fVar8 = (this->fields).systemMessageColor.b;
      fVar9 = (this->fields).systemMessageColor.a;
code_?:
      c.g = fVar7;
      c.r = fVar6;
      c.b = fVar8;
      c.a = fVar9;
      CVar10 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        message = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__Styles;
        msgType = (MVGameMsgType__Enum)&UNK_?;
        func_?();
      }
      message = (Dictionary_2_System_Object_System_Object_ *)0x0;
      msgType = CVar10.rgba;
      arg0 = (MethodInfo *)
             Styles::Styles_ColorToHex((Color32)((ulonglong)CVar10 & 0xffffffff),method);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = (Dictionary_2_System_Object_System_Object_ *)StringLiteral__color___0___1___color_;
      msgType = (MVGameMsgType__Enum)&UNK_?;
      method = arg0;
      pSVar5 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__color___0___1___color_,(Object *)arg0,(Object *)this_04,
                          (MethodInfo *)0x0);
      method = (MethodInfo *)this;
      message = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      ChatControllerUGUI_AddLine(this,pSVar5,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVGameMsgType__Enum_Warning:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    msgType = CONCAT13(5,(undefined3)msgType);
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    if ((message != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)message,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar2 != (Pool *)0x0)) {
      this_04 = (Pool *)0x0;
      if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
        this_04 = pPVar2;
      }
      if (this_04 != (Pool *)0x0) {
        pIVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_04,(MethodInfo *)0x0);
        if (0x600 < (int)pIVar11) {
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_04,0,0x600,(MethodInfo *)0x0);
        }
        fVar6 = (this->fields).warningColor.r;
        fVar7 = (this->fields).warningColor.g;
        fVar8 = (this->fields).warningColor.b;
        fVar9 = (this->fields).warningColor.a;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  uRam_? = uRam_? & (uint)&stack0xfffffff0;
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Text ReuseLine() */

Text * Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ReuseLine
                 (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    pTVar2 = (Text *)System.dll::System::Collections::Generic::
                     Queue`1[SmoothPhysicsMovement+Package]::
                     Queue_1_SmoothPhysicsMovement_Package__Dequeue
                               ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
                                MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                               );
    pQVar1 = (this->fields).lines;
    if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
                 (SmoothPhysicsMovement_Package *)pTVar2,
                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                );
      if (pTVar2 != (Text *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar3,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar3,(MethodInfo *)0x0);
            return pTVar2;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pTVar2 = (Text *)(*pcVar4)();
  return pTVar2;
}


/* Void ScrollbarChanged(Vector2) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_ScrollbarChanged
               (ChatControllerUGUI *this,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).shouldUpdateFade = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__ChatControllerUGUI___Start_m__0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar1,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pSVar2 = (this->fields).messageController;
  if (pSVar2 != (SendMessageControl *)0x0) {
    pUVar3 = (pSVar2->fields).DoSend;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,MethodInfo__ChatControllerUGUI__ChatFocusChanged_bool_,
               MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
              );
    pUVar4 = (UnityAction_1_System_Boolean_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_1_System_Boolean_ *)0x0;
    if (pUVar4 != (UnityAction_1_System_Boolean_ *)0x0) {
      if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction<bool>) {
        pUVar3 = pUVar4;
      }
      if (pUVar3 == (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
    }
    (pSVar2->fields).DoSend = pUVar3;
    pSVar2 = (this->fields).messageController;
    if (pSVar2 != (SendMessageControl *)0x0) {
      pUVar5 = (pSVar2->fields).SpamWarning;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,MethodInfo__ChatControllerUGUI__WarnForSpam__,
                 (MethodInfo *)0x0);
      pUVar6 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar5,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pUVar5 = (UnityAction *)0x0;
      if (pUVar6 != (UnityAction *)0x0) {
        if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar5 = pUVar6;
        }
        if (pUVar5 == (UnityAction *)0x0) goto code_?;
      }
      (pSVar2->fields).SpamWarning = pUVar5;
      pSVar2 = (this->fields).messageController;
      if (pSVar2 != (SendMessageControl *)0x0) {
        SendMessageControl::SendMessageControl_set_SayChatColor
                  (pSVar2,(this->fields).sayColor,(MethodInfo *)0x0);
        pSVar2 = (this->fields).messageController;
        if (pSVar2 != (SendMessageControl *)0x0) {
          SendMessageControl::SendMessageControl_InitializeToSayChat(pSVar2,(MethodInfo *)0x0);
          this_00 = (this->fields).scrollRect;
          if (this_00 != (ScrollRect *)0x0) {
            this_01 = (UnityEvent_1_System_String_ *)
                      InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
            pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar1,(Object *)this,
                       MethodInfo__ChatControllerUGUI__ScrollbarChanged_UnityEngine__Vector2_,
                       MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>__UnityAction_System__Object__void__
                      );
            if (this_01 != (UnityEvent_1_System_String_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
              UnityEvent_1_System_String__AddListener
                        (this_01,(UnityAction_1_System_String_ *)pUVar1,
                         MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__AddListener_UnityEngine__Events__UnityAction<UnityEngine::Vector2>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SubscribeToMessages() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages
               (ChatControllerUGUI *this,MethodInfo *method)

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
             MethodInfo__ChatControllerUGUI__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnReceivedGameMsgDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Combine
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


/* Void Update() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_Update
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waitForLocalPlayerReady == 0) {
    this_00 = (this->fields).inputField;
    if (this_00 != (InputField *)0x0) {
      bVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_isFocused
                        (this_00,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        ChatControllerUGUI_UpdateFadeTime(this,(MethodInfo *)0x0);
      }
      if (((this->fields).shouldUpdateFade != 0) &&
         (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         _UNK_? <= fVar2 - (this->fields).startTime)) {
        method_00 = (MethodInfo *)(this->fields).currFade;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
        t = (undefined *)(fVar2 + (float)method_00);
        pCVar3 = (this->fields).canvasGroup;
        (this->fields).currFade = (float)t;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
          t = &UNK_?;
        }
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (1.0,0.0,(float)t,(MethodInfo *)0x0);
        if (pCVar3 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar3,fVar2,(MethodInfo *)0x0);
        if (_UNK_? <= (this->fields).currFade) {
          pCVar3 = (this->fields).canvasGroup;
          (this->fields).shouldUpdateFade = 0;
          if (pCVar3 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                    (pCVar3,0,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 != (MVNetworkGame *)0x0) &&
       (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       this_02 != (MVLocalPlayer *)0x0)) {
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      ChatControllerUGUI_InitializeReady(this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateFadeTime() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_UpdateFadeTime
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WarnForSpam() */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI_WarnForSpam
               (ChatControllerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  text = TM::TM__(StringLiteral_Warning__You_are_sending_too_man,(MethodInfo *)0x0);
  ChatControllerUGUI_AddLine(this,text,(MethodInfo *)0x0);
  return;
}


/* Void <Start>m__0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::ChatControllerUGUI::ChatControllerUGUI__Start_m__0
               (ChatControllerUGUI *this,IShortcutKeyRegister *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__ChatControllerUGUI__ChatHotkeyPressed__,
             (MethodInfo *)0x0);
  if (x == (IShortcutKeyRegister *)0x0) {
    func_?(0);
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
        ppMVar5 = &(&x->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].RegisterShortcutKey.
                   method;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_UnityEngine_UI_Text_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  (this->fields).lines = this_00;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->r;
  fVar4 = pCVar1->g;
  fVar5 = pCVar1->b;
  fVar6 = pCVar1->a;
  (this->fields).promptRegisterForChat = 1;
  (this->fields).warningColor.r = fVar3;
  (this->fields).warningColor.g = fVar4;
  (this->fields).warningColor.b = fVar5;
  (this->fields).warningColor.a = fVar6;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

