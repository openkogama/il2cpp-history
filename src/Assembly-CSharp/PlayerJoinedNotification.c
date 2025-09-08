
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerJoinedNotification::PlayerJoinedNotification_Initialize
               (PlayerJoinedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__joined_);
    func_?(&StringLiteral__joined_from_);
    func_?(&StringLiteral__returning_English_);
    func_?(&StringLiteral_Country_dictionary_doesn_t_conta);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_en_US);
    cRam_? = '\x01';
  }
  this_02 = data;
  PlayerNotification::PlayerNotification_Initialize
            ((PlayerNotification *)this,data,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).playerContainer;
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    if (((this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
        (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                            pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), this_00 != (MVPlayerContainer *)0x0)) && (TVar3.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?(TVar3.m_Index);
        pMVar5 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar4,(MethodInfo *)0x0);
        pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
        TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                            pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        TVar3.m_Index = 0;
        if (TVar6.m_Index != 0) {
          if (*(String__Class **)TVar6.m_Index == TypeInfo__System__String) {
            TVar3 = TVar6;
          }
          pSVar7 = TypeInfo__System__String;
          if ((String *)TVar3.m_Index == (String *)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar8 != (GameSessionData *)0x0) {
          bVar9 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)TVar3.m_Index,(pGVar8->fields).language,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            if ((pMVar5 != (MVPlayer *)0x0) &&
               (pUVar10 = (pMVar5->fields)._UserProfileData_k__BackingField,
               pUVar10 != (UserProfileData *)0x0)) {
              pSVar11 = (pUVar10->fields).UserName;
              pSVar12 = TM::TM__(StringLiteral__joined_,(MethodInfo *)0x0);
              piVar13 = (int *)&UNK_?;
              pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                  (pSVar11,pSVar12,(MethodInfo *)0x0);
code_?:
              if (piVar13 != (int *)0x0) {
                (**(code **)(*piVar13 + 0x318))(piVar13,pSVar11,*(undefined4 *)(*piVar13 + 0x31c));
                this_01 = (this->fields)._.tertiaryNotificationUI;
                l = (*(code *)(this->klass->vtable).get_Lifetime.method)
                              (this,(this->klass->vtable).Initialize.methodPtr);
                if (this_01 != (TertiaryNotificationUI *)0x0) {
                  TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                            (this_01,(Notification *)this,l,1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      (this->fields).Country;
            (this->fields)._.lifeTime = 8;
            if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (pDVar14,(Object *)TVar3.m_Index,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                                );
              if (bVar9 == 0) {
                method = (MethodInfo *)0x0;
                data = (Dictionary_2_System_Object_System_Object_ *)
                       StringLiteral__returning_English_;
                pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_Country_dictionary_doesn_t_conta,
                                     (String *)TVar3.m_Index,StringLiteral__returning_English_,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  in_stack_15 = TypeInfo__UnityEngine__Debug;
                  in_stack_16 = &UNK_?;
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)pSVar11,(MethodInfo *)0x0);
                pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          (this->fields).Country;
                TVar3.m_Index = (int32_t)StringLiteral_en_US;
                method_00 = 
                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                ;
                if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                goto code_?;
              }
              else {
                pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          (this->fields).Country;
                if (pDVar14 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                {
                  method = 
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                  ;
code_?:
                  TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                    (pDVar14,TVar3.m_Index,method_00);
                  if ((pMVar5 != (MVPlayer *)0x0) &&
                     (pUVar10 = (pMVar5->fields)._UserProfileData_k__BackingField,
                     pUVar10 != (UserProfileData *)0x0)) {
                    pSVar11 = (pUVar10->fields).UserName;
                    pSVar12 = TM::TM__(StringLiteral__joined_from_,(MethodInfo *)0x0);
                    piVar13 = (int *)&UNK_?;
                    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                        (pSVar11,pSVar12,(String *)TVar3.m_Index,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        func_?(TVar3.m_Index,TypeInfo__System__Int32);
      }
    }
  }
  TVar6.m_Index = func_?();
  pSVar7 = extraout_ECX;
code_?:
  func_?(TVar6.m_Index,pSVar7);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* PlayerJoinedNotification() */

void Assembly-CSharp.dll::PlayerJoinedNotification::PlayerJoinedNotification__ctor
               (PlayerJoinedNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&StringLiteral_Italy);
    func_?(&StringLiteral_es_ES);
    func_?(&StringLiteral_Brazil);
    func_?(&StringLiteral_Russia);
    func_?(&StringLiteral_pt);
    func_?(&StringLiteral_Norway);
    func_?(&StringLiteral_Turkey);
    func_?(&StringLiteral_Indonesia);
    func_?(&StringLiteral_France);
    func_?(&StringLiteral_The_United_Kingdom);
    func_?(&StringLiteral_Germany);
    func_?(&StringLiteral_da_DK);
    func_?(&StringLiteral_pt_BR);
    func_?(&StringLiteral_The_United_States);
    func_?(&StringLiteral_it_IT);
    func_?(&StringLiteral_Denmark);
    func_?(&StringLiteral_Finland);
    func_?(&StringLiteral_nl_NL);
    func_?(&StringLiteral_sv_SE);
    func_?(&StringLiteral_fi);
    func_?(&StringLiteral_de_DE);
    func_?(&StringLiteral_fr_FR);
    func_?(&StringLiteral_The_Netherlands);
    func_?(&StringLiteral_pl_PL);
    func_?(&StringLiteral_en_GB);
    func_?(&StringLiteral_id_ID);
    func_?(&StringLiteral_Sweden);
    func_?(&StringLiteral_Spain);
    func_?(&StringLiteral_ru_RU);
    func_?(&StringLiteral_tr_TR);
    func_?(&StringLiteral_nb_NO);
    func_?(&StringLiteral_Portugal);
    func_?(&StringLiteral_en_US);
    func_?(&StringLiteral_Poland);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_Denmark,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_da_DK,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Germany,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_de_DE,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_The_United_States,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_en_US,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_The_United_Kingdom,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_en_GB,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Spain,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_es_ES,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Finland,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_fi,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_France,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_fr_FR,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Indonesia,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_id_ID,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Italy,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_it_IT,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Norway,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_nb_NO,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_The_Netherlands,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_nl_NL,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Poland,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pl_PL,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Brazil,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pt_BR,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Russia,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_ru_RU,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Sweden,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_sv_SE,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Turkey,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_tr_TR,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_Portugal,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pt,
               (Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    (this->fields).Country = (Dictionary_2_System_String_System_String_ *)this_00;
    func_?();
    (this->fields)._.lifeTime = 2;
    Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
    Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

