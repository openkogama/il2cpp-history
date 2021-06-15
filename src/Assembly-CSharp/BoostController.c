
/* Void ActivateBoost(BoostType) */

void Assembly-CSharp.dll::BoostController::BoostController_ActivateBoost
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  BVar1 = type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).activeBoosts;
  if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
            Dictionary_2_BoostType_System_Object__ContainsKey
                      ((Dictionary_2_BoostType_System_Object_ *)pDVar2,BVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    BVar1 = type;
    if (bVar3 == 0) {
      pDVar2 = (this->fields).activeBoosts;
      if ((((uint)(TypeInfo__BoostController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BoostController->_1).cctor_started == 0)) {
        func_?(TypeInfo__BoostController);
      }
      this_00 = TypeInfo__BoostController->static_fields->boosts;
      if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
                Dictionary_2_BoostType_System_Object__get_Item
                          ((Dictionary_2_BoostType_System_Object_ *)this_00,type,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                          );
        if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
          Dictionary_2_BoostType_System_Object__set_Item
                    ((Dictionary_2_BoostType_System_Object_ *)pDVar2,BVar1,value,
                     MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__set_Item_BoostType__Boost_
                    );
          BoostController_BoostUpdated(this,type,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      piVar4 = (int *)func_?(TypeInfo__BoostType,&type);
      if (piVar4 != (int *)0x0) {
        pSVar5 = (String *)(**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
        pBVar6 = (BoostType__Enum *)func_?(piVar4);
        type = *pBVar6;
        pDVar2 = (this->fields).activeBoosts;
        if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
          str3 = (String *)
                 (*(code *)(pDVar2->klass->vtable).ToString.method)
                           (pDVar2,(pDVar2->klass->vtable).
                                   System_Collections_IEnumerable_GetEnumerator.methodPtr);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Boost__,pSVar5,StringLiteral___Active_boosts__,str3,
                              (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Trying_to_activate_boost__but_bo,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AllowBoost(BoostType, Boolean) */

void Assembly-CSharp.dll::BoostController::BoostController_AllowBoost
               (BoostController *this,BoostType__Enum boost,bool allowed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BoostController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BoostController->_1).cctor_started == 0)) {
    func_?(TypeInfo__BoostController);
  }
  pDVar1 = TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
            Dictionary_2_BoostType_System_Object__ContainsKey
                      ((Dictionary_2_BoostType_System_Object_ *)pDVar1,boost,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__BoostController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BoostController->_1).cctor_started == 0)) {
        func_?(TypeInfo__BoostController);
      }
      pDVar1 = TypeInfo__BoostController->static_fields->boosts;
      if ((pDVar1 == (Dictionary_2_BoostType_Boost_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::
                   Object]::Dictionary_2_BoostType_System_Object__get_Item
                             ((Dictionary_2_BoostType_System_Object_ *)pDVar1,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      *(bool *)&pOVar3[3].klass = allowed;
    }
    pDVar1 = (this->fields).activeBoosts;
    if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
              Dictionary_2_BoostType_System_Object__ContainsKey
                        ((Dictionary_2_BoostType_System_Object_ *)pDVar1,boost,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                        );
      if (bVar2 == 0) {
        return;
      }
      pDVar1 = (this->fields).activeBoosts;
      if ((pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::
                   Object]::Dictionary_2_BoostType_System_Object__get_Item
                             ((Dictionary_2_BoostType_System_Object_ *)pDVar1,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar3 != (Object *)0x0)) {
        *(bool *)&pOVar3[3].klass = allowed;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void BoostUpdated(BoostType) */

void Assembly-CSharp.dll::BoostController::BoostController_BoostUpdated
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).onBoostTypeUpdate;
  if (pDVar1 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
             Dictionary_2_BoostType_System_Object__get_Item
                       ((Dictionary_2_BoostType_System_Object_ *)pDVar1,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    if (pOVar2 == (Object *)0x0) {
code_?:
      pJVar3 = (JumpState_OnWallJumpDelegate *)(this->fields).BoostCountChanged;
      if (pJVar3 != (JumpState_OnWallJumpDelegate *)0x0) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(pJVar3,(MethodInfo *)0x0);
      }
      return;
    }
    pDVar1 = (this->fields).onBoostTypeUpdate;
    if (pDVar1 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
      pJVar3 = (JumpState_OnWallJumpDelegate *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
               Dictionary_2_BoostType_System_Object__get_Item
                         ((Dictionary_2_BoostType_System_Object_ *)pDVar1,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                         );
      if (pJVar3 != (JumpState_OnWallJumpDelegate *)0x0) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(pJVar3,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost] GetActiveBoosts() */

Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *
Assembly-CSharp.dll::BoostController::BoostController_GetActiveBoosts
          (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    pDVar1 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                       );
    return pDVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)(*pcVar2)();
  return pDVar1;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost] GetAllBoosts() */

Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *
Assembly-CSharp.dll::BoostController::BoostController_GetAllBoosts
          (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BoostController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BoostController->_1).cctor_started == 0)) {
    func_?(TypeInfo__BoostController);
  }
  this_00 = TypeInfo__BoostController->static_fields->boosts;
  if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    pDVar1 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                       );
    return pDVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)(*pcVar2)();
  return pDVar1;
}


/* Boolean HasAvailableBoosts() */

bool Assembly-CSharp.dll::BoostController::BoostController_HasAvailableBoosts
               (BoostController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
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
    this_02 = BoostController_GetAllBoosts(this,(MethodInfo *)0x0);
    if (this_02 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                           *)&stack0xffffffa0,
                          (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                          this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)(pDVar5->host_enumerator).stamp;
      uStack_1 = 0;
      do {
        cVar6 = func_?();
        if (cVar6 == '\0') {
          iVar7 = 0x94;
code_?:
          uStack_1 = 0xffffffff;
          func_?();
          if (iVar7 != 0x96) {
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          *unaff_FS_OFFSET = uStack_3;
          return bStack_4;
        }
        pMVar8 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
        ;
        iVar7 = func_?();
        if ((this_01 == (MVRoundCube *)0x0) ||
           (this_03 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                                ((MVGameOptionDataObject *)this_01,pMVar8),
           this_03 == (GameBoosterSettingsManager *)0x0)) break;
        this_04 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList(this_03,(MethodInfo *)0x0);
        index = 0;
        while( true ) {
          if (this_04 ==
              (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
               *)0x0) goto code_?;
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                             );
          if ((int)pOVar9 <= index) break;
          if (iVar7 == 0) goto code_?;
          pMVar8 = *(MethodInfo **)(iVar7 + 0xc);
          this_05 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,index
                               ,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                              );
          if (this_05 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
          b = (String *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items(this_05,method_00);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          bVar10 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)pMVar8,b,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            bStack_4 = 1;
            iVar7 = 0x96;
            goto code_?;
          }
          index = index + 1;
          method_00 = pMVar8;
        }
      } while( true );
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Boolean IsBoostActive(BoostType) */

bool Assembly-CSharp.dll::BoostController::BoostController_IsBoostActive
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
            Dictionary_2_BoostType_System_Object__ContainsKey
                      ((Dictionary_2_BoostType_System_Object_ *)this_00,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void RemoveAllBoosts() */

void Assembly-CSharp.dll::BoostController::BoostController_RemoveAllBoosts
               (BoostController *this,MethodInfo *method)

{
  this_01 = this;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pBVar6 = (BoostController *)0x0;
  pOStack_7 = (Object *)0x0;
  pDStack_8 = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  iStack_9 = 0;
  iStack_10 = 0;
  iStack_11 = 0;
  func_?();
  pDVar12 = (this->fields).activeBoosts;
  puStack_13 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((pDVar12 != (Dictionary_2_BoostType_Boost_ *)0x0) &&
     (puStack_13 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_02 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar12,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         ),
     this_02 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_15,this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                       );
    pDStack_8 = (pDVar14->host_enumerator).dictionary;
    iStack_9 = (pDVar14->host_enumerator).next;
    iStack_10 = (pDVar14->host_enumerator).stamp;
    iStack_11 = (pDVar14->host_enumerator).current.key;
    pOStack_7 = (pDVar14->host_enumerator).current.value;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      item = func_?();
      pLVar17 = (this->fields).removeList;
      if (pLVar17 == (List_1_Boost_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar17,item,
                 MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
    }
    *puStack_13 = 0x49;
    uStack_1 = 0xffffffff;
    func_?();
    pLVar17 = (this->fields).removeList;
    this = (BoostController *)0x0;
    if (pLVar17 != (List_1_Boost_ *)0x0) {
      while (pOVar18 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar17,
                                 MethodInfo__System__Collections__Generic__List<Boost>__get_Count__)
            , pBVar6 = this, (int)this < (int)pOVar18) {
        pDVar12 = (this_01->fields).activeBoosts;
        pLVar17 = (this_01->fields).removeList;
        if (((pLVar17 == (List_1_Boost_ *)0x0) ||
            (pIVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar17,
                                 (int32_t)this,
                                 MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                ), pIVar19 == (IEventSystemHandler *)0x0)) ||
           (pDVar12 == (Dictionary_2_BoostType_Boost_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
        Dictionary_2_BoostType_System_Object__Remove
                  ((Dictionary_2_BoostType_System_Object_ *)pDVar12,(BoostType__Enum)pIVar19[1].klass,
                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Remove_BoostType_
                  );
        pLVar17 = (this_01->fields).removeList;
        if ((pLVar17 == (List_1_Boost_ *)0x0) ||
           (pIVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar17,
                                (int32_t)this,
                                MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                               ), pIVar19 == (IEventSystemHandler *)0x0)) goto code_?;
        BoostController_BoostUpdated(this_01,(BoostType__Enum)pIVar19[1].klass,(MethodInfo *)0x0);
        pLVar17 = (this_01->fields).removeList;
        pBVar6 = (BoostController *)((int)&this->klass + 1);
        this = pBVar6;
        if (pLVar17 == (List_1_Boost_ *)0x0) goto code_?;
      }
      this_00 = (List_1_UnityEngine_UIVertex_ *)(this_01->fields).removeList;
      if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,MethodInfo__System__Collections__Generic__List<Boost>__Clear__);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(pBVar6,0,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SubscribeToBoostChanged(BoostType, Action) */

void Assembly-CSharp.dll::BoostController::BoostController_SubscribeToBoostChanged
               (BoostController *this,BoostType__Enum type,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).onBoostTypeUpdate;
  if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
             Dictionary_2_BoostType_System_Object__get_Item
                       ((Dictionary_2_BoostType_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar1,(Delegate *)callback,(MethodInfo *)0x0);
    pDVar1 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar1 = pDVar2;
      }
      if (pDVar1 == (Delegate *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__set_Item
              ((Dictionary_2_BoostType_System_Object_ *)this_00,(BoostType__Enum)pDVar1,
               (Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
              );
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean TryGetActiveBoost(BoostType, Boost ByRef) */

bool Assembly-CSharp.dll::BoostController::BoostController_TryGetActiveBoost
               (BoostController *this,BoostType__Enum type,Boost **boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activeBoosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
            Dictionary_2_BoostType_System_Object__ContainsKey
                      ((Dictionary_2_BoostType_System_Object_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 == 0) {
      *boost = (Boost *)0x0;
      return 0;
    }
    pDVar1 = (this->fields).activeBoosts;
    if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar3 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::
                        Object]::Dictionary_2_BoostType_System_Object__get_Item
                                  ((Dictionary_2_BoostType_System_Object_ *)pDVar1,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      *boost = pBVar3;
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean TryGetBoost(BoostType, Boost ByRef) */

bool Assembly-CSharp.dll::BoostController::BoostController_TryGetBoost
               (BoostController *this,BoostType__Enum type,Boost **boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BoostController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BoostController->_1).cctor_started == 0)) {
    func_?(TypeInfo__BoostController);
  }
  pDVar1 = TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
            Dictionary_2_BoostType_System_Object__ContainsKey
                      ((Dictionary_2_BoostType_System_Object_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 == 0) {
      *boost = (Boost *)0x0;
      return 0;
    }
    if ((((uint)(TypeInfo__BoostController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BoostController->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar1 = TypeInfo__BoostController->static_fields->boosts;
    if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar3 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::
                        Object]::Dictionary_2_BoostType_System_Object__get_Item
                                  ((Dictionary_2_BoostType_System_Object_ *)pDVar1,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      *boost = pBVar3;
      return 1;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void UnSubscribeToBoostChanged(BoostType, Action) */

void Assembly-CSharp.dll::BoostController::BoostController_UnSubscribeToBoostChanged
               (BoostController *this,BoostType__Enum type,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).onBoostTypeUpdate;
  if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
             Dictionary_2_BoostType_System_Object__get_Item
                       ((Dictionary_2_BoostType_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)callback,(MethodInfo *)0x0);
    pDVar1 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar1 = pDVar2;
      }
      if (pDVar1 == (Delegate *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__set_Item
              ((Dictionary_2_BoostType_System_Object_ *)this_00,(BoostType__Enum)pDVar1,
               (Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
              );
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BoostController() */

void Assembly-CSharp.dll::BoostController::BoostController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__);
  TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  pSVar2 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
  pBVar3 = TypeInfo__Boost;
  pSVar4 = (ScaleAnimationBase *)func_?();
  pSVar5 = StringLiteral_XRayVision;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
  (pSVar4->fields).target = (Transform *)pBVar3;
  (pSVar4->fields)._._._._.m_CachedPtr = (void *)0x4;
  (pSVar4->fields).state = (int32_t)pSVar5;
  (pSVar4->fields).originalScale.x = (float)pSVar1;
  (pSVar4->fields).originalScale.y = (float)pSVar2;
  *(undefined1 *)&(pSVar4->fields).originalScale.z = 1;
  if (unaff_ESI != (Dictionary_2_BoostType_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              (unaff_ESI,BoostType__Enum_XRayVision,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral_x2_Ammo,(MethodInfo *)0x0);
    TM::TM__(StringLiteral_Ammo_Percentage,(MethodInfo *)0x0);
    pBVar6 = (Boost__Array *)TM::TM__(StringLiteral_Ammo,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    this_00 = (Dictionary_2_BoostType_Boost_ *)func_?();
    pSVar1 = StringLiteral_Ammo;
    pBVar7 = (BoostType__Enum__Array *)&UNK_?;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)pBVar3);
    (this_00->fields).emptySlot = (int32_t)pSVar5;
    (this_00->fields).table = (Int32__Array *)0x0;
    (this_00->fields).linkSlots = (Link__Array *)pSVar1;
    (this_00->fields).keySlots = pBVar7;
    (this_00->fields).valueSlots = pBVar6;
    *(undefined1 *)&(this_00->fields).touchedSlots = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,BoostType__Enum_AmmoIntMultiplier,
               (Object *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral___0___Speed,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Speed_Percentage,(MethodInfo *)0x0);
    pSVar8 = TM::TM__(StringLiteral_Speed,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pSVar4 = (ScaleAnimationBase *)func_?();
    pSVar1 = StringLiteral_Speed;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
    (pSVar4->fields).target = (Transform *)pSVar5;
    (pSVar4->fields)._._._._.m_CachedPtr = (void *)0x1;
    (pSVar4->fields).state = (int32_t)pSVar1;
    (pSVar4->fields).originalScale.x = (float)pSVar2;
    (pSVar4->fields).originalScale.y = (float)pSVar8;
    *(undefined1 *)&(pSVar4->fields).originalScale.z = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_MovementSpeedFloatMultiplier,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral_x2_Gamecoins,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Coin_Percentage,(MethodInfo *)0x0);
    pSVar8 = TM::TM__(StringLiteral_Coins,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pSVar4 = (ScaleAnimationBase *)func_?();
    pSVar1 = StringLiteral_GameCoinBoost;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
    (pSVar4->fields).target = (Transform *)pSVar5;
    (pSVar4->fields)._._._._.m_CachedPtr = (void *)0x2;
    (pSVar4->fields).state = (int32_t)pSVar1;
    (pSVar4->fields).originalScale.x = (float)pSVar2;
    (pSVar4->fields).originalScale.y = (float)pSVar8;
    *(undefined1 *)&(pSVar4->fields).originalScale.z = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_GameCoinsIntMultiplier,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral___0___HP,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_HP_Percentage,(MethodInfo *)0x0);
    pSVar8 = TM::TM__(StringLiteral_Health,(MethodInfo *)0x0);
    pSVar4 = (ScaleAnimationBase *)func_?();
    pSVar1 = StringLiteral_Health;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,in_stack_9);
    (pSVar4->fields).target = (Transform *)pSVar5;
    (pSVar4->fields)._._._._.m_CachedPtr = (void *)0x3;
    (pSVar4->fields).state = (int32_t)pSVar1;
    (pSVar4->fields).originalScale.x = (float)pSVar2;
    (pSVar4->fields).originalScale.y = (float)pSVar8;
    *(undefined1 *)&(pSVar4->fields).originalScale.z = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_ExtraHealthFloatMultiplier,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral___0___Jump,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Jump_Percentage,(MethodInfo *)0x0);
    pSVar8 = TM::TM__(StringLiteral_Jump,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pSVar4 = (ScaleAnimationBase *)func_?();
    pSVar1 = StringLiteral_JumpPower;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
    (pSVar4->fields).target = (Transform *)pSVar5;
    (pSVar4->fields)._._._._.m_CachedPtr = (void *)0x5;
    (pSVar4->fields).state = (int32_t)pSVar1;
    (pSVar4->fields).originalScale.x = (float)pSVar2;
    (pSVar4->fields).originalScale.y = (float)pSVar8;
    *(undefined1 *)&(pSVar4->fields).originalScale.z = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_JumpPowerFloatMultiplier,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral___0___Poison_Resist,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
    pSVar8 = TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pSVar4 = (ScaleAnimationBase *)func_?();
    pSVar1 = StringLiteral_PoisonResist;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
    (pSVar4->fields).target = (Transform *)pSVar5;
    (pSVar4->fields).originalScale.y = (float)pSVar8;
    (pSVar4->fields)._._._._.m_CachedPtr = (void *)0x6;
    (pSVar4->fields).state = (int32_t)pSVar1;
    (pSVar4->fields).originalScale.x = (float)pSVar2;
    *(undefined1 *)&(pSVar4->fields).originalScale.z = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_PoisonResistPercentage,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    TypeInfo__BoostController->static_fields->boosts = this_00;
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* BoostController() */

void Assembly-CSharp.dll::BoostController::BoostController__ctor
               (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_BoostType_System_Action_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Dictionary__
            );
  if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,BoostType__Enum_AmmoIntMultiplier,
               (Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_MovementSpeedFloatMultiplier,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_GameCoinsIntMultiplier,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_ExtraHealthFloatMultiplier,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,BoostType__Enum_XRayVision,
               (Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_JumpPowerFloatMultiplier,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BoostType,System::Object]::
    Dictionary_2_BoostType_System_Object__Add
              ((Dictionary_2_BoostType_System_Object_ *)this_00,
               BoostType__Enum_PoisonResistPercentage,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    (this->fields).onBoostTypeUpdate = this_00;
    pLVar1 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar1,MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    if (pLVar1 != (List_1_UnityEngine_Vector4_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,
                 UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_Blocking,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_None,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,
                 UIPushOption__Enum_InvisibleBlocker|UIPushOption__Enum_Blocking,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_HideAll,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,
                 UIPushOption__Enum_InvisibleBlocker|UIPushOption__Enum_HideAll,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_InvisibleBlocker,
                 MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      (this->fields).boostPriorityList = (List_1_BoostType_ *)pLVar1;
      this_01 = (Dictionary_2_BoostType_Boost_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                );
      (this->fields).activeBoosts = this_01;
      method_00 = TypeInfo__System__Collections__Generic__List<Boost>;
      pLVar1 = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (pLVar1,MethodInfo__System__Collections__Generic__List<Boost>__List__);
      (this->fields).removeList = (List_1_Boost_ *)pLVar1;
      ScaleAnimationBase::ScaleAnimationBase_Play
                ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

