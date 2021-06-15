
/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_OnDestroy
               (BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
            );
  pAStack2 =
       (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  if (pAStack2 !=
      (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
    if (pAStack2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
       ) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      pAStack3 =
           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
      ;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
  return;
}


/* Void OnProjectEarningsUpdatedCallback(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_OnProjectEarningsUpdatedCallback
               (BoostEditMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
            );
  pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  if (pAVar2 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                0x0) {
    if (pAVar2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
       ) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  index = 0;
  this_01 = *(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)(in_stack_4 + 0x18)
  ;
  if (this_01 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
    while( true ) {
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_01,
                          MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Count__
                         );
      if ((int)pOVar5 <= index) {
        return;
      }
      if ((*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_4 + 0x18) ==
           (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (this_02 = (BoostEditMenuItem *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                                (in_stack_4 + 0x18),index,
                               MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                              ), this_02 == (BoostEditMenuItem *)0x0)) break;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_03 == (MVNetworkGame *)0x0) ||
         (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
         this_04 == (MVLocalPlayer *)0x0)) break;
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_04,(MethodInfo *)0x0);
      BoostEditMenuItem::BoostEditMenuItem_GetBoostEarning
                (this_02,in_stack_6,(MethodInfo *)0x0);
      pTVar7 = (this_02->fields).earningsAmountText;
      this_05 = (String *)func_?();
      if ((this_05 == (String *)0x0) ||
         (mscorlib.dll::System::String::String_Replace_1
                    (this_05,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
         pTVar7 == (Text *)0x0)) break;
      (*(code *)(pTVar7->klass->vtable).set_text.method)();
      this_01 = *(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)
                 (in_stack_4 + 0x18);
      index = index + 1;
      if (this_01 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_Start(BoostEditMenu *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_04 = (MethodInfo *)0x0;
  func_?();
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
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((this_03 != (MVNetworkGame *)0x0) &&
         (this_04 = (PrefabPool *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
         this_04 != (PrefabPool *)0x0)) &&
        (this_05 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                             (this_04,(MethodInfo *)0x0), this_05 != (ObjectiveArrow *)0x0)) &&
       (method_00 = (Dictionary_2_ChatCommand_System_Object_ *)
                    BoostController::BoostController_GetAllBoosts
                              ((BoostController *)this_05,(MethodInfo *)0x0),
       method_00 != (Dictionary_2_ChatCommand_System_Object_ *)0x0)) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                           *)&stack0xffffff9c,
                          (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                          method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                         );
      method_01 = (MethodInfo *)(pDVar4->host_enumerator).current.key;
      uStack_1 = 0;
      while (cVar5 = func_?(), cVar5 != '\0') {
        boost = (MethodInfo *)func_?();
        if ((this_02 == (MVRoundCube *)0x0) ||
           (pGVar6 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                               ((MVGameOptionDataObject *)this_02,method_01),
           pGVar6 == (GameBoosterSettingsManager *)0x0)) goto code_?;
        method_01 = (MethodInfo *)&UNK_?;
        this_06.methodMetadataHandle =
             (Il2CppMetadataMethodDefinitionHandle)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameBoosterSettings::GameBoosterSettingsManager::
             GameBoosterSettingsManager_get_ActiveSettingsList(pGVar6,(MethodInfo *)method_00);
        pGVar6 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                           ((MVGameOptionDataObject *)this_02,(MethodInfo *)0x0);
        if ((pGVar6 == (GameBoosterSettingsManager *)0x0) ||
           (collection = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                         SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingsManager::
                         GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                                   (pGVar6,(MethodInfo *)0x0),
           this_06.rgctx_data == (Il2CppRGCTXData *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                  ((List_1_VoxelHit_ *)this_06.methodMetadataHandle,
                   (IEnumerable_1_VoxelHit_ *)collection,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                  );
        index = 0;
        while( true ) {
          method_00 = (Dictionary_2_ChatCommand_System_Object_ *)&UNK_?;
          pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              this_06.methodMetadataHandle,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                             );
          if ((int)pOVar7 <= index) break;
          if (boost == (MethodInfo *)0x0) goto code_?;
          a = (String *)boost->name;
          method_02.methodMetadataHandle = this_06.methodMetadataHandle;
          this_07 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                               this_06.methodMetadataHandle,index,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                              );
          if (this_07 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
          b = (String *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items(this_07,method_04);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar8 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            pBVar9 = (this->fields).boostPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            method_01 = (MethodInfo *)&UNK_?;
            pBVar9 = (BoostEditMenuItem *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)pBVar9,
                                BoostEditMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenuItem>_BoostEditMenuItem_
                               );
            if ((pBVar9 == (BoostEditMenuItem *)0x0) ||
               (this_08 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform
                                    ((Component_1 *)pBVar9,
                                     (MethodInfo *)method_02.methodMetadataHandle),
               this_08 == (Transform *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_08,(Transform *)(this->fields).boostItemsContent,0,(MethodInfo *)0x0);
            method_04 = boost;
            BoostEditMenuItem::BoostEditMenuItem_Initialize(pBVar9,(Boost *)boost,(MethodInfo *)0x0)
            ;
            this_00 = (this->fields).boostItems;
            if (this_00 == (List_1_BoostEditMenuItem_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pBVar9,
                       MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                      );
          }
          index = index + 1;
        }
      }
      uStack_1 = 0xffffffff;
      method_03.genericMethod = (Il2CppGenericMethod *)&stack0xffffff88;
      func_?();
      pRVar10 = (this->fields).boostItemsContent;
      if ((((uint)(TypeInfo__UnityEngine__UI__LayoutRebuilder->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
      LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar10,(MethodInfo *)0x0);
      pRVar10 = (this->fields).boostItemsScrollRect;
      if (pRVar10 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                  ((Rect *)&stack0xffffffa0,pRVar10,method_01);
        fVar11 = SubscribableVariableBase`1[System::Single]::
                 SubscribableVariableBase_1_System_Single__get_Value
                           ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffc0,
                            (MethodInfo *)0x0);
        pRVar10 = (this->fields).boostItemsContent;
        if (pRVar10 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffa0,pRVar10,(MethodInfo *)method_03.genericMethod);
          fVar12 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb0,
                              (MethodInfo *)0x0);
          if (fVar11 < fVar12) {
            pRVar10 = (this->fields).boostItemsContent;
            func_?();
            if (pRVar10 == (RectTransform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                      (pRVar10,(Vector2)0x0,(MethodInfo *)0x0);
          }
          projectEarningsReport =
               GamePassesProjectEarningsManager::
               GamePassesProjectEarningsManager_get_ProjectEarningReport((MethodInfo *)0x0);
          if (projectEarningsReport != (ProjectEarningsReport *)0x0) {
            BoostEditMenu_UpdateEarningsData(this,projectEarningsReport,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pAVar13 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated
          ;
          this_09 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_09,(Object *)this,
                     MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                     ,
                     MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
                    );
          pAVar14 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *
                   )mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar13,(Delegate *)this_09,(MethodInfo *)0x0);
          pAVar13 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                     *)0x0;
          if (pAVar14 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                         *)0x0) {
code_?:
            TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                 pAVar13;
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (pAVar14->klass ==
              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
             ) {
            pAVar13 = pAVar14;
          }
          if (pAVar13 !=
              (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0)
          goto code_?;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateEarningsData(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_UpdateEarningsData
               (BoostEditMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  index = 0;
  pLVar2 = (this->fields).boostItems;
  if (pLVar2 != (List_1_BoostEditMenuItem_ *)0x0) {
    while( true ) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Count__
                         );
      if ((int)pOVar3 <= index) {
        return;
      }
      pLVar2 = (pBVar1->fields).boostItems;
      if ((pLVar2 == (List_1_BoostEditMenuItem_ *)0x0) ||
         (this_00 = (BoostEditMenuItem *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_
                              ), this_00 == (BoostEditMenuItem *)0x0)) break;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this = (BoostEditMenu *)0x0;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_01 == (MVNetworkGame *)0x0) ||
         (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) break;
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0);
      this = (BoostEditMenu *)
             BoostEditMenuItem::BoostEditMenuItem_GetBoostEarning
                       (this_00,projectEarningsReport,(MethodInfo *)0x0);
      pTVar4 = (this_00->fields).earningsAmountText;
      pSVar5 = (String *)func_?(&this,StringLiteral_N0,0);
      if ((pSVar5 == (String *)0x0) ||
         (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                             (pSVar5,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
         pTVar4 == (Text *)0x0)) break;
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pLVar2 = (pBVar1->fields).boostItems;
      index = index + 1;
      if (pLVar2 == (List_1_BoostEditMenuItem_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* BoostEditMenu() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu__ctor(BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<BoostEditMenuItem>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__List__);
  (this->fields).boostItems = (List_1_BoostEditMenuItem_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

