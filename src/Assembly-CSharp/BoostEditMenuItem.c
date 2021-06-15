
/* Int32 GetBoostEarning(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_GetBoostEarning
                  (BoostEditMenuItem *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_03 != (MVNetworkGame *)0x0) &&
       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
       this_04 != (MVLocalPlayer *)0x0)) &&
      (key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_04,(MethodInfo *)0x0),
      projectEarningsReport != (ProjectEarningsReport *)0x0)) &&
     (this_00 = (projectEarningsReport->fields).projectMemberEarningsReports,
     this_00 !=
     (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
      *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(projectEarningsReport->fields).projectMemberEarningsReports;
    if (((this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) &&
        (pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (this_01,(int32_t)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            ), pTVar2 != (TerrainUtility_TerrainMap *)0x0)) &&
       ((fVar3 = (pTVar2->fields).m_patchSize.x, fVar3 != 0.0 &&
        ((iVar4 = (this_01->fields).generation, iVar4 != 0 &&
         (pDVar5 = *(Dictionary_2_System_Object_System_Int32_ **)((int)fVar3 + 0xc),
         pDVar5 != (Dictionary_2_System_Object_System_Int32_ *)0x0)))))) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]
              ::Dictionary_2_System_Object_System_Int32__ContainsKey
                        (pDVar5,*(Object **)(iVar4 + 0xc),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                        );
      if (bVar1 == 0) {
        return 0;
      }
      this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(projectEarningsReport->fields).projectMemberEarningsReports;
      if ((((this_02 !=
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) &&
           (pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (this_02,(int32_t)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                               ), pTVar2 != (TerrainUtility_TerrainMap *)0x0)) &&
          (fVar3 = (pTVar2->fields).m_patchSize.x, fVar3 != 0.0)) &&
         (iVar4 = (this_01->fields).generation, iVar4 != 0)) {
        pDVar5 = *(Dictionary_2_System_Object_System_Int32_ **)((int)fVar3 + 0xc);
        if (pDVar5 != (Dictionary_2_System_Object_System_Int32_ *)0x0) {
          iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Int32]::Dictionary_2_System_Object_System_Int32__get_Item
                            (pDVar5,*(Object **)(iVar4 + 0xc),
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                            );
          return iVar6;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Void Initialize(Boost) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_Initialize
               (BoostEditMenuItem *this,Boost *boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).boostDescription;
  (this->fields).boost = boost;
  if ((boost != (Boost *)0x0) &&
     (pSVar2 = Boost::Boost_get_Description(boost,(MethodInfo *)0x0), pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar3 = (this->fields).activeToggleButton;
    if (pTVar3 != (ToggleButtonAnimation *)0x0) {
      ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
          (this_01 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetSingletonWorldObject_4
                               (this_00,
                                MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                               ), this_01 != (MVRoundCube *)0x0)) &&
         (pGVar4 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                             ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0),
         pGVar4 != (GameBoosterSettingsManager *)0x0)) {
        this_02 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList(pGVar4,(MethodInfo *)0x0);
        pGVar4 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                           ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0);
        if (pGVar4 != (GameBoosterSettingsManager *)0x0) {
          this_03 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameBoosterSettings::GameBoosterSettingsManager::
                    GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                              (pGVar4,(MethodInfo *)0x0);
          iVar5 = 0;
          if (this_02 !=
              (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
               *)0x0) {
            for (; pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       this_02,
                                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                                      ), iVar5 < (int)pOVar6; iVar5 = iVar5 + 1) {
              pLVar7 = this_02;
              pCVar8 = (Collection_1_VoxelHit_ *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                  iVar5,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                 );
              if (pCVar8 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              pSVar9 = (String *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(pCVar8,(MethodInfo *)0x0);
              pSVar2 = (boost->fields)._BoostKey_k__BackingField;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                pSVar9 = (String *)&UNK_?;
                func_?();
              }
              bVar10 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar9,pSVar2,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                pTVar3 = (this->fields).activeToggleButton;
                (this->fields).isActive = 1;
                if (pTVar3 == (ToggleButtonAnimation *)0x0) goto code_?;
                ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                          (pTVar3,(MethodInfo *)0x0);
                pGVar11 = (GameBoosterSettingWithGoldSetting *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02
                                     ,iVar5,
                                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                    );
                (this->fields).boosterSetting = pGVar11;
                pLVar7 = this_02;
              }
              this_02 = pLVar7;
            }
            iVar5 = 0;
            if (this_03 !=
                (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                 *)0x0) {
              for (; pOVar6 = mscorlib.dll::System::Collections::ObjectModel::
                              Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *
                                         )this_03,
                                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                                        ), iVar5 < (int)pOVar6; iVar5 = iVar5 + 1) {
                pCVar8 = (Collection_1_VoxelHit_ *)
                         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                    iVar5,
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                   );
                if (pCVar8 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
                pSVar9 = (String *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items(pCVar8,(MethodInfo *)0x0);
                pSVar2 = (boost->fields)._BoostKey_k__BackingField;
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar10 = mscorlib.dll::System::String::String_op_Equality
                                  (pSVar9,pSVar2,(MethodInfo *)0x0);
                if (bVar10 != 0) {
                  pTVar3 = (this->fields).activeToggleButton;
                  (this->fields).isActive = 0;
                  if (pTVar3 == (ToggleButtonAnimation *)0x0) goto code_?;
                  ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOffWithoutInterpolation
                            (pTVar3,(MethodInfo *)0x0);
                  pGVar11 = (GameBoosterSettingWithGoldSetting *)
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       this_03,iVar5,
                                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                      );
                  (this->fields).boosterSetting = pGVar11;
                }
              }
              pLVar12 = (this->fields).boosterList;
              iVar5 = 0;
              if (pLVar12 != (List_1_BoostEditMenuItem_BoosterDef_ *)0x0) {
                while (pOVar6 = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)pLVar12,
                                           MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Count__
                                          ), iVar5 < (int)pOVar6) {
                  pLVar12 = (this->fields).boosterList;
                  if (pLVar12 == (List_1_BoostEditMenuItem_BoosterDef_ *)0x0) goto code_?;
                  BVar13 = mscorlib.dll::System::Collections::Generic::
                           List`1[BoostEditMenuItem+BoosterDef]::
                           List_1_BoostEditMenuItem_BoosterDef__get_Item
                                     (pLVar12,iVar5,
                                      MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Item_int_
                                     );
                  pLVar12 = (this->fields).boosterList;
                  if (BVar13.type == (boost->fields)._Type_k__BackingField) {
                    if (pLVar12 != (List_1_BoostEditMenuItem_BoosterDef_ *)0x0) {
                      BVar13 = mscorlib.dll::System::Collections::Generic::
                               List`1[BoostEditMenuItem+BoosterDef]::
                               List_1_BoostEditMenuItem_BoosterDef__get_Item
                                         (pLVar12,iVar5,
                                          MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Item_int_
                                         );
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_251
                                          ((XpBoostParticlePreviewer *)BVar13.iconPrefab,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                          );
                      if ((this_04 != (XpBoostParticlePreviewer *)0x0) &&
                         (this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform
                                              ((GameObject *)this_04,(MethodInfo *)0x0),
                         this_05 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                  (this_05,(Transform *)(this->fields).boostTypeImageParent,0,
                                   (MethodInfo *)0x0);
                        break;
                      }
                    }
                    goto code_?;
                  }
                  iVar5 = iVar5 + 1;
                  if (pLVar12 == (List_1_BoostEditMenuItem_BoosterDef_ *)0x0) goto code_?;
                }
                pGVar11 = (this->fields).boosterSetting;
                if ((pGVar11 != (GameBoosterSettingWithGoldSetting *)0x0) &&
                   (this_06 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                              SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes
                              ::GameBoosterSettingWithGoldSetting::
                              GameBoosterSettingWithGoldSetting_get_GoldPrice
                                        (pGVar11,(MethodInfo *)0x0),
                   this_06 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) {
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                  KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                            (this_06,
                             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                            );
                  pTVar1 = (this->fields).goldPriceText;
                  pSVar2 = (String *)func_?(&stack0xfffffff4,StringLiteral_N0,0);
                  if ((pSVar2 != (String *)0x0) &&
                     (pSVar2 = mscorlib.dll::System::String::String_Replace_1
                                         (pSVar2,::StringLiteral__,::StringLiteral__,
                                          (MethodInfo *)0x0), pTVar1 != (Text *)0x0)) {
                    (*(code *)(pTVar1->klass->vtable).set_text.method)
                              (pTVar1,pSVar2,
                               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnActiveToggle() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnActiveToggle
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVRoundCube *)0x0) {
      obj = (this->fields).boosterSetting;
      if ((this->fields).isActive == 0) {
        MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                  ((MVGameOptionDataObject *)this_01,(KogamaSettingWrapperBase *)obj,
                   (MethodInfo *)0x0);
      }
      else {
        MVGameOptionDataObject::MVGameOptionDataObject_RemoveSetting
                  ((MVGameOptionDataObject *)this_01,(KogamaSettingWrapperBase *)obj,
                   (MethodInfo *)0x0);
      }
      MVGameOptionDataObject::MVGameOptionDataObject_Submit
                ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0);
      (this->fields).isActive = (this->fields).isActive == 0;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnBoostSettingChange(Object) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnBoostSettingChange
               (BoostEditMenuItem *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?(0);
code_?:
    func_?(unaff_ESI,unaff_EBX);
    newValue = extraout_ECX;
    pIVar1 = extraout_EDX;
  }
  else {
    unaff_EBX = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                          (this_01,
                           MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                          );
    pGVar2 = (this->fields).boosterSetting;
    if (pGVar2 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
    pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
             GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
    if (pKVar3 == (KogamaSettingValueWrapperBase *)0x0) {
code_?:
      pGVar2 = (this->fields).boosterSetting;
      if (pGVar2 != (GameBoosterSettingWithGoldSetting *)0x0) {
        pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                 GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                 GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
        unaff_ESI = (KogamaSettingNumericBase_1_System_Int32___Class *)
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
        ;
        if (pKVar3 != (KogamaSettingValueWrapperBase *)0x0) {
          bVar4 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                  ->_1).naturalAligment;
          if (((pKVar3->klass->_1).naturalAligment < bVar4) ||
             ((pKVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
             )) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pKVar6 = (KogamaSettingValueWrapperBase *)0x0;
          if (bVar5) {
            pKVar6 = pKVar3;
          }
          if (pKVar6 != (KogamaSettingValueWrapperBase *)0x0) {
            pGVar2 = (this->fields).boosterSetting;
            if (pGVar2 != (GameBoosterSettingWithGoldSetting *)0x0) {
              pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                       ::GameBoosterSettings::GameBoosterSettingTypes::
                       GameBoosterSettingWithGoldSetting::
                       GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
              iVar7 = func_?(pKVar3);
              if (iVar7 != 0) {
                if (newValue != (Object *)0x0) {
                  pIVar1 = (Int32__Class *)TypeInfo__System__Single;
                  if ((newValue->klass->_0).element_class !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  pfVar8 = (float *)func_?(newValue);
                  unaff_ESI = (KogamaSettingNumericBase_1_System_Int32___Class *)
                              MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                  ;
                  value = *pfVar8;
                  this_02 = (KogamaSettingNumericBase_1_System_Single_ *)
                            func_?(pKVar3,
                                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                                           );
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__set_NumericValue
                            (this_02,value,(MethodInfo *)unaff_ESI);
                  if (unaff_EBX != (MVRoundCube *)0x0) {
                    pGVar2 = (this->fields).boosterSetting;
                    this_03 = unaff_EBX;
                    goto code_?;
                  }
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        this_00 = (this->fields).boost;
        unaff_ESI = (KogamaSettingNumericBase_1_System_Int32___Class *)
                    (this->fields).boostDescription;
        if (this_00 != (Boost *)0x0) {
          Boost::Boost_get_Description(this_00,(MethodInfo *)0x0);
          if (unaff_ESI != (KogamaSettingNumericBase_1_System_Int32___Class *)0x0) {
            (*(code *)(unaff_ESI->_0).image[0x11].nameToClassHashTable)();
            return;
          }
        }
      }
      goto code_?;
    }
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if (((pKVar3->klass->_1).naturalAligment < bVar4) ||
       ((pKVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pKVar6 = (KogamaSettingValueWrapperBase *)0x0;
    if (bVar5) {
      pKVar6 = pKVar3;
    }
    unaff_ESI = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (pKVar6 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
    this_03 = (MVRoundCube *)(this->fields).boosterSetting;
    if (this_03 == (MVRoundCube *)0x0) goto code_?;
    unaff_ESI = (KogamaSettingNumericBase_1_System_Int32___Class *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                GameBoosterSettingWithGoldSetting_get_Setting
                          ((GameBoosterSettingWithGoldSetting *)this_03,(MethodInfo *)0x0);
    if (unaff_ESI == (KogamaSettingNumericBase_1_System_Int32___Class *)0x0) goto code_?;
    pIVar9 = (unaff_ESI->_0).image;
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if ((*(byte *)&pIVar9[4].assembly < bVar4) ||
       (*(KogamaSettingNumericBase_1_System_Int32___Class **)
         ((pIVar9[2].typeCount - 4) + (uint)bVar4 * 4) !=
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pKVar10 = (KogamaSettingNumericBase_1_System_Int32___Class *)0x0;
    if (bVar5) {
      pKVar10 = unaff_ESI;
    }
    if (pKVar10 == (KogamaSettingNumericBase_1_System_Int32___Class *)0x0) goto code_?;
    if (newValue == (Object *)0x0) goto code_?;
    pIVar1 = TypeInfo__System__Int32;
    if ((newValue->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar11 = (int32_t *)func_?();
      unaff_EBX = (MVRoundCube *)
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
      ;
      pIVar9 = (unaff_ESI->_0).image;
      bVar4 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
              ->_1).naturalAligment;
      if ((*(byte *)&pIVar9[4].assembly < bVar4) ||
         (*(KogamaSettingNumericBase_1_System_Int32___Class **)
           ((pIVar9[2].typeCount - 4) + (uint)bVar4 * 4) !=
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         )) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pKVar10 = (KogamaSettingNumericBase_1_System_Int32___Class *)0x0;
      if (bVar5) {
        pKVar10 = unaff_ESI;
      }
      if (pKVar10 != (KogamaSettingNumericBase_1_System_Int32___Class *)0x0) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__set_NumericValue
                  ((KogamaSettingNumericBase_1_System_Int32_ *)pKVar10,*piVar11,
                   MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                  );
        if (this_03 == (MVRoundCube *)0x0) goto code_?;
        pGVar2 = (this->fields).boosterSetting;
code_?:
        MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                  ((MVGameOptionDataObject *)this_03,(KogamaSettingWrapperBase *)pGVar2,
                   (MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(newValue,pIVar1);
code_?:
  func_?(unaff_ESI);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPriceSettingChanged(Int32) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnPriceSettingChanged
               (BoostEditMenuItem *this,int32_t newPrice,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
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
        if (this_02 != (MVRoundCube *)0x0) {
          method = (MethodInfo *)(this->fields).boosterSetting;
          newPrice = (int32_t)this_02;
          MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                    ((MVGameOptionDataObject *)this_02,(KogamaSettingWrapperBase *)method,
                     (MethodInfo *)0x0);
          pTVar1 = (this->fields).goldPriceText;
          newPrice = (int32_t)&newPrice;
          method = (MethodInfo *)StringLiteral_N0;
          this_04 = (String *)func_?();
          if (this_04 != (String *)0x0) {
            method = (MethodInfo *)
                     mscorlib.dll::System::String::String_Replace_1
                               (this_04,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
            if (pTVar1 != (Text *)0x0) {
              newPrice = (int32_t)pTVar1;
              (*(code *)(pTVar1->klass->vtable).set_text.method)();
              return;
            }
          }
        }
      }
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSubmitData() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnSubmitData
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    if (this_01 != (MVRoundCube *)0x0) {
      MVGameOptionDataObject::MVGameOptionDataObject_Submit
                ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowEditPopup() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_ShowEditPopup
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).boosterSetting;
  if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
           GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if (((pKVar2->klass->_1).naturalAligment < bVar3) ||
       ((pKVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pKVar5 = (KogamaSettingValueWrapperBase *)0x0;
    if (bVar4) {
      pKVar5 = pKVar2;
    }
    if (pKVar5 != (KogamaSettingValueWrapperBase *)0x0) {
      this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__BoostEditMenuItem___ShowEditPopup_c__AnonStorey0);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
      original = (this->fields).boostEditIntPopupPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pWVar6 = (WinningConditionDebriefing *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)original,
                          BoostEditIntPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditIntPopup>_BoostEditIntPopup_
                         );
      if (this_00 == (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0)
      goto code_?;
      (this_00->fields)._this = pWVar6;
      pBVar7 = (this->fields).boost;
      pGVar1 = (this->fields).boosterSetting;
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar8,(Object *)this,
                 MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
                 MethodInfo__UnityEngine__Events__UnityAction<System::Object>__UnityAction_System__Object__void__
                );
      pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar9,(Object *)this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar10,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
                 (MethodInfo *)0x0);
      if (pWVar6 == (WinningConditionDebriefing *)0x0) goto code_?;
      (*(code *)(pWVar6->klass->vtable).SetupDebriefing.method)
                (pWVar6,pBVar7,pGVar1,pUVar8,pUVar9,pUVar10,pWVar6->klass[1]._0.image);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      method_1 = 
      MethodInfo__BoostEditMenuItem___ShowEditPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      goto code_?;
    }
  }
  pGVar1 = (this->fields).boosterSetting;
  if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
           GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
            ->_1).naturalAligment;
    if (((pKVar2->klass->_1).naturalAligment < bVar3) ||
       ((pKVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pKVar5 = (KogamaSettingValueWrapperBase *)0x0;
    if (bVar4) {
      pKVar5 = pKVar2;
    }
    if (pKVar5 != (KogamaSettingValueWrapperBase *)0x0) {
      this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__BoostEditMenuItem___ShowEditPopup_c__AnonStorey1);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
      original_00 = (this->fields).boostEditFloatPopupPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pWVar6 = (WinningConditionDebriefing *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)original_00,
                          BoostEditFloatPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditFloatPopup>_BoostEditFloatPopup_
                         );
      if (this_00 == (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0)
      goto code_?;
      (this_00->fields)._this = pWVar6;
      pBVar7 = (this->fields).boost;
      pGVar1 = (this->fields).boosterSetting;
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar8,(Object *)this,
                 MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
                 MethodInfo__UnityEngine__Events__UnityAction<System::Object>__UnityAction_System__Object__void__
                );
      pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar9,(Object *)this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar10,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
                 (MethodInfo *)0x0);
      if (pWVar6 == (WinningConditionDebriefing *)0x0) goto code_?;
      (*(code *)(pWVar6->klass->vtable).SetupDebriefing.method)
                (pWVar6,pBVar7,pGVar1,pUVar8,pUVar9,pUVar10,pWVar6->klass[1]._0.image);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      method_1 = 
      MethodInfo__BoostEditMenuItem___ShowEditPopup_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      goto code_?;
    }
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__BoostEditMenuItem___ShowEditPopup_c__AnonStorey2);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  original_01 = (this->fields).boostEditPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pWVar6 = (WinningConditionDebriefing *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original_01,
                      BoostEditPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditPopup>_BoostEditPopup_
                     );
  if (this_00 != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this_00->fields)._this = pWVar6;
    pBVar7 = (this->fields).boost;
    pGVar1 = (this->fields).boosterSetting;
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,
               MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
               MethodInfo__UnityEngine__Events__UnityAction<System::Object>__UnityAction_System__Object__void__
              );
    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar9,(Object *)this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_,
               MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
              );
    pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar10,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,(MethodInfo *)0x0
              );
    if (pWVar6 != (WinningConditionDebriefing *)0x0) {
      (*(code *)(pWVar6->klass->vtable).SetupDebriefing.method)
                (pWVar6,pBVar7,pGVar1,pUVar8,pUVar9,pUVar10,pWVar6->klass[1]._0.image);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      method_1 = 
      MethodInfo__BoostEditMenuItem___ShowEditPopup_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar8,(Object *)this_00,method_1,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar8,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateEarningsText(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_UpdateEarningsText
               (BoostEditMenuItem *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0);
      BoostEditMenuItem_GetBoostEarning(this,projectEarningsReport,(MethodInfo *)0x0);
      pTVar1 = (this->fields).earningsAmountText;
      this_02 = (String *)func_?(&stack0xfffffff8);
      if (this_02 != (String *)0x0) {
        mscorlib.dll::System::String::String_Replace_1
                  (this_02,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)();
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

