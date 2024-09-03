
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
                        (this_01,*(BoostType__Enum *)((int)this_02 + 0x3c),(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (*(int *)((int)this_02 + 0x40) != 0) {
          (**(code **)(*(int *)((int)this_02 + 0x40) + 0xc))();
          return;
        }
      }
      else if (*(CanvasGroup **)((int)this_02 + 0x10) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)((int)this_02 + 0x10),1.0,(MethodInfo *)0x0);
        *(undefined4 *)((int)this_02 + 0x2c) = 1;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        *(float *)((int)this_02 + 0x30) = fVar4;
        *(undefined1 *)((int)this_02 + 0x38) = 0;
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
          uVar7 = *(undefined4 *)((int)this_02 + 0x34);
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
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar3->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
               MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar4 != (MVLocalPlayer *)0x0) &&
     (pSVar5 = (pMVar4->fields).spawnRoleDataMediator, pSVar5 != (SpawnRoleDataMediator *)0x0)) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar5->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
               MethodInfo__BoostIconActivationEffectManager__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_03 != (MVNetworkGame *)0x0) {
        pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
        if ((pMVar4 != (MVLocalPlayer *)0x0) &&
           (this_01 = (pMVar4->fields).boostController, this_01 != (BoostController *)0x0)) {
          this_04 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)BoostController::BoostController_GetAllBoosts(this_01,(MethodInfo *)0x0);
          if (this_04 !=
              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar6 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffffa0,this_04,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                                );
            pBVar7 = (BoostIconActivationEffectController *)pDVar6->_version;
            pOVar8 = pDVar6->_currentValue;
            uStack_1 = 1;
            while( true ) {
              bVar9 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                       UInt32,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                 ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                   *)&stack0xffffff90,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                                 );
              if (bVar9 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffff90,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                           ,(MethodInfo *)pBVar7);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              pBVar7 = (this->fields).boostIconEffectPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              this_05 = (BoostIconActivationEffectController *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pBVar7,
                                   BoostIconActivationEffectController_MethodInfo__UnityEngine__Object__Instantiate<BoostIconActivationEffectController>_BoostIconActivationEffectController_
                                  );
              if (this_05 == (BoostIconActivationEffectController *)0x0) break;
              pBVar7 = this_05;
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_05,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar10 == (Transform *)0x0) break;
              pOVar11 = (Object *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar10,parent,0,(MethodInfo *)0x0);
              if (pOVar8 == (Object *)0x0) break;
              pOVar12 = pOVar8[1].klass;
              this_06 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_06,(Object *)this,
                         MethodInfo__BoostIconActivationEffectManager__StartBoostIconEffect__,
                         (MethodInfo *)0x0);
              pOVar8 = pOVar11;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
                pOVar8 = pOVar11;
              }
              index = 0;
              while( true ) {
                pLVar13 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                         (this_05->fields).boosterIcons;
                if (pLVar13 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *
                              )0x0) goto code_?;
                if ((pLVar13->fields)._size <= index) break;
                XVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                         XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                         List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                   (pLVar13,index,
                                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                                   );
                pLVar13 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                         (this_05->fields).boosterIcons;
                if (pLVar13 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *
                              )0x0) goto code_?;
                XVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                         XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                         List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                                   (pLVar13,index,
                                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                                   );
                if (XVar15.xso == (XmlSchemaObject *)0x0) goto code_?;
                pBVar7 = (BoostIconActivationEffectController *)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          ((GameObject *)XVar15.xso,(Object__Class *)XVar14.qname == pOVar12,
                           (MethodInfo *)0x0);
                index = index + 1;
              }
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_05,(MethodInfo *)0x0);
              if (pTVar10 == (Transform *)0x0) break;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localPosition
                                  ((Vector3 *)&stack0xffffffa0,pTVar10,(MethodInfo *)0x0);
              fVar17 = pVVar16->y;
              (this_05->fields).boostType = (int32_t)pOVar12;
              (this_05->fields).startNewEffect = (UnityAction *)this_06;
              (this_05->fields).originalYPosition = fVar17;
              func_?();
              pMVar18 = 
              MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__Add_BoostIconActivationEffectController_
              ;
              this_02 = (this->fields).boostIconEffects;
              if (this_02 == (List_1_BoostIconActivationEffectController_ *)0x0) break;
              piVar19 = &(this_02->fields)._version;
              *piVar19 = *piVar19 + 1;
              uVar20 = (this_02->fields)._size;
              pBVar21 = (this_02->fields)._items;
              if (pBVar21 == (BoostIconActivationEffectController__Array *)0x0) break;
              if (uVar20 < pBVar21->max_length) {
                (this_02->fields)._size = uVar20 + 1;
                if (pBVar21->max_length <= uVar20) goto code_?;
                pBVar21->vector[uVar20] = this_05;
                func_?(pBVar21->vector + uVar20);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)this_02,(Object *)this_05,
                           pMVar18->klass->rgctx_data[0xe].method);
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
                        (this_01,*(BoostType__Enum *)((int)this_02 + 0x3c),(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (*(int *)((int)this_02 + 0x40) != 0) {
          (**(code **)(*(int *)((int)this_02 + 0x40) + 0xc))();
          return;
        }
      }
      else if (*(CanvasGroup **)((int)this_02 + 0x10) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)((int)this_02 + 0x10),1.0,(MethodInfo *)0x0);
        *(undefined4 *)((int)this_02 + 0x2c) = 1;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        *(float *)((int)this_02 + 0x30) = fVar4;
        *(undefined1 *)((int)this_02 + 0x38) = 0;
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
          uVar7 = *(undefined4 *)((int)this_02 + 0x34);
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController>__List__
            );
  (this->fields).boostIconEffects = this_00;
  func_?(&(this->fields).boostIconEffects,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

