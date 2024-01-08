
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
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    format.m_Index = 0;
    if (TVar2.m_Index != 0) {
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        format = TVar2;
      }
      pSVar3 = TypeInfo__System__String;
      if ((String *)format.m_Index == (String *)0x0) goto code_?;
    }
    CVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                      ((this->fields).systemMessageColor,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar5 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar4 & 0xffffffff),method);
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       ((String *)format.m_Index,(Object *)pSVar5,(Object *)format.m_Index,
                        (MethodInfo *)0x0);
    AndroidChatController_AddLine(this,pSVar5,(MethodInfo *)0x0);
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
            data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).chatMessageFormat;
            if (bVar15 != 0) {
              data = (Dictionary_2_System_Object_System_Object_ *)
                     (this->fields).chatMessageFromFriend;
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
                pUVar19 = (pMStack_13->fields)._UserProfileData_k__BackingField;
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
                                          ((String *)data,args,(MethodInfo *)0x0);
                      AndroidChatController_AddLine(this,pSVar17,(MethodInfo *)0x0);
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
          (*this_00->klass[1].vtable.System_IConvertible_ToType.methodPtr)
                    (this_00,text,this_00->klass[1].vtable.System_IConvertible_ToType.method);
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
        pSVar6 = (this->fields).warningMessageFormat;
        pCVar7 = &(this->fields).warningMessageColor;
        auStack_1._0_4_ = pCVar7->r;
        auStack_1._4_4_ = pCVar7->g;
        auStack_1._8_4_ = pCVar7->b;
        CVar8 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                          (*pCVar7,(MethodInfo *)0x0);
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar8 & 0xffffffff),in_stack_9)
        ;
        pSVar6 = mscorlib.dll::System::String::String_Format_1
                           (pSVar6,(Object *)arg0,(Object *)this_00.m_Index,(MethodInfo *)0x0);
        AndroidChatController_AddLine(this,pSVar6,(MethodInfo *)0x0);
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
            team = (pMVar13->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar15 = Styles::Styles_GetTeamColor(&CStack_11,team,0,(MethodInfo *)0x0);
            CStack_11.r = pCVar15->r;
            CStack_11.g = pCVar15->g;
            CStack_11.b = pCVar15->b;
            CStack_11.a = pCVar15->a;
          }
          method_01 = (MethodInfo *)&UNK_?;
          args = (Object__Array *)func_?(TypeInfo__System__Object,6);
          c.g = CStack_11.g;
          c.r = CStack_11.r;
          c.b = CStack_11.b;
          c.a = CStack_11.a;
          CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (c,(MethodInfo *)0x0);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pSVar17 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar16 & 0xffffffff),method_01);
          if (args != (Object__Array *)0x0) {
            if ((pSVar17 != (String *)0x0) &&
               (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
            goto code_?;
            if (args->max_length != 0) {
              args->vector[0] = (Object *)pSVar17;
              func_?(args->vector,pSVar17);
              if ((pMStack_14 == (MVPlayer *)0x0) ||
                 (pUVar19 = (pMStack_14->fields)._UserProfileData_k__BackingField,
                 pUVar19 == (UserProfileData *)0x0)) goto code_?;
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
                   (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
                goto code_?;
                if (2 < args->max_length) {
                  args->vector[2] = (Object *)pSVar17;
                  func_?(args->vector + 2,pSVar17);
                  if ((pSVar9 != (String *)0x0) &&
                     (iVar18 = func_?(pSVar9,(args->klass->_0).element_class), iVar18 == 0
                     )) goto code_?;
                  if (3 < args->max_length) {
                    args->vector[3] = (Object *)pSVar9;
                    func_?(args->vector + 3,pSVar9);
                    CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                       ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                    pSVar9 = Styles::Styles_ColorToHex
                                        ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                    if ((pSVar9 != (String *)0x0) &&
                       (iVar18 = func_?(pSVar9,(args->klass->_0).element_class),
                       iVar18 == 0)) goto code_?;
                    if (4 < args->max_length) {
                      args->vector[4] = (Object *)pSVar9;
                      func_?(args->vector + 4,pSVar9);
                      if (((Object *)TVar4.m_Index != (Object *)0x0) &&
                         (iVar18 = func_?(TVar4.m_Index,(args->klass->_0).element_class),
                         iVar18 == 0)) goto code_?;
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
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar20 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar20)();
  return pSVar9;
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
            team = (pMVar13->fields)._Team_k__BackingField;
            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Styles);
            }
            pCVar15 = Styles::Styles_GetTeamColor(&CStack_11,team,0,(MethodInfo *)0x0);
            CStack_11.r = pCVar15->r;
            CStack_11.g = pCVar15->g;
            CStack_11.b = pCVar15->b;
            CStack_11.a = pCVar15->a;
          }
          method_01 = (MethodInfo *)&UNK_?;
          args = (Object__Array *)func_?(TypeInfo__System__Object,6);
          c.g = CStack_11.g;
          c.r = CStack_11.r;
          c.b = CStack_11.b;
          c.a = CStack_11.a;
          CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                             (c,(MethodInfo *)0x0);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pSVar17 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar16 & 0xffffffff),method_01);
          if (args != (Object__Array *)0x0) {
            if ((pSVar17 != (String *)0x0) &&
               (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
            goto code_?;
            if (args->max_length != 0) {
              args->vector[0] = (Object *)pSVar17;
              func_?(args->vector,pSVar17);
              if ((pMStack_14 == (MVPlayer *)0x0) ||
                 (pUVar19 = (pMStack_14->fields)._UserProfileData_k__BackingField,
                 pUVar19 == (UserProfileData *)0x0)) goto code_?;
              pSVar17 = (pUVar19->fields).UserName;
              if ((pSVar17 != (String *)0x0) &&
                 (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
              goto code_?;
              if (1 < args->max_length) {
                args->vector[1] = (Object *)pSVar17;
                func_?(args->vector + 1,pSVar17);
                c_00.g = CStack_11.g;
                c_00.r = CStack_11.r;
                c_00.b = CStack_11.b;
                c_00.a = CStack_11.a;
                CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                   (c_00,(MethodInfo *)0x0);
                pSVar17 = Styles::Styles_ColorToHex
                                    ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                if ((pSVar17 != (String *)0x0) &&
                   (iVar18 = func_?(pSVar17,(args->klass->_0).element_class), iVar18 == 0))
                goto code_?;
                if (2 < args->max_length) {
                  args->vector[2] = (Object *)pSVar17;
                  func_?(args->vector + 2,pSVar17);
                  if ((pSVar9 != (String *)0x0) &&
                     (iVar18 = func_?(pSVar9,(args->klass->_0).element_class), iVar18 == 0
                     )) goto code_?;
                  if (3 < args->max_length) {
                    args->vector[3] = (Object *)pSVar9;
                    func_?(args->vector + 3,pSVar9);
                    CVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                                       ((this->fields).chatMessageColor,(MethodInfo *)0x0);
                    pSVar9 = Styles::Styles_ColorToHex
                                        ((Color32)((ulonglong)CVar16 & 0xffffffff),method_00);
                    if ((pSVar9 != (String *)0x0) &&
                       (iVar18 = func_?(pSVar9,(args->klass->_0).element_class),
                       iVar18 == 0)) goto code_?;
                    if (4 < args->max_length) {
                      args->vector[4] = (Object *)pSVar9;
                      func_?(args->vector + 4,pSVar9);
                      if (((Object *)TVar4.m_Index != (Object *)0x0) &&
                         (iVar18 = func_?(TVar4.m_Index,(args->klass->_0).element_class),
                         iVar18 == 0)) goto code_?;
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
code_?:
  uVar7 = func_?();
code_?:
  func_?(uVar7);
  pcVar20 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar20)();
  return pSVar9;
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
        func_?(TVar1.m_Index,TypeInfo__System__Int32);
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
  TVar1.m_Index = func_?();
code_?:
  func_?(TVar1.m_Index);
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
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__AndroidChatController__ReceiveMessage_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar2;
      pMVar2 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
      if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
    goto code_?;
  }
  TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
       (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
  func_?();
  pCVar3 = (this->fields).enterChatButton;
  if (pCVar3 != (ConsoleDragAndTapHandler *)0x0) {
    a = (pCVar3->fields).OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__AndroidChatController__OnChatModeTapped__,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (a->fields)._._.m_target = (Object *)0x0;
code_?:
      func_?();
      pAVar5 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_03,(Object *)this,
                 MethodInfo__AndroidChatController__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar5,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
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
            func_?();
          }
          pCVar6 = (ChatConsoleModes *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)pCVar6,pTVar7,0,
                               ChatConsoleModes_MethodInfo__UnityEngine__Object__Instantiate<ChatConsoleModes>_ChatConsoleModes__UnityEngine__Transform__bool_
                              );
          (this->fields).chatConsoleModes = pCVar6;
          func_?();
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
              pCVar3 = (this->fields).enterChatButton;
              if (pCVar3 != (ConsoleDragAndTapHandler *)0x0) {
                pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar3,(MethodInfo *)0x0);
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
                                  (pGVar12,bVar13 ^ 1,(MethodInfo *)0x0);
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
      pAVar5 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                func_?();
      if (pAVar5 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar5;
        iVar14 = func_?();
        if (iVar14 != 0) goto code_?;
      }
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      pDVar15 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar15 = pDVar4;
      }
      if (pDVar15 != (Delegate *)0x0) {
        (a->fields)._._.m_target = (Object *)pDVar15;
        pDVar15 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar15 = pDVar4;
        }
        if (pDVar15 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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
  if (*(int *)(in_stack_1 + 0x20) != 0) {
    if (*(int *)(*(int *)(in_stack_1 + 0x20) + 0x14) < 0x32) {
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
      original = *(Object **)(in_stack_1 + 0x48);
      pTVar2 = *(Transform **)(in_stack_1 + 0x4c);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_00 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          (original,pTVar2,0,
                           UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                          );
      if (*(Queue_1_System_Object_ **)(in_stack_1 + 0x20) != (Queue_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  (*(Queue_1_System_Object_ **)(in_stack_1 + 0x20),(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                  );
        if (this_00 != (Component *)0x0) {
code_?:
          (*(code *)this_00->klass[3]._1.actualSize)
                    (this_00,in_stack_3,this_00->klass[3]._1.element_size);
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
      if (*(Queue_1_System_Object_ **)(in_stack_1 + 0x20) != (Queue_1_System_Object_ *)0x0) {
        this_00 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            (*(Queue_1_System_Object_ **)(in_stack_1 + 0x20),
                             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                            );
        if (*(Queue_1_System_Object_ **)(in_stack_1 + 0x20) != (Queue_1_System_Object_ *)0x0)
        {
          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    (*(Queue_1_System_Object_ **)(in_stack_1 + 0x20),(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                    );
          if (this_00 != (Component *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_00,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar2,*(Transform **)(in_stack_1 + 0x4c),0,(MethodInfo *)0x0);
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
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                          pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_03.m_Index = 0;
      if (TVar2.m_Index != 0) {
        if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
          this_03 = TVar2;
        }
        if ((String *)this_03.m_Index == (String *)0x0) goto code_?;
      }
      pSVar3 = (this->fields).adminMessageFormat;
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
        msgType = (MVGameMsgType__Enum)TypeInfo__Styles;
        func_?();
      }
      msgType = MVGameMsgType__Enum_AvatarKilled;
      arg0 = Styles::Styles_ColorToHex
                       ((Color32)((ulonglong)CVar8 & 0xffffffff),(MethodInfo *)message);
      message = (Dictionary_2_System_Object_System_Object_ *)0x0;
      msgType = this_03.m_Index;
      msgType = (MVGameMsgType__Enum)
                mscorlib.dll::System::String::String_Format_1
                          (pSVar3,(Object *)arg0,(Object *)this_03.m_Index,(MethodInfo *)0x0);
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
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    unaff_ESI = (AndroidChatController *)message;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                          pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar9 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar10 = (int32_t *)func_?(TVar2.m_Index);
        unaff_EDI = (MVPlayer *)*piVar10;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
          unaff_EDI = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (this_00,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar12 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
             unaff_EDI != (MVPlayer *)0x0)) {
            bVar13 = MVPlayer::MVPlayer_IsOnSameTeam(unaff_EDI,(MVPlayer *)pMVar12,(MethodInfo *)0x0)
            ;
            if (bVar13 == 0) {
              return;
            }
            pSVar3 = AndroidChatController_FormatTeamChatMessage
                                (this,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                                 (MethodInfo *)0x0);
            AndroidChatController_AddLine(this,pSVar3,(MethodInfo *)0x0);
            return;
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
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    unaff_EDI = (MVPlayer *)message;
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                          pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar9 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar14 = (int *)func_?(TVar2.m_Index);
        iVar15 = *piVar14;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar12 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
           pMVar12 != (MVLocalPlayer *)0x0)) {
          if ((pMVar12->fields)._._ActorNr_k__BackingField == iVar15) {
            pSVar3 = AndroidChatController_FormatSayChatMessage
                                (this,(Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                                 (MethodInfo *)0x0);
            AndroidChatController_AddLine(this,pSVar3,(MethodInfo *)0x0);
            unaff_ESI = this;
          }
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar11 != (MVNetworkGame *)0x0) &&
             (pMVar12 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
             pMVar12 != (MVLocalPlayer *)0x0)) {
            bVar13 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar12,(MethodInfo *)0x0);
            if (bVar13 == 0) {
              return;
            }
            if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved ==
                (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
              return;
            }
            pAVar16 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                     OnSayChatMessageRecieved;
            (*(pAVar16->fields)._._.invoke_impl)
                      ((pAVar16->fields)._._.method_code,iVar15,unaff_EDI,(pAVar16->fields)._._.method
                      );
            return;
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
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&msgType + 3));
    if ((message != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                            pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), TVar2.m_Index != 0)) {
      this_03.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        this_03 = TVar2;
      }
      if ((String *)this_03.m_Index != (String *)0x0) {
        if (0x600 < (((String *)this_03.m_Index)->fields)._stringLength) {
          mscorlib.dll::System::String::String_Substring_1
                    ((String *)this_03.m_Index,0,0x600,(MethodInfo *)0x0);
        }
        pSVar3 = (this->fields).warningMessageFormat;
        fVar4 = (this->fields).warningMessageColor.r;
        fVar5 = (this->fields).warningMessageColor.g;
        fVar6 = (this->fields).warningMessageColor.b;
        fVar7 = (this->fields).warningMessageColor.a;
        goto code_?;
      }
code_?:
      unaff_EDI = (MVPlayer *)0x0;
      func_?(TVar2.m_Index,TypeInfo__System__String);
    }
  }
  uVar9 = func_?();
code_?:
  iVar15 = (int)((ulonglong)uVar9 >> 0x20);
  func_?(uVar9);
  pAVar17 = unaff_ESI->klass;
  piVar10 = &(unaff_EDI->fields).level;
  *piVar10 = *piVar10 & (uint)pAVar17;
  pcVar18 = (char *)(((uint)pAVar17 & 0x25901047) + 0x41104725);
  *pcVar18 = *pcVar18 + extraout_DL;
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)msgType;
  in((short)msgType);
  if (cRam_? == '\0') {
    method = (MethodInfo *)
             &MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__;
    message = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    func_?();
    message = (Dictionary_2_System_Object_System_Object_ *)
              &
              MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
    ;
    msgType = (MVGameMsgType__Enum)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  iVar19 = *(int *)(unaff_EBP + 8);
  message = (Dictionary_2_System_Object_System_Object_ *)(iVar15 + 1);
  if (*(Queue_1_System_Object_ **)(iVar19 + 0x20) != (Queue_1_System_Object_ *)0x0) {
    msgType = (MVGameMsgType__Enum)
              MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__;
    this_02 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        (*(Queue_1_System_Object_ **)(iVar19 + 0x20),
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                        );
    this_01 = *(Queue_1_System_Object_ **)(iVar19 + 0x20);
    if (this_01 != (Queue_1_System_Object_ *)0x0) {
      method = 
      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
      ;
      msgType = (MVGameMsgType__Enum)this_01;
      message = this_02;
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                (this_01,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                );
      if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        in_stack_20 = &UNK_?;
        pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (pTVar21 != (Transform *)0x0) {
          in_stack_20 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar21,*(Transform **)(iVar19 + 0x4c),0,(MethodInfo *)0x0);
          pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_02,(MethodInfo *)0x0);
          if (pTVar21 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar21,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
              (pGVar3,bVar4 ^ 1,(MethodInfo *)0x0);
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
                (pGVar3,bVar4 ^ 1,(MethodInfo *)0x0);
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
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

