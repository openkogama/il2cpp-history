
/* Void AddAdminMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddAdminMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
                       ((String *)0x0,(Object *)pSVar5,(Object *)arg1,(MethodInfo *)0x0);
    AndroidChatController_AddLine(this,pSVar5,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddChatLine
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
            this_04 = this_02;
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
                      data = (Dictionary_2_System_Object_System_Object_ *)
                             (this->fields).chatMessageFormat;
                      if (bVar16 != 0) {
                        data = (Dictionary_2_System_Object_System_Object_ *)
                               (this->fields).chatMessageFromFriend;
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
                                          ((GamePointGainEffect *)this_04,(MethodInfo *)0x0);
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
                                                ((String *)data,args,(MethodInfo *)0x0);
                            AndroidChatController_AddLine(this,pSVar18,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddLine
               (AndroidChatController *this,String *text,MethodInfo *method)

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
    text = (String *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)item,(MethodInfo *)0x0);
    if (text == (String *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              ((Transform *)text,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
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
    text = (String *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)item,(MethodInfo *)0x0);
    if (text == (String *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              ((Transform *)text,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)item,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (this_00,(MethodInfo *)0x0);
  }
  if (item != (SmoothPhysicsMovement_Package *)0x0) {
    puStack3 = (undefined *)item->klass[3]._1.cctor_thread;
    pSStack4 = text;
    pSStack5 = item;
    (*(code *)item->klass[3]._1.cctor_finished_or_no_cctor)();
    return;
  }
code_?:
  puStack3 = (undefined *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddWarningMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddWarningMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
        pSVar4 = (String *)(this->fields).warningMessageColor.a;
        CVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          ((this->fields).warningMessageColor,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar5 & 0xffffffff),in_stack_6)
        ;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar4 = mscorlib.dll::System::String::String_Format_1
                           (pSVar4,(Object *)arg0,(Object *)this_00,(MethodInfo *)0x0);
        AndroidChatController_AddLine(this,pSVar4,(MethodInfo *)0x0);
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


/* String FormatSayChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_FormatSayChatMessage
                   (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
      method_01 = (MethodInfo *)CONCAT13((char)((uint)uVar1 >> 0x18),(uint3)(ushort)uVar1);
      method_00 = (MethodInfo *)&UNK_?;
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
          this_05 = this_02;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_03 != (MVNetworkGame *)0x0) &&
             (this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)this_03,(MethodInfo *)0x0),
             this_04 != (SkyParam *)0x0)) {
            iVar9 = MVTeamManager::MVTeamManager_TeamCount
                              ((MVTeamManager *)this_04,(MethodInfo *)0x0);
            if (1 < iVar9) {
              if (this_02 == (MVPlayer *)0x0) goto code_?;
              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)this_02,
                                (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                method_00 = (MethodInfo *)&UNK_?;
                func_?(TypeInfo__Styles);
              }
              pCVar14 = Styles::Styles_GetTeamColor
                                 ((Color *)&stack0xffffffe4,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
              fVar10 = pCVar14->r;
              fVar11 = pCVar14->g;
              fVar12 = pCVar14->b;
              fVar13 = pCVar14->a;
            }
            pMVar15 = (MethodInfo *)&UNK_?;
            args = (Object__Array *)func_?(TypeInfo__System__Object,6);
            c.g = fVar11;
            c.r = fVar10;
            c.b = fVar12;
            c.a = fVar13;
            CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            pSVar17 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar16 & 0xffffffff),pMVar15);
            if (args != (Object__Array *)0x0) {
              if ((pSVar17 != (String *)0x0) &&
                 (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
              goto code_?;
              if (args->max_length == 0) goto code_?;
              args->vector[0] = (Object *)pSVar17;
              if ((this_05 != (MVPlayer *)0x0) &&
                 (iVar9 = GamePointGainEffect::GamePointGainEffect_get_ID
                                    ((GamePointGainEffect *)this_05,(MethodInfo *)0x0), iVar9 != 0))
              {
                pMVar15 = *(MethodInfo **)(iVar9 + 0xc);
                if ((pMVar15 != (MethodInfo *)0x0) &&
                   (method_00 = pMVar15,
                   iVar18 = func_?(pMVar15,(args->klass->_0).element_class), iVar18 == 0))
                goto code_?;
                if (args->max_length < 2) goto code_?;
                args->vector[1] = (Object *)pMVar15;
                CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   ((this->fields).sayColor,(MethodInfo *)0x0);
                pSVar17 = Styles::Styles_ColorToHex
                                   ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                if ((pSVar17 != (String *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (args->max_length < 3) goto code_?;
                args->vector[2] = (Object *)pSVar17;
                if ((pSVar8 != (String *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (args->max_length < 4) goto code_?;
                args->vector[3] = (Object *)pSVar8;
                CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                pSVar8 = Styles::Styles_ColorToHex
                                   ((Color32)((ulonglong)CVar16 & 0xffffffff),method_01);
                if ((pSVar8 != (String *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (args->max_length < 5) goto code_?;
                args->vector[4] = (Object *)pSVar8;
                if ((pPVar5 != (Pool *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (5 < args->max_length) {
                  args->vector[5] = (Object *)pPVar5;
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
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
      uVar1 = func_?(0,0);
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
  pcVar19 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar19)();
  return pSVar8;
}


/* String FormatTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_FormatTeamChatMessage
                   (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
      method_01 = (MethodInfo *)CONCAT13((char)((uint)uVar1 >> 0x18),(uint3)(ushort)uVar1);
      method_00 = (MethodInfo *)&UNK_?;
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
        pSVar8 = StringLiteral__Team_;
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
          this_05 = this_02;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_03 != (MVNetworkGame *)0x0) &&
             (this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                  ((DayNightCycle *)this_03,(MethodInfo *)0x0),
             this_04 != (SkyParam *)0x0)) {
            iVar9 = MVTeamManager::MVTeamManager_TeamCount
                              ((MVTeamManager *)this_04,(MethodInfo *)0x0);
            if (1 < iVar9) {
              if (this_02 == (MVPlayer *)0x0) goto code_?;
              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)this_02,
                                (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Styles->_1).cctor_started == 0)) {
                method_00 = (MethodInfo *)&UNK_?;
                func_?(TypeInfo__Styles);
              }
              pCVar14 = Styles::Styles_GetTeamColor
                                 ((Color *)&stack0xffffffe4,(MVTeam__Enum)team,0,(MethodInfo *)0x0);
              fVar10 = pCVar14->r;
              fVar11 = pCVar14->g;
              fVar12 = pCVar14->b;
              fVar13 = pCVar14->a;
            }
            pMVar15 = (MethodInfo *)&UNK_?;
            args = (Object__Array *)func_?(TypeInfo__System__Object,6);
            c.g = fVar11;
            c.r = fVar10;
            c.b = fVar12;
            c.a = fVar13;
            CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                               (c,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            pSVar17 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar16 & 0xffffffff),pMVar15);
            if (args != (Object__Array *)0x0) {
              if ((pSVar17 != (String *)0x0) &&
                 (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
              goto code_?;
              if (args->max_length == 0) goto code_?;
              args->vector[0] = (Object *)pSVar17;
              if ((this_05 != (MVPlayer *)0x0) &&
                 (iVar9 = GamePointGainEffect::GamePointGainEffect_get_ID
                                    ((GamePointGainEffect *)this_05,(MethodInfo *)0x0), iVar9 != 0))
              {
                pMVar15 = *(MethodInfo **)(iVar9 + 0xc);
                if ((pMVar15 != (MethodInfo *)0x0) &&
                   (method_00 = pMVar15,
                   iVar18 = func_?(pMVar15,(args->klass->_0).element_class), iVar18 == 0))
                goto code_?;
                if (args->max_length < 2) goto code_?;
                args->vector[1] = (Object *)pMVar15;
                c_00.g = fVar11;
                c_00.r = fVar10;
                c_00.b = fVar12;
                c_00.a = fVar13;
                CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   (c_00,(MethodInfo *)0x0);
                pSVar17 = Styles::Styles_ColorToHex
                                   ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                if ((pSVar17 != (String *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (args->max_length < 3) goto code_?;
                args->vector[2] = (Object *)pSVar17;
                if ((pSVar8 != (String *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (args->max_length < 4) goto code_?;
                args->vector[3] = (Object *)pSVar8;
                CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                pSVar8 = Styles::Styles_ColorToHex
                                   ((Color32)((ulonglong)CVar16 & 0xffffffff),method_01);
                if ((pSVar8 != (String *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (args->max_length < 5) goto code_?;
                args->vector[4] = (Object *)pSVar8;
                if ((pPVar5 != (Pool *)0x0) && (iVar18 = func_?(), iVar18 == 0))
                goto code_?;
                if (5 < args->max_length) {
                  args->vector[5] = (Object *)pPVar5;
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
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
      uVar1 = func_?(0,0);
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
  pcVar19 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar19)();
  return pSVar8;
}


/* Void HandleSayChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_HandleSayChatMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
              pSVar5 = AndroidChatController_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
              AndroidChatController_AddLine(this,pSVar5,(MethodInfo *)0x0);
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
                if ((bVar6 != 0) &&
                   (this_00 = (Action_2_Int32_Object_ *)
                              TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                              OnSayChatMessageRecieved, this_00 != (Action_2_Int32_Object_ *)0x0)) {
                  System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                            (this_00,(int32_t)arg1,(Object *)data,
                             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                            );
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_HandleTeamChatMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
          this_02 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)this_01,actorNr,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame *)0x0) {
            other = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
            if (this_02 != (MVPlayer *)0x0) {
              bVar3 = MVPlayer::MVPlayer_IsOnSameTeam(this_02,(MVPlayer *)other,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                text = AndroidChatController_FormatTeamChatMessage(this,data,(MethodInfo *)0x0);
                AndroidChatController_AddLine(this,text,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_Initialize
               (AndroidChatController *this,MethodInfo *method)

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
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__AndroidChatController__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar3 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
  if (pMVar3 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
code_?:
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar1;
    pCVar4 = (this->fields).enterChatButton;
    if (pCVar4 != (ConsoleDragAndTapHandler *)0x0) {
      a = (pCVar4->fields).OnClick;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,MethodInfo__AndroidChatController__OnChatModeTapped__,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((UnityAction__Class *)pDVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar6 = pDVar5;
        }
        if (pDVar6 == (Delegate *)0x0) goto code_?;
      }
      (a->fields)._._.invoke_impl = pDVar6;
      pAVar7 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar8 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pAVar7 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
      ;
      if (pAVar8 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        if (pAVar8->klass ==
            TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar7 = pAVar8;
        }
        if (pAVar7 ==
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0)
        goto code_?;
      }
      TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar7;
      pXVar9 = (XpBoostParticlePreviewer *)(this->fields).chatConsoleModes;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar9,
                          ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes_
                         );
      (this->fields).chatConsoleModes = (ChatConsoleModes *)pXVar9;
      if (pXVar9 != (XpBoostParticlePreviewer *)0x0) {
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pXVar9,(MethodInfo *)0x0);
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar11,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar10,pTVar11,0,(MethodInfo *)0x0);
            this_00 = (this->fields).messageController;
            if (this_00 != (SendMessageControl *)0x0) {
              SendMessageControl::SendMessageControl_set_SayChatColor
                        (this_00,(this->fields).sayColor,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar10 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                          (pTVar10,(MethodInfo *)0x0);
                pCVar4 = (this->fields).enterChatButton;
                if (pCVar4 != (ConsoleDragAndTapHandler *)0x0) {
                  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)pCVar4,(MethodInfo *)0x0);
                  if (pGVar12 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar12,1,(MethodInfo *)0x0);
                    this_01 = (this->fields).chatConsoleModes;
                    if (this_01 != (ChatConsoleModes *)0x0) {
                      ChatConsoleModes::ChatConsoleModes_Set
                                (this_01,ChatConsoleMode__Enum_ChatLobbyMode,
                                 &(this->fields).rectTransform,(MethodInfo *)0x0);
                      this_02 = (this->fields).inputAreaRoot;
                      if (this_02 != (RectTransform *)0x0) {
                        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_gameObject
                                            ((Component_1 *)this_02,(MethodInfo *)0x0);
                        bVar13 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                          ((MethodInfo *)0x0);
                        if (pGVar12 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar12,bVar13 == 0,(MethodInfo *)0x0);
                          AndroidChatController_SetMode
                                    (this,ChatConsoleMode__Enum_ChatLobbyMode,(MethodInfo *)0x0);
                          return;
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
    func_?();
  }
  else {
    if (pMVar3->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar1 = pMVar3;
    }
    if (pMVar1 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Text InstantiateNewLine() */

Text * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_InstantiateNewLine
                 (AndroidChatController *this,MethodInfo *method)

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


/* Void OnChatModeTapped() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnChatModeTapped
               (AndroidChatController *this,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pCVar1,
                        (MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x1) {
      AndroidChatController_SetMode(this,ChatConsoleMode__Enum_PlayMode,(MethodInfo *)0x0);
      return;
    }
    pCVar1 = (this->fields).chatConsoleModes;
    if (pCVar1 != (ChatConsoleModes *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pCVar1,
                          (MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x2) {
        AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatPlayMode,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnDestroy
               (AndroidChatController *this,MethodInfo *method)

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
             MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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


/* Void OnLobbyStateChange(Boolean) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnLobbyStateChange
               (AndroidChatController *this,bool inLobbyState,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pCVar1,
                        (MethodInfo *)0x0);
    if ((pOVar2 == (Object *)0x0) && (inLobbyState == 0)) {
      AndroidChatController_SetMode(this,ChatConsoleMode__Enum_PlayMode,(MethodInfo *)0x0);
      return;
    }
    pCVar1 = (this->fields).chatConsoleModes;
    if (pCVar1 != (ChatConsoleModes *)0x0) {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
      JsonProperty]::
      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pCVar1,
                 (MethodInfo *)0x0);
      AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatLobbyMode,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSayChatMessageHeard(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnSayChatMessageHeard
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  AndroidChatController_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_1 + 0x1c) ==
      (KogamaSettingNumericBase_1_System_Single_ *)0x0) goto code_?;
  pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
           KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                     (*(KogamaSettingNumericBase_1_System_Single_ **)(in_stack_1 + 0x1c),
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__get_Count__
                     );
  if ((int)pIVar2 < 0x32) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    original = *(XpBoostParticlePreviewer **)(in_stack_1 + 0x44);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    item = (SmoothPhysicsMovement_Package *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                     );
    if (*(Queue_1_SmoothPhysicsMovement_Package_ **)(in_stack_1 + 0x1c) ==
        (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              (*(Queue_1_SmoothPhysicsMovement_Package_ **)(in_stack_1 + 0x1c),item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (item == (SmoothPhysicsMovement_Package *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)item,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,*(Transform **)(in_stack_1 + 0x48),0,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (*(Queue_1_SmoothPhysicsMovement_Package_ **)(in_stack_1 + 0x1c) ==
        (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    item = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
           Queue_1_SmoothPhysicsMovement_Package__Dequeue
                     (*(Queue_1_SmoothPhysicsMovement_Package_ **)(in_stack_1 + 0x1c),
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                     );
    if (*(Queue_1_SmoothPhysicsMovement_Package_ **)(in_stack_1 + 0x1c) ==
        (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              (*(Queue_1_SmoothPhysicsMovement_Package_ **)(in_stack_1 + 0x1c),item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    if (item == (SmoothPhysicsMovement_Package *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)item,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,*(Transform **)(in_stack_1 + 0x48),0,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)item,(MethodInfo *)0x0);
    if (this_01 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (this_01,(MethodInfo *)0x0);
  }
  if (item != (SmoothPhysicsMovement_Package *)0x0) {
    puStack3 = (undefined *)item->klass[3]._1.cctor_thread;
    pSStack4 = item;
    pTStack5 = this_00;
    (*(code *)item->klass[3]._1.cctor_finished_or_no_cctor)();
    return;
  }
code_?:
  puStack3 = (undefined *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReceiveMessage(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_ReceiveMessage
               (AndroidChatController *this,MVGameMsgType__Enum msgType,
               Dictionary_2_System_Object_System_Object_ *message,MethodInfo *method)

{
  switch(msgType) {
  case MVGameMsgType__Enum_Chat:
    AndroidChatController_AddChatLine(this,message,(MethodInfo *)0x0);
    return;
  case MVGameMsgType__Enum_TeamChat:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    msgType = msgType & 0xffffff;
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    unaff_ESI = message;
    bVar2 = 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)message,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      bVar2 = 0;
      if (pPVar3 != (Pool *)0x0) {
        pIVar4 = (pPVar3->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar4 < pIVar5;
        if (pIVar4 == pIVar5) {
          piVar6 = (int32_t *)func_?(pPVar3);
          unaff_EDI = (MVPlayer *)*piVar6;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_00 = (MVAvatar *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar2 = 0;
          if (this_00 != (MVAvatar *)0x0) {
            this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
            bVar2 = 0;
            if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
              unaff_EDI = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                    ((MVPlayerContainer *)this_01,(int32_t)unaff_EDI,
                                     (MethodInfo *)0x0);
              this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar2 = 0;
              if (this_02 != (MVNetworkGame *)0x0) {
                other = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
                bVar2 = 0;
                if (unaff_EDI != (MVPlayer *)0x0) {
                  bVar7 = MVPlayer::MVPlayer_IsOnSameTeam
                                    (unaff_EDI,(MVPlayer *)other,(MethodInfo *)0x0);
                  if (bVar7 == 0) {
                    return;
                  }
                  pSVar8 = AndroidChatController_FormatTeamChatMessage
                                      (this,unaff_ESI,(MethodInfo *)0x0);
                  AndroidChatController_AddLine(this,pSVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          func_?(pPVar3,TypeInfo__System__Int32);
        }
      }
    }
    break;
  case MVGameMsgType__Enum_SayChat:
    AndroidChatController_HandleSayChatMessage(this,message,(MethodInfo *)0x0);
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
    bVar2 = 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar9 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)message,pTVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      this_03 = (MethodInfo *)0x0;
      if (pMVar9 != (MethodInfo *)0x0) {
        if ((String__Class *)pMVar9->methodPointer == TypeInfo__System__String) {
          this_03 = pMVar9;
        }
        bVar2 = 0;
        unaff_EDI = (MVPlayer *)0x0;
        pSVar10 = TypeInfo__System__String;
        if (this_03 == (MethodInfo *)0x0) goto code_?;
      }
      pSVar8 = (this->fields).adminMessageFormat;
      fVar11 = (this->fields).systemMessageColor.r;
      fVar12 = (this->fields).systemMessageColor.g;
      fVar13 = (this->fields).systemMessageColor.b;
      fVar14 = (this->fields).systemMessageColor.a;
code_?:
      c.g = fVar12;
      c.r = fVar11;
      c.b = fVar13;
      c.a = fVar14;
      CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        msgType = (MVGameMsgType__Enum)TypeInfo__Styles;
        func_?();
      }
      msgType = MVGameMsgType__Enum_AvatarKilled;
      arg0 = (Dictionary_2_System_Object_System_Object_ *)
             Styles::Styles_ColorToHex
                       ((Color32)((ulonglong)CVar15 & 0xffffffff),(MethodInfo *)message);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      msgType = (MVGameMsgType__Enum)pSVar8;
      message = arg0;
      method = this_03;
      method = (MethodInfo *)
               mscorlib.dll::System::String::String_Format_1
                         ((String *)msgType,(Object *)arg0,(Object *)this_03,(MethodInfo *)0x0);
      message = (Dictionary_2_System_Object_System_Object_ *)this;
      msgType = (MVGameMsgType__Enum)&UNK_?;
      AndroidChatController_AddLine(this,(String *)method,(MethodInfo *)0x0);
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
    bVar2 = 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar9 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)message,pTVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      bVar2 = 0;
      if (pMVar9 != (MethodInfo *)0x0) {
        this_03 = (MethodInfo *)0x0;
        if ((String__Class *)pMVar9->methodPointer == TypeInfo__System__String) {
          this_03 = pMVar9;
        }
        bVar2 = 0;
        unaff_EDI = (MVPlayer *)0x0;
        pSVar10 = TypeInfo__System__String;
        if (this_03 == (MethodInfo *)0x0) goto code_?;
        pIVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
        if (0x600 < (int)pIVar16) {
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_03,0,0x600,(MethodInfo *)0x0);
        }
        pSVar8 = (this->fields).warningMessageFormat;
        fVar11 = (this->fields).warningMessageColor.r;
        fVar12 = (this->fields).warningMessageColor.g;
        fVar13 = (this->fields).warningMessageColor.b;
        fVar14 = (this->fields).warningMessageColor.a;
        goto code_?;
      }
    }
  }
  pMVar9 = (MethodInfo *)func_?(0);
  pSVar10 = extraout_ECX;
code_?:
  uVar17 = func_?(pMVar9,pSVar10);
  LOCK();
  cVar18 = *unaff_EBX;
  *unaff_EBX = (char)((uint)uVar17 >> 8);
  UNLOCK();
  pbVar19 = (byte *)((int)&(unaff_ESI->fields).count +
                   CONCAT22((short)((uint)uVar17 >> 0x10),CONCAT11(cVar18,(char)uVar17)) * 4 + 3);
  bVar20 = CARRY1(*pbVar19,extraout_DH) || CARRY1(*pbVar19 + extraout_DH,bVar2);
  *pbVar19 = *pbVar19 + extraout_DH + bVar2;
  pbVar19 = (byte *)((int)&unaff_EDI[0xf8b53a].fields.OnLevelChanged + 3);
  bVar2 = *pbVar19;
  bVar21 = *pbVar19;
  *pbVar19 = bVar21 + extraout_CL + bVar20;
  *unaff_EBX = cVar18;
  pcVar22 = (char *)((int)&unaff_ESI[-0xffb08d].fields.hcp + 3);
  *pcVar22 = *pcVar22 + cVar18 + (CARRY1(bVar2,extraout_CL) || CARRY1(bVar21 + extraout_CL,bVar20));
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Text ReuseLine() */

Text * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_ReuseLine
                 (AndroidChatController *this,MethodInfo *method)

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


/* Void SetMode(ChatConsoleMode) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_SetMode
               (AndroidChatController *this,ChatConsoleMode__Enum chatConsoleMode,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (chatConsoleMode == ChatConsoleMode__Enum_ChatLobbyMode) {
    pCVar1 = (this->fields).enterChatButton;
    if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
    ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_SetScrollingEnabled
              (pCVar1,1,(MethodInfo *)0x0);
    pRVar2 = (this->fields).inputAreaRoot;
    if (pRVar2 == (RectTransform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pRVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).minimizeChat;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).expandChat;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)0x0;
    bVar4 = 0;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,bVar4,method_00);
  }
  else {
    if (chatConsoleMode == ChatConsoleMode__Enum_ChatPlayMode) {
      pCVar1 = (this->fields).enterChatButton;
      if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_SetScrollingEnabled
                (pCVar1,1,(MethodInfo *)0x0);
      if ((this->fields).promptRegisterForChat != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar4 != 0) {
          (this->fields).promptRegisterForChat = 0;
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?(TypeInfo__NotificationController);
          }
          NotificationController::NotificationController_PushNotification_1
                    (NotificationType__Enum_RegisterToChat,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
        }
      }
      pRVar2 = (this->fields).inputAreaRoot;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).expandChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)
         ) goto code_?;
      method_00 = (MethodInfo *)0x0;
      bVar4 = 0;
      goto code_?;
    }
    if (chatConsoleMode == ChatConsoleMode__Enum_PlayMode) {
      pCVar1 = (this->fields).enterChatButton;
      if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_SetScrollingEnabled
                (pCVar1,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).inputAreaRoot;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (method_00 = (MethodInfo *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pRVar2,(MethodInfo *)0x0),
         method_00 == (MethodInfo *)0x0)) goto code_?;
      bVar4 = 0x7f;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)method_00,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).expandChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)
         ) goto code_?;
      goto code_?;
    }
  }
  this_00 = (this->fields).chatConsoleModes;
  if (this_00 != (ChatConsoleModes *)0x0) {
    ChatConsoleModes::ChatConsoleModes_Set
              (this_00,chatConsoleMode,&(this->fields).rectTransform,(MethodInfo *)0x0);
    this_01 = (this->fields).scrollRect;
    if (this_01 != (ScrollRect *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_SetVerticalNormalizedPosition
                (this_01,0.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AndroidChatController() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController__ctor
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).adminMessageFormat = StringLiteral__color___0___1___color_;
  (this->fields).chatMessageFromFriend = StringLiteral__color___0___b___1______b___colo;
  (this->fields).chatMessageFormat = StringLiteral__color___0____1______color__colo;
  (this->fields).warningMessageFormat = StringLiteral__color___0___1___color_;
  this_00 = (Queue_1_UnityEngine_UI_Text_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  (this->fields).lines = this_00;
  (this->fields).promptRegisterForChat = 1;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).warningMessageColor.r = pCVar1->r;
  (this->fields).warningMessageColor.g = fVar3;
  (this->fields).warningMessageColor.b = fVar4;
  (this->fields).warningMessageColor.a = fVar5;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

