
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
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_02,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_00 != (MVPlayerContainer *)0x0)) && (pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?(pOVar2);
        pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar3,(MethodInfo *)0x0);
        pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
        pSVar5 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_02,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pSVar6 = (String *)0x0;
        if (pSVar5 != (String *)0x0) {
          if (pSVar5->klass == TypeInfo__System__String) {
            pSVar6 = pSVar5;
          }
          pSVar7 = TypeInfo__System__String;
          if (pSVar6 == (String *)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar8 != (GameSessionData *)0x0) {
          bVar9 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar6,(pGVar8->fields).language,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            pTVar10 = (this->fields)._.NameLabel;
            if ((pMVar4 != (MVPlayer *)0x0) &&
               (pUVar11 = (pMVar4->fields)._UserProfileData_k__BackingField,
               pUVar11 != (UserProfileData *)0x0)) {
              pSVar6 = (pUVar11->fields).UserName;
              pSVar5 = TM::TM__(StringLiteral__joined_,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                  (pSVar6,pSVar5,(MethodInfo *)0x0);
code_?:
              if (pTVar10 != (Text *)0x0) {
                (*(pTVar10->klass->vtable).set_text.methodPtr)
                          (pTVar10,pSVar6,(pTVar10->klass->vtable).set_text.method);
                return;
              }
            }
          }
          else {
            this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                      (this->fields).Country;
            (this->fields)._.lifeTime = 8;
            if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (this_01,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                                );
              if (bVar9 == 0) {
                method = (MethodInfo *)0x0;
                data = (Dictionary_2_System_Object_System_Object_ *)
                       StringLiteral__returning_English_;
                pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_Country_dictionary_doesn_t_conta,pSVar6,
                                     StringLiteral__returning_English_,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  in_stack_12 = TypeInfo__UnityEngine__Debug;
                  in_stack_13 = &UNK_?;
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                          ((Object *)pSVar6,(MethodInfo *)0x0);
                this_03 = (this->fields).Country;
                pSVar6 = StringLiteral_en_US;
                method_00 = 
                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                ;
                if (this_03 != (Dictionary_2_System_String_System_String_ *)0x0)
                goto code_?;
              }
              else {
                this_03 = (this->fields).Country;
                if (this_03 != (Dictionary_2_System_String_System_String_ *)0x0) {
                  method = 
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                  ;
code_?:
                  pSVar6 = (String *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                                       (Object *)pSVar6,method_00);
                  pTVar10 = (this->fields)._.NameLabel;
                  if ((pMVar4 != (MVPlayer *)0x0) &&
                     (pUVar11 = (pMVar4->fields)._UserProfileData_k__BackingField,
                     pUVar11 != (UserProfileData *)0x0)) {
                    pSVar5 = (pUVar11->fields).UserName;
                    str1 = TM::TM__(StringLiteral__joined_from_,(MethodInfo *)0x0);
                    pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                        (pSVar5,str1,pSVar6,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        func_?(pOVar2,TypeInfo__System__Int32);
      }
    }
  }
  pSVar5 = (String *)func_?();
  pSVar7 = extraout_ECX;
code_?:
  func_?(pSVar5,pSVar7);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  this_00 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    pSVar1 = TM::TM__(StringLiteral_Denmark,(MethodInfo *)0x0);
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
    ppDStack2 = &(this->fields).Country;
    (this->fields).Country = this_00;
    pDStack3 = this_00;
    func_?();
    (this->fields)._.lifeTime = 2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

