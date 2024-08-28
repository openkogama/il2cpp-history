
/* Void Awake() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Awake
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_cachingEnabled);
    func_?(&StringLiteral_Dev_profileId_standalone);
    func_?(&StringLiteral_serverIndex);
    cRam_? = '\x01';
  }
  this_03 = this;
  ppSVar1 = &(this->fields).playerPrefKey;
  *ppSVar1 = StringLiteral_Dev_profileId_standalone;
  func_?(ppSVar1,StringLiteral_Dev_profileId_standalone);
  GUILoginHandler_SetValuesToPrefOrDefault(this_03,(MethodInfo *)0x0);
  devTarget = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                        (StringLiteral_serverIndex,0,(MethodInfo *)0x0);
  GUILoginHandler_SetupServerDropdown(this_03,devTarget,(MethodInfo *)0x0);
  pIVar2 = (this_03->fields).serverIp;
  pSVar3 = GUILoginHandler_GetIPFromDevServerTarget(devTarget,(MethodInfo *)0x0);
  if (pIVar2 != (InputField *)0x0) {
    method = (MethodInfo *)&UNK_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (pIVar2,pSVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      method = (MethodInfo *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this_03->fields).gameSessionData;
    pIVar2 = (this_03->fields).profileIdTextField;
    if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar4,(Object *)StringLiteral_profileID,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                        );
      if (TVar5.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        func_?();
        method = (MethodInfo *)0x0;
        this = (GUILoginHandler *)&this;
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this,(MethodInfo *)0x0);
        if (pIVar2 != (InputField *)0x0) {
          method = (MethodInfo *)&UNK_?;
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar2,pSVar3,(MethodInfo *)0x0);
          pIVar2 = (this_03->fields).profileIdTextField;
          if (pIVar2 != (InputField *)0x0) {
            this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pIVar2->fields).m_OnValueChanged;
            pUVar6 = (UnityAction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar6,(Object *)this_03,
                       MethodInfo__GUILoginHandler___SetupProfileID_b__31_0_System__String_,
                       (MethodInfo *)0x0);
            if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
              method = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
              UnityEvent_1_UnityEngine_Vector2__AddListener
                        (this_00,(UnityAction_1_UnityEngine_Vector2_ *)pUVar6,
                         MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                        );
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                func_?();
                func_?();
                method = (MethodInfo *)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this_03->fields).gameSessionData;
              pIVar2 = (this_03->fields).planetIdTextField;
              if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (pDVar4,(Object *)StringLiteral_planetID,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                                  );
                if (TVar5.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  func_?();
                  method = (MethodInfo *)0x0;
                  this = (GUILoginHandler *)&this;
                  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                     ((Int32 *)this,(MethodInfo *)0x0);
                  if (pIVar2 != (InputField *)0x0) {
                    method = (MethodInfo *)&UNK_?;
                    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                              (pIVar2,pSVar3,(MethodInfo *)0x0);
                    pIVar2 = (this_03->fields).planetIdTextField;
                    if (pIVar2 != (InputField *)0x0) {
                      this_01 = (GUILoginHandler *)(pIVar2->fields).m_OnValueChanged;
                      pUVar6 = (UnityAction_1_System_Object_ *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]
                      ::UnityAction_1_System_Object___ctor
                                (pUVar6,(Object *)this_03,
                                 MethodInfo__GUILoginHandler___SetupPlanetID_b__30_0_System__String_
                                 ,(MethodInfo *)0x0);
                      if (this_01 != (GUILoginHandler *)0x0) {
                        this = this_01;
                        method = (MethodInfo *)pUVar6;
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::
                        Vector2]::UnityEvent_1_UnityEngine_Vector2__AddListener
                                  ((UnityEvent_1_UnityEngine_Vector2_ *)this_01,
                                   (UnityAction_1_UnityEngine_Vector2_ *)pUVar6,
                                   MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                                  );
                        this_02 = (this_03->fields).disableCacheToggle;
                        method = (MethodInfo *)StringLiteral_cachingEnabled;
                        this = (GUILoginHandler *)&UNK_?;
                        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::
                                PlayerPrefs_GetInt_1(StringLiteral_cachingEnabled,(MethodInfo *)0x0)
                        ;
                        if (this_02 != (Toggle *)0x0) {
                          UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn
                                    (this_02,iVar7 < 1,(MethodInfo *)0x0);
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
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Caching() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Caching
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).disableCacheToggle;
  if (pTVar1 != (Toggle *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_cachingEnabled,(uint)((pTVar1->fields).m_IsOn == 0),(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ComboboxChanged(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_ComboboxChanged
               (GUILoginHandler *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&StringLiteral_serverIP);
    func_?(&StringLiteral_ServerIP_);
    func_?(&StringLiteral_serverIndex);
    cRam_? = '\x01';
  }
  pSVar1 = GUILoginHandler_GetIPFromDevServerTarget(index,(MethodInfo *)0x0);
  this_00 = (this->fields).serverIp;
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,pSVar1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_serverIndex,index,(MethodInfo *)0x0);
    this_01 = (this->fields).gameSessionData;
    if (this_01 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_serverIP,(Object *)pSVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_ServerIP_,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Embedded(Boolean) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Embedded
               (GUILoginHandler *this,bool isEmbedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&StringLiteral_embedded);
    func_?(&StringLiteral_embeddedSite);
    cRam_? = '\x01';
  }
  bStack1 = isEmbedded;
  pDVar2 = (this->fields).gameSessionData;
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)StringLiteral_embedded,
               value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pDVar2 = (this->fields).gameSessionData;
    if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                 (Object *)StringLiteral_embeddedSite,(Object *)(this->fields).embeddedSite,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnterCharacterEditOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterCharacterEditOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  GUILoginHandler_StartGame(this,MVGameMode__Enum_CharacterEditor,(MethodInfo *)0x0);
  return;
}


/* Void EnterEditOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterEditOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  GUILoginHandler_StartGame(this,MVGameMode__Enum_Edit,(MethodInfo *)0x0);
  return;
}


/* Void EnterPlayOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterPlayOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  GUILoginHandler_StartGame(this,MVGameMode__Enum_Play,(MethodInfo *)0x0);
  return;
}


/* String GetIPFromDevServerTarget(GUILoginHandler+DevServerTarget) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_GetIPFromDevServerTarget
                   (GUILoginHandler_DevServerTarget__Enum devTarget,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__212_32_240_13_5055);
    func_?(&StringLiteral__127_0_0_1_5055);
    func_?(&StringLiteral__62_212_95_185_5055);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (devTarget == GUILoginHandler_DevServerTarget__Enum_Dev) {
    return StringLiteral__212_32_240_13_5055;
  }
  if (devTarget == GUILoginHandler_DevServerTarget__Enum_Test) {
    return StringLiteral__62_212_95_185_5055;
  }
  if (devTarget != GUILoginHandler_DevServerTarget__Enum_Local) {
    return ::StringLiteral__;
  }
  return StringLiteral__127_0_0_1_5055;
}


/* String GetPrefOrDefault(String, String) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_GetPrefOrDefault
                   (GUILoginHandler *this,String *prefName,String *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  a = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                (prefName,::StringLiteral__,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::String::String_op_Inequality(a,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    target = a;
  }
  return target;
}


/* Void OnEmbeddedSiteDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnEmbeddedSiteDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = this;
  pDVar2 = (this->fields).embeddedSiteDropdown;
  if (pDVar2 != (Dropdown *)0x0) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                        (pDVar2,(MethodInfo *)0x0);
    pDVar2 = (pGVar1->fields).embeddedSiteDropdown;
    if ((pDVar2 != (Dropdown *)0x0) &&
       (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,(pDVar2->fields).m_Value,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                        );
      if (RVar3 != (RegexCharClass_SingleRange)0x0) {
        ppSVar4 = &(pGVar1->fields).embeddedSite;
        *ppSVar4 = *(String **)((int)RVar3 + 8);
        func_?(ppSVar4);
        this_00 = (pGVar1->fields).embeddedToggle;
        if (this_00 != (Toggle *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn(this_00,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            in_stack_5 = &TypeInfo__System__Boolean;
            method = (MethodInfo *)&UNK_?;
            func_?();
            method = (MethodInfo *)
                     &
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
            ;
            this = (GUILoginHandler *)&UNK_?;
            func_?();
            this = (GUILoginHandler *)&StringLiteral_embedded;
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pDVar6 = (pGVar1->fields).gameSessionData;
          in_stack_5 = (Boolean__Class **)((int)&this + 3);
          method = (MethodInfo *)TypeInfo__System__Boolean;
          this = (GUILoginHandler *)&UNK_?;
          value = (Object *)func_?();
          if (pDVar6 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar6,
                       (Object *)StringLiteral_embedded,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                      );
            pDVar6 = (pGVar1->fields).gameSessionData;
            if (pDVar6 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar6,
                         (Object *)StringLiteral_embeddedSite,(Object *)*ppSVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPlanetDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnPlanetDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).planetDropdown;
  if (pDVar1 != (Dropdown *)0x0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                        (pDVar1,(MethodInfo *)0x0);
    pDVar1 = (this->fields).planetDropdown;
    if ((((pDVar1 != (Dropdown *)0x0) &&
         (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) &&
        (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_00,(pDVar1->fields).m_Value,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                           ), RVar2 != (RegexCharClass_SingleRange)0x0)) &&
       (pDVar3 = (this->fields).defaultPlanetData,
       pDVar3 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)pDVar3,*(Object **)((int)RVar2 + 8),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__ContainsKey_System__String_
                        );
      if (bVar4 == 0) {
        return;
      }
      pDVar3 = (this->fields).defaultPlanetData;
      pIVar5 = (this->fields).planetIdTextField;
      if (pDVar3 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)pDVar3,*(Object **)((int)RVar2 + 8),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__get_Item_System__String_
                  );
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
        if (pIVar5 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar5,pSVar6,(MethodInfo *)0x0);
          pDVar3 = (this->fields).defaultPlanetData;
          pIVar5 = (this->fields).profileIdTextField;
          if (pDVar3 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)pDVar3,*(Object **)((int)RVar2 + 8),
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__get_Item_System__String_
                      );
            pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (pIVar5 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (pIVar5,pSVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnProfileDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnProfileDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral___0_9__);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).profileDropdown;
  if (pDVar1 != (Dropdown *)0x0) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                        (pDVar1,(MethodInfo *)0x0);
    pDVar1 = (this->fields).profileDropdown;
    if ((pDVar1 != (Dropdown *)0x0) &&
       (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,(pDVar1->fields).m_Value,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                        );
      if (RVar2 != (RegexCharClass_SingleRange)0x0) {
        pSVar3 = *(String **)((int)RVar2 + 8);
        replacement = TypeInfo__System__String->static_fields->Empty;
        if ((TypeInfo__System__Text__RegularExpressions__Regex->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pSVar3 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                           (pSVar3,StringLiteral___0_9__,replacement,(MethodInfo *)0x0);
        this_00 = (this->fields).profileIdTextField;
        if (this_00 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (this_00,pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetValuesToPrefOrDefault() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetValuesToPrefOrDefault
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__1);
    func_?(&StringLiteral_Dev_serverip);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral_profileID);
    func_?(&StringLiteral_Dev_planetId);
    func_?(&StringLiteral_serverIP);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_planetID);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__1;
  pSVar2 = (this->fields).playerPrefKey;
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                     (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  bVar3 = mscorlib.dll::System::String::String_op_Inequality
                    (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar1 = pSVar2;
  }
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar1,(MethodInfo *)0x0);
  this_00 = TypeInfo__System__Int32;
  pOVar4 = (Object *)func_?();
  if (this_00 != (Int32__Class *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_profileID,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pSVar1 = StringLiteral__1;
    pDVar5 = (this->fields).gameSessionData;
    pSVar2 = (this->fields).playerPrefKey;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                       (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar1 = pSVar2;
    }
    if (pDVar5 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar5,(Object *)StringLiteral_token,
                 (Object *)pSVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pSVar1 = StringLiteral_Dev_serverip;
      pSVar2 = ::StringLiteral__;
      pDVar5 = (this->fields).gameSessionData;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                         (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        (pSVar1,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pSVar2 = pSVar1;
      }
      if (pDVar5 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar5,
                   (Object *)StringLiteral_serverIP,(Object *)pSVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pSVar1 = StringLiteral__1;
        pSVar2 = StringLiteral_Dev_planetId;
        pDVar5 = (this->fields).gameSessionData;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                           (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pSVar1 = pSVar2;
        }
        mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar1,(MethodInfo *)0x0);
        pOVar4 = (Object *)func_?();
        if (pDVar5 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar5,
                     (Object *)StringLiteral_planetID,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupPlanetID() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupPlanetID
               (GUILoginHandler *this,MethodInfo *method)

{
  IStack_1.m_value = in_ECX;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                   );
    func_?(&MethodInfo__GUILoginHandler___SetupPlanetID_b__30_0_System__String_);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                   );
    func_?(&StringLiteral_planetID);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).gameSessionData;
  pIVar2 = (this->fields).planetIdTextField;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_planetID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar5 = (int32_t *)func_?(TVar3.m_Index);
      IStack_1.m_value = *piVar5;
      value = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
      if (pIVar2 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar2,value,(MethodInfo *)0x0);
        pIVar2 = (this->fields).planetIdTextField;
        if (pIVar2 != (InputField *)0x0) {
          this_01 = (UnityEvent_1_UnityEngine_Vector2_ *)(pIVar2->fields).m_OnValueChanged;
          this_02 = (UnityAction_1_System_Object_ *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__GUILoginHandler___SetupPlanetID_b__30_0_System__String_,
                     (MethodInfo *)0x0);
          if (this_01 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
            UnityEvent_1_UnityEngine_Vector2__AddListener
                      (this_01,(UnityAction_1_UnityEngine_Vector2_ *)this_02,
                       MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                      );
            return;
          }
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupProfileID() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupProfileID
               (GUILoginHandler *this,MethodInfo *method)

{
  IStack_1.m_value = in_ECX;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                   );
    func_?(&MethodInfo__GUILoginHandler___SetupProfileID_b__31_0_System__String_);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                   );
    func_?(&StringLiteral_profileID);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).gameSessionData;
  pIVar2 = (this->fields).profileIdTextField;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_profileID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar5 = (int32_t *)func_?(TVar3.m_Index);
      IStack_1.m_value = *piVar5;
      value = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
      if (pIVar2 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar2,value,(MethodInfo *)0x0);
        pIVar2 = (this->fields).profileIdTextField;
        if (pIVar2 != (InputField *)0x0) {
          this_01 = (UnityEvent_1_UnityEngine_Vector2_ *)(pIVar2->fields).m_OnValueChanged;
          this_02 = (UnityAction_1_System_Object_ *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__GUILoginHandler___SetupProfileID_b__31_0_System__String_,
                     (MethodInfo *)0x0);
          if (this_01 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
            UnityEvent_1_UnityEngine_Vector2__AddListener
                      (this_01,(UnityAction_1_UnityEngine_Vector2_ *)this_02,
                       MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                      );
            return;
          }
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupServerDropdown(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupServerDropdown
               (GUILoginHandler *this,int32_t savedChoice,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__GUILoginHandler__DevServerTarget);
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                   );
    func_?(&TypeInfo__UnityEngine__UI__Dropdown__OptionData);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__GUILoginHandler__DevServerTarget;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Enum);
  }
  pSVar3 = mscorlib.dll::System::Enum::Enum_GetNames(pTVar2,(MethodInfo *)0x0);
  pcVar4 = (char *)0x0;
  if (pSVar3 != (String__Array *)0x0) {
    ppSVar5 = pSVar3->vector;
    for (; (int)pcVar4 < (int)pSVar3->max_length; pcVar4 = pcVar4 + 1) {
      if ((char *)pSVar3->max_length <= pcVar4) goto code_?;
      dictionary = (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)*ppSVar5;
      pDVar6 = (this->fields).serverDropdown;
      if (pDVar6 == (Dropdown *)0x0) goto code_?;
      this_02 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                          (pDVar6,(MethodInfo *)0x0);
      this_03 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__UnityEngine__UI__Dropdown__OptionData);
      System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_03,dictionary,(MethodInfo *)0x0);
      if (this_02 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
      pSVar3 = (String__Array *)
               MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
      ;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_02,(Object *)this_03,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                );
      ppSVar5 = ppSVar5 + 1;
    }
    pDVar6 = (this->fields).serverDropdown;
    if (pDVar6 != (Dropdown *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_value
                (pDVar6,savedChoice,(MethodInfo *)0x0);
      pIVar1 = TypeRef__GUILoginHandler__DevServerTarget;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Enum);
      }
      pSVar3 = mscorlib.dll::System::Enum::Enum_GetNames(pTVar2,(MethodInfo *)0x0);
      if (pSVar3 != (String__Array *)0x0) {
        if (pSVar3->max_length <= (uint)savedChoice) goto code_?;
        pDVar6 = (this->fields).serverDropdown;
        if ((pDVar6 != (Dropdown *)0x0) &&
           (pTVar7 = (pDVar6->fields).m_CaptionText, pTVar7 != (Text *)0x0)) {
          (*(code *)(pTVar7->klass->vtable).set_text.method)
                    (pTVar7,pSVar3->vector[savedChoice],
                     (pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                           );
            func_?(&StringLiteral_serverIP);
            func_?(&StringLiteral_ServerIP_);
            func_?(&StringLiteral_serverIndex);
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(&StringLiteral__212_32_240_13_5055);
            func_?(&StringLiteral__127_0_0_1_5055);
            func_?(&StringLiteral__62_212_95_185_5055);
            func_?(&::StringLiteral__);
            cRam_? = '\x01';
          }
          pSVar8 = StringLiteral__212_32_240_13_5055;
          if (((savedChoice != 0) && (pSVar8 = StringLiteral__62_212_95_185_5055, savedChoice != 1))
             && (pSVar8 = StringLiteral__127_0_0_1_5055, savedChoice != 2)) {
            pSVar8 = ::StringLiteral__;
          }
          this_00 = (this->fields).serverIp;
          if (this_00 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (this_00,pSVar8,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
                      (StringLiteral_serverIndex,savedChoice,(MethodInfo *)0x0);
            this_01 = (this->fields).gameSessionData;
            if (this_01 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,
                         (Object *)StringLiteral_serverIP,(Object *)pSVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                        );
              pSVar8 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_ServerIP_,pSVar8,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar8,(MethodInfo *)0x0);
              return;
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


/* Void Start() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Start
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    return;
  }
  pBVar1 = (this->fields).buildButton;
  if ((pBVar1 != (Button *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pBVar1 = (this->fields).avatarEditButton;
    if ((pBVar1 != (Button *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartGame(MVGameMode) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_StartGame
               (GUILoginHandler *this,MVGameMode__Enum gameMode,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__GameSessionData);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&StringLiteral_GameSessionData_u000A);
    func_?(&StringLiteral_gsm);
    func_?(&StringLiteral_Base);
    func_?(&StringLiteral_DesktopBase);
    func_?(&StringLiteral_Desktop___Starting_scene_Desktop);
    func_?(&StringLiteral__0_____1_u000A);
    func_?(&StringLiteral_referrer);
    func_?(&StringLiteral_serverIP);
    func_?(&StringLiteral_language);
    func_?(&StringLiteral_WebPlay_as_touch___Starting_scen);
    func_?(&StringLiteral_Cache_disabled_);
    func_?(&StringLiteral_gameMode);
    func_?(&StringLiteral_en_US);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  MStack_6 = gameMode;
  pDVar7 = (this->fields).gameSessionData;
  pOVar8 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&MStack_6);
  if (pDVar7 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)pDVar7,(Object *)StringLiteral_gameMode,
               pOVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    pDVar7 = (this->fields).gameSessionData;
    if (pDVar7 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      method_00 = (MethodInfo *)StringLiteral_language;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                 (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pDVar7 = (this->fields).gameSessionData;
      if (pDVar7 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                   (Object *)StringLiteral_referrer,(Object *)StringLiteral_gsm,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pIVar9 = (this->fields).serverIp;
        pDVar7 = (this->fields).gameSessionData;
        if ((pIVar9 != (InputField *)0x0) &&
           (pDVar7 != (Dictionary_2_System_String_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,
                     (Object *)StringLiteral_serverIP,(Object *)(pIVar9->fields).m_Text,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                    );
          pDVar7 = (this->fields).gameSessionData;
          this_01 = (GameSessionData *)func_?();
          GameSessionData::GameSessionData__ctor_1(this_01,pDVar7,(MethodInfo *)0x0);
          pSVar10 = (StringBuilder *)func_?();
          pSStack_11 = pSVar10;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
                    (pSVar10,0x100,(MethodInfo *)0x0);
          if (pSVar10 != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (pSVar10,StringLiteral_GameSessionData_u000A,(MethodInfo *)0x0);
            pDVar7 = (this->fields).gameSessionData;
            if (pDVar7 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        UInt32,System::Object]::
                        Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                  ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                    *)&stack0xffffffa0,
                                   (Dictionary_2_System_UInt32_System_Object_ *)pDVar7,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                                  );
              pOVar8 = (Object *)(pDVar12->_current).key;
              uVar13 = *(undefined8 *)&(pDVar12->_current).value;
              uStack_1 = 1;
              while (bVar14 = mscorlib.dll::System::Collections::Generic::
                             Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                             Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                         *)&stack0xffffffb8,
                                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                                       ), bVar14 != 0) {
                pOStack_15 = (Object *)uVar13;
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
                          (pSStack_11,StringLiteral__0_____1_u000A,pOVar8,pOStack_15,
                           (MethodInfo *)0x0);
              }
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffb8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                         ,method_00);
              pSVar10 = pSStack_11;
              uStack_1 = 0xffffffff;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar10,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_SetGameSessionData
                        (this_01,(MethodInfo *)0x0);
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if (this_02 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,0,(MethodInfo *)0x0);
                pTVar16 = (this->fields).touchToggle;
                if (pTVar16 != (Toggle *)0x0) {
                  if ((pTVar16->fields).m_IsOn == 0) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                              ((Object *)StringLiteral_Desktop___Starting_scene_Desktop,
                               (MethodInfo *)0x0);
                    sceneName = StringLiteral_DesktopBase;
                    if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                      sceneName = StringLiteral_DesktopBase;
                    }
                  }
                  else {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                              ((Object *)StringLiteral_WebPlay_as_touch___Starting_scen,
                               (MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField =
                         1;
                    sceneName = StringLiteral_Base;
                    if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                      sceneName = StringLiteral_Base;
                    }
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_LoadScene(sceneName,(MethodInfo *)0x0);
                  pTVar16 = (this->fields).disableCacheToggle;
                  if (pTVar16 != (Toggle *)0x0) {
                    if ((pTVar16->fields).m_IsOn != 0) {
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                                ((Object *)StringLiteral_Cache_disabled_,(MethodInfo *)0x0);
                      this_00 = (this->fields).kogamaSettings;
                      if (this_00 == (KoGaMaSettingsContainer *)0x0) goto code_?;
                      KoGaMaSettingsContainer::
                      KoGaMaSettingsContainer_InvalidateStreamingAssetsCache
                                (this_00,1,(MethodInfo *)0x0);
                    }
                    *unaff_FS_OFFSET = uStack_3;
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
code_?:
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UIDropdownChanged(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UIDropdownChanged
               (GUILoginHandler *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_uiIndex);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
            (StringLiteral_uiIndex,index,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Update
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Dev_serverip);
    func_?(&StringLiteral_profileID);
    func_?(&StringLiteral_Dev_planetId);
    func_?(&StringLiteral_serverIP);
    func_?(&StringLiteral_planetID);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).profileId;
  pSVar2 = (this->fields).playerPrefKey;
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).gameSessionData;
  if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar4 = func_?();
  }
  else {
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar3,(Object *)StringLiteral_profileID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      func_?(TVar5.m_Index);
      b = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      bVar6 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,b,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,b,(MethodInfo *)0x0);
        pSVar1 = b;
      }
      (this->fields).profileId = pSVar1;
      func_?();
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).gameSessionData;
      pSVar1 = (this->fields).serverip;
      if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar3,(Object *)StringLiteral_serverIP,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                          );
        TVar5.m_Index = 0;
        if (TVar7.m_Index != 0) {
          if (*(String__Class **)TVar7.m_Index == TypeInfo__System__String) {
            TVar5 = TVar7;
          }
          if ((String *)TVar5.m_Index == (String *)0x0) goto code_?;
        }
        bVar6 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar1,(String *)TVar5.m_Index,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                    ((String *)TVar5.m_Index,(String *)TVar5.m_Index,(MethodInfo *)0x0);
          pSVar1 = (String *)TVar5.m_Index;
        }
        (this->fields).serverip = pSVar1;
        func_?();
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).gameSessionData;
        ppSVar8 = &(this->fields).planetId;
        pSVar1 = *ppSVar8;
        if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar3,(Object *)StringLiteral_planetID,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          uVar4 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
          if (TVar5.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              func_?(TVar5.m_Index);
              pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
              bVar6 = mscorlib.dll::System::String::String_op_Inequality
                                (pSVar1,pSVar2,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                          ((String *)0x0,pSVar2,(MethodInfo *)0x0);
                pSVar1 = pSVar2;
              }
              *ppSVar8 = pSVar1;
              func_?();
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar4);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* String UpdateIfChanged(String, String, String) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UpdateIfChanged
                   (GUILoginHandler *this,String *prefName,String *current,String *target,
                   MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_op_Inequality(current,target,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (prefName,target,(MethodInfo *)0x0);
    return target;
  }
  return current;
}


/* Void UpdatePrefValuesIfChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UpdatePrefValuesIfChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Dev_serverip);
    func_?(&StringLiteral_profileID);
    func_?(&StringLiteral_Dev_planetId);
    func_?(&StringLiteral_serverIP);
    func_?(&StringLiteral_planetID);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).profileId;
  pSVar2 = (this->fields).playerPrefKey;
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).gameSessionData;
  if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar4 = func_?();
  }
  else {
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar3,(Object *)StringLiteral_profileID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      func_?(TVar5.m_Index);
      b = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      bVar6 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,b,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (pSVar2,b,(MethodInfo *)0x0);
        pSVar1 = b;
      }
      (this->fields).profileId = pSVar1;
      func_?();
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).gameSessionData;
      pSVar1 = (this->fields).serverip;
      if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar3,(Object *)StringLiteral_serverIP,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                          );
        TVar5.m_Index = 0;
        if (TVar7.m_Index != 0) {
          if (*(String__Class **)TVar7.m_Index == TypeInfo__System__String) {
            TVar5 = TVar7;
          }
          if ((String *)TVar5.m_Index == (String *)0x0) goto code_?;
        }
        bVar6 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar1,(String *)TVar5.m_Index,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                    ((String *)TVar5.m_Index,(String *)TVar5.m_Index,(MethodInfo *)0x0);
          pSVar1 = (String *)TVar5.m_Index;
        }
        (this->fields).serverip = pSVar1;
        func_?();
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).gameSessionData;
        ppSVar8 = &(this->fields).planetId;
        pSVar1 = *ppSVar8;
        if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar3,(Object *)StringLiteral_planetID,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                            );
          uVar4 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
          if (TVar5.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              func_?(TVar5.m_Index);
              pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
              bVar6 = mscorlib.dll::System::String::String_op_Inequality
                                (pSVar1,pSVar2,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                          ((String *)0x0,pSVar2,(MethodInfo *)0x0);
                pSVar1 = pSVar2;
              }
              *ppSVar8 = pSVar1;
              func_?();
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar4);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <SetupPlanetID>b__30_0(String) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__SetupPlanetID_b__30_0
               (GUILoginHandler *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_planetID);
    cRam_? = '\x01';
  }
  ptr = (Void *)0x0;
  bVar1 = mscorlib.dll::System::Int32::Int32_TryParse
                    (value,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).gameSessionData;
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
    UnsafeUtility_AsRef_1(ptr,(MethodInfo *)0x0);
    value_00 = (Object *)func_?(TypeInfo__System__Int32);
    if (this_00 == (Dictionary_2_System_String_System_Object_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_planetID
               ,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
  }
  return;
}


/* Void <SetupProfileID>b__31_0(String) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__SetupProfileID_b__31_0
               (GUILoginHandler *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral_profileID);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Int32::Int32_TryParse
                    (value,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pDVar2 = (this->fields).gameSessionData;
    value_00 = (Object *)func_?(TypeInfo__System__Int32);
    if (pDVar2 == (Dictionary_2_System_String_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)StringLiteral_profileID
               ,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
  }
  pDVar2 = (this->fields).gameSessionData;
  if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)StringLiteral_token,
               (Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
              );
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GUILoginHandler() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__ctor
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&StringLiteral_playButtonAdsEnabledDefault);
    func_?(&StringLiteral_WOTest);
    func_?(&StringLiteral_game_server_test);
    func_?(&StringLiteral_embedded);
    func_?(&StringLiteral_rewardedAdsEnabledDefault);
    func_?(&StringLiteral_newPlanetName);
    func_?(&StringLiteral_clientDefinedNewToken_);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_interstitialsAdsEnabledDefault);
    func_?(&StringLiteral_newToken);
    func_?(&StringLiteral_MaterialsTest);
    func_?(&StringLiteral_boostersEnabledDefault);
    func_?(&StringLiteral_isSoftLaunch);
    func_?(&StringLiteral_Dev_profileId);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Dictionary__
            );
  VStack_1.Item1 = 0;
  VStack_1.Item2 = (void *)0x0;
  mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
            (&VStack_1,0xbef7,(void *)0x1,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::Dictionary_2_System_Object_GUILoginHandler_PlanetData__Add
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_WOTest,(GUILoginHandler_PlanetData)VStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
              );
    mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
              ((ValueTuple_2_Int32_IntPtr_ *)&stack0xffffffe4,0xbef8,(void *)0x0,(MethodInfo *)0x0);
    value_00.profileID =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
    ;
    value_00.planetID =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::Dictionary_2_System_Object_GUILoginHandler_PlanetData__Add
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_Default,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
              );
    iVar2 = 0;
    iVar3 = 0;
    mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
              ((ValueTuple_2_Int32_IntPtr_ *)0x0,0,(void *)0xb3,(MethodInfo *)0x0);
    value.profileID = iVar3;
    value.planetID = iVar2;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::Dictionary_2_System_Object_GUILoginHandler_PlanetData__Add
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_MaterialsTest,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
              );
    (this->fields).defaultPlanetData = this_00;
    func_?();
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_newToken,(Object *)StringLiteral_clientDefinedNewToken_,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_newPlanetName,(Object *)StringLiteral_game_server_test,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      puStack_4 = (undefined *)((uint)puStack_4 & 0xffffff);
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_isSoftLaunch,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      puStack_4._0_3_ = (uint3)(ushort)puStack_4;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_embedded,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      puStack_4._0_2_ = (ushort)(byte)puStack_4;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_playButtonAdsEnabledDefault,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      puStack_4 = (undefined *)((uint)puStack_4 & 0xffffff00);
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_boostersEnabledDefault,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      uStack_6 = 0;
      puStack7 = &uStack_6;
      pBStack8 = TypeInfo__System__Boolean;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_interstitialsAdsEnabledDefault,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      uStack_9 = 0;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_rewardedAdsEnabledDefault,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                );
      (this->fields).gameSessionData = (Dictionary_2_System_String_System_Object_ *)this_01;
      func_?();
      (this->fields).playerPrefKey = StringLiteral_Dev_profileId;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

