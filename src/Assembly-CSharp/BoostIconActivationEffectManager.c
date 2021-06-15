
/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnAvatarModeChange
               (BoostIconActivationEffectManager *this,SpawnRoleModeType__Enum newMode,
               MethodInfo *method)

{
  iVar1 = (this->fields).previousMode;
  if (((iVar1 == 4) || (iVar1 == 2)) && (newMode == SpawnRoleModeType__Enum_Playing)) {
    bVar2 = cRam_? == '\0';
    (this->fields).nextActiveBoostEffect = 0;
    if (bVar2) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar3 = (this->fields).boostIconEffects;
    if (pLVar3 != (List_1_BoostIconActivationEffectController_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                         );
      iVar1 = (this->fields).nextActiveBoostEffect;
      if ((int)pOVar4 <= iVar1) goto code_?;
      (this->fields).nextActiveBoostEffect = iVar1 + 1;
      pLVar3 = (this->fields).boostIconEffects;
      if (pLVar3 != (List_1_BoostIconActivationEffectController_ *)0x0) {
        this_00 = (BoostIconActivationEffectController *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar1,
                             MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                            );
        if (this_00 != (BoostIconActivationEffectController *)0x0) {
          BoostIconActivationEffectController::BoostIconActivationEffectController_Activate
                    (this_00,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    func_?(0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  (this->fields).previousMode = newMode;
  return;
}


/* Void OnAvatarSpawn() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnAvatarSpawn
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).nextActiveBoostEffect = 0;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).boostIconEffects;
  if (pLVar2 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                       );
    index = (this->fields).nextActiveBoostEffect;
    if ((int)pOVar3 <= index) {
      return;
    }
    (this->fields).nextActiveBoostEffect = index + 1;
    pLVar2 = (this->fields).boostIconEffects;
    if (pLVar2 != (List_1_BoostIconActivationEffectController_ *)0x0) {
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                         );
      if (pIVar4 != (IEventSystemHandler *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (PrefabPool *)
                  MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (this_00 != (PrefabPool *)0x0) {
          this_01 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                              (this_00,(MethodInfo *)0x0);
          if (this_01 != (ObjectiveArrow *)0x0) {
            bVar5 = BoostController::BoostController_IsBoostActive
                              ((BoostController *)this_01,
                               (BoostType__Enum)in_stack_6[4].fields._.m_CachedPtr,
                               (MethodInfo *)0x0);
            if (bVar5 == 0) {
              if (in_stack_6[5].klass != (Component_1__Class *)0x0) {
                AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                          ((AvatarMotor_OnActiveBounceDelegate *)in_stack_6[5].klass,
                           (MethodInfo *)0x0);
                return;
              }
            }
            else if (in_stack_6[1].klass != (Component_1__Class *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        ((CanvasGroup *)in_stack_6[1].klass,1.0,(MethodInfo *)0x0);
              in_stack_6[3].monitor = (MonitorData *)0x1;
              pvVar7 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                         ((MethodInfo *)0x0);
              in_stack_6[3].fields._.m_CachedPtr = pvVar7;
              *(undefined1 *)&in_stack_6[4].monitor = 0;
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform(in_stack_6,(MethodInfo *)0x0);
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 (in_stack_6,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)&stack0xfffffff0,pTVar8,(MethodInfo *)0x0);
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform(in_stack_6,(MethodInfo *)0x0);
                if (pTVar8 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xffffffd8,pTVar8,(MethodInfo *)0x0);
                  uVar9 = 0;
                  uVar10 = 0;
                  func_?();
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform(in_stack_6,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    value_00.y = (float)uVar9;
                    value_00.x = (float)uVar10;
                    value_00.z = 0.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar8,value_00,(MethodInfo *)0x0);
                    if (this_02 != (Transform *)0x0) {
                      value.y = (float)uVar9;
                      value.x = (float)uVar10;
                      value.z = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(this_02,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        func_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnDestroy
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_00 != (PrefabPool *)0x0) &&
     (this_01 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                 *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0),
     this_01 !=
     (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)) {
    this_02 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        (this_01,(MethodInfo *)0x0);
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,unaff_EDI,
               MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
               ,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_02 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
                (this_02,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_03,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::BoostIconActivationEffectManager_Start
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  puStack_11 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffac, puStack_4 = &stack0xffffffac,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_11 = (undefined4 *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar12 = (PrefabPool *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar12 != (PrefabPool *)0x0) {
    method_02 = (MethodInfo *)&UNK_?;
    this_01 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar12,(MethodInfo *)0x0);
    if (this_01 !=
        (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
    {
      this_02 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          (this_01,(MethodInfo *)0x0);
      pSStack_13 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)pSStack_13,(Object *)this,
                 MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 ,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
                );
      if (this_02 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                  (this_02,pSStack_13,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                  );
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame *)0x0) {
          method_00 = (MethodInfo *)&UNK_?;
          pPVar12 = (PrefabPool *)
                   MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,in_stack_14);
          if ((pPVar12 != (PrefabPool *)0x0) &&
             (this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                  (pPVar12,in_stack_15), this_04 != (ObjectiveArrow *)0x0)) {
            method_01 = (MethodInfo *)&UNK_?;
            this_05 = BoostController::BoostController_GetAllBoosts
                                ((BoostController *)this_04,method_02);
            if (this_05 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
              pDVar16 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                                 (&DStack_17,
                                  (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_
                                   *)this_05,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                                 );
              pDStack_7 = (pDVar16->host_enumerator).dictionary;
              iStack_8 = (pDVar16->host_enumerator).next;
              iStack_9 = (pDVar16->host_enumerator).stamp;
              iStack_10 = (pDVar16->host_enumerator).current.key;
              pOStack_6 = (pDVar16->host_enumerator).current.value;
              uStack_1 = 0;
              while( true ) {
                DStack_17.host_enumerator.dictionary =
                     (Dictionary_2_ChatCommand_System_Object_ *)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                ;
                cVar18 = func_?();
                if (cVar18 == '\0') {
                  *puStack_11 = 0xb0;
                  uStack_1 = 0xffffffff;
                  DStack_17.host_enumerator.dictionary =
                       (Dictionary_2_ChatCommand_System_Object_ *)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                  ;
                  func_?();
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
                DStack_17.host_enumerator.dictionary =
                     (Dictionary_2_ChatCommand_System_Object_ *)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                ;
                pSStack_13 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
                             func_?();
                pBVar19 = (this->fields).boostIconEffectPrefab;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                pBVar19 = (BoostIconActivationEffectController *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                   ((XpBoostParticlePreviewer *)pBVar19,
                                    BoostIconActivationEffectController_MethodInfo__UnityEngine__Object__Instantiate<BoostIconActivationEffectController>_BoostIconActivationEffectController_
                                   );
                if (pBVar19 == (BoostIconActivationEffectController *)0x0) break;
                this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pBVar19,method_00);
                parent = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if ((this_06 == (Transform *)0x0) ||
                   (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                              (this_06,parent,0,method_01),
                   pSStack_13 == (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0))
                break;
                pSStack_13 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
                             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                             ::Collection_1_VoxelHit__get_Items
                                       ((Collection_1_VoxelHit_ *)pSStack_13,(MethodInfo *)0x0);
                this_07 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_07,(Object *)this,
                           MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__,
                           (MethodInfo *)0x0);
                method_01 = (MethodInfo *)0x0;
                method_00 = (MethodInfo *)&UNK_?;
                BoostIconActivationEffectController::BoostIconActivationEffectController_Initialize
                          (pBVar19,(BoostType__Enum)pSStack_13,(UnityAction *)this_07,
                           (MethodInfo *)0x0);
                this_00 = (this->fields).boostIconEffects;
                if (this_00 == (List_1_BoostIconActivationEffectController_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pBVar19,
                           MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__Add_BoostIconActivationEffectController_
                          );
              }
            }
          }
        }
      }
    }
  }
  func_?();
  DStack_17.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void StartBoostIconEffect() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_StartBoostIconEffect
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostIconEffects;
  if (pLVar1 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                       );
    index = (this->fields).nextActiveBoostEffect;
    if ((int)pOVar2 <= index) {
      return;
    }
    (this->fields).nextActiveBoostEffect = index + 1;
    pLVar1 = (this->fields).boostIconEffects;
    if (pLVar1 != (List_1_BoostIconActivationEffectController_ *)0x0) {
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                         );
      if (pIVar3 != (IEventSystemHandler *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (PrefabPool *)
                  MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (this_00 != (PrefabPool *)0x0) {
          this_01 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                              (this_00,(MethodInfo *)0x0);
          if (this_01 != (ObjectiveArrow *)0x0) {
            bVar4 = BoostController::BoostController_IsBoostActive
                              ((BoostController *)this_01,
                               (BoostType__Enum)in_stack_5[4].fields._.m_CachedPtr,
                               (MethodInfo *)0x0);
            if (bVar4 == 0) {
              if (in_stack_5[5].klass != (Component_1__Class *)0x0) {
                AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                          ((AvatarMotor_OnActiveBounceDelegate *)in_stack_5[5].klass,
                           (MethodInfo *)0x0);
                return;
              }
            }
            else if (in_stack_5[1].klass != (Component_1__Class *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        ((CanvasGroup *)in_stack_5[1].klass,1.0,(MethodInfo *)0x0);
              in_stack_5[3].monitor = (MonitorData *)0x1;
              pvVar6 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                         ((MethodInfo *)0x0);
              in_stack_5[3].fields._.m_CachedPtr = pvVar6;
              *(undefined1 *)&in_stack_5[4].monitor = 0;
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform(in_stack_5,(MethodInfo *)0x0);
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 (in_stack_5,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)&stack0xfffffff0,pTVar7,(MethodInfo *)0x0);
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform(in_stack_5,(MethodInfo *)0x0);
                if (pTVar7 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xffffffd8,pTVar7,(MethodInfo *)0x0);
                  uVar8 = 0;
                  uVar9 = 0;
                  func_?();
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform(in_stack_5,(MethodInfo *)0x0);
                  if (pTVar7 != (Transform *)0x0) {
                    value_00.y = (float)uVar8;
                    value_00.x = (float)uVar9;
                    value_00.z = 0.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar7,value_00,(MethodInfo *)0x0);
                    if (this_02 != (Transform *)0x0) {
                      value.y = (float)uVar8;
                      value.x = (float)uVar9;
                      value.z = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(this_02,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        func_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* BoostIconActivationEffectManager() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::BoostIconActivationEffectManager__ctor
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<BoostIconActivationEffectController>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__List__
            );
  (this->fields).boostIconEffects = (List_1_BoostIconActivationEffectController_ *)this_00;
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

