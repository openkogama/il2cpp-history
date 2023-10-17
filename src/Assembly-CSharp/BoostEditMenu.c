
/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_OnDestroy
               (BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&
                    MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    cRam_? = '\x01';
  }
  source = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  if (this_00 == (Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
               ,(MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    source = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    if (pDVar1 == (Delegate *)0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
      pAStack2 =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           0x0;
code_?:
      func_?();
      return;
    }
    pAStack2 =
         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    pAVar3 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar3 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar3;
      source = 
      TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
      ;
      pAStack2 =
           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
      ;
      pAStack2 =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           func_?();
      if (pAStack2 !=
          (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
          0x0) goto code_?;
    }
  }
  pAStack2 = source;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnProjectEarningsUpdatedCallback(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_OnProjectEarningsUpdatedCallback
               (BoostEditMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&
                    MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_02 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  if (this_02 == (Action_1_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      iStack3 = 0;
      iVar4 = *(int *)(in_stack_5 + 0x18);
      if (iVar4 != 0) {
        while( true ) {
          if (*(int *)(iVar4 + 0xc) <= iStack3) {
            return;
          }
          if ((*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                (in_stack_5 + 0x18) ==
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
             (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   **)(in_stack_5 + 0x18),iStack3,
                                 MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                                ), RVar6 == (RegexCharClass_SingleRange)0x0)) break;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          in_stack_7.m_value = 0;
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar8 == (MVNetworkGame *)0x0) ||
             (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
             pMVar9 == (MVLocalPlayer *)0x0)) break;
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
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((((pMVar8 == (MVNetworkGame *)0x0) ||
               (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
               pMVar9 == (MVLocalPlayer *)0x0)) || (in_stack_10 == 0)) ||
             (*(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)(in_stack_10 + 0xc)
              == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) break;
          pOVar11 = (Object *)(pMVar9->fields)._._ProfileID_k__BackingField;
          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (*(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)
                              (in_stack_10 + 0xc),pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                            );
          if (bVar12 == 0) {
code_?:
            in_stack_7.m_value = 0;
          }
          else {
            if (((*(Dictionary_2_System_Int32Enum_System_Object_ **)(in_stack_10 + 0xc) ==
                  (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
                (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,System::Object]::
                           Dictionary_2_System_Int32Enum_System_Object__get_Item
                                     (*(Dictionary_2_System_Int32Enum_System_Object_ **)
                                       (in_stack_10 + 0xc),(Int32Enum__Enum)pOVar11,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                     ), pOVar13 == (Object *)0x0)) ||
               ((pOVar13[1].klass == (Object__Class *)0x0 ||
                ((*(int *)((int)RVar6 + 0x30) == 0 ||
                 (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                            ((pOVar13[1].klass)->_0).namespaze,
                 this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))))))
            break;
            bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (this_00,*(Object **)(*(int *)((int)RVar6 + 0x30) + 0xc),
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                              );
            if (bVar12 == 0) goto code_?;
            if ((((*(Dictionary_2_System_Int32Enum_System_Object_ **)(in_stack_10 + 0xc) ==
                   (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
                 (pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      (*(Dictionary_2_System_Int32Enum_System_Object_ **)
                                        (in_stack_10 + 0xc),(Int32Enum__Enum)pOVar11,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                      ), pOVar11 == (Object *)0x0)) ||
                (pOVar11[1].klass == (Object__Class *)0x0)) || (*(int *)((int)RVar6 + 0x30) == 0))
            break;
            this_01 = (Dictionary_2_System_Object_System_Object_ *)
                      ((pOVar11[1].klass)->_0).namespaze;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            in_stack_7.m_value =
                 (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (this_01,*(Object **)(*(int *)((int)RVar6 + 0x30) + 0xc),
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                    );
          }
          piVar14 = *(int **)((int)RVar6 + 0x18);
          pSVar15 = mscorlib.dll::System::Int32::Int32_ToString_1
                              (&stack0x00000014,StringLiteral_N0,(MethodInfo *)0x0);
          if ((pSVar15 == (String *)0x0) ||
             (pSVar15 = mscorlib.dll::System::String::String_Replace_1
                                  (pSVar15,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             piVar14 == (int *)0x0)) break;
          (**(code **)(*piVar14 + 0x314))(piVar14,pSVar15);
          iStack3 = iStack3 + 1;
          iVar4 = *(int *)(in_stack_5 + 0x18);
          if (iVar4 == 0) break;
        }
      }
      func_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_Start(BoostEditMenu *this,MethodInfo *method)

{
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
           *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&
                    MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&
                    BoostEditMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenuItem>_BoostEditMenuItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    this_03 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_02,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_04 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
      if ((pMVar2 != (MVLocalPlayer *)0x0) &&
         (this_00 = (pMVar2->fields).boostController, this_00 != (BoostController *)0x0)) {
        this_05 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)BoostController::BoostController_GetAllBoosts(this_00,(MethodInfo *)0x0);
        if (this_05 !=
            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
          Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)&stack0xffffffc4,this_05,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                    );
          unaff_ESI = (Delegate *)&stack0xffffffb4;
          method_00 = (MethodInfo *)0x0;
          while( true ) {
            unaff_EDI = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                         *)
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
            ;
            bVar3 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                *)&stack0xffffffb4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar3 == 0) break;
            if (this_03 == (MVGameOptionDataObject *)0x0) goto code_?;
            method_00 = (MethodInfo *)
                        MVGameOptionDataObject::
                        MVGameOptionDataObject_get_GameBoosterSettingsManager
                                  (this_03,(MethodInfo *)0x0);
            if (method_00 == (MethodInfo *)0x0) goto code_?;
            this_06 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                      MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                      GameBoosterSettings::GameBoosterSettingsManager::
                      GameBoosterSettingsManager_get_ActiveSettingsList
                                ((GameBoosterSettingsManager *)method_00,(MethodInfo *)0x0);
            this_07 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                                (this_03,(MethodInfo *)0x0);
            if (this_07 == (GameBoosterSettingsManager *)0x0) goto code_?;
            this_08 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                      GameBoosterSettings::GameBoosterSettingsManager::
                      GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                                (this_07,(MethodInfo *)0x0);
            if (this_06 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
            goto code_?;
            this_03 = (MVGameOptionDataObject *)
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                      (this_06,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                               )this_08,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                      );
            parent = (Transform *)0x0;
            while( true ) {
              if ((this_08->fields)._size <= (int)parent) break;
              if (unaff_EDI ==
                  (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                   *)0x0) goto code_?;
              a = (String *)(unaff_EDI->_0).namespaze;
              RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_08,(int32_t)parent,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                );
              if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
              method_00 = (MethodInfo *)0x0;
              bVar3 = mscorlib.dll::System::String::String_op_Equality
                                (a,*(String **)((int)RVar4 + 8),(MethodInfo *)0x0);
              if (bVar3 != 0) {
                original = (this->fields).boostPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                method_00 = (MethodInfo *)&UNK_?;
                unaff_EDI = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                             *)UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_Instantiate_4
                                         ((Object *)original,
                                          BoostEditMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenuItem>_BoostEditMenuItem_
                                         );
                if (unaff_EDI ==
                    (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                     *)0x0) goto code_?;
                this_09 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)unaff_EDI,(MethodInfo *)0x0);
                if (this_09 == (Transform *)0x0) goto code_?;
                this_08 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
                boost = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                         *)0x0;
                parent = (Transform *)(this->fields).boostItemsContent;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_09,parent,0,(MethodInfo *)0x0);
                this_03 = (MVGameOptionDataObject *)&UNK_?;
                pAVar1 = boost;
                BoostEditMenuItem::BoostEditMenuItem_Initialize
                          ((BoostEditMenuItem *)unaff_EDI,(Boost *)boost,(MethodInfo *)0x0);
                this_01 = (this->fields).boostItems;
                if (this_01 == (List_1_BoostEditMenuItem_ *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)this_01,(Object *)unaff_EDI,
                           MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                          );
                unaff_EDI = boost;
              }
              parent = (Transform *)((int)&parent->klass + 1);
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)unaff_ESI,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                     ,method_00);
          unaff_EDI = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                       *)(this->fields).boostItemsContent;
          if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate((RectTransform *)unaff_EDI,(MethodInfo *)0x0);
          pRVar5 = (this->fields).boostItemsScrollRect;
          unaff_ESI = (Delegate *)this;
          if (pRVar5 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                      ((Rect *)&stack0xffffffc4,pRVar5,(MethodInfo *)0x0);
            pvVar6 = (void *)SubscribableVariableBase`1[System::Single]::
                             SubscribableVariableBase_1_System_Single__get_Value
                                       ((SubscribableVariableBase_1_System_Single_ *)
                                        &stack0xffffffa4,(MethodInfo *)0x0);
            pRVar5 = (this->fields).boostItemsContent;
            if (pRVar5 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffc4,pRVar5,(MethodInfo *)0x0);
              fVar7 = SubscribableVariableBase`1[System::Single]::
                      SubscribableVariableBase_1_System_Single__get_Value
                                ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffa4,
                                 (MethodInfo *)0x0);
              if ((float)pvVar6 < fVar7) {
                pRVar5 = (this->fields).boostItemsContent;
                if (pRVar5 == (RectTransform *)0x0) goto code_?;
                pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                          *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                          (pRVar5,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              projectEarningsReport =
                   TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
              if (projectEarningsReport != (ProjectEarningsReport *)0x0) {
                BoostEditMenu_UpdateEarningsData(this,projectEarningsReport,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pAVar1;
                return;
              }
              pAVar8 = TypeInfo__GamePassesProjectEarningsManager->static_fields->
                       OnEarningsDataUpdated;
              this_10 = (Action_1_Object_ *)func_?();
              unaff_EDI = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                           *)0x0;
              if (this_10 != (Action_1_Object_ *)0x0) {
                puVar9 = &UNK_?;
                mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (this_10,(Object *)this,
                           MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                           ,(MethodInfo *)0x0);
                unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar8,(Delegate *)this_10,(MethodInfo *)0x0);
                unaff_EDI = 
                TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                ;
                if (unaff_ESI == (Delegate *)0x0) {
                  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                       (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                        *)0x0;
                  pAStack10 =
                       (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                        *)0x0;
code_?:
                  pDStack11 =
                       (Delegate *)TypeInfo__GamePassesProjectEarningsManager->static_fields;
                  func_?();
                  *unaff_FS_OFFSET = puVar9;
                  return;
                }
                pAStack10 =
                     TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                ;
                pDStack11 = unaff_ESI;
                pAVar8 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                          *)func_?();
                if (pAVar8 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                               *)0x0) {
                  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                       pAVar8;
                  unaff_EDI = 
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                  ;
                  pAStack10 =
                       TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                  ;
                  pDStack11 = unaff_ESI;
                  pAStack10 =
                       (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                        *)func_?();
                  if (pAStack10 !=
                      (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                       *)0x0) goto code_?;
                }
                goto code_?;
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
code_?:
  pDStack11 = unaff_ESI;
  pAStack10 = unaff_EDI;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateEarningsData(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_UpdateEarningsData
               (BoostEditMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Count__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pLVar2 = (this->fields).boostItems;
  if (pLVar2 != (List_1_BoostEditMenuItem_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= iStack_1) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).boostItems;
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,iStack_1,
                             MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_N0);
        func_?(&::StringLiteral__);
        func_?(&::StringLiteral__);
        cRam_? = '\x01';
      }
      IStack_4.m_value = 0;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 == (MVNetworkGame *)0x0) ||
         (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
         pMVar6 == (MVLocalPlayer *)0x0)) break;
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
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar5 == (MVNetworkGame *)0x0) ||
           (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           pMVar6 == (MVLocalPlayer *)0x0)) ||
          (projectEarningsReport == (ProjectEarningsReport *)0x0)) ||
         (pDVar7 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   (projectEarningsReport->fields).projectMemberEarningsReports,
         pDVar7 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) break;
      pOVar8 = (Object *)(pMVar6->fields)._._ProfileID_k__BackingField;
      bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar7,pOVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar9 == 0) {
code_?:
        IStack_4.m_value = 0;
      }
      else {
        pDVar10 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (((pDVar10 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                         *)0x0) ||
            (pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,
                                  (Int32Enum__Enum)pOVar8,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                 ), pOVar11 == (Object *)0x0)) ||
           ((pOVar11[1].klass == (Object__Class *)0x0 ||
            ((*(int *)((int)RVar3 + 0x30) == 0 ||
             (pDVar7 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                       ((pOVar11[1].klass)->_0).namespaze,
             pDVar7 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)))))) break;
        bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar7,*(Object **)(*(int *)((int)RVar3 + 0x30) + 0xc),
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                          );
        if (bVar9 == 0) goto code_?;
        pDVar10 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if ((((pDVar10 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                          *)0x0) ||
             (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,
                                   (Int32Enum__Enum)pOVar8,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                  ), pOVar8 == (Object *)0x0)) ||
            (pOVar8[1].klass == (Object__Class *)0x0)) || (*(int *)((int)RVar3 + 0x30) == 0))
        break;
        this_01 = (Dictionary_2_System_Object_System_Object_ *)((pOVar8[1].klass)->_0).namespaze;
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        IStack_4.m_value =
             (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (this_01,*(Object **)(*(int *)((int)RVar3 + 0x30) + 0xc),
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                );
      }
      piVar12 = *(int **)((int)RVar3 + 0x18);
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString_1
                          (&IStack_4,StringLiteral_N0,(MethodInfo *)0x0);
      if ((pSVar13 == (String *)0x0) ||
         (pSVar13 = mscorlib.dll::System::String::String_Replace_1
                              (pSVar13,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
         piVar12 == (int *)0x0)) break;
      (**(code **)(*piVar12 + 0x314))(piVar12,pSVar13,*(undefined4 *)(*piVar12 + 0x318));
      iStack_1 = iStack_1 + 1;
      pLVar2 = (this->fields).boostItems;
      if (pLVar2 == (List_1_BoostEditMenuItem_ *)0x0) break;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* BoostEditMenu() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu__ctor(BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<BoostEditMenuItem>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_BoostEditMenuItem_ *)
            func_?(TypeInfo__System__Collections__Generic__List<BoostEditMenuItem>);
  if (this_00 != (List_1_BoostEditMenuItem_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__List__);
    (this->fields).boostItems = this_00;
    func_?(&(this->fields).boostItems,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

