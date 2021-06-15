
/* IEnumerator FixContentPivot() */

IEnumerator *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_FixContentPivot
          (BoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BoostMenuController___FixContentPivot_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* List`1[Boost] GetSortedBoosts(Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost],
   BoostController) */

List_1_Boost_ *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_GetSortedBoosts
          (BoostMenuController *this,
          Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *boosts,
          BoostController *boostController,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar4 = 0;
  func_?();
  iStack_5 = -1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<Boost>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<Boost>__List__);
  while( true ) {
    if ((boostController == (BoostController *)0x0) ||
       (pLVar6 = (boostController->fields).boostPriorityList, pLVar6 == (List_1_BoostType_ *)0x0))
    goto code_?;
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                        MethodInfo__System__Collections__Generic__List<BoostType>__get_Count__);
    if ((int)pOVar7 <= iVar4) break;
    if (boosts == (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                *)&stack0xffffff90,
               (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)boosts,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar8 = func_?(), cVar8 != '\0') {
      pCVar9 = (Collection_1_VoxelHit_ *)func_?();
      if (pCVar9 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar9,(MethodInfo *)0x0);
      pLVar6 = (boostController->fields).boostPriorityList;
      if (pLVar6 == (List_1_BoostType_ *)0x0) goto code_?;
      pIVar11 = (IList_1_VoxelHit_ *)
               mscorlib.dll::System::Collections::Generic::List`1[BoostType]::
               List_1_BoostType__get_Item
                         (pLVar6,iVar4,
                          MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
      if (pIVar10 == pIVar11) {
        if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pCVar9,
                   MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
      }
    }
    iVar12 = iStack_5 + 1;
    *(undefined4 *)(&stack0xffffff84 + iVar12 * 4) = 0x5e;
    uStack_1 = 0xffffffff;
    func_?();
    if (((iVar12 != -1) && (*(int *)(&stack0xffffff84 + iVar12 * 4) == 0x5e)) && (-1 < iVar12)) {
      iVar12 = iStack_5;
    }
    iStack_5 = iVar12;
    iVar4 = iVar4 + 1;
  }
  if (boosts != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
    pDVar13 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                         *)&stack0xffffff90,
                        (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                        boosts,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                       );
    method_01 = (pDVar13->host_enumerator).dictionary;
    uStack_1 = 2;
    do {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        *(undefined4 *)(&stack0xffffff88 + iStack_5 * 4) = 0xf1;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_Boost_ *)this_00;
      }
      method_00 = 
      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
      ;
      pCVar9 = (Collection_1_VoxelHit_ *)func_?();
      bVar14 = false;
      iVar4 = 0;
      while( true ) {
        if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
        if ((int)pOVar7 <= iVar4) break;
        this_01 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,iVar4,
                             MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
        if ((this_01 == (Collection_1_VoxelHit_ *)0x0) ||
           (pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(this_01,method_00),
           pCVar9 == (Collection_1_VoxelHit_ *)0x0)) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        pIVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(pCVar9,(MethodInfo *)method_01);
        if (pIVar10 == pIVar11) {
          bVar14 = true;
        }
        iVar4 = iVar4 + 1;
      }
      if (!bVar14) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pCVar9,
                   MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
      }
    } while( true );
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  func_?();
  pcVar16 = (code *)swi(3);
  pLVar17 = (List_1_Boost_ *)(*pcVar16)();
  return pLVar17;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_Initialize
               (BoostMenuController *this,MethodInfo *method)

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
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) {
    boosts = BoostController::BoostController_GetAllBoosts
                       ((BoostController *)this_02,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
        (this_04 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                             (this_03,
                              MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                             ), this_04 != (MVRoundCube *)0x0)) &&
       (this_05 = (BoostMenuController *)
                  MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                            ((MVGameOptionDataObject *)this_04,(MethodInfo *)0x0),
       this_05 != (BoostMenuController *)0x0)) {
      this_06 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameBoosterSettings::GameBoosterSettingsManager::
                GameBoosterSettingsManager_get_ActiveSettingsList
                          ((GameBoosterSettingsManager *)this_05,(MethodInfo *)0x0);
      this_07 = (MethodInfo *)
                BoostMenuController_GetSortedBoosts
                          (this_05,boosts,(BoostController *)this_02,(MethodInfo *)0x0);
      index = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
               *)0x0;
      pMVar1 = this_07;
      if (this_07 != (MethodInfo *)0x0) {
        for (; pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_07,
                                   MethodInfo__System__Collections__Generic__List<Boost>__get_Count__
                                  ), (int)index < (int)pOVar2;
            index = (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                     *)((int)&index->klass + 1)) {
          index_00 = 0;
          while( true ) {
            if (this_06 ==
                (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                 *)0x0) goto code_?;
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_06,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                               );
            if ((int)pOVar2 <= index_00) break;
            this_08 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_07,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                );
            if (this_08 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)0x0)
            goto code_?;
            uVar3 = System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                              (this_08,(MethodInfo *)0x0);
            if (uVar3 != 0) {
              this_09 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_07,
                                   (int32_t)index,
                                   MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                  );
              if (this_09 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
              goto code_?;
              a = (String *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (this_09,(MethodInfo *)0x0);
              pCVar4 = (Collection_1_VoxelHit_ *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_06,
                                  index_00,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                 );
              if (pCVar4 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              b = (String *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(pCVar4,(MethodInfo *)0x0);
              this_07 = pMVar1;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
                this_07 = pMVar1;
              }
              bVar5 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
              pMVar1 = this_07;
              if (bVar5 != 0) {
                original = (XpBoostParticlePreviewer *)(this_02->fields).animationSpeed;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                this_10 = (BoostMenuItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                    (original,
                                     BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem_
                                    );
                if ((this_10 == (BoostMenuItem *)0x0) ||
                   (this_11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)this_10,(MethodInfo *)0x0),
                   this_11 == (Transform *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_11,*(Transform **)((int)&(this_02->fields).arrowOffset + 4),0,
                           (MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                           MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_,
                           (int32_t)index,
                           MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
                this_13 = (BoostController *)&UNK_?;
                pMVar1 = MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_;
                this_06 = index;
                this_07 = MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_;
                pCVar4 = (Collection_1_VoxelHit_ *)
                         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                    MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                    ,(int32_t)index,
                                    MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                   );
                if (pCVar4 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
                type = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(pCVar4,(MethodInfo *)0x0);
                bVar5 = BoostController::BoostController_IsBoostActive
                                  (this_13,(BoostType__Enum)type,(MethodInfo *)0x0);
                BoostMenuItem::BoostMenuItem_Initialize
                          (this_10,(Boost *)pMVar1,bVar5,(MethodInfo *)0x0);
                pMVar1 = this_07;
              }
            }
            index_00 = index_00 + 1;
          }
        }
        layoutRoot = *(RectTransform **)((int)&(this_02->fields).arrowOffset + 4);
        if ((((uint)(TypeInfo__UnityEngine__UI__LayoutRebuilder->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
        LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_12 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_12,0.0,(MethodInfo *)&UNK_?);
        if (this_12 != (ScaleAnimationBase *)0x0) {
          (this_12->fields)._._._._.m_CachedPtr = this_02;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this_02,(IEnumerator *)this_12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_OnAdFinished
               (BoostMenuController *this,bool adWasSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (adWasSuccessful == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__BoostMenuController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__BoostMenuController___OnAdFinished_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__BoostMenuController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__BoostMenuController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
code_?:
    this_00 = (Action_1_UIPushOption_ *)(this->fields).boostUnlockedCallback;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,(UIPushOption__Enum)MethodInfo__System__Action<bool>__Invoke_bool_,
                 MethodInfo__System__Action<bool>__Invoke_bool_);
    }
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    this_03 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (this_03 != (PrefabPool *)0x0) {
      this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_03,(MethodInfo *)0x0);
      if (this_04 != (ObjectiveArrow *)0x0) {
        piVar1 = &(this->fields).adRewardType;
        BoostController::BoostController_ActivateBoost
                  ((BoostController *)this_04,(this->fields).adRewardType,(MethodInfo *)0x0);
        piVar2 = (int *)func_?(TypeInfo__BoostType,piVar1);
        if (piVar2 != (int *)0x0) {
          pSVar3 = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
          piVar4 = (int32_t *)func_?();
          *piVar1 = *piVar4;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Ad_RewardRequest_Booster_,pSVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
            func_?(TypeInfo__StatHatWrapper);
          }
          StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_RewardedAdCallback
               (BoostMenuController *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != RewardedAdResult__Enum_RewardUnlocked) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__BoostMenuController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__BoostMenuController___OnAdFinished_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__BoostMenuController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__BoostMenuController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
code_?:
    this_00 = (Action_1_UIPushOption_ *)(this->fields).boostUnlockedCallback;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,(UIPushOption__Enum)MethodInfo__System__Action<bool>__Invoke_bool_,
                 MethodInfo__System__Action<bool>__Invoke_bool_);
    }
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    this_03 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (this_03 != (PrefabPool *)0x0) {
      this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_03,(MethodInfo *)0x0);
      if (this_04 != (ObjectiveArrow *)0x0) {
        piVar1 = &(this->fields).adRewardType;
        BoostController::BoostController_ActivateBoost
                  ((BoostController *)this_04,(this->fields).adRewardType,(MethodInfo *)0x0);
        piVar2 = (int *)func_?(TypeInfo__BoostType,piVar1);
        if (piVar2 != (int *)0x0) {
          pSVar3 = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
          piVar4 = (int32_t *)func_?();
          *piVar1 = *piVar4;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Ad_RewardRequest_Booster_,pSVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
            func_?(TypeInfo__StatHatWrapper);
          }
          StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TryShowAd(BoostType, Action`1[Boolean]) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_TryShowAd
               (BoostMenuController *this,BoostType__Enum type,Action_1_Boolean_ *OnUnlockedCallback
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).boostUnlockedCallback = OnUnlockedCallback;
  (this->fields).adRewardType = type;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    BoostMenuController_OnAdFinished(this,1,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar2 != (IAdManager *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          ppMVar6 = &(&(pIVar2->klass->vtable).get_ReadyForRewardedAdRequest)
                     [pIVar2->klass->interfaceOffsets[uVar4].offset].method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)
              func_?(pIVar2,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,4);
code_?:
    cVar7 = (*(code *)*ppMVar6)(pIVar2,ppMVar6[1]);
    if (cVar7 == '\0') {
      BoostMenuController_OnAdFinished(this,0,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__BoostMenuController__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
               ,
               MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
              );
    if (pIVar2 != (IAdManager *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar5 = 0;
      uVar4._0_1_ = (pIVar3->_1).rank;
      uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
            ppMVar6 = &(&(pIVar2->klass->vtable).RequestRewardedAd)
                       [pIVar3->interfaceOffsets[uVar5].offset].method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      ppMVar6 = (MethodInfo **)
                func_?(pIVar2,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6);
code_?:
      (*(code *)*ppMVar6)(pIVar2,this_00,1,ppMVar6[1]);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnAdFinished>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController__OnAdFinished_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_RewardedAdNotAvailableText)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)
              func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,0);
code_?:
    uVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    pSVar7 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      pIVar8 = x->klass;
      uVar4 = 0;
      uVar3._0_1_ = (pIVar8->_1).rank;
      uVar3._1_1_ = (pIVar8->_1).minimumAlignment;
      if (uVar3 != 0) {
        do {
          if (pIVar8->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            ppMVar5 = &(&(x->klass->vtable).Create_3)[pIVar8->interfaceOffsets[uVar4].offset].method
            ;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      ppMVar5 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
      (*(code *)*ppMVar5)(x,uVar6,pSVar7,ppMVar5[1]);
      return;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

