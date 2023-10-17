
/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnAvatarModeChange
               (BoostIconActivationEffectManager *this,SpawnRoleModeType__Enum newMode,
               MethodInfo *method)

{
  if (((this->fields).previousMode != 4) && ((this->fields).previousMode != 2)) {
    (this->fields).previousMode = newMode;
    return;
  }
  if (newMode == SpawnRoleModeType__Enum_Playing) {
    (this->fields).nextActiveBoostEffect = 0;
    BoostIconActivationEffectManager_StartBoostIconEffect(this,(MethodInfo *)0x0);
  }
  (this->fields).previousMode = newMode;
  return;
}


/* Void OnAvatarSpawn() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnAvatarSpawn
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  (this->fields).nextActiveBoostEffect = 0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostIconEffects;
  if (pLVar1 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    if ((pLVar1->fields)._size <= (this->fields).nextActiveBoostEffect) {
      return;
    }
    index = (this->fields).nextActiveBoostEffect;
    (this->fields).nextActiveBoostEffect = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).boostIconEffects;
    if ((((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                              ), this_02 != (RegexCharClass_SingleRange)0x0)) &&
        (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0),
        pMVar2 != (MVLocalPlayer *)0x0)) &&
       (this_01 = (pMVar2->fields).boostController, this_01 != (BoostController *)0x0)) {
      bVar3 = BoostController::BoostController_IsBoostActive
                        (this_01,*(BoostType__Enum *)((int)this_02 + 0x38),(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (*(int *)((int)this_02 + 0x3c) != 0) {
          (**(code **)(*(int *)((int)this_02 + 0x3c) + 0xc))();
          return;
        }
      }
      else if (*(CanvasGroup **)((int)this_02 + 0xc) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)((int)this_02 + 0xc),1.0,(MethodInfo *)0x0);
        *(undefined4 *)((int)this_02 + 0x28) = 1;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        *(float *)((int)this_02 + 0x2c) = fVar4;
        *(undefined1 *)((int)this_02 + 0x34) = 0;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_02,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffec,pTVar5,(MethodInfo *)0x0);
          fVar4 = pVVar6->x;
          uVar7 = *(undefined4 *)((int)this_02 + 0x30);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_02,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
            fVar8 = pVVar6->z;
            if ((this_04 != (Transform *)0x0) &&
               (value.y = (float)uVar7, value.x = fVar4, value.z = fVar8,
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                         (this_04,value,(MethodInfo *)0x0), this_03 != (Transform *)0x0)) {
              value_00.y = (float)uVar7;
              value_00.x = fVar4;
              value_00.z = fVar8;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_03,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_OnDestroy
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar2 != (MVLocalPlayer *)0x0) &&
     (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 != (SpawnRoleDataMediator *)0x0)) {
    this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar3->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                           );
    if ((value != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
                   MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                   ,(MethodInfo *)0x0), this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0))
    {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::BoostIconActivationEffectManager_Start
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff80;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__Add_BoostIconActivationEffectController_
                   );
    func_?(&
                    BoostIconActivationEffectController_MethodInfo__UnityEngine__Object__Instantiate<BoostIconActivationEffectController>_BoostIconActivationEffectController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    in_stack_8 =
         &
         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
    ;
    func_?();
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar9 != (MVLocalPlayer *)0x0) &&
     (pSVar10 = (pMVar9->fields).spawnRoleDataMediator, pSVar10 != (SpawnRoleDataMediator *)0x0)) {
    this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar10->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
    if (value != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
                 MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 ,(MethodInfo *)0x0);
      if (this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                  (this_00,value,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                  );
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame *)0x0) {
          pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
          if ((pMVar9 != (MVLocalPlayer *)0x0) &&
             (this_01 = (pMVar9->fields).boostController, this_01 != (BoostController *)0x0)) {
            this_03 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)BoostController::BoostController_GetAllBoosts(this_01,(MethodInfo *)0x0);
            if (this_03 !=
                (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
              pDVar11 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                        Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                  (&DStack_12,this_03,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                                  );
              uStack_13 = 0;
              pMVar14 = (MethodInfo *)pDVar11->_currentValue;
              uStack_2 = 1;
              pOStack_15 = (Object *)&stack0xffffff90;
              while( true ) {
                bVar16 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         Object,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                     *)&stack0xffffff90,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                                   );
                if (bVar16 == 0) {
                  uStack_2 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)&stack0xffffff90,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                             ,(MethodInfo *)in_stack_8);
                  *unaff_FS_OFFSET = uStack_4;
                  return;
                }
                pBVar17 = (this->fields).boostIconEffectPrefab;
                pMStack_18 = pMVar14;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                in_stack_8 =
                     (MethodInfo **)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pBVar17,
                                BoostIconActivationEffectController_MethodInfo__UnityEngine__Object__Instantiate<BoostIconActivationEffectController>_BoostIconActivationEffectController_
                               );
                pBStack_19 = (BoostIconActivationEffectController *)in_stack_8;
                if ((BoostIconActivationEffectController *)in_stack_8 ==
                    (BoostIconActivationEffectController *)0x0) break;
                pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)in_stack_8,(MethodInfo *)0x0);
                parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar20 == (Transform *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar20,parent,0,(MethodInfo *)0x0);
                if (pMStack_18 == (MethodInfo *)0x0) break;
                pMStack_18 = (MethodInfo *)pMStack_18->invoker_method;
                pBStack_21 = (BoostIconActivationEffectController__Array *)func_?();
                if (pBStack_21 == (BoostIconActivationEffectController__Array *)0x0) break;
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          ((NavMesh_OnNavMeshPreUpdate *)pBStack_21,(Object *)this,
                           MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__,
                           (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                index = 0;
                while( true ) {
                  pBVar17 = pBStack_19;
                  pLVar22 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
                           (pBStack_19->fields).boosterIcons;
                  if (pLVar22 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0)
                  goto code_?;
                  if ((pLVar22->fields)._size <= index) break;
                  TVar23 = mscorlib.dll::System::Collections::Generic::
                           List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                           List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                     (pLVar22,index,
                                      MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                                     );
                  _bStack_34 = CONCAT31(uStack_24,(MethodInfo *)TVar23.tabID == pMStack_18);
                  pLVar22 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
                           (pBStack_19->fields).boosterIcons;
                  if (pLVar22 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0)
                  goto code_?;
                  TVar23 = mscorlib.dll::System::Collections::Generic::
                           List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                           List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                     (pLVar22,index,
                                      MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                                     );
                  if (TVar23.streamedImagePrefab == (Graphic *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)TVar23.streamedImagePrefab,(bool)_bStack_34,
                             (MethodInfo *)0x0);
                  index = index + 1;
                }
                pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pBStack_19,(MethodInfo *)0x0);
                if (pTVar20 == (Transform *)0x0) break;
                pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localPosition
                                    ((Vector3 *)&DStack_12,pTVar20,(MethodInfo *)0x0);
                fVar26 = pVVar25->y;
                (pBVar17->fields).boostType = (int32_t)pMStack_18;
                (pBVar17->fields).startNewEffect = (UnityAction *)pBStack_21;
                (pBVar17->fields).originalYPosition = fVar26;
                func_?();
                pMVar27 = 
                MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__Add_BoostIconActivationEffectController_
                ;
                pLVar28 = (this->fields).boostIconEffects;
                if (pLVar28 == (List_1_BoostIconActivationEffectController_ *)0x0) break;
                piVar29 = &(pLVar28->fields)._version;
                *piVar29 = *piVar29 + 1;
                pvVar30 = (void *)(pLVar28->fields)._size;
                pMStack_18 = pMVar27;
                pBStack_21 = (pLVar28->fields)._items;
                if (pBStack_21 == (BoostIconActivationEffectController__Array *)0x0) break;
                if (pvVar30 < (void *)pBStack_21->max_length) {
                  (pLVar28->fields)._size = (int)pvVar30 + 1;
                  if ((void *)pBStack_21->max_length <= pvVar30) goto code_?;
                  pBStack_21->vector[(int)pvVar30] = pBVar17;
                  func_?(pBStack_21->vector + (int)pvVar30);
                }
                else {
                  (*(pMVar27->klass->rgctx_data[0xb].method)->virtualMethodPointer)(pLVar28,pBVar17);
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
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void StartBoostIconEffect() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::
     BoostIconActivationEffectManager_StartBoostIconEffect
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostIconEffects;
  if (pLVar1 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    if ((pLVar1->fields)._size <= (this->fields).nextActiveBoostEffect) {
      return;
    }
    index = (this->fields).nextActiveBoostEffect;
    (this->fields).nextActiveBoostEffect = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).boostIconEffects;
    if ((((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__get_Item_int_
                              ), this_02 != (RegexCharClass_SingleRange)0x0)) &&
        (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0),
        pMVar2 != (MVLocalPlayer *)0x0)) &&
       (this_01 = (pMVar2->fields).boostController, this_01 != (BoostController *)0x0)) {
      bVar3 = BoostController::BoostController_IsBoostActive
                        (this_01,*(BoostType__Enum *)((int)this_02 + 0x38),(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (*(int *)((int)this_02 + 0x3c) != 0) {
          (**(code **)(*(int *)((int)this_02 + 0x3c) + 0xc))();
          return;
        }
      }
      else if (*(CanvasGroup **)((int)this_02 + 0xc) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)((int)this_02 + 0xc),1.0,(MethodInfo *)0x0);
        *(undefined4 *)((int)this_02 + 0x28) = 1;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        *(float *)((int)this_02 + 0x2c) = fVar4;
        *(undefined1 *)((int)this_02 + 0x34) = 0;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_02,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffec,pTVar5,(MethodInfo *)0x0);
          fVar4 = pVVar6->x;
          uVar7 = *(undefined4 *)((int)this_02 + 0x30);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_02,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
            fVar8 = pVVar6->z;
            if ((this_04 != (Transform *)0x0) &&
               (value.y = (float)uVar7, value.x = fVar4, value.z = fVar8,
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                         (this_04,value,(MethodInfo *)0x0), this_03 != (Transform *)0x0)) {
              value_00.y = (float)uVar7;
              value_00.x = fVar4;
              value_00.z = fVar8;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_03,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* BoostIconActivationEffectManager() */

void Assembly-CSharp.dll::BoostIconActivationEffectManager::BoostIconActivationEffectManager__ctor
               (BoostIconActivationEffectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<BoostIconActivationEffectController>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_BoostIconActivationEffectController_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<BoostIconActivationEffectController>
                           );
  if (this_00 != (List_1_BoostIconActivationEffectController_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__List__
              );
    (this->fields).boostIconEffects = this_00;
    func_?(&(this->fields).boostIconEffects,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

