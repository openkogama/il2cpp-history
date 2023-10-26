
/* Void AddAdminMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddAdminMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
    cRam_? = '\x01';
  }
  uStack_1 = CONCAT13(5,(undefined3)uStack_1);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar2 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    format = (String *)0x0;
    if (pSVar2 != (String *)0x0) {
      if (pSVar2->klass == TypeInfo__System__String) {
        format = pSVar2;
      }
      pSVar3 = TypeInfo__System__String;
      if (format == (String *)0x0) goto code_?;
    }
    CVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                      ((this->fields).systemMessageColor,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar4 & 0xffffffff),method);
    pSVar2 = mscorlib.dll::System::String::String_Format_1
                       (format,(Object *)pSVar2,(Object *)format,(MethodInfo *)0x0);
    AndroidChatController_AddLine(this,pSVar2,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (String *)func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(pSVar2,pSVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddChatLine(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddChatLine
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
        pMStack_12 = pMVar11;
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
            pCVar13 = Styles::Styles_GetTeamColor
                                (&CStack_9,(MVTeam__Enum)method_00,0,(MethodInfo *)0x0);
            CStack_9.r = pCVar13->r;
            CStack_9.g = pCVar13->g;
            CStack_9.b = pCVar13->b;
            CStack_9.a = pCVar13->a;
          }
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar10 != (MVNetworkGame *)0x0) && (pMVar11 != (MVPlayer *)0x0)) &&
             (method_01 = (MethodInfo *)(pMVar10->fields)._Friends_k__BackingField,
             method_01 != (MethodInfo *)0x0)) {
            bVar14 = FriendList::FriendList_IsFriend
                              ((FriendList *)method_01,(pMVar11->fields)._ProfileID_k__BackingField,
                               (MethodInfo *)0x0);
            data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).chatMessageFormat;
            if (bVar14 != 0) {
              data = (Dictionary_2_System_Object_System_Object_ *)
                     (this->fields).chatMessageFromFriend;
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
                pUVar18 = (pMStack_12->fields)._UserProfileData_k__BackingField;
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
                                          ((String *)data,args,(MethodInfo *)0x0);
                      AndroidChatController_AddLine(this,pSVar16,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddLine
               (AndroidChatController *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
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
      this_00 = (String *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)original,pTVar2,0,
                           UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                          );
      pQVar1 = (this->fields).lines;
      if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)pQVar1,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                  );
        if (this_00 != (String *)0x0) {
code_?:
          (*(code *)this_00->klass[1].vtable.ToString_1.method)
                    (this_00,text,this_00->klass[1].vtable.System_IConvertible_ToType.methodPtr);
          return;
        }
      }
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
      if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
        this_00 = (String *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar1,
                             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                            );
        pQVar1 = (this->fields).lines;
        if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    ((Queue_1_System_Object_ *)pQVar1,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                    );
          if (this_00 != (String *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar2,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                          (pTVar2,(MethodInfo *)0x0);
                text = this_00;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddWarningMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_AddWarningMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
        pSVar3 = (this->fields).warningMessageFormat;
        pCVar6 = &(this->fields).warningMessageColor;
        auStack_1._0_4_ = pCVar6->r;
        auStack_1._4_4_ = pCVar6->g;
        auStack_1._8_4_ = pCVar6->b;
        CVar7 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          (*pCVar6,(MethodInfo *)0x0);
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar7 & 0xffffffff),in_stack_8)
        ;
        pSVar3 = mscorlib.dll::System::String::String_Format_1
                           (pSVar3,(Object *)arg0,(Object *)this_00,(MethodInfo *)0x0);
        AndroidChatController_AddLine(this,pSVar3,(MethodInfo *)0x0);
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


/* String FormatSayChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_FormatSayChatMessage
                   (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
            team = (pMVar12->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar14 = Styles::Styles_GetTeamColor(&CStack_10,team,0,(MethodInfo *)0x0);
            CStack_10.r = pCVar14->r;
            CStack_10.g = pCVar14->g;
            CStack_10.b = pCVar14->b;
            CStack_10.a = pCVar14->a;
          }
          method_01 = (MethodInfo *)&UNK_?;
          args = (Object__Array *)func_?(TypeInfo__System__Object,6);
          c.g = CStack_10.g;
          c.r = CStack_10.r;
          c.b = CStack_10.b;
          c.a = CStack_10.a;
          CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (c,(MethodInfo *)0x0);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pSVar16 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar15 & 0xffffffff),method_01);
          if (args != (Object__Array *)0x0) {
            if ((pSVar16 != (String *)0x0) &&
               (iVar17 = func_?(pSVar16,(args->klass->_0).element_class), iVar17 == 0))
            goto code_?;
            if (args->max_length != 0) {
              args->vector[0] = (Object *)pSVar16;
              func_?(args->vector,pSVar16);
              if ((pMStack_13 == (MVPlayer *)0x0) ||
                 (pUVar18 = (pMStack_13->fields)._UserProfileData_k__BackingField,
                 pUVar18 == (UserProfileData *)0x0)) goto code_?;
              pSVar16 = (pUVar18->fields).UserName;
              if ((pSVar16 != (String *)0x0) &&
                 (iVar17 = func_?(pSVar16,(args->klass->_0).element_class), iVar17 == 0))
              goto code_?;
              if (1 < args->max_length) {
                args->vector[1] = (Object *)pSVar16;
                func_?(args->vector + 1,pSVar16);
                CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   ((this->fields).sayColor,(MethodInfo *)0x0);
                pSVar16 = Styles::Styles_ColorToHex
                                    ((Color32)((ulonglong)CVar15 & 0xffffffff),method_00);
                if ((pSVar16 != (String *)0x0) &&
                   (iVar17 = func_?(pSVar16,(args->klass->_0).element_class), iVar17 == 0))
                goto code_?;
                if (2 < args->max_length) {
                  args->vector[2] = (Object *)pSVar16;
                  func_?(args->vector + 2,pSVar16);
                  if ((pSVar8 != (String *)0x0) &&
                     (iVar17 = func_?(pSVar8,(args->klass->_0).element_class), iVar17 == 0
                     )) goto code_?;
                  if (3 < args->max_length) {
                    args->vector[3] = (Object *)pSVar8;
                    func_?(args->vector + 3,pSVar8);
                    CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                       ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                    pSVar8 = Styles::Styles_ColorToHex
                                        ((Color32)((ulonglong)CVar15 & 0xffffffff),method_00);
                    if ((pSVar8 != (String *)0x0) &&
                       (iVar17 = func_?(pSVar8,(args->klass->_0).element_class),
                       iVar17 == 0)) goto code_?;
                    if (4 < args->max_length) {
                      args->vector[4] = (Object *)pSVar8;
                      func_?(args->vector + 4,pSVar8);
                      if ((pOVar2 != (Object *)0x0) &&
                         (iVar17 = func_?(pOVar2,(args->klass->_0).element_class),
                         iVar17 == 0)) goto code_?;
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
code_?:
  uVar6 = func_?();
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
            team = (pMVar12->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar14 = Styles::Styles_GetTeamColor(&CStack_10,team,0,(MethodInfo *)0x0);
            CStack_10.r = pCVar14->r;
            CStack_10.g = pCVar14->g;
            CStack_10.b = pCVar14->b;
            CStack_10.a = pCVar14->a;
          }
          method_01 = (MethodInfo *)&UNK_?;
          args = (Object__Array *)func_?(TypeInfo__System__Object,6);
          c.g = CStack_10.g;
          c.r = CStack_10.r;
          c.b = CStack_10.b;
          c.a = CStack_10.a;
          CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (c,(MethodInfo *)0x0);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pSVar16 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar15 & 0xffffffff),method_01);
          if (args != (Object__Array *)0x0) {
            if ((pSVar16 != (String *)0x0) &&
               (iVar17 = func_?(pSVar16,(args->klass->_0).element_class), iVar17 == 0))
            goto code_?;
            if (args->max_length != 0) {
              args->vector[0] = (Object *)pSVar16;
              func_?(args->vector,pSVar16);
              if ((pMStack_13 == (MVPlayer *)0x0) ||
                 (pUVar18 = (pMStack_13->fields)._UserProfileData_k__BackingField,
                 pUVar18 == (UserProfileData *)0x0)) goto code_?;
              pSVar16 = (pUVar18->fields).UserName;
              if ((pSVar16 != (String *)0x0) &&
                 (iVar17 = func_?(pSVar16,(args->klass->_0).element_class), iVar17 == 0))
              goto code_?;
              if (1 < args->max_length) {
                args->vector[1] = (Object *)pSVar16;
                func_?(args->vector + 1,pSVar16);
                c_00.g = CStack_10.g;
                c_00.r = CStack_10.r;
                c_00.b = CStack_10.b;
                c_00.a = CStack_10.a;
                CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   (c_00,(MethodInfo *)0x0);
                pSVar16 = Styles::Styles_ColorToHex
                                    ((Color32)((ulonglong)CVar15 & 0xffffffff),method_00);
                if ((pSVar16 != (String *)0x0) &&
                   (iVar17 = func_?(pSVar16,(args->klass->_0).element_class), iVar17 == 0))
                goto code_?;
                if (2 < args->max_length) {
                  args->vector[2] = (Object *)pSVar16;
                  func_?(args->vector + 2,pSVar16);
                  if ((pSVar8 != (String *)0x0) &&
                     (iVar17 = func_?(pSVar8,(args->klass->_0).element_class), iVar17 == 0
                     )) goto code_?;
                  if (3 < args->max_length) {
                    args->vector[3] = (Object *)pSVar8;
                    func_?(args->vector + 3,pSVar8);
                    CVar15 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                       ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                    pSVar8 = Styles::Styles_ColorToHex
                                        ((Color32)((ulonglong)CVar15 & 0xffffffff),method_00);
                    if ((pSVar8 != (String *)0x0) &&
                       (iVar17 = func_?(pSVar8,(args->klass->_0).element_class),
                       iVar17 == 0)) goto code_?;
                    if (4 < args->max_length) {
                      args->vector[4] = (Object *)pSVar8;
                      func_?(args->vector + 4,pSVar8);
                      if ((pOVar2 != (Object *)0x0) &&
                         (iVar17 = func_?(pOVar2,(args->klass->_0).element_class),
                         iVar17 == 0)) goto code_?;
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
code_?:
  uVar6 = func_?();
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
              text = AndroidChatController_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
              AndroidChatController_AddLine(this,text,(MethodInfo *)0x0);
            }
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (pMVar5 != (MVLocalPlayer *)0x0) {
                bVar6 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar5,(MethodInfo *)0x0);
                if ((bVar6 != 0) &&
                   (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatMessageRecieved !=
                    (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0)) {
                  pAVar7 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                           OnSayChatMessageRecieved;
                  (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code,iVar3);
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_HandleTeamChatMessage
               (AndroidChatController *this,Dictionary_2_System_Object_System_Object_ *data,
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
        this_01 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            (this_00,actorNr,(MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          other = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (this_01 != (MVPlayer *)0x0) {
            bVar4 = MVPlayer::MVPlayer_IsOnSameTeam(this_01,(MVPlayer *)other,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              text = AndroidChatController_FormatTeamChatMessage(this,data,(MethodInfo *)0x0);
              AndroidChatController_AddLine(this,text,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_Initialize
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&MethodInfo__AndroidChatController__OnChatModeTapped__);
    func_?(&
                    MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__AndroidChatController__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&
                    ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_01 = (Action_2_Int32Enum_Object_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  if (this_01 == (Action_2_Int32Enum_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AndroidChatController__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
    func_?();
    pCVar2 = (this->fields).enterChatButton;
    if (pCVar2 == (ConsoleDragAndTapHandler *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      pUVar3 = (pCVar2->fields).OnClick;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__AndroidChatController__OnChatModeTapped__,
                 (MethodInfo *)0x0);
      pUVar3 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar3,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pUVar3 == (UnityAction *)0x0) {
        (pCVar2->fields).OnClick = (UnityAction *)0x0;
code_?:
        func_?();
        pAVar4 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
        this_03 = (Action_1_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                 );
        if (this_03 == (Action_1_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar4,(Delegate *)this_03,(MethodInfo *)0x0);
        if (pDVar5 == (Delegate *)0x0) {
          TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
               (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
          func_?();
          pCVar6 = (this->fields).chatConsoleModes;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                (pTVar7,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pCVar6 = (ChatConsoleModes *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                ((Object *)pCVar6,pTVar7,0,
                                 ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                                );
            (this->fields).chatConsoleModes = pCVar6;
            func_?(&(this->fields).chatConsoleModes,pCVar6);
            pSVar8 = (this->fields).messageController;
            fVar9 = (this->fields).sayColor.g;
            fVar10 = (this->fields).sayColor.b;
            fVar11 = (this->fields).sayColor.a;
            if (pSVar8 != (SendMessageControl *)0x0) {
              (pSVar8->fields).sayChatColor.r = (this->fields).sayColor.r;
              (pSVar8->fields).sayChatColor.g = fVar9;
              (pSVar8->fields).sayChatColor.b = fVar10;
              (pSVar8->fields).sayChatColor.a = fVar11;
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                          (pTVar7,(MethodInfo *)0x0);
                pCVar2 = (this->fields).enterChatButton;
                if (pCVar2 != (ConsoleDragAndTapHandler *)0x0) {
                  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar2,(MethodInfo *)0x0);
                  if (pGVar12 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar12,1,(MethodInfo *)0x0);
                    pCVar6 = (this->fields).chatConsoleModes;
                    if (pCVar6 != (ChatConsoleModes *)0x0) {
                      ChatConsoleModes::ChatConsoleModes_Set
                                (pCVar6,ChatConsoleMode__Enum_ChatLobbyMode,
                                 &(this->fields).rectTransform,(MethodInfo *)0x0);
                      this_00 = (this->fields).inputAreaRoot;
                      if (this_00 != (RectTransform *)0x0) {
                        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
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
          goto code_?;
        }
        pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  func_?();
        if (pAVar4 !=
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar4;
          iVar14 = func_?();
          if (iVar14 != 0) goto code_?;
        }
        goto code_?;
      }
      pUVar15 = (UnityAction *)0x0;
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar15 = pUVar3;
      }
      if (pUVar15 != (UnityAction *)0x0) {
        (pCVar2->fields).OnClick = pUVar15;
        pUVar15 = (UnityAction *)0x0;
        if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar15 = pUVar3;
        }
        if (pUVar15 != (UnityAction *)0x0) goto code_?;
      }
    }
    func_?();
  }
  else {
    pMVar16 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar16 = pMVar1;
    }
    if (pMVar16 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar16;
    pMVar16 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar16 = pMVar1;
    }
    if (pMVar16 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Text InstantiateNewLine() */

Text * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_InstantiateNewLine
                 (AndroidChatController *this,MethodInfo *method)

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


/* Void OnChatModeTapped() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnChatModeTapped
               (AndroidChatController *this,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 != (ChatConsoleModes *)0x0) {
    if ((pCVar1->fields).chatConsoleMode != 1) {
      if ((pCVar1->fields).chatConsoleMode == 2) {
        AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatPlayMode,(MethodInfo *)0x0);
      }
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__NotificationController);
      cRam_? = '\x01';
    }
    pCVar2 = (this->fields).enterChatButton;
    if (pCVar2 != (ConsoleDragAndTapHandler *)0x0) {
      (pCVar2->fields).scrollingEnabled = 0;
      pRVar3 = (this->fields).inputAreaRoot;
      if (pRVar3 != (RectTransform *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar3,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          pRVar3 = (this->fields).minimizeChat;
          if (pRVar3 != (RectTransform *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar3,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pRVar3 = (this->fields).expandChat;
              if (pRVar3 != (RectTransform *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar3,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,1,(MethodInfo *)0x0);
                  pCVar1 = (this->fields).chatConsoleModes;
                  if (pCVar1 != (ChatConsoleModes *)0x0) {
                    ChatConsoleModes::ChatConsoleModes_Set
                              (pCVar1,ChatConsoleMode__Enum_PlayMode,&(this->fields).rectTransform,
                               (MethodInfo *)0x0);
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnDestroy
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
               MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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


/* Void OnLobbyStateChange(Boolean) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_OnLobbyStateChange
               (AndroidChatController *this,bool inLobbyState,MethodInfo *method)

{
  pCVar1 = (this->fields).chatConsoleModes;
  if (pCVar1 == (ChatConsoleModes *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pCVar1->fields).chatConsoleMode == 0) && (inLobbyState == 0)) {
    AndroidChatController_SetMode(this,ChatConsoleMode__Enum_PlayMode,(MethodInfo *)0x0);
    return;
  }
  AndroidChatController_SetMode(this,ChatConsoleMode__Enum_ChatLobbyMode,(MethodInfo *)0x0);
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
  if (*(int *)(in_stack_1 + 0x1c) != 0) {
    if (*(int *)(*(int *)(in_stack_1 + 0x1c) + 0x14) < 0x32) {
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
      original = *(Object **)(in_stack_1 + 0x44);
      pTVar2 = *(Transform **)(in_stack_1 + 0x48);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_00 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          (original,pTVar2,0,
                           UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                          );
      if (*(Queue_1_System_Object_ **)(in_stack_1 + 0x1c) != (Queue_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  (*(Queue_1_System_Object_ **)(in_stack_1 + 0x1c),(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                  );
        if (this_00 != (Component *)0x0) {
code_?:
          (*(code *)this_00->klass[3]._1.instance_size)
                    (this_00,in_stack_3,this_00->klass[3]._1.actualSize);
          return;
        }
      }
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
      if (*(Queue_1_System_Object_ **)(in_stack_1 + 0x1c) != (Queue_1_System_Object_ *)0x0) {
        this_00 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            (*(Queue_1_System_Object_ **)(in_stack_1 + 0x1c),
                             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                            );
        if (*(Queue_1_System_Object_ **)(in_stack_1 + 0x1c) != (Queue_1_System_Object_ *)0x0)
        {
          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    (*(Queue_1_System_Object_ **)(in_stack_1 + 0x1c),(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                    );
          if (this_00 != (Component *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_00,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar2,*(Transform **)(in_stack_1 + 0x48),0,(MethodInfo *)0x0);
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (this_00,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                          (pTVar2,(MethodInfo *)0x0);
                in_stack_3 = this_00;
                goto code_?;
              }
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


/* Void ReceiveMessage(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_ReceiveMessage
               (AndroidChatController *this,MVGameMsgType__Enum msgType,
               Dictionary_2_System_Object_System_Object_ *message,MethodInfo *method)

{
  bVar1 = (byte)unaff_EBX;
  switch(msgType) {
  case MVGameMsgType__Enum_AdminMsg:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__String);
      func_?(&TypeInfo__Styles);
      cRam_? = '\x01';
    }
    msgType = CONCAT13(5,(undefined3)msgType);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    bVar3 = 0;
    cVar4 = '\0';
    cVar5 = (int)message < 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pSVar6 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (message,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      this_03 = (String *)0x0;
      if (pSVar6 != (String *)0x0) {
        if (pSVar6->klass == TypeInfo__System__String) {
          this_03 = pSVar6;
        }
        if (this_03 == (String *)0x0) {
code_?:
          cVar4 = '\0';
          cVar5 = '\0';
          bVar3 = 0;
          func_?(pSVar6,TypeInfo__System__String);
          break;
        }
      }
      pSVar6 = (this->fields).adminMessageFormat;
      fVar7 = (this->fields).systemMessageColor.r;
      fVar8 = (this->fields).systemMessageColor.g;
      fVar9 = (this->fields).systemMessageColor.b;
      fVar10 = (this->fields).systemMessageColor.a;
code_?:
      c.g = fVar8;
      c.r = fVar7;
      c.b = fVar9;
      c.a = fVar10;
      CVar11 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                         (c,(MethodInfo *)0x0);
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        msgType = (MVGameMsgType__Enum)TypeInfo__Styles;
        func_?();
      }
      msgType = MVGameMsgType__Enum_AvatarKilled;
      arg0 = Styles::Styles_ColorToHex
                       ((Color32)((ulonglong)CVar11 & 0xffffffff),(MethodInfo *)message);
      message = (Dictionary_2_System_Object_System_Object_ *)0x0;
      msgType = (MVGameMsgType__Enum)this_03;
      msgType = (MVGameMsgType__Enum)
                mscorlib.dll::System::String::String_Format_1
                          (pSVar6,(Object *)arg0,(Object *)this_03,(MethodInfo *)0x0);
      message = (Dictionary_2_System_Object_System_Object_ *)0x0;
      AndroidChatController_AddLine(this,(String *)msgType,(MethodInfo *)0x0);
code_?:
      return;
    }
    break;
  default:
    goto code_?;
  case MVGameMsgType__Enum_Chat:
    AndroidChatController_AddChatLine(this,message,(MethodInfo *)0x0);
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
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    pDVar12 = message;
    bVar3 = 0;
    cVar4 = '\0';
    cVar5 = (int)message < 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (message,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      uVar13 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      bVar3 = 0;
      cVar4 = '\0';
      cVar5 = (int)pOVar2 < 0;
      if (pOVar2 != (Object *)0x0) {
        pIVar14 = (pOVar2->klass->_0).element_class;
        pIVar15 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar14 < pIVar15;
        cVar4 = SBORROW4((int)pIVar14,(int)pIVar15);
        cVar5 = (int)pIVar14 - (int)pIVar15 < 0;
        if (pIVar14 != pIVar15) goto code_?;
        piVar16 = (int32_t *)func_?(pOVar2);
        actorNr = *piVar16;
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        cVar4 = '\0';
        cVar5 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          this_00 = (pMVar17->fields).playerContainer;
          bVar3 = 0;
          cVar4 = '\0';
          cVar5 = (int)this_00 < 0;
          if (this_00 != (MVPlayerContainer *)0x0) {
            this_01 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (this_00,actorNr,(MethodInfo *)0x0);
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            bVar3 = 0;
            cVar4 = '\0';
            cVar5 = (int)pMVar17 < 0;
            if (pMVar17 != (MVNetworkGame *)0x0) {
              pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
              bVar3 = 0;
              cVar4 = '\0';
              cVar5 = (int)this_01 < 0;
              if (this_01 != (MVPlayer *)0x0) {
                bVar19 = MVPlayer::MVPlayer_IsOnSameTeam
                                  (this_01,(MVPlayer *)pMVar18,(MethodInfo *)0x0);
                if (bVar19 == 0) {
                  return;
                }
                pSVar6 = AndroidChatController_FormatTeamChatMessage(this,pDVar12,(MethodInfo *)0x0)
                ;
                AndroidChatController_AddLine(this,pSVar6,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVGameMsgType__Enum_SayChat:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__SayChatBubbleVisibilityManager);
      cRam_? = '\x01';
    }
    msgType = msgType & 0xffffff;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    pDVar12 = message;
    bVar3 = 0;
    cVar4 = '\0';
    cVar5 = (int)message < 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (message,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      uVar13 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      bVar3 = 0;
      cVar4 = '\0';
      cVar5 = (int)pOVar2 < 0;
      if (pOVar2 != (Object *)0x0) {
        pIVar14 = (pOVar2->klass->_0).element_class;
        pIVar15 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar14 < pIVar15;
        cVar4 = SBORROW4((int)pIVar14,(int)pIVar15);
        cVar5 = (int)pIVar14 - (int)pIVar15 < 0;
        if (pIVar14 != pIVar15) goto code_?;
        piVar20 = (int *)func_?(pOVar2);
        unaff_EBX = *piVar20;
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        cVar4 = '\0';
        cVar5 = (int)pMVar17 < 0;
        if (pMVar17 != (MVNetworkGame *)0x0) {
          pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
          bVar3 = 0;
          cVar4 = '\0';
          cVar5 = (int)pMVar18 < 0;
          if (pMVar18 != (MVLocalPlayer *)0x0) {
            if ((pMVar18->fields)._._ActorNr_k__BackingField == unaff_EBX) {
              pSVar6 = AndroidChatController_FormatSayChatMessage(this,pDVar12,(MethodInfo *)0x0);
              AndroidChatController_AddLine(this,pSVar6,(MethodInfo *)0x0);
            }
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            bVar3 = 0;
            cVar4 = '\0';
            cVar5 = (int)pMVar17 < 0;
            if (pMVar17 != (MVNetworkGame *)0x0) {
              pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
              bVar3 = 0;
              cVar4 = '\0';
              cVar5 = (int)pMVar18 < 0;
              if (pMVar18 != (MVLocalPlayer *)0x0) {
                bVar19 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar18,(MethodInfo *)0x0);
                if (bVar19 == 0) {
                  return;
                }
                if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatMessageRecieved ==
                    (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
                  return;
                }
                pAVar21 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                         OnSayChatMessageRecieved;
                (*(pAVar21->fields)._._.invoke_impl)
                          ((pAVar21->fields)._._.method_code,unaff_EBX,pDVar12,
                           (pAVar21->fields)._._.method);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVGameMsgType__Enum_Warning:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__String);
      func_?(&TypeInfo__Styles);
      cRam_? = '\x01';
    }
    msgType = CONCAT13(5,(undefined3)msgType);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    bVar3 = 0;
    cVar4 = '\0';
    cVar5 = (int)message < 0;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pSVar6 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (message,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      bVar3 = 0;
      cVar4 = '\0';
      cVar5 = (int)pSVar6 < 0;
      if (pSVar6 != (String *)0x0) {
        this_03 = (String *)0x0;
        if (pSVar6->klass == TypeInfo__System__String) {
          this_03 = pSVar6;
        }
        if (this_03 == (String *)0x0) goto code_?;
        if (0x600 < (this_03->fields)._stringLength) {
          mscorlib.dll::System::String::String_Substring_1(this_03,0,0x600,(MethodInfo *)0x0);
        }
        pSVar6 = (this->fields).warningMessageFormat;
        fVar7 = (this->fields).warningMessageColor.r;
        fVar8 = (this->fields).warningMessageColor.g;
        fVar9 = (this->fields).warningMessageColor.b;
        fVar10 = (this->fields).warningMessageColor.a;
        goto code_?;
      }
    }
  }
  bVar1 = (byte)unaff_EBX;
  uVar13 = func_?();
code_?:
  func_?(uVar13);
  if (cVar4 != cVar5) {
    bVar22 = CARRY1(in_stack_23,bVar1) || CARRY1(in_stack_23 + bVar1,bVar3);
    bVar3 = in_stack_23 + bVar1 + bVar3;
    bVar24 = bVar3 + bVar1;
    bVar25 = bVar24 + bVar22;
    *extraout_ECX =
         *extraout_ECX + (char)extraout_EDX +
         (CARRY1(bVar25,bVar1) ||
         CARRY1(bVar25 + bVar1,CARRY1(bVar3,bVar1) || CARRY1(bVar24,bVar22)));
    bVar1 = *extraout_EDX;
    bVar3 = (byte)((uint)extraout_ECX >> 8);
    *extraout_EDX = *extraout_EDX - bVar3;
    *extraout_ECX = *extraout_ECX + (char)((uint)extraout_EDX >> 8) + (bVar1 < bVar3);
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   );
    cRam_? = '\x01';
  }
  pQVar27 = (this->fields).lines;
  if (pQVar27 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    this_02 = (Component *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar27,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                        );
    pQVar27 = (this->fields).lines;
    if (((pQVar27 != (Queue_1_UnityEngine_UI_Text_ *)0x0) &&
        (mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
         Queue_1_System_Object__Enqueue
                   ((Queue_1_System_Object_ *)pQVar27,(Object *)this_02,
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   ), this_02 != (Component *)0x0)) &&
       (pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (this_02,(MethodInfo *)0x0), pTVar28 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar28,(Transform *)(this->fields).contentPanel,0,(MethodInfo *)0x0);
      pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_02,(MethodInfo *)0x0);
      if (pTVar28 != (Transform *)0x0) {
        method = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar28,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Text ReuseLine() */

Text * Assembly-CSharp.dll::AndroidChatController::AndroidChatController_ReuseLine
                 (AndroidChatController *this,MethodInfo *method)

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


/* Void SetMode(ChatConsoleMode) */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController_SetMode
               (AndroidChatController *this,ChatConsoleMode__Enum chatConsoleMode,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if (chatConsoleMode == ChatConsoleMode__Enum_ChatLobbyMode) {
    pCVar1 = (this->fields).enterChatButton;
    if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
    (pCVar1->fields).scrollingEnabled = 1;
    pRVar2 = (this->fields).inputAreaRoot;
    if (pRVar2 == (RectTransform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar2,(MethodInfo *)0x0);
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
    pRVar2 = (this->fields).minimizeChat;
    if (pRVar2 == (RectTransform *)0x0) goto code_?;
    chatConsoleMode = ChatConsoleMode__Enum_ChatLobbyMode;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar2,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,in_stack_5,in_stack_6);
    pRVar2 = (this->fields).expandChat;
    if ((pRVar2 == (RectTransform *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
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
      (pCVar1->fields).scrollingEnabled = 1;
      if (((this->fields).promptRegisterForChat != 0) &&
         (bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
         , bVar4 != 0)) {
        (this->fields).promptRegisterForChat = 0;
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__NotificationController);
        }
        in_stack_6 = (MethodInfo *)0x13;
        NotificationController::NotificationController_PushNotification_1
                  (NotificationType__Enum_RegisterToChat,NotificationLifetime__Enum_High,
                   (MethodInfo *)0x0);
      }
      pRVar2 = (this->fields).inputAreaRoot;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar4 == 0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      chatConsoleMode = (ChatConsoleMode__Enum)&UNK_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar2,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      in_stack_5 = 1;
      goto code_?;
    }
    if (chatConsoleMode == ChatConsoleMode__Enum_PlayMode) {
      pCVar1 = (this->fields).enterChatButton;
      if (pCVar1 == (ConsoleDragAndTapHandler *)0x0) goto code_?;
      (pCVar1->fields).scrollingEnabled = 0;
      pRVar2 = (this->fields).inputAreaRoot;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      method_00 = (MethodInfo *)0x0;
      bVar4 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).minimizeChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      chatConsoleMode = ChatConsoleMode__Enum_ChatLobbyMode;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).expandChat;
      if ((pRVar2 == (RectTransform *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AndroidChatController() */

void Assembly-CSharp.dll::AndroidChatController::AndroidChatController__ctor
               (AndroidChatController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
    func_?(&StringLiteral__color___0____1______color__colo);
    func_?(&StringLiteral__color___0___b___1______b___colo);
    func_?(&StringLiteral__color___0___1___color_);
    cRam_? = '\x01';
  }
  (this->fields).adminMessageFormat = StringLiteral__color___0___1___color_;
  func_?(&(this->fields).adminMessageFormat,StringLiteral__color___0___1___color_);
  (this->fields).chatMessageFromFriend = StringLiteral__color___0___b___1______b___colo;
  func_?(&(this->fields).chatMessageFromFriend,
                  StringLiteral__color___0___b___1______b___colo);
  (this->fields).chatMessageFormat = StringLiteral__color___0____1______color__colo;
  func_?(&(this->fields).chatMessageFormat,StringLiteral__color___0____1______color__colo);
  (this->fields).warningMessageFormat = StringLiteral__color___0___1___color_;
  func_?(&(this->fields).warningMessageFormat,StringLiteral__color___0___1___color_);
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
    fVar4 = _UNK_?;
    (this->fields).promptRegisterForChat = 1;
    (this->fields).warningMessageColor.r = fVar4;
    (this->fields).warningMessageColor.g = fVar3;
    (this->fields).warningMessageColor.b = fVar2;
    (this->fields).warningMessageColor.a = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

