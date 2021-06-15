
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerJoinedNotification::PlayerJoinedNotification_Initialize
               (PlayerJoinedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  PlayerNotification::PlayerNotification_Initialize
            ((PlayerNotification *)this,data,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
        (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)pDVar1,pTVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
       (pPVar3 != (Pool *)0x0)) {
      if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?(pPVar3);
        this_02 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)this_01,*piVar4,(MethodInfo *)0x0);
        uStack_5 = (undefined *)CONCAT13(0xc,(undefined3)uStack_5);
        pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&uStack_5 + 3);
        pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar1,pTVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pPVar3 = (Pool *)0x0;
        if (pPVar6 != (Pool *)0x0) {
          if ((String__Class *)pPVar6->klass == TypeInfo__System__String) {
            pPVar3 = pPVar6;
          }
          pSVar7 = TypeInfo__System__String;
          if (pPVar3 == (Pool *)0x0) goto code_?;
        }
        pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar8 != (GameSessionData *)0x0) {
          pSVar7 = (String__Class *)(pGVar8->fields).language;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            pSVar7 = TypeInfo__System__String;
            func_?();
          }
          bVar9 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)pPVar3,(String *)pSVar7,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            pTVar10 = (this->fields)._.NameLabel;
            if ((this_02 != (MVPlayer *)0x0) &&
               (iVar11 = GamePointGainEffect::GamePointGainEffect_get_ID
                                  ((GamePointGainEffect *)this_02,(MethodInfo *)0x0), iVar11 != 0)) {
              pSVar12 = *(String **)(iVar11 + 0xc);
              str1 = TM::TM__(StringLiteral__joined_,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar12 = mscorlib.dll::System::String::String_Concat_2
                                  (pSVar12,str1,(MethodInfo *)0x0);
code_?:
              if (pTVar10 != (Text *)0x0) {
                (*(code *)(pTVar10->klass->vtable).set_text.method)
                          (pTVar10,pSVar12,
                           (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                return;
              }
            }
          }
          else {
            (this->fields)._.lifeTime = 8;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pDVar13 = (this->fields).Country;
            if (pDVar13 != (Dictionary_2_System_String_System_String_ *)0x0) {
              pMVar14 = 
              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
              ;
              bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                      WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                      KogamaSettingWrapperBase]::
                      Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                  *)pDVar13,(String *)pPVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                                );
              if (bVar9 == 0) {
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar12 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_Country_dictionary_doesn_t_conta,(String *)pPVar3
                                     ,StringLiteral__returning_English_,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                          ((Object *)pSVar12,(MethodInfo *)0x0);
                pDVar13 = (this->fields).Country;
                pPVar3 = (Pool *)StringLiteral_en_US;
                pMVar14 = 
                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                ;
              }
              else {
                pDVar13 = (this->fields).Country;
              }
              if (pDVar13 != (Dictionary_2_System_String_System_String_ *)0x0) {
                pMVar14 = (MethodInfo *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                    ((Dictionary_2_System_Type_Pool_ *)pDVar13,(Type *)pPVar3,pMVar14
                                    );
                pTVar10 = (this->fields)._.NameLabel;
                if (this_02 != (MVPlayer *)0x0) {
                  iVar11 = GamePointGainEffect::GamePointGainEffect_get_ID
                                    ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
                  if (iVar11 != 0) {
                    pSVar12 = *(String **)(iVar11 + 0xc);
                    data = (Dictionary_2_System_Object_System_Object_ *)0x0;
                    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                              TM::TM__(StringLiteral__joined_from_,(MethodInfo *)0x0);
                    method = pMVar14;
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      method = (MethodInfo *)&UNK_?;
                      func_?();
                      method = pMVar14;
                    }
                    data = pDVar1;
                    pSVar12 = mscorlib.dll::System::String::String_Concat_3
                                        (pSVar12,(String *)pDVar1,(String *)method,
                                         (MethodInfo *)0x0);
                    goto code_?;
                  }
                }
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
  pPVar6 = (Pool *)func_?(0);
  pSVar7 = extraout_ECX;
code_?:
  func_?(pPVar6,pSVar7);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* PlayerJoinedNotification() */

void Assembly-CSharp.dll::PlayerJoinedNotification::PlayerJoinedNotification__ctor
               (PlayerJoinedNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  pCVar1 = (CrossPlatformInputManager_VirtualButton *)
           TM::TM__(StringLiteral_Denmark,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_da_DK,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Germany,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_de_DE,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_The_United_States,(MethodInfo *)0x0);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_en_US,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_The_United_Kingdom,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_en_GB,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Spain,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_es_ES,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Finland,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_fi,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_France,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_fr_FR,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Indonesia,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_id_ID,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Italy,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_it_IT,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Norway,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_nb_NO,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_The_Netherlands,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_nl_NL,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Poland,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_pl_PL,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Brazil,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_pt_BR,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Russia,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_ru_RU,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Sweden,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_sv_SE,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Turkey,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_tr_TR,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pCVar1 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Portugal,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_pt,pCVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pMVar2[1].virtualMethodPointer = (Il2CppMethodPointer)this_00;
    pMVar2[1].methodPointer = (Il2CppMethodPointer)0x2;
    uStack3 = 0;
    if (cRam_? == '\0') {
      pOStack4 = (Object_1__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      pOStack4 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

