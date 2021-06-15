
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_Initialize
               (SoundInventoryController *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0);
  (this->fields).selectedTab = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
      (this_04 = (PrefabPool *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_03,woID,(MethodInfo *)0x0), this_04 == (PrefabPool *)0x0)) ||
     (this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0),
     this_05 ==
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_05,StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_05,StringLiteral_url,
               (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__System__String->static_fields->Empty,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  values = (String__Array *)func_?();
  if (values == (String__Array *)0x0) goto code_?;
  if ((StringLiteral_Data_sound__url__ == (String *)0x0) || (iVar2 = func_?(), iVar2 != 0))
  {
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Data_sound__url__;
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_url,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar3 == (Pool *)0x0) goto code_?;
    iVar2 = (*(code *)(pPVar3->klass->vtable).ToString.method)();
    pIVar4 = (Il2CppClass *)0x0;
    if (iVar2 != 0) {
      pIVar4 = (values->klass->_0).element_class;
      iVar2 = func_?();
      if (iVar2 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 2) goto code_?;
    values->vector[1] = (String *)pIVar4;
    if ((StringLiteral__Volume__ != (String *)0x0) && (iVar2 = func_?(), iVar2 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__Volume__;
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_volume,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar3 == (Pool *)0x0) goto code_?;
    iVar2 = (*(code *)(pPVar3->klass->vtable).ToString.method)();
    pIVar4 = (Il2CppClass *)0x0;
    if (iVar2 != 0) {
      pIVar4 = (values->klass->_0).element_class;
      iVar2 = func_?();
      if (iVar2 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 4) goto code_?;
    values->vector[3] = (String *)pIVar4;
    if ((StringLiteral__Pitch__ != (String *)0x0) && (iVar2 = func_?(), iVar2 == 0))
    goto code_?;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = StringLiteral__Pitch__;
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_pitch,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar3 == (Pool *)0x0) goto code_?;
    pSVar5 = (String *)(*(code *)(pPVar3->klass->vtable).ToString.method)();
    if ((pSVar5 != (String *)0x0) &&
       (iVar2 = func_?(pSVar5,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (5 < values->max_length) {
      values->vector[5] = pSVar5;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)this_05,(Type *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pPVar3 = (Pool *)0x0;
      if (pPVar6 == (Pool *)0x0) {
code_?:
        (this->fields).originalURL = (String *)pPVar3;
        this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                  (this->fields).audioUrls;
        if (this_01 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
        goto code_?;
        pLVar7 = (List_1_StreamedAudioClipInfo_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (this_01,(MethodInfo *)0x0);
        pIVar8 = (this->fields).inventoryControllerPrefab;
        (this->fields).urls = pLVar7;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar8 = (InventoryController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pIVar8,
                             InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                            );
        (this->fields).inventoryController = pIVar8;
        if (pIVar8 == (InventoryController *)0x0) goto code_?;
        pUVar9 = (pIVar8->fields).OnPageTurned;
        pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar10,(Object *)this,MethodInfo__SoundInventoryController__PageTurned_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pUVar11 = (UnityAction_1_System_Int32_ *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
        pUVar9 = (UnityAction_1_System_Int32_ *)0x0;
        if (pUVar11 != (UnityAction_1_System_Int32_ *)0x0) {
          if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pUVar9 = pUVar11;
          }
          if (pUVar9 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
        }
        (pIVar8->fields).OnPageTurned = pUVar9;
        pIVar8 = (this->fields).inventoryController;
        if (pIVar8 == (InventoryController *)0x0) goto code_?;
        pUVar9 = (pIVar8->fields).OnTabSelected;
        pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar10,(Object *)this,MethodInfo__SoundInventoryController__TabSelected_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pUVar11 = (UnityAction_1_System_Int32_ *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
        pUVar9 = (UnityAction_1_System_Int32_ *)0x0;
        if (pUVar11 != (UnityAction_1_System_Int32_ *)0x0) {
          if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pUVar9 = pUVar11;
          }
          if (pUVar9 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
        }
        (pIVar8->fields).OnTabSelected = pUVar9;
        pIVar8 = (this->fields).inventoryController;
        if (pIVar8 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    (pIVar8,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          pIVar8 = (this->fields).inventoryController;
          if (pIVar8 != (InventoryController *)0x0) {
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pIVar8,(MethodInfo *)0x0);
            parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (this_06 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_06,parent,0,(MethodInfo *)0x0);
              pLVar7 = (this->fields).urls;
              this = (SoundInventoryController *)0x0;
              if (pLVar7 != (List_1_StreamedAudioClipInfo_ *)0x0) {
                while( true ) {
                  pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       pLVar7,
                                       MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                                      );
                  if ((int)pOVar12 <= (int)this) {
                    SoundInventoryController_UpdateContent(this_02,(MethodInfo *)0x0);
                    return;
                  }
                  pSVar13 = (ScaleAnimationBase *)func_?();
                  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar13,0.0,in_stack_14);
                  in_stack_14 = (MethodInfo *)(this_02->fields).urls;
                  if ((in_stack_14 == (MethodInfo *)0x0) ||
                     (pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                EventSystems::IEventSystemHandler]::
                                List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                           in_stack_14,(int32_t)this,
                                           MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                          ), pIVar15 == (IEventSystemHandler *)0x0)) break;
                  name = pIVar15[2].klass;
                  pLVar7 = (this_02->fields).urls;
                  if ((pLVar7 == (List_1_StreamedAudioClipInfo_ *)0x0) ||
                     ((pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                 EventSystems::IEventSystemHandler]::
                                 List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                            pLVar7,(int32_t)this,
                                            MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                           ), pIVar15 == (IEventSystemHandler *)0x0 ||
                      (pSVar13 == (ScaleAnimationBase *)0x0)))) break;
                  (pSVar13->fields)._._._._.m_CachedPtr = pIVar15[1].monitor;
                  pDVar16 = (this_02->fields).categoryToNameCombinations;
                  if (pDVar16 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Int32]::
                          Dictionary_2_System_Object_System_Int32__ContainsKey
                                    ((Dictionary_2_System_Object_System_Int32_ *)pDVar16,
                                     (Object *)name,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                    );
                  if (bVar1 == 0) {
                    pDVar16 = (this_02->fields).categoryToNameCombinations;
                    if (pDVar16 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                    pOVar12 = System.Core.dll::System::Linq::
                              Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                              Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
                              ::
                              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                          *)pDVar16,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                                        );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Int32]::Dictionary_2_System_Object_System_Int32__Add
                              ((Dictionary_2_System_Object_System_Int32_ *)pDVar16,(Object *)name,
                               (int32_t)((int)&pOVar12->klass + 1),
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                              );
                  }
                  pDVar16 = (this_02->fields).categoryToNameCombinations;
                  if (pDVar16 == (Dictionary_2_System_String_System_Int32_ *)0x0) break;
                  iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Int32]::Dictionary_2_System_Object_System_Int32__get_Item
                                     ((Dictionary_2_System_Object_System_Int32_ *)pDVar16,
                                      (Object *)name,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                     );
                  pDVar18 = (this_02->fields).tabs;
                  pDVar16 = (this_02->fields).categoryToNameCombinations;
                  if ((pDVar16 == (Dictionary_2_System_String_System_Int32_ *)0x0) ||
                     (iVar19 = iVar17,
                     key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Int32]::Dictionary_2_System_Object_System_Int32__get_Item
                                     ((Dictionary_2_System_Object_System_Int32_ *)pDVar16,
                                      (Object *)name,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                     ), pDVar18 == (Dictionary_2_System_Int32_TabState_ *)0x0))
                  break;
                  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::
                          Dictionary_2_System_Int32_System_Object__ContainsKey
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                    );
                  if (bVar1 == 0) {
                    iVar19 = (this_02->fields).numberOfSlotsPrPage;
                    this_07 = (TabState *)func_?();
                    in_stack_14 = (MethodInfo *)&UNK_?;
                    TabState::TabState__ctor(this_07,(String *)name,iVar19,(MethodInfo *)0x0);
                    pDVar18 = (this_02->fields).tabs;
                    if (((pDVar18 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
                        (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Add
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,iVar17,
                                    (Object *)this_07,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                   ), this_07 == (TabState *)0x0)) ||
                       (pIVar8 = (this_02->fields).inventoryController,
                       pIVar8 == (InventoryController *)0x0)) break;
                    iVar19 = iVar17;
                    InventoryController::InventoryController_AddTab
                              (pIVar8,iVar17,(this_07->fields).name,(MethodInfo *)0x0);
                  }
                  pDVar20 = (this_02->fields).soundTabInfos;
                  if (pDVar20 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::
                          Dictionary_2_System_Int32_System_Object__ContainsKey
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar20,iVar17,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                    );
                  if (bVar1 == 0) {
                    pDVar20 = (this_02->fields).soundTabInfos;
                    method_00 = (List_1_UnityEngine_Vector4_ *)func_?();
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
                    List_1_UnityEngine_Vector4___ctor(method_00,(MethodInfo *)method_00);
                    if (pDVar20 == (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)0x0) break;
                    iVar19 = iVar17;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Add
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar20,iVar17,
                               (Object *)method_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                              );
                  }
                  pDVar21 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)(this_02->fields).soundTabInfos;
                  if (pDVar21 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                 *)0x0) break;
                  pTVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                      (pDVar21,iVar17,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                      );
                  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar10,(Object *)pDVar21,
                             MethodInfo__SoundInventoryController___Initialize_c__AnonStorey0____m__0_SoundTabInfo_
                             ,
                             MethodInfo__System__Func<SoundTabInfo,_bool>__Func_System__Object__void__
                            );
                  method_01 = 
                  bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                  ;
                  bVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_All_1
                                    ((IEnumerable_1_SoundTabInfo_ *)pTVar22,
                                     (Func_2_SoundTabInfo_Boolean_ *)pUVar10,
                                     bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                    );
                  if (bVar1 != 0) {
                    pDVar21 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this_02->fields).soundTabInfos;
                    if (pDVar21 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   *)0x0) break;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar21,iVar19,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                              );
                    pSVar13 = (ScaleAnimationBase *)func_?();
                    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar13,0.0,method_01);
                    if (pSVar13 == (ScaleAnimationBase *)0x0) break;
                    (pSVar13->fields)._._._._.m_CachedPtr = (pDVar21->fields).table;
                    (pSVar13->fields).state = (int32_t)&UNK_?;
                    pLVar7 = (this_02->fields).urls;
                    if (pLVar7 == (List_1_StreamedAudioClipInfo_ *)0x0) break;
                    this_08 = (List_1_UIPushOption_ *)&UNK_?;
                    pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              EventSystems::IEventSystemHandler]::
                              List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                         pLVar7,0xADDR,
                                         MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                                        );
                    if ((pIVar15 == (IEventSystemHandler *)0x0) ||
                       ((pSVar13->fields).originalScale.x = (float)pIVar15[1].klass,
                       this_08 == (List_1_UIPushOption_ *)0x0)) break;
                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              (this_08,(UIPushOption__Enum)pSVar13,
                               MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                              );
                  }
                  pDVar23 = (this_02->fields).categorysAmount;
                  if (pDVar23 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                                    (pDVar23,iVar19,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                    );
                  pDVar23 = (this_02->fields).categorysAmount;
                  if (bVar1 == 0) {
                    if (pDVar23 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                    root = (GameObject *)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__Add
                              (pDVar23,iVar19,1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                              );
                  }
                  else {
                    if (pDVar23 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                    iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                                       (pDVar23,iVar19,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                       );
                    root = (GameObject *)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__set_Item
                              (pDVar23,iVar19,iVar17 + 1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                              );
                  }
                  pDVar16 = (this_02->fields).categoryToNameCombinations;
                  pDVar21 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)(this_02->fields).tabs;
                  if (((pDVar16 == (Dictionary_2_System_String_System_Int32_ *)0x0) ||
                      (iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Int32]::
                                Dictionary_2_System_Object_System_Int32__get_Item
                                          ((Dictionary_2_System_Object_System_Int32_ *)pDVar16,
                                           (Object *)root,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                          ),
                      pDVar21 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                 *)0x0)) ||
                     (pTVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,UnityEngine::Experimental::TerrainAPI::
                                TerrainUtility+TerrainMap]::
                                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                          (pDVar21,iVar17,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                          ), pTVar22 == (TerrainUtility_TerrainMap *)0x0)) break;
                  pfVar24 = &(pTVar22->fields).m_patchSize.z;
                  *pfVar24 = (float)((int)*pfVar24 + 1);
                  this = (SoundInventoryController *)&UNK_?;
                  pLVar7 = (this_02->fields).urls;
                  if (pLVar7 == (List_1_StreamedAudioClipInfo_ *)0x0) break;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if ((String__Class *)pPVar6->klass == TypeInfo__System__String) {
        pPVar3 = pPVar6;
      }
      if (pPVar3 != (Pool *)0x0) goto code_?;
code_?:
      func_?();
      goto code_?;
    }
  }
  else {
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?();
    func_?(uVar25);
code_?:
    uVar25 = func_?(0,0);
    func_?(uVar25);
  }
  uVar25 = func_?(0,0);
  func_?(uVar25);
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_OnSettingChanged
               (SoundInventoryController *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  value_00 = mscorlib.dll::System::Convert::Convert_ToString_1(value,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,(Object *)value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_PageTurned
               (SoundInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).tabs;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,(this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      bVar1 = TabState::TabState_UpdatePage((TabState *)this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetNewOriginalUrl(String) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_SetNewOriginalUrl
               (SoundInventoryController *this,String *url,MethodInfo *method)

{
  (this->fields).originalURL = url;
  SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_TabSelected
               (SoundInventoryController *this,int32_t tab,MethodInfo *method)

{
  if ((this->fields).selectedTab != tab) {
    (this->fields).selectedTab = tab;
    SoundInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController_UpdateContent
               (SoundInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if (pIVar1 != (InventoryController *)0x0) {
    this_02 = InventoryController::InventoryController_GetComponentsOfSlotsWithType_1
                        (pIVar1,
                         System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                        );
    index = 0;
    if (this_02 != (List_1_SoundViewItem_ *)0x0) {
      while( true ) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<SoundViewItem>__get_Count__
                           );
        if ((int)pOVar2 <= index) break;
        pOVar2 = (Object *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index,
                            MethodInfo__System__Collections__Generic__List<SoundViewItem>__get_Item_int_
                           );
        if (pOVar2 == (Object *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,pOVar2,
                   MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__AsyncWWWManager);
        }
        AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                  ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,(MethodInfo *)0x0);
        index = index + 1;
      }
      pIVar1 = (this->fields).inventoryController;
      if (pIVar1 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Clear(pIVar1,(MethodInfo *)0x0);
        pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).tabs;
        pIVar1 = (this->fields).inventoryController;
        iVar5 = (this->fields).selectedTab;
        if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar4,iVar5,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                             );
          if (pTVar6 != (TerrainUtility_TerrainMap *)0x0) {
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).tabs;
            if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar4,(this->fields).selectedTab,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
              if (pTVar6 != (TerrainUtility_TerrainMap *)0x0) {
                maxPages = TabState::TabState_get_MaxPages((TabState *)pTVar6,(MethodInfo *)0x0);
                if (pIVar1 != (InventoryController *)0x0) {
                  InventoryController::InventoryController_SelectTab
                            (pIVar1,iVar5,0xADDR,maxPages,(MethodInfo *)0x0);
                  key = StringLiteral_url;
                  pSVar7 = (this->fields).originalURL;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  this_00 = (this->fields).settingsBase;
                  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0
                      ) && ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__Convert);
                  }
                  pSVar7 = mscorlib.dll::System::Convert::Convert_ToString_1
                                     ((Object *)pSVar7,(MethodInfo *)0x0);
                  if (this_00 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              (this_00,key,(Object *)pSVar7,(MethodInfo *)0x0);
                    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this->fields).soundTabInfos;
                    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   *)0x0) {
                      pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,UnityEngine::Experimental::TerrainAPI::
                               TerrainUtility+TerrainMap]::
                               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                         (pDVar4,(this->fields).selectedTab,
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                         );
                      this_01 = (this->fields).categorysAmount;
                      if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Int32]::
                                Dictionary_2_System_Int32_System_Int32__get_Item
                                          (this_01,(this->fields).selectedTab,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                          );
                        slotIndex = (undefined *)0x0;
                        if (0 < iVar5) {
                          do {
                            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                      *)(this->fields).tabs;
                            if (pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                           *)0x0) goto code_?;
                            this_03 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32,UnityEngine::Experimental::
                                      TerrainAPI::TerrainUtility+TerrainMap]::
                                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                                (pDVar4,(this->fields).selectedTab,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                );
                            if (this_03 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
                            puVar8 = slotIndex;
                            bVar9 = TabState::TabState_SlotIndexIsInRange
                                              ((TabState *)this_03,(int32_t)slotIndex,
                                               (MethodInfo *)0x0);
                            if (bVar9 != 0) {
                              pSVar10 = (this->fields).soundViewItemPrefab;
                              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                                   0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                func_?(TypeInfo__UnityEngine__Object);
                              }
                              puVar8 = &UNK_?;
                              pSVar10 = (SoundViewItem *)
                                       UnityEngine.CoreModule.dll::UnityEngine::Object::
                                       Object_1_Instantiate_251
                                                 ((XpBoostParticlePreviewer *)pSVar10,
                                                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                 );
                              if (pTVar6 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
                              info = (SoundTabInfo *)
                                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine
                                     ::EventSystems::IEventSystemHandler]::
                                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                 *)pTVar6,(int32_t)slotIndex,
                                                MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                               );
                              pSVar7 = (this->fields).originalURL;
                              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                        *)func_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                              UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                              SceneManagement::Scene]::
                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                        (pUVar3,(Object *)this,
                                         MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                         ,
                                         MethodInfo__UnityEngine__Events__UnityAction<System::String>__UnityAction_System__Object__void__
                                        );
                              if (pSVar10 == (SoundViewItem *)0x0) goto code_?;
                              SoundViewItem::SoundViewItem_Initialize
                                        (pSVar10,info,pSVar7,(UnityAction_1_System_String_ *)pUVar3,
                                         (MethodInfo *)0x0);
                              pIVar1 = (this->fields).inventoryController;
                              item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_gameObject
                                               ((Component_1 *)pSVar10,(MethodInfo *)0x0);
                              if (pIVar1 == (InventoryController *)0x0) goto code_?;
                              InventoryController::InventoryController_AddObject
                                        (pIVar1,item,
                                         (int)slotIndex % (this->fields).numberOfSlotsPrPage,
                                         (MethodInfo *)0x0);
                            }
                            slotIndex = slotIndex + 1;
                          } while ((int)slotIndex < (int)puVar8);
                        }
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
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* SoundInventoryController() */

void Assembly-CSharp.dll::SoundInventoryController::SoundInventoryController__ctor
               (SoundInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TabState_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).tabs = this_00;
  this_01 = (Dictionary_2_System_Int32_List_1_SoundTabInfo_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Dictionary__
            );
  (this->fields).soundTabInfos = this_01;
  this_02 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).categorysAmount = this_02;
  this_03 = (Dictionary_2_System_String_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  (this->fields).categoryToNameCombinations = this_03;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

