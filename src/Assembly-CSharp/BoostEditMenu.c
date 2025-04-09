
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
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
    pAStack4 =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
         0x0;
code_?:
    func_?();
    return;
  }
  pAStack4 =
       TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
           func_?();
  if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    pAStack4 =
         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    pAStack4 =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)
         func_?();
    if (pAStack4 !=
        (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class *)0x0
       ) goto code_?;
  }
  pAStack4 = pAVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 != (Delegate *)0x0) {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
       (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
code_?:
  func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
             (in_stack_5 + 0x1c);
  iStack6 = 0;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      if ((this_01->fields)._size <= iStack6) {
        return;
      }
      if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,iStack6,
                             MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                            ), RVar7 == (RegexCharClass_SingleRange)0x0)) break;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      in_stack_8.m_Index = 0;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 == (MVNetworkGame *)0x0) ||
         (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
         pMVar10 == (MVLocalPlayer *)0x0)) break;
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
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar9 == (MVNetworkGame *)0x0) ||
           (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
           pMVar10 == (MVLocalPlayer *)0x0)) || (in_stack_11 == 0)) ||
         (*(Dictionary_2_System_Int32_System_Single_ **)(in_stack_11 + 0xc) ==
          (Dictionary_2_System_Int32_System_Single_ *)0x0)) break;
      key = (pMVar10->fields)._._ProfileID_k__BackingField;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        (*(Dictionary_2_System_Int32_System_Single_ **)(in_stack_11 + 0xc),key
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar12 == 0) {
code_?:
        in_stack_8.m_Index = 0;
      }
      else {
        if (((*(Dictionary_2_System_Int32_System_Object_ **)(in_stack_11 + 0xc) ==
              (Dictionary_2_System_Int32_System_Object_ *)0x0) ||
            (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 (*(Dictionary_2_System_Int32_System_Object_ **)
                                   (in_stack_11 + 0xc),key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                 ), pOVar13 == (Object *)0x0)) ||
           ((pOVar13[1].klass == (Object__Class *)0x0 ||
            ((*(int *)((int)RVar7 + 0x34) == 0 ||
             (pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       ((pOVar13[1].klass)->_0).namespaze,
             pDVar14 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))))))
        break;
        bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar14,*(Object **)(*(int *)((int)RVar7 + 0x34) + 0xc),
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                          );
        if (bVar12 == 0) goto code_?;
        if ((((*(Dictionary_2_System_Int32_System_Object_ **)(in_stack_11 + 0xc) ==
               (Dictionary_2_System_Int32_System_Object_ *)0x0) ||
             (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  (*(Dictionary_2_System_Int32_System_Object_ **)
                                    (in_stack_11 + 0xc),key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                  ), pOVar13 == (Object *)0x0)) ||
            (pOVar13[1].klass == (Object__Class *)0x0)) || (*(int *)((int)RVar7 + 0x34) == 0))
        break;
        pDVar14 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 ((pOVar13[1].klass)->_0).namespaze;
        if (pDVar14 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
        in_stack_8 =
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar14,*(Object **)(*(int *)((int)RVar7 + 0x34) + 0xc),
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                       );
      }
      piVar15 = *(int **)((int)RVar7 + 0x1c);
      pSVar16 = mscorlib.dll::System::Int32::Int32_ToString_1
                          ((Int32 *)&stack0x00000014,StringLiteral_N0,(MethodInfo *)0x0);
      if ((pSVar16 == (String *)0x0) ||
         (pSVar16 = mscorlib.dll::System::String::String_Replace_1
                              (pSVar16,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
         piVar15 == (int *)0x0)) break;
      (**(code **)(*piVar15 + 0x318))(piVar15,pSVar16);
      iStack6 = iStack6 + 1;
      this_01 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                 (in_stack_5 + 0x1c);
      if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_Start(BoostEditMenu *this,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_01,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
      if ((pMVar2 != (MVLocalPlayer *)0x0) &&
         (this_00 = (pMVar2->fields).boostController, this_00 != (BoostController *)0x0)) {
        this_04 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)BoostController::BoostController_GetAllBoosts(this_00,(MethodInfo *)0x0);
        if (this_04 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
          StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffffc4,this_04,
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
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffb4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar3 == 0) break;
            if (this_02 == (MVGameOptionDataObject *)0x0) goto code_?;
            method_00 = (MethodInfo *)
                        MVGameOptionDataObject::
                        MVGameOptionDataObject_get_GameBoosterSettingsManager
                                  (this_02,(MethodInfo *)0x0);
            if (method_00 == (MethodInfo *)0x0) goto code_?;
            boost = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                     *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                       ::GameBoosterSettings::GameBoosterSettingsManager::
                       GameBoosterSettingsManager_get_ActiveSettingsList
                                 ((GameBoosterSettingsManager *)method_00,(MethodInfo *)0x0);
            this_05 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                                (this_02,(MethodInfo *)0x0);
            if (this_05 == (GameBoosterSettingsManager *)0x0) goto code_?;
            this_06 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                      GameBoosterSettings::GameBoosterSettingsManager::
                      GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                                (this_05,(MethodInfo *)0x0);
            if (boost == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                          *)0x0) goto code_?;
            this_02 = (MVGameOptionDataObject *)
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddRange
                      ((List_1_System_Object_ *)boost,(IEnumerable_1_System_Object_ *)this_06,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                      );
            index = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                     *)0x0;
            while( true ) {
              if ((this_06->fields)._size <= (int)index) break;
              if (unaff_EDI ==
                  (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                   *)0x0) goto code_?;
              a = (String *)(unaff_EDI->_0).namespaze;
              RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_06,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                );
              if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
              method_00 = (MethodInfo *)0x0;
              bVar3 = mscorlib.dll::System::String::String_op_Equality
                                (a,*(String **)((int)RVar4 + 0xc),(MethodInfo *)0x0);
              if (bVar3 != 0) {
                original = (this->fields).boostPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                unaff_EDI = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                             *)UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_Instantiate_4
                                         ((Object *)original,
                                          BoostEditMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenuItem>_BoostEditMenuItem_
                                         );
                if (unaff_EDI ==
                    (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                     *)0x0) goto code_?;
                this_07 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)unaff_EDI,(MethodInfo *)0x0);
                if (this_07 == (Transform *)0x0) goto code_?;
                method_00 = (MethodInfo *)(this->fields).boostItemsContent;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_07,(Transform *)method_00,0,(MethodInfo *)0x0);
                index = unaff_EDI;
                BoostEditMenuItem::BoostEditMenuItem_Initialize
                          ((BoostEditMenuItem *)unaff_EDI,(Boost *)boost,(MethodInfo *)0x0);
                this_02 = (MVGameOptionDataObject *)(this->fields).boostItems;
                if (this_02 == (MVGameOptionDataObject *)0x0) goto code_?;
                this_06 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          &UNK_?;
                pMVar1 = 
                MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                ;
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)this_02,(Object *)unaff_EDI,
                           MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                          );
                unaff_EDI = boost;
                boost = unaff_EDI;
              }
              index = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport___Class
                       *)((int)&(index->_0).image + 1);
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
            pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                               ((Rect *)&stack0xffffffc4,pRVar5,(MethodInfo *)0x0);
            pDVar7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)pRVar6->m_Width;
            pRVar5 = (this->fields).boostItemsContent;
            if (pRVar5 != (RectTransform *)0x0) {
              pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect((Rect *)&stack0xffffffa4,pRVar5,(MethodInfo *)0x0);
              if ((float)pDVar7 < pRVar6->m_Width) {
                pRVar5 = (this->fields).boostItemsContent;
                if (pRVar5 == (RectTransform *)0x0) goto code_?;
                pMVar1 = (MethodInfo *)0x0;
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
                *unaff_FS_OFFSET = pMVar1;
                return;
              }
              pAVar8 = TypeInfo__GamePassesProjectEarningsManager->static_fields->
                       OnEarningsDataUpdated;
              this_08 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                         *)func_?();
              DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
              Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                        (this_08,(Object *)this,
                         MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                         ,(MethodInfo *)0x0);
              puVar9 = &UNK_?;
              unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar8,(Delegate *)this_08,(MethodInfo *)0x0);
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).boostItems;
  iStack_1 = 0;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      if ((this_00->fields)._size <= iStack_1) {
        return;
      }
      if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,iStack_1,
                             MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_N0);
        func_?(&::StringLiteral__);
        func_?(&::StringLiteral__);
        cRam_? = '\x01';
      }
      IStack_3.m_value = 0;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) break;
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
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar4 == (MVNetworkGame *)0x0) ||
           (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           pMVar5 == (MVLocalPlayer *)0x0)) ||
          (projectEarningsReport == (ProjectEarningsReport *)0x0)) ||
         (pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports,
         pDVar6 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                    *)0x0)) break;
      key = (pMVar5->fields)._._ProfileID_k__BackingField;
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar6,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar7 == 0) {
code_?:
        IStack_3.m_value = 0;
      }
      else {
        pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (((pDVar6 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                         *)0x0) ||
            (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                ), pOVar8 == (Object *)0x0)) ||
           ((pOVar8[1].klass == (Object__Class *)0x0 ||
            ((*(int *)((int)RVar2 + 0x34) == 0 ||
             (pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       ((pOVar8[1].klass)->_0).namespaze,
             pDVar9 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))))))
        break;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar9,*(Object **)(*(int *)((int)RVar2 + 0x34) + 0xc),
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                          );
        if (bVar7 == 0) goto code_?;
        pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if ((((pDVar6 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                          *)0x0) ||
             (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                 ), pOVar8 == (Object *)0x0)) ||
            (pOVar8[1].klass == (Object__Class *)0x0)) || (*(int *)((int)RVar2 + 0x34) == 0)) break;
        pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 ((pOVar8[1].klass)->_0).namespaze;
        if (pDVar9 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
        IStack_3.m_value =
             (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar9,*(Object **)(*(int *)((int)RVar2 + 0x34) + 0xc),
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                );
      }
      piVar10 = *(int **)((int)RVar2 + 0x1c);
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                          (&IStack_3,StringLiteral_N0,(MethodInfo *)0x0);
      if ((pSVar11 == (String *)0x0) ||
         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                              (pSVar11,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
         piVar10 == (int *)0x0)) break;
      (**(code **)(*piVar10 + 0x318))(piVar10,pSVar11,*(undefined4 *)(*piVar10 + 0x31c));
      iStack_1 = iStack_1 + 1;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).boostItems;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__List__);
  ppLVar1 = &(this->fields).boostItems;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

