
/* Vector3 CalculatePreviewOffset(MVWorldObjectClient) */

Vector3 * Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_CalculatePreviewOffset
                    (Vector3 *__return_storage_ptr__,SpawnRoleEditorMenu *this,
                    MVWorldObjectClient *spawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (spawnRole != (MVWorldObjectClient *)0x0) {
    fVar1 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                       (spawnRole,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_00 != (MainCameraManager *)0x0) {
      this_01 = (Camera *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           (MethodInfo *)0x0);
      if (this_01 != (Camera *)0x0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                          (this_01,(MethodInfo *)0x0);
        fVar2 = fVar2 * _UNK_? * _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        dVar3 = (double)(fVar2 * _UNK_?);
        func_?();
        fVar1 = fVar1 / (float)dVar3;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                           ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                           ((Vector3 *)&stack0xffffffdc,2.0,*pVVar4,(MethodInfo *)0x0);
        uVar5 = pVVar4->x;
        uVar6 = pVVar4->y;
        fVar2 = pVVar4->z;
        puVar7 = (undefined8 *)(*(code *)(spawnRole->klass->vtable).get_WorldPivot.method)();
        uVar8 = *(undefined4 *)(puVar7 + 1);
        uVar9 = (undefined4)((ulonglong)*puVar7 >> 0x20);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame *)0x0) {
          this_03 = (PrefabPool *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
          if (this_03 != (PrefabPool *)0x0) {
            this_04 = (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                      PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
            if (this_04 != (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)0x0) {
              s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                  PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                  PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                            (this_04,(MethodInfo *)0x0);
              pVVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                       SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                       SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                 ((Vector3 *)&stack0xffffffc4,s,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                 );
              fVar10 = pVVar4->z;
              b.y = (float)uVar6;
              b.x = (float)uVar5;
              b.z = fVar2;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffc4,*pVVar4,b,(MethodInfo *)0x0);
              auVar11._4_4_ = uVar8;
              auVar11._0_4_ = uVar9;
              auVar11._8_4_ = 0;
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc4,(Vector3)(auVar11 << 0x20),*pVVar4,
                         (MethodInfo *)0x0);
              puVar12 = &stack0xffffffd0;
              puVar13 = &stack0xffffffc4;
              puVar7 = (undefined8 *)func_?();
              fVar2 = *(float *)(puVar7 + 1);
              uVar5 = (undefined4)*puVar7;
              uVar6 = (undefined4)((ulonglong)*puVar7 >> 0x20);
              fVar14 = (float10)func_?();
              a_02.y = (float)uVar6;
              a_02.x = (float)uVar5;
              a_02.z = fVar2;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffffc4,a_02,(float)fVar14 - fVar1,
                                  (MethodInfo *)0x0);
              a.y = (float)puVar12;
              a.x = (float)puVar13;
              a.z = fVar10;
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffc4,a,*pVVar4,(MethodInfo *)0x0);
              uVar8 = pVVar4->x;
              uVar9 = pVVar4->y;
              fVar1 = pVVar4->z;
              puVar7 = (undefined8 *)(*(code *)(spawnRole->klass->vtable).get_Position.method)();
              fVar2 = *(float *)(puVar7 + 1);
              fVar10 = (float)*puVar7;
              fVar15 = (float)((ulonglong)*puVar7 >> 0x20);
              pMVar16 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                  ((PrefabPool *)spawnRole,(MethodInfo *)0x0);
              if (pMVar16 != (MVPointLightObject *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                   ((Vector3 *)&stack0xffffffc4,(Transform *)pMVar16,
                                    (MethodInfo *)0x0);
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   ((Vector3 *)&stack0xffffffc4,*pVVar4,3.0,(MethodInfo *)0x0);
                a_00.y = fVar15;
                a_00.x = fVar10;
                a_00.z = fVar2;
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                   ((Vector3 *)&stack0xffffffc4,a_00,*pVVar4,(MethodInfo *)0x0);
                fVar2 = pVVar4->x;
                fVar10 = pVVar4->y;
                fVar15 = pVVar4->z;
                pMVar16 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                    ((PrefabPool *)spawnRole,(MethodInfo *)0x0);
                if (pMVar16 != (MVPointLightObject *)0x0) {
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                     ((Vector3 *)&stack0xffffffc4,(Transform *)pMVar16,
                                      (MethodInfo *)0x0);
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                     ((Vector3 *)&stack0xffffffc4,*pVVar4,-1.0,(MethodInfo *)0x0);
                  a_01.y = fVar10;
                  a_01.x = fVar2;
                  a_01.z = fVar15;
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                     ((Vector3 *)&stack0xffffffc4,a_01,*pVVar4,(MethodInfo *)0x0);
                  b_00.y = (float)uVar9;
                  b_00.x = (float)uVar8;
                  b_00.z = fVar1;
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffc4,*pVVar4,b_00,(MethodInfo *)0x0);
                  return (Vector3 *)&stack0xffffffc4;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar17)();
  return pVVar4;
}


/* Int32 CalculateSpawnRoleCost() */

int32_t Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_CalculateSpawnRoleCost
                  (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  iVar8 = 0;
  iStack_9 = 0;
  this_00 = (this->fields).spawnRoleAttributeSettingsManager;
  puStack_10 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (this_00 != (AttributeSettingsManager *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pSVar11 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                          (this_00,(MethodInfo *)0x0);
    if (pSVar11 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    bVar12 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pSVar11->klass->_1).naturalAligment < bVar12) ||
       ((pSVar11->klass->_1).typeHierarchy[bVar12 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)0x0;
    if (bVar13) {
      this_01 = pSVar11;
    }
    if (this_01 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffac,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar14->dictionary;
      auStack_6._4_4_ = pDVar14->next;
      auStack_6._8_4_ = pDVar14->stamp;
      auStack_6._12_4_ = (pDVar14->current).key;
      auStack_6._16_4_ = (pDVar14->current).value;
      uStack_1 = 0;
      while( true ) {
        cVar15 = func_?();
        if (cVar15 == '\0') {
          *puStack_10 = 0x67;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return iVar8;
        }
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                              );
        auStack_6._0_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
        ;
        iVar16 = func_?();
        if (iVar16 == 0) goto code_?;
        iVar16 = func_?();
        if ((iVar16 == 0) || (piVar17 = (int *)func_?(), piVar17 == (int *)0x0)) break;
        iStack_18 = *piVar17;
        uVar19 = 0;
        if (*(ushort *)(iStack_18 + 0xb6) != 0) {
          do {
            if (*(IAttributeSetting__Class **)(*(int *)(iStack_18 + 0x58) + (uint)uVar19 * 8) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar20 = (undefined4 *)
                        (iStack_18 + 0xc0 +
                        *(int *)(*(int *)(iStack_18 + 0x58) + 4 + (uint)uVar19 * 8) * 8);
              goto code_?;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(ushort *)(iStack_18 + 0xb6));
        }
        puVar20 = (undefined4 *)func_?();
code_?:
        iVar16 = (*(code *)*puVar20)();
        iVar8 = iStack_9 + iVar16;
        iStack_9 = iVar8;
      }
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  iVar8 = (*pcVar21)();
  return iVar8;
}


/* Void ChangeTeamImageColor(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_ChangeTeamImageColor
               (SpawnRoleEditorMenu *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    pIVar1 = (this->fields).TeamImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = 1.12104e-44;
    break;
  case MVTeam__Enum_Red:
    pIVar1 = (this->fields).TeamImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = 1.26117e-44;
    break;
  case MVTeam__Enum_Green:
    pIVar1 = (this->fields).TeamImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = 1.54143e-44;
    break;
  case MVTeam__Enum_Yellow:
    pIVar1 = (this->fields).TeamImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = 1.4013e-44;
    break;
  default:
    pIVar1 = (this->fields).TeamImage;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = 7.9874e-44;
  }
  pCVar3 = Styles::Styles_GetColor((Color *)&puStack_4,(ColorStyle__Enum)fVar2,(MethodInfo *)0x0);
  if (pIVar1 == (Image *)0x0) {
    pIStack_5 = (Il2CppMethodPointer)0x0;
    func_?();
    puStack_4 = &stack0xfffffffc;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pSVar6 = pSStack_7;
    pVVar8 = SpawnRoleEditorMenu_CalculatePreviewOffset
                       ((Vector3 *)&stack0xffffffe0,pSStack_7,
                        (MVWorldObjectClient *)(pSStack_7->fields).spawnRole,(MethodInfo *)0x0);
    fVar2 = pVVar8->z;
    this_00 = (PrefabPool *)(pSVar6->fields).spawnRole;
    if ((this_00 != (PrefabPool *)0x0) &&
       (this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0),
       this_01 != (MVPointLightObject *)0x0)) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)&stack0xffffffcc,(Transform *)this_01,(MethodInfo *)0x0);
      uVar9._0_4_ = pVVar8->x;
      uVar9._4_4_ = pVVar8->y;
      fVar10 = pVVar8->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      fVar11 = 1.0;
      a.z = fVar10;
      a.x = (float)uVar9;
      a.y = SUB84(uVar9,4);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                ((Vector3 *)&stack0xffffffcc,a,1.0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        pMVar12 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
        if (pMVar12 != (MVCameraBase *)0x0) {
          pIStack_5 = (Il2CppMethodPointer)fVar11;
          puStack_4 = (undefined *)fVar10;
          pSStack_7 = (SpawnRoleEditorMenu *)fVar2;
          (*(code *)(pMVar12->klass->vtable).FocusOnObject.method)();
          return;
        }
      }
    }
    func_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pIStack_5 = (pIVar1->klass->vtable).get_raycastTarget.methodPtr;
  puStack_4 = (undefined *)pCVar3->a;
  (*(code *)(pIVar1->klass->vtable).set_color.method)();
  return;
}


/* Void FocusCameraOnSpawnRole() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_FocusCameraOnSpawnRole
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SpawnRoleEditorMenu_CalculatePreviewOffset
            ((Vector3 *)&stack0xfffffff0,this,(MVWorldObjectClient *)(this->fields).spawnRole,
             (MethodInfo *)0x0);
  this_00 = (PrefabPool *)(this->fields).spawnRole;
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)&stack0xffffffdc,(Transform *)this_01,(MethodInfo *)0x0);
      a = *pVVar1;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffdc,a,1.0,(MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        pMVar3 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_02,(MethodInfo *)0x0);
        if (pMVar3 != (MVCameraBase *)0x0) {
          pIStack4 = (pMVar3->klass->vtable).Activate.methodPtr;
          puStack5 = (undefined *)fVar2;
          (*(code *)(pMVar3->klass->vtable).FocusOnObject.method)();
          return;
        }
      }
    }
  }
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
               (SpawnRoleEditorMenu *this,int32_t spawnRoleWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleWoId = spawnRoleWoId;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVAvatarSpawnRoleCreator *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,spawnRoleWoId,(MethodInfo *)0x0);
    pMVar2 = pMVar1;
    if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
      bVar3 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
         ((MVAvatarSpawnRoleCreator__Class *)(pMVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar2 = (MVAvatarSpawnRoleCreator *)0x0;
      if (bVar4) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVAvatarSpawnRoleCreator *)0x0) {
        func_?(pMVar1);
        goto code_?;
      }
    }
    (this->fields).spawnRole = pMVar2;
    if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
      pAVar5 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (pMVar2,(MethodInfo *)0x0);
      (this->fields).spawnRoleAttributeSettingsManager = pAVar5;
      this_00 = (PrefabPool *)(this->fields).spawnRole;
      if (this_00 != (PrefabPool *)0x0) {
        t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)t,1,(MethodInfo *)0x0);
        SpawnRoleEditorMenu_FocusCameraOnSpawnRole(this,(MethodInfo *)0x0);
        pMVar2 = (this->fields).spawnRole;
        if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
          team = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                           (pMVar2,(MethodInfo *)0x0);
          SpawnRoleEditorMenu_ChangeTeamImageColor(this,team,(MethodInfo *)0x0);
          SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
          pMVar2 = (this->fields).spawnRole;
          pSVar6 = (this->fields).tierEditorMenu;
          if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
            MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(pMVar2,(MethodInfo *)0x0);
            this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_02,(Object *)this,
                       MethodInfo__SpawnRoleEditorMenu__OnChangeTier_MV__Common__GamePassTier_,
                       MethodInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>__UnityAction_System__Object__void__
                      );
            if (pSVar6 != (SpawnRoleTierEditorMenu *)0x0) {
              SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_Initialize
                        (pSVar6,(GamePassTier__Enum)this_02,(int32_t)this,
                         (UnityAction_1_MV_Common_GamePassTier_ *)this_02,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              skillCost = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
              pTVar7 = (this->fields).spawnRoleCostText;
              func_?();
              if (pTVar7 != (Text *)0x0) {
                (*(code *)(pTVar7->klass->vtable).set_text.method)();
                pTVar7 = (this->fields).spawnRoleCostText;
                SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                          ((Color *)&stack0xffffffec,skillCost,(MethodInfo *)0x0);
                if (pTVar7 != (Text *)0x0) {
                  (*(code *)(pTVar7->klass->vtable).set_color.method)();
                  pSVar6 = (this->fields).tierEditorMenu;
                  if (pSVar6 != (SpawnRoleTierEditorMenu *)0x0) {
                    SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                              (pSVar6,0xADDR,(MethodInfo *)0x0);
                    pSVar8 = (this->fields).skillsEditorMenu;
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?();
                    }
                    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                      ((Object_1 *)pSVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar9 != 0) {
                      pSVar8 = (this->fields).skillsEditorMenu;
                      if (pSVar8 == (SpawnRoleSkillsEditor *)0x0) goto code_?;
                      SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleCost
                                (pSVar8,0xADDR,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnChangeTeam(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnChangeTeam
               (SpawnRoleEditorMenu *this,MVTeam__Enum newTeam,MethodInfo *method)

{
  this_00 = (this->fields).spawnRole;
  if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Team(this_00,newTeam,(MethodInfo *)0x0);
    SpawnRoleEditorMenu_ChangeTeamImageColor(this,newTeam,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnChangeTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnChangeTier
               (SpawnRoleEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (this->fields).spawnRole;
  if (this_01 != (MVAvatarSpawnRoleCreator *)0x0) {
    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Tier(this_01,newTier,(MethodInfo *)0x0);
    x = (this->fields).skillsEditorMenu;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this->fields).skillsEditorMenu != (SpawnRoleSkillsEditor *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      index = 0;
      *(char *)(in_stack_2 + 0x2c) = (char)in_stack_3;
      this_00 = *(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)
                 (in_stack_2 + 0x30);
      while (this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                           );
        if ((int)pOVar4 <= index) {
          return;
        }
        if ((*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x30) ==
             (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
           (this_02 = (SkillSettingBase *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                                  (in_stack_2 + 0x30),index,
                                 MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                                ), this_02 == (SkillSettingBase *)0x0)) break;
        SkillSettingBase::SkillSettingBase_UpdateSpawnRoleTier
                  (this_02,in_stack_3,(MethodInfo *)0x0);
        index = index + 1;
        this_00 = *(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)
                   (in_stack_2 + 0x30);
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnDestroy
               (SpawnRoleEditorMenu *this,MethodInfo *method)

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
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar2,0,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_01 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,_UNK_?,(MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)t,0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnDisable
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEnterPlayMode() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnEnterPlayMode
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 == (GameEventManager *)0x0) {
code_?:
    func_?(0);
    pMVar2 = extraout_ECX;
  }
  else {
    unaff_EDI = (MVLocalPlayerBuilder__Class *)(pGVar1->fields).AvatarCommandsBuildMode;
    pMVar3 = (this->fields).spawnRole;
    if (pMVar3 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    puVar4 = (undefined8 *)
             (*(code *)(pMVar3->klass->vtable).get_Position.method)
                       (&uStack_5,pMVar3,(pMVar3->klass->vtable).set_Position.methodPtr);
    pMVar3 = (this->fields).spawnRole;
    MStack_6._4_8_ = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    if (pMVar3 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    pQVar8 = (Quaternion *)
              (*(code *)(pMVar3->klass->vtable).get_Rotation.method)
                        (auStack_9,pMVar3,(pMVar3->klass->vtable).set_Rotation.methodPtr);
    if (unaff_EDI == (MVLocalPlayerBuilder__Class *)0x0) goto code_?;
    position.z = fVar7;
    position.x = (float)MStack_6.selectedSpawnRoleCreator;
    position.y = (float)MStack_6.previousSpawnRoleId;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
              ((GameEventManager_AvatarCommandsBuildModeManager *)unaff_EDI,position,*pQVar8,
               (MethodInfo *)0x0);
    pMVar2 = (MVLocalPlayerBuilder *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar10 = (MVLocalPlayer__Class *)pMVar2->klass;
    bStack_11 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar10->_1).naturalAligment < bStack_11) ||
       (cStack_12 = '\x01',
       (pMVar10->_1).typeHierarchy[bStack_11 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      cStack_12 = '\0';
    }
    pMVar13 = (MVLocalPlayerBuilder *)0x0;
    if (cStack_12 != '\0') {
      pMVar13 = pMVar2;
    }
    if (pMVar13 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if (((pMVar10->_1).naturalAligment < bStack_11) ||
       ((pMVar10->_1).typeHierarchy[bStack_11 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder))
    {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    pMVar13 = (MVLocalPlayerBuilder *)0x0;
    if (bVar14) {
      pMVar13 = pMVar2;
    }
    if (pMVar13 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar15 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
                        (&MStack_6,pMVar13,(MethodInfo *)0x0);
    uVar16 = pMVar15->selectedTeam;
    MStack_6.previousSpawnRoleId = pMVar15->previousSpawnRoleId;
    uStack_5 = CONCAT44((this->fields).spawnRoleWoId,uVar16);
    pMVar2 = (MVLocalPlayerBuilder *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar10 = (MVLocalPlayer__Class *)pMVar2->klass;
    bStack_17 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar10->_1).naturalAligment < bStack_17) ||
       (cStack_12 = '\x01',
       (pMVar10->_1).typeHierarchy[bStack_17 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      cStack_12 = '\0';
    }
    pMVar13 = (MVLocalPlayerBuilder *)0x0;
    if (cStack_12 != '\0') {
      pMVar13 = pMVar2;
    }
    if (pMVar13 != (MVLocalPlayerBuilder *)0x0) {
      if (((pMVar10->_1).naturalAligment < bStack_17) ||
         ((pMVar10->_1).typeHierarchy[bStack_17 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)
         ) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      pMVar13 = (MVLocalPlayerBuilder *)0x0;
      if (bVar14) {
        pMVar13 = pMVar2;
      }
      if (pMVar13 != (MVLocalPlayerBuilder *)0x0) {
        value.previousSpawnRoleId = MStack_6.previousSpawnRoleId;
        value.selectedTeam = (undefined4)uStack_5;
        value.selectedSpawnRoleCreator = uStack_5._4_4_;
        MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
                  (pMVar13,value,(MethodInfo *)0x0);
        pMVar3 = (this->fields).spawnRole;
        if (pMVar3 != (MVAvatarSpawnRoleCreator *)0x0) {
          GVar18 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                             (pMVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          pPVar19 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar19 != (PlayerPlanetData *)0x0) {
            if ((pPVar19->fields).gamePassTier < (byte)GVar18) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              unaff_EDI = (MVLocalPlayerBuilder__Class *)
                          MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
              pMVar3 = (this->fields).spawnRole;
              if (pMVar3 != (MVAvatarSpawnRoleCreator *)0x0) {
                GVar18 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                   (pMVar3,(MethodInfo *)0x0);
                MStack_6.previousSpawnRoleId._0_1_ = (char)GVar18;
                if (unaff_EDI != (MVLocalPlayerBuilder__Class *)0x0) {
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                            ((MVNetworkGame_OperationRequests *)unaff_EDI,
                             MStack_6.previousSpawnRoleId,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            else {
code_?:
              this_00 = (PrefabPool *)(this->fields).spawnRole;
              (this->fields).timeUntilEnterPlayMode = 1.0;
              if (this_00 != (PrefabPool *)0x0) {
                t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                  func_?(TypeInfo__SharedCubeFunctions);
                }
                SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                          ((Transform *)t,0,(MethodInfo *)0x0);
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if (((pGVar1 != (GameEventManager *)0x0) &&
                  (pGVar20 = (pGVar1->fields).GameState,
                  pGVar20 != (GameEventManager_GameStateManager *)0x0)) &&
                 (this_01 = (JumpState_OnWallJumpDelegate *)(pGVar20->fields).OnDisableLobbyState,
                 this_01 != (JumpState_OnWallJumpDelegate *)0x0)) {
                JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                          (this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  func_?(pMVar2,unaff_EDI);
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2,unaff_EDI);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnLooksEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnLooksEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleEditorMenu___OnLooksEditPressed_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).looksEditorMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleLooksEditorMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleLooksEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleLooksEditorMenu>_SpawnRoleLooksEditorMenu_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pSVar1;
    iVar2 = (this->fields).spawnRoleWoId;
    this_00 = (this->fields).spawnRole;
    if (pSVar1 != (SpawnRoleLooksEditorMenu *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      (pSVar1->fields).spawnRoleId = iVar2;
      (pSVar1->fields).spawnRole = this_00;
      if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
        pGVar3 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                           (this_00,(MethodInfo *)0x0);
        SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_SetupPreviewImage
                  (pSVar1,pGVar3,(MethodInfo *)0x0);
        pAVar4 = (this_00->fields).OnBodyUpdate;
        object = TypeInfo__System__Action;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)pSVar1,
                   MethodInfo__SpawnRoleLooksEditorMenu__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0);
        pAVar6 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
        pAVar4 = (Action *)0x0;
        if (pAVar6 == (Action *)0x0) {
code_?:
          (this_00->fields).OnBodyUpdate = pAVar4;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)object,
                     MethodInfo__SpawnRoleEditorMenu___OnLooksEditPressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar3,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar6;
        }
        if (pAVar4 != (Action *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSkillsEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnSkillsEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillsEditorMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleSkillsEditor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleSkillsEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillsEditor>_SpawnRoleSkillsEditor_
                     );
  (this->fields).skillsEditorMenu = pSVar1;
  SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  this_00 = (this->fields).spawnRole;
  if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
    GVar2 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_00,(MethodInfo *)0x0);
    GStack_3 = CONCAT31(GStack_3._1_3_,(char)GVar2);
    spawnRoleAttributeSettingsManager = (this->fields).spawnRoleAttributeSettingsManager;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,MethodInfo__SpawnRoleEditorMenu__UpdateSpawnRoleCost__,
               (MethodInfo *)0x0);
    if (pSVar1 != (SpawnRoleSkillsEditor *)0x0) {
      SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_Initialize
                (pSVar1,0,GStack_3,spawnRoleAttributeSettingsManager,(UnityAction *)pUVar4,
                 (MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__SpawnRoleEditorMenu___OnSkillsEditPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTeamEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnTeamEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleEditorMenu___OnTeamEditPressed_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).teamEditorPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      SpawnRoleTeamEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTeamEditor>_SpawnRoleTeamEditor_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    this_00 = (this->fields).spawnRole;
    if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
      MVar2 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_00,(MethodInfo *)0x0)
      ;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(MVar2);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__SpawnRoleEditorMenu__OnChangeTeam_MV__WorldObject__MVTeam_,
                 MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>__UnityAction_System__Object__void__
                );
      if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
        SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
                  ((SpawnRoleTeamEditor *)pXVar1,MVTeam__Enum_Blue,
                   (UnityAction_1_MV_WorldObject_MVTeam_ *)pUVar3,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__SpawnRoleEditorMenu___OnTeamEditPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_Update
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
  bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,1,(MethodInfo *)0x0);
    SpawnRoleEditorMenu_FocusCameraOnSpawnRole(this,(MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_00 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar3,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (this_00 != (PrefabPool *)0x0) {
      t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)t,1,(MethodInfo *)0x0);
    }
  }
  if (_UNK_? < (this->fields).timeUntilEnterPlayMode) {
    fVar4 = 0.0;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timeUntilEnterPlayMode = fVar4 - fVar5;
    if (fVar4 - fVar5 <= 0.0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__SpawnRoleEditorMenu->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
        pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar7,(Object *)0x0,
                   MethodInfo__SpawnRoleEditorMenu___Update_m__1_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>__EventFunction_System__Object__void__
                  );
        TypeInfo__SpawnRoleEditorMenu->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IEditModeController_ *)pUVar7;
      }
      pEVar8 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__SpawnRoleEditorMenu->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,pEVar8,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                );
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar9 == (MVWorldObject *)0x0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__SpawnRoleEditorMenu->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar7,(Object *)0x0,
                   MethodInfo__SpawnRoleEditorMenu___Update_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__SpawnRoleEditorMenu->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar7;
      }
      pEVar8 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__SpawnRoleEditorMenu->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,pEVar8,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateSpawnRoleCost() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_UpdateSpawnRoleCost
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iStack_1 = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  pTVar2 = (this->fields).spawnRoleCostText;
  uVar3 = func_?(&iStack_1,0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,uVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this->fields).spawnRoleCostText;
    pCVar4 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                       (&CStack_5,iStack_1,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_color.method)
                (pTVar2,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                 (pTVar2->klass->vtable).get_raycastTarget.methodPtr);
      this_00 = (this->fields).tierEditorMenu;
      if (this_00 != (SpawnRoleTierEditorMenu *)0x0) {
        SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                  (this_00,iStack_1,(MethodInfo *)0x0);
        pSVar6 = (this->fields).skillsEditorMenu;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pSVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          pSVar6 = (this->fields).skillsEditorMenu;
          if (pSVar6 == (SpawnRoleSkillsEditor *)0x0) goto code_?;
          SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_UpdateSpawnRoleCost
                    (pSVar6,iStack_1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnSkillsEditPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu__OnSkillsEditPressed_m__0
               (SpawnRoleEditorMenu *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skillsEditorMenu;
  if (this_00 != (SpawnRoleSkillsEditor *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,0,0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Update>m__1(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu__Update_m__1
               (IEditModeController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IEditModeController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Update>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu__Update_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

