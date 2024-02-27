
/* Int32 GetBoostEarning(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_GetBoostEarning
                  (BoostEditMenuItem *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_00 != (MVNetworkGame *)0x0) &&
       (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar1 != (MVLocalPlayer *)0x0)) && (projectEarningsReport != (ProjectEarningsReport *)0x0))
     && (pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports,
        pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                   *)0x0)) {
    iVar3 = (pMVar1->fields)._._ProfileID_k__BackingField;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,iVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                      );
    pMVar5 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
    ;
    if (bVar4 == 0) {
      return 0;
    }
    pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports;
    if (((pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) &&
        (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            ), pOVar6 != (Object *)0x0)) &&
       ((pOVar6[1].klass != (Object__Class *)0x0 &&
        ((pIVar7 = pMVar5[1].virtualMethodPointer, pIVar7 != (Il2CppMethodPointer)0x0 &&
         (pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   ((pOVar6[1].klass)->_0).namespaze,
         pDVar8 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)))))) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar8,*(Object **)(pIVar7 + 0xc),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                        );
      if (bVar4 == 0) {
        return 0;
      }
      pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if ((((pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                        *)0x0) &&
           (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar3,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                               ), pOVar6 != (Object *)0x0)) &&
          (pOVar6[1].klass != (Object__Class *)0x0)) &&
         (pIVar7 = pMVar5[1].virtualMethodPointer, pIVar7 != (Il2CppMethodPointer)0x0)) {
        pDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 ((pOVar6[1].klass)->_0).namespaze;
        if (pDVar8 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar8,*(Object **)(pIVar7 + 0xc),
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                            );
          return TVar9.m_Index;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  iVar3 = (*pcVar10)();
  return iVar3;
}


/* Void Initialize(Boost) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_Initialize
               (BoostEditMenuItem *this,Boost *boost,MethodInfo *method)

{
  pBVar1 = boost;
  pBVar2 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Item_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).boost = boost;
  func_?(&(this->fields).boost,boost);
  pTVar3 = (this->fields).boostDescription;
  if (boost != (Boost *)0x0) {
    pSVar4 = (boost->fields).description;
    arg0 = Boost::Boost_get_Value(boost,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Format(pSVar4,arg0,(MethodInfo *)0x0);
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar5 = (this->fields).activeToggleButton;
      if (pTVar5 != (ToggleButtonAnimation *)0x0) {
        ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar5,(MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
            (this_02 = (MVGameOptionDataObject *)
                       MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetSingletonWorldObject
                                 (this_01,
                                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                                 ), this_02 != (MVGameOptionDataObject *)0x0)) &&
           (pGVar6 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                               (this_02,(MethodInfo *)0x0),
           pGVar6 != (GameBoosterSettingsManager *)0x0)) {
          boost = (Boost *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                           SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingsManager
                           ::GameBoosterSettingsManager_get_ActiveSettingsList
                                     (pGVar6,(MethodInfo *)0x0);
          pGVar6 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                             (this_02,(MethodInfo *)0x0);
          if (pGVar6 != (GameBoosterSettingsManager *)0x0) {
            this = (BoostEditMenuItem *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                   GameBoosterSettings::GameBoosterSettingsManager::
                   GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                             (pGVar6,(MethodInfo *)0x0);
            iVar7 = 0;
            if (boost != (Boost *)0x0) {
              for (; iVar7 < (int)(boost->fields)._BoostKey_k__BackingField; iVar7 = iVar7 + 1) {
                RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)boost,iVar7,
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                  );
                if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
                bVar9 = mscorlib.dll::System::String::String_op_Equality
                                  (*(String **)((int)RVar8 + 8),
                                   (pBVar1->fields)._BoostKey_k__BackingField,(MethodInfo *)0x0);
                if (bVar9 != 0) {
                  pTVar5 = (pBVar2->fields).activeToggleButton;
                  (pBVar2->fields).isActive = 1;
                  if (pTVar5 == (ToggleButtonAnimation *)0x0) goto code_?;
                  ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                            (pTVar5,(MethodInfo *)0x0);
                  RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)pTVar5,iVar7,
                                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                    );
                  (pBVar2->fields).boosterSetting = (GameBoosterSettingWithGoldSetting *)RVar8;
                  boost = (Boost *)&(pBVar2->fields).boosterSetting;
                  this = (BoostEditMenuItem *)&UNK_?;
                  func_?();
                }
              }
              iVar7 = 0;
              if (this != (BoostEditMenuItem *)0x0) {
                for (; iVar7 < (int)(this->fields)._.m_CancellationTokenSource; iVar7 = iVar7 + 1
                    ) {
                  RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)this,iVar7,
                                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                    );
                  if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
                  bVar9 = mscorlib.dll::System::String::String_op_Equality
                                    (*(String **)((int)RVar8 + 8),
                                     (pBVar1->fields)._BoostKey_k__BackingField,(MethodInfo *)0x0);
                  if (bVar9 != 0) {
                    pTVar5 = (pBVar2->fields).activeToggleButton;
                    (pBVar2->fields).isActive = 0;
                    if (pTVar5 == (ToggleButtonAnimation *)0x0) goto code_?;
                    ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOffWithoutInterpolation
                              (pTVar5,(MethodInfo *)0x0);
                    RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)&UNK_?,iVar7,
                                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                      );
                    (pBVar2->fields).boosterSetting = (GameBoosterSettingWithGoldSetting *)RVar8;
                    this = (BoostEditMenuItem *)&UNK_?;
                    func_?();
                  }
                }
                pLVar10 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                          (pBVar2->fields).boosterList;
                iVar7 = 0;
                if (pLVar10 !=
                    (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
                  while (iVar7 < (pLVar10->fields)._size) {
                    pLVar10 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *
                              )(pBVar2->fields).boosterList;
                    if (pLVar10 ==
                        (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
                    goto code_?;
                    XVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema
                             ::XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                             List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                       (pLVar10,iVar7,
                                        MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Item_int_
                                       );
                    pLVar10 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *
                              )(pBVar2->fields).boosterList;
                    if (XVar11.qname == (XmlQualifiedName *)(pBVar1->fields)._Type_k__BackingField)
                    {
                      if (pLVar10 !=
                          (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0
                         ) {
                        XVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::
                                 Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                                 List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                           (pLVar10,iVar7,
                                            MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Item_int_
                                           );
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        this_03 = (GameObject *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                  Object_1_Instantiate_4
                                            ((Object *)XVar11.xso,
                                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                            );
                        if ((this_03 != (GameObject *)0x0) &&
                           (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(this_03,(MethodInfo *)0x0),
                           this_04 != (Transform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                    (this_04,(Transform *)(pBVar2->fields).boostTypeImageParent,0,
                                     (MethodInfo *)0x0);
                          break;
                        }
                      }
                      goto code_?;
                    }
                    iVar7 = iVar7 + 1;
                    if (pLVar10 ==
                        (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
                    goto code_?;
                  }
                  this_00 = (pBVar2->fields).boosterSetting;
                  if ((this_00 != (GameBoosterSettingWithGoldSetting *)0x0) &&
                     (this_05 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                SpecializedSettingsTypes::GameBoosterSettings::
                                GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                                GameBoosterSettingWithGoldSetting_get_GoldPrice
                                          (this_00,(MethodInfo *)0x0),
                     this_05 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) {
                    pSVar4 = (String *)
                             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore
                             ::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                             KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                                       (this_05,
                                        MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                       );
                    pTVar3 = (pBVar2->fields).goldPriceText;
                    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString_1
                                       ((Int32 *)&stack0xfffffff8,pSVar4,(MethodInfo *)0x0);
                    if ((pSVar4 != (String *)0x0) &&
                       (pSStack12 =
                             mscorlib.dll::System::String::String_Replace_1
                                       (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0
                                       ), pTVar3 != (Text *)0x0)) {
                      pIStack13 =
                           (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
                      pTStack14 = pTVar3;
                      (*(code *)(pTVar3->klass->vtable).set_text.method)();
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
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnActiveToggle() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnActiveToggle
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVGameOptionDataObject *)0x0) {
      obj = (this->fields).boosterSetting;
      if ((this->fields).isActive == 0) {
        MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                  (this_01,(KogamaSettingWrapperBase *)obj,(MethodInfo *)0x0);
      }
      else {
        MVGameOptionDataObject::MVGameOptionDataObject_RemoveSetting
                  (this_01,(KogamaSettingWrapperBase *)obj,(MethodInfo *)0x0);
      }
      MVGameOptionDataObject::MVGameOptionDataObject_Submit(this_01,(MethodInfo *)0x0);
      (this->fields).isActive = (this->fields).isActive == 0;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnBoostSettingChange(Object) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnBoostSettingChange
               (BoostEditMenuItem *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    this_02 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_01,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    pGVar1 = (this->fields).boosterSetting;
    if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
    pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
             GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
    if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
      if (((pKVar2->klass->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
           ->_1).naturalAligment) ||
         ((pKVar2->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
           ->_1).naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         )) goto code_?;
      pGVar1 = (this->fields).boosterSetting;
      if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
      this_03 = (KogamaSettingNumericBase_1_System_Int32_ *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
      if (this_03 == (KogamaSettingNumericBase_1_System_Int32_ *)0x0) goto code_?;
      if (((this_03->klass->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
           ->_1).naturalAligment) ||
         ((this_03->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
           ->_1).naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         )) goto code_?;
      if (newValue == (Object *)0x0) goto code_?;
      if ((newValue->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pMVar3 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
      ;
      piVar4 = (int32_t *)func_?();
      if (((this_03->klass->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
           ->_1).naturalAligment) ||
         ((this_03->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
           ->_1).naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         )) goto code_?;
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumericBase`1[System::Int32]::
      KogamaSettingNumericBase_1_System_Int32__set_NumericValue(this_03,*piVar4,pMVar3);
code_?:
      if (this_02 != (MVGameOptionDataObject *)0x0) {
        MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                  (this_02,(KogamaSettingWrapperBase *)(this->fields).boosterSetting,
                   (MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pGVar1 = (this->fields).boosterSetting;
    if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
    pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
             GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
    if (pKVar2 == (KogamaSettingValueWrapperBase *)0x0) {
code_?:
      this_00 = (this->fields).boost;
      pTVar5 = (this->fields).boostDescription;
      if (this_00 != (Boost *)0x0) {
        format = (this_00->fields).description;
        arg0 = Boost::Boost_get_Value(this_00,(MethodInfo *)0x0);
        pSStack6 = mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0)
        ;
        if (pTVar5 != (Text *)0x0) {
          pIStack7 = (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pTStack8 = pTVar5;
          (*(code *)(pTVar5->klass->vtable).set_text.method)();
          return;
        }
      }
      goto code_?;
    }
    if (((pKVar2->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment) ||
       ((pKVar2->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) goto code_?;
    pGVar1 = (this->fields).boosterSetting;
    if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
    this_04 = (KogamaSettingNumericBase_1_System_Single_ *)
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
              GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
    if (this_04 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) goto code_?;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment <= (this_04->klass->_1).naturalAligment) &&
       ((this_04->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) {
      if (newValue == (Object *)0x0) goto code_?;
      if ((newValue->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pMVar3 = 
      MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
      ;
      pfVar9 = (float *)func_?();
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
           ->_1).naturalAligment <= (this_04->klass->_1).naturalAligment) &&
         ((this_04->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
           ->_1).naturalAligment - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         )) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Single]::
        KogamaSettingNumericBase_1_System_Single__set_NumericValue(this_04,*pfVar9,pMVar3);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPriceSettingChanged(Int32) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnPriceSettingChanged
               (BoostEditMenuItem *this,int32_t newPrice,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_01,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    this_00 = (this->fields).boosterSetting;
    if (this_00 != (GameBoosterSettingWithGoldSetting *)0x0) {
      this_03 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                GameBoosterSettingWithGoldSetting_get_GoldPrice(this_00,(MethodInfo *)0x0);
      if (this_03 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__set_NumericValue
                  (this_03,newPrice,
                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                  );
        if (this_02 != (MVGameOptionDataObject *)0x0) {
          method = (MethodInfo *)(this->fields).boosterSetting;
          newPrice = (int32_t)this_02;
          MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                    (this_02,(KogamaSettingWrapperBase *)method,(MethodInfo *)0x0);
          pTVar1 = (this->fields).goldPriceText;
          newPrice = (int32_t)&newPrice;
          method = (MethodInfo *)StringLiteral_N0;
          this_04 = mscorlib.dll::System::Int32::Int32_ToString_1
                              ((Int32 *)newPrice,StringLiteral_N0,(MethodInfo *)0x0);
          if (this_04 != (String *)0x0) {
            pSStack2 =
                 mscorlib.dll::System::String::String_Replace_1
                           (this_04,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
            if (pTVar1 != (Text *)0x0) {
              pIStack3 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
              pTStack4 = pTVar1;
              (*(code *)(pTVar1->klass->vtable).set_text.method)();
              return;
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


/* Void OnSubmitData() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnSubmitData
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVGameOptionDataObject *)0x0) {
      MVGameOptionDataObject::MVGameOptionDataObject_Submit(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0x00000000);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowEditPopup() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_ShowEditPopup
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_);
    func_?(&MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_);
    func_?(&MethodInfo__BoostEditMenuItem__OnSubmitData__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&
                    BoostEditFloatPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditFloatPopup>_BoostEditFloatPopup_
                   );
    func_?(&
                    BoostEditIntPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditIntPopup>_BoostEditIntPopup_
                   );
    func_?(&
                    BoostEditPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditPopup>_BoostEditPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__BoostEditMenuItem____c__DisplayClass14_0___ShowEditPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostEditMenuItem____c__DisplayClass14_0);
    func_?(&
                    MethodInfo__BoostEditMenuItem____c__DisplayClass14_1___ShowEditPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostEditMenuItem____c__DisplayClass14_1);
    func_?(&
                    MethodInfo__BoostEditMenuItem____c__DisplayClass14_2___ShowEditPopup_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostEditMenuItem____c__DisplayClass14_2);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).boosterSetting;
  if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pMVar2 = (MethodInfo *)&UNK_?;
  pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
           GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
  if (pKVar3 != (KogamaSettingValueWrapperBase *)0x0) {
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment <= (pKVar3->klass->_1).naturalAligment) &&
       ((pKVar3->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      value = (Object *)func_?(TypeInfo__BoostEditMenuItem____c__DisplayClass14_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,pMVar2);
      original = (this->fields).boostEditIntPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          BoostEditIntPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditIntPopup>_BoostEditIntPopup_
                         );
      if (value == (Object *)0x0) goto code_?;
      value[1].klass = pOVar4;
      func_?(value + 1,pOVar4);
      pBVar5 = (this->fields).boost;
      pOVar4 = value[1].klass;
      pGVar1 = (this->fields).boosterSetting;
      pUVar6 = (UnityAction_1_System_Object_ *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
                 (MethodInfo *)0x0);
      pUVar7 = (UnityAction_1_System_Int32Enum_ *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar7,(Object *)this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_,
                 (MethodInfo *)0x0);
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar8,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
                 (MethodInfo *)0x0);
      if (pOVar4 == (Object__Class *)0x0) goto code_?;
      pIVar9 = (pOVar4->_0).image;
      (*(code *)pIVar9[5].nameNoExt)(pOVar4,pBVar5,pGVar1,pUVar6,pUVar7,pNVar8,pIVar9[5].assembly);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      pMVar2 = 
      MethodInfo__BoostEditMenuItem____c__DisplayClass14_0___ShowEditPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      goto code_?;
    }
  }
  pGVar1 = (this->fields).boosterSetting;
  if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
           GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
  if (pKVar3 != (KogamaSettingValueWrapperBase *)0x0) {
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment <= (pKVar3->klass->_1).naturalAligment) &&
       ((pKVar3->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) {
      value = (Object *)func_?(TypeInfo__BoostEditMenuItem____c__DisplayClass14_1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,pMVar2);
      original_00 = (this->fields).boostEditFloatPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original_00,
                          BoostEditFloatPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditFloatPopup>_BoostEditFloatPopup_
                         );
      if (value == (Object *)0x0) goto code_?;
      value[1].klass = pOVar4;
      func_?(value + 1,pOVar4);
      pBVar5 = (this->fields).boost;
      pOVar4 = value[1].klass;
      pGVar1 = (this->fields).boosterSetting;
      pUVar6 = (UnityAction_1_System_Object_ *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
                 (MethodInfo *)0x0);
      pUVar7 = (UnityAction_1_System_Int32Enum_ *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar7,(Object *)this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_,
                 (MethodInfo *)0x0);
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar8,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
                 (MethodInfo *)0x0);
      if (pOVar4 == (Object__Class *)0x0) goto code_?;
      pIVar9 = (pOVar4->_0).image;
      (*(code *)pIVar9[5].nameNoExt)(pOVar4,pBVar5,pGVar1,pUVar6,pUVar7,pNVar8,pIVar9[5].assembly);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      pMVar2 = 
      MethodInfo__BoostEditMenuItem____c__DisplayClass14_1___ShowEditPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      goto code_?;
    }
  }
  value = (Object *)func_?(TypeInfo__BoostEditMenuItem____c__DisplayClass14_2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,pMVar2);
  original_01 = (this->fields).boostEditPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original_01,
                      BoostEditPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditPopup>_BoostEditPopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar4;
    func_?(value + 1,pOVar4);
    pBVar5 = (this->fields).boost;
    pOVar4 = value[1].klass;
    pGVar1 = (this->fields).boosterSetting;
    pUVar6 = (UnityAction_1_System_Object_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar6,(Object *)this,
               MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,(MethodInfo *)0x0
              );
    pUVar7 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar7,(Object *)this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_,
               (MethodInfo *)0x0);
    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar8,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,(MethodInfo *)0x0
              );
    if (pOVar4 != (Object__Class *)0x0) {
      pIVar9 = (pOVar4->_0).image;
      (*(code *)pIVar9[5].nameNoExt)(pOVar4,pBVar5,pGVar1,pUVar6,pUVar7,pNVar8,pIVar9[5].assembly);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      pMVar2 = 
      MethodInfo__BoostEditMenuItem____c__DisplayClass14_2___ShowEditPopup_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,pMVar2,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateEarningsText(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_UpdateEarningsText
               (BoostEditMenuItem *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
      cRam_? = '\x01';
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 != (MVLocalPlayer *)0x0)) && (projectEarningsReport != (ProjectEarningsReport *)0x0)
        ) && (pDVar3 = (projectEarningsReport->fields).projectMemberEarningsReports,
             pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                        *)0x0)) {
      key = (pMVar2->fields)._._ProfileID_k__BackingField;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        pDVar3 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (((pDVar3 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                         *)0x0) ||
            (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                ), pOVar5 == (Object *)0x0)) ||
           ((pOVar5[1].klass == (Object__Class *)0x0 ||
            ((*(int *)(unaff_EDI + 0x34) == 0 ||
             (pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       ((pOVar5[1].klass)->_0).namespaze,
             pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))))))
        goto code_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar6,*(Object **)(*(int *)(unaff_EDI + 0x34) + 0xc),
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                          );
        if (bVar4 != 0) {
          pDVar3 = (projectEarningsReport->fields).projectMemberEarningsReports;
          if ((((pDVar3 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                            *)0x0) ||
               (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                   ), pOVar5 == (Object *)0x0)) ||
              (pOVar5[1].klass == (Object__Class *)0x0)) || (*(int *)(unaff_EDI + 0x34) == 0))
          goto code_?;
          pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   ((pOVar5[1].klass)->_0).namespaze;
          if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    (pDVar6,*(Object **)(*(int *)(unaff_EDI + 0x34) + 0xc),
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                    );
        }
      }
      piVar7 = *(int **)(unaff_EDI + 0x1c);
      pSVar8 = mscorlib.dll::System::Int32::Int32_ToString_1
                         ((Int32 *)&stack0xfffffff8,StringLiteral_N0,(MethodInfo *)0x0);
      if ((pSVar8 != (String *)0x0) &&
         (pSVar8 = mscorlib.dll::System::String::String_Replace_1
                             (pSVar8,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
         piVar7 != (int *)0x0)) {
        (**(code **)(*piVar7 + 0x318))(piVar7,pSVar8);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

