
/* Void AddAdminMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddAdminMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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
    arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar4 & 0xffffffff),method);
    mscorlib.dll::System::String::String_Format_1
              (StringLiteral__color___0___1___color_,(Object *)arg0,(Object *)arg1.m_Index,
               (MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).AddLine.method)();
    return;
  }
  TVar2.m_Index = func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(TVar2.m_Index,pSVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddChatLine(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddChatLine
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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
                      (*(code *)(this->klass->vtable).AddLine.method)
                                (this,pSVar17,this->klass[1]._0.image);
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

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddLine
               (ChatControllerBase *this,String *text,MethodInfo *method)

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
      pTVar2 = (Transform *)(this->fields)._ContentPanel_k__BackingField;
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
                        (pTVar2,(Transform *)(this->fields)._ContentPanel_k__BackingField,0,
                         (MethodInfo *)0x0);
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

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddWarningMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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
          this_00.m_Index =
               (int32_t)mscorlib.dll::System::String::String_Substring_1
                                  (this_00.m_Index,0,0x600,(MethodInfo *)0x0);
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
        arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar7 & 0xffffffff),in_stack_8)
        ;
        mscorlib.dll::System::String::String_Format_1
                  (StringLiteral__color___0___1___color_,(Object *)arg0,(Object *)this_00.m_Index,
                   (MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).AddLine.method)();
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_Awake
               (ChatControllerBase *this,MethodInfo *method)

{
  this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_02 != (MVLocalPlayer *)0x0) {
    bVar1 = MVLocalPlayer::MVLocalPlayer_get_IsChatLocked(this_02,(MethodInfo *)0x0);
    (this->fields).chatLocked = bVar1;
    if (bVar1 == 0) {
      this_00 = (this->fields)._InputAreaRoot_k__BackingField;
      if (this_00 != (RectTransform *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          this_01 = (this->fields)._EnterChatButton_k__BackingField;
          if (this_01 != (ConsoleDragAndTapHandler *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).DoAwake.method)();
              return;
            }
          }
        }
      }
    }
    else {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String FormatSayChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_FormatSayChatMessage
                   (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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

String * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_FormatTeamChatMessage
                   (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_HandleSayChatMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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
              pSVar6 = ChatControllerBase_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).AddLine.method)(this,pSVar6,this->klass[1]._0.image);
            }
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (pMVar5 != (MVLocalPlayer *)0x0) {
                bVar7 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar5,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (this_00 == (GameObject *)0x0) goto code_?;
                  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeInHierarchy(this_00,(MethodInfo *)0x0);
                  if ((bVar7 != 0) &&
                     (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                      OnSayChatMessageRecieved !=
                      (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0)) {
                    pAVar8 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                             OnSayChatMessageRecieved;
                    (*(pAVar8->fields)._._.invoke_impl)((pAVar8->fields)._._.method_code,iVar3,data)
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_HandleTeamChatMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
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
              ChatControllerBase_FormatTeamChatMessage(this,data,(MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).AddLine.method)();
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


/* Text InstantiateNewLine() */

Text * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_InstantiateNewLine
                 (ChatControllerBase *this,MethodInfo *method)

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
  parent = (Transform *)(this->fields)._ContentPanel_k__BackingField;
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

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_OnDestroy
               (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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
             MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
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


/* Void OnSayChatMessageHeard(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_OnSayChatMessageHeard
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pSVar1 = ChatControllerBase_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).AddLine.method)(this,pSVar1,this->klass[1]._0.image);
  return;
}


/* Void PromptRegisterForChatIfApplicable() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
               (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if (((this->fields).promptRegisterForChat != 0) && ((this->fields).chatLocked != 0)) {
    (this->fields).promptRegisterForChat = 0;
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_PushNotification_1
                (NotificationType__Enum_RegisterToChat,NotificationLifetime__Enum_High,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ReceiveMessage(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_ReceiveMessage
               (ChatControllerBase *this,MVGameMsgType__Enum msgType,
               Dictionary_2_System_Object_System_Object_ *message,MethodInfo *method)

{
  switch(msgType) {
  case MVGameMsgType__Enum_AdminMsg:
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar1 = (Object *)func_?();
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      this_02.m_Index = 0;
      if (TVar2.m_Index != 0) {
        if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
          this_02 = TVar2;
        }
        if ((String *)this_02.m_Index == (String *)0x0) goto code_?;
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
        func_?();
      }
      arg0 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar7 & 0xffffffff),method);
      mscorlib.dll::System::String::String_Format_1
                (StringLiteral__color___0___1___color_,(Object *)arg0,(Object *)this_02.m_Index,
                 (MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).AddLine.method)();
code_?:
      return;
    }
    break;
  default:
    goto code_?;
  case MVGameMsgType__Enum_Chat:
    ChatControllerBase_AddChatLine(this,message,(MethodInfo *)0x0);
    return;
  case MVGameMsgType__Enum_TeamChat:
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar1 = (Object *)func_?();
    if ((message != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar2.m_Index != 0)) {
      pIVar8 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar9 = (int32_t *)func_?();
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
          ChatControllerBase_FormatTeamChatMessage(this,message,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).AddLine.method)();
          return;
        }
      }
    }
    break;
  case MVGameMsgType__Enum_SayChat:
    ChatControllerBase_HandleSayChatMessage(this,message,(MethodInfo *)0x0);
    return;
  case MVGameMsgType__Enum_Warning:
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar1 = (Object *)func_?();
    if ((message != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)message,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar2.m_Index != 0)) {
      this_02.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        this_02 = TVar2;
      }
      if ((String *)this_02.m_Index != (String *)0x0) {
        if (0x600 < (((String *)this_02.m_Index)->fields)._stringLength) {
          this_02.m_Index =
               (int32_t)mscorlib.dll::System::String::String_Substring_1
                                  (this_02.m_Index,0,0x600,(MethodInfo *)0x0);
        }
        fVar3 = (this->fields).warningColor.r;
        fVar4 = (this->fields).warningColor.g;
        fVar5 = (this->fields).warningColor.b;
        fVar6 = (this->fields).warningColor.a;
        goto code_?;
      }
code_?:
      func_?();
    }
  }
  func_?();
  pIVar8 = extraout_EDX;
code_?:
  cVar12 = func_?();
  out(0xf2,cVar12 + '\x0e');
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                    ,&stack0xfffffffc);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   );
    cRam_? = '\x01';
  }
  pQVar13 = (Queue_1_System_Object_ *)(pIVar8->_1).element_size;
  if (pQVar13 != (Queue_1_System_Object_ *)0x0) {
    this_03 = (Component *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        (pQVar13,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                        );
    pQVar13 = (Queue_1_System_Object_ *)(pIVar8->_1).element_size;
    if (((pQVar13 != (Queue_1_System_Object_ *)0x0) &&
        (mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
         Queue_1_System_Object__Enqueue
                   (pQVar13,(Object *)this_03,
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   ), this_03 != (Component *)0x0)) &&
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_03,(MethodInfo *)0x0), pTVar14 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar14,(Transform *)(pIVar8->_0).byval_arg.data.typeHandle,0,(MethodInfo *)0x0);
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_03,(MethodInfo *)0x0);
      if (pTVar14 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar14,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Text ReuseLine() */

Text * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_ReuseLine
                 (ChatControllerBase *this,MethodInfo *method)

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
                    (pTVar3,(Transform *)(this->fields)._ContentPanel_k__BackingField,0,
                     (MethodInfo *)0x0);
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


/* Void Start() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_Start
               (ChatControllerBase *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pSVar2 = (this->fields)._MessageController_k__BackingField;
  fVar3 = (this->fields).sayColor.g;
  fVar4 = (this->fields).sayColor.b;
  fVar5 = (this->fields).sayColor.a;
  if (pSVar2 != (SendMessageControl *)0x0) {
    (pSVar2->fields).sayChatColor.r = (this->fields).sayColor.r;
    (pSVar2->fields).sayChatColor.g = fVar3;
    (pSVar2->fields).sayChatColor.b = fVar4;
    (pSVar2->fields).sayChatColor.a = fVar5;
    pIStack_1 = (this->klass->vtable).UpdateLockedState.methodPtr;
    pCStack_6 = this;
    (*(code *)(this->klass->vtable).DoStart.method)();
    return;
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateLockedState() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_UpdateLockedState
               (ChatControllerBase *this,MethodInfo *method)

{
  this_00 = (this->fields)._InputAreaRoot_k__BackingField;
  if (this_00 != (RectTransform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(this->fields).chatLocked == 0,(MethodInfo *)0x0);
      this_01 = (this->fields)._EnterChatButton_k__BackingField;
      if (this_01 != (ConsoleDragAndTapHandler *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(this->fields).chatLocked == 0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

