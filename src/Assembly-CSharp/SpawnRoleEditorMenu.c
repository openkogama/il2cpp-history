
/* Vector3 CalculatePreviewOffset(MVWorldObjectClient) */

Vector3 * Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_CalculatePreviewOffset
                    (Vector3 *__return_storage_ptr__,SpawnRoleEditorMenu *this,
                    MVWorldObjectClient *spawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  if (spawnRole != (MVWorldObjectClient *)0x0) {
    fStack_1 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                         (spawnRole,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar2 != (MainCameraManager *)0x0) &&
       (this_00 = (pMVar2->fields).mainCamera, this_00 != (Camera *)0x0)) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                         (this_00,(MethodInfo *)0x0);
      dVar4 = (double)(fVar3 * _UNK_? * _UNK_? * _UNK_?);
      uStack_5._0_4_ = (Vector3__Class **)&UNK_?;
      func_?();
      fStack_6 = fStack_1 / (float)dVar4;
      if (cRam_? == '\0') {
        uStack_5._0_4_ = &TypeInfo__UnityEngine__Vector3;
        func_?();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_8._0_4_ = (pVVar7->upVector).x;
      uStack_8._4_4_ = (pVVar7->upVector).y;
      fStack_9 = (pVVar7->upVector).z;
      fVar3 = (float)uStack_8 * _UNK_?;
      fStack_1 = uStack_8._4_4_ * _UNK_?;
      fStack_10 = fStack_9 * _UNK_?;
      uStack_5 = CONCAT44(uStack_5._4_4_,(spawnRole->klass->vtable).get_WorldPivot.method);
      puVar11 = (undefined8 *)(*(spawnRole->klass->vtable).get_WorldPivot.methodPtr)();
      uStack_12 = *puVar11;
      fStack_13 = *(float *)(puVar11 + 1);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if ((pMVar14 != (MVLocalPlayer *)0x0) &&
           (pSVar15 = (pMVar14->fields).spawnRoleDataMediator, pSVar15 != (SpawnRoleDataMediator *)0x0
           )) {
          pVVar16 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                    SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                              ((Vector3 *)&stack0xffffffb8,
                               (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar15->fields).position
                               ,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                              );
          uVar17 = pVVar16->x;
          uVar18 = pVVar16->y;
          fStack_9 = pVVar16->z;
          fStack_19 = fStack_13 - (fStack_9 + fStack_10);
          uStack_8._0_4_ = pVVar16->x;
          uStack_8._4_4_ = pVVar16->y;
          uStack_5 = CONCAT44(uStack_12._4_4_ - ((float)uVar18 + fStack_1),
                               (float)uStack_12 - ((float)uVar17 + fVar3));
          fStack_13 = fStack_19;
          puVar11 = (undefined8 *)func_?(&stack0xffffffb8);
          uStack_12 = *puVar11;
          fStack_13 = *(float *)(puVar11 + 1);
          fVar20 = (float10)func_?(&uStack_5,0);
          fVar3 = (float)(fVar20 - (float10)fStack_6);
          fStack_1 = (float)uStack_8 + (float)uStack_12 * fVar3;
          fStack_21 = uStack_8._4_4_ + uStack_12._4_4_ * fVar3;
          fStack_22 = fStack_9 + fStack_13 * fVar3;
          puVar11 = (undefined8 *)
                    (*(spawnRole->klass->vtable).get_Position.methodPtr)
                              (&stack0xffffffb8,spawnRole,
                               (spawnRole->klass->vtable).get_Position.method);
          uStack_8 = *puVar11;
          fStack_9 = *(float *)(puVar11 + 1);
          pTVar23 = (spawnRole->fields).transform;
          if (pTVar23 != (Transform *)0x0) {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&stack0xffffffb8,pTVar23,(MethodInfo *)0x0);
            uStack_12._0_4_ = pVVar16->x;
            uStack_12._4_4_ = pVVar16->y;
            fStack_13 = pVVar16->z;
            fVar3 = (float)uStack_8 + (float)uStack_12 * _UNK_?;
            fStack_6 = uStack_8._4_4_ + uStack_12._4_4_ * _UNK_?;
            fStack_10 = fStack_9 + fStack_13 * _UNK_?;
            pTVar23 = (spawnRole->fields).transform;
            if (pTVar23 != (Transform *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xffffffb8,pTVar23,(MethodInfo *)0x0);
              uVar24 = pVVar16->x;
              uVar25 = pVVar16->y;
              fVar26 = (float)uVar25 * _UNK_?;
              fVar27 = pVVar16->z * _UNK_?;
              __return_storage_ptr__->x = ((float)uVar24 * _UNK_? + fVar3) - fStack_1;
              __return_storage_ptr__->y = (fVar26 + fStack_6) - fStack_21;
              __return_storage_ptr__->z = (fVar27 + fStack_10) - fStack_22;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar28 = (code *)swi(3);
  pVVar16 = (Vector3 *)(*pcVar28)();
  return pVVar16;
}


/* Int32 CalculateSpawnRoleCost() */

int32_t Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_CalculateSpawnRoleCost
                  (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOVar6 = (Object *)0x0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  pOStack_8 = (Object *)0x0;
  this_00 = (this->fields).spawnRoleAttributeSettingsManager;
  if (this_00 != (AttributeSettingsManager *)0x0) {
    pKVar9 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_00,(MethodInfo *)0x0);
    if (pKVar9 == (KogamaSettingWrapperBase *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (((pKVar9->klass->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar9->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
    }
    else {
      method_00 = pKVar9[1].klass;
      if (method_00 != (KogamaSettingWrapperBase__Class *)0x0) {
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           (&DStack_11,(Dictionary_2_System_Object_System_Object_ *)method_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                           );
        pDStack_12 = &DStack_7;
        uStack_13 = 0;
        DStack_7._dictionary = pDVar10->_dictionary;
        DStack_7._version = pDVar10->_version;
        DStack_7._index = pDVar10->_index;
        DStack_7._current.key = (pDVar10->_current).key;
        DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
        uStack_1 = 1;
        while( true ) {
          bVar14 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                            );
          if (bVar14 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                       ,(MethodInfo *)method_00);
            *unaff_FS_OFFSET = uStack_3;
            return (int32_t)pOVar6;
          }
          pOVar6 = DStack_7._current.value;
          this = (SpawnRoleEditorMenu *)
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          if (DStack_7._current.value == (Object *)0x0) break;
          iVar15 = func_?(DStack_7._current.value,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 );
          if (iVar15 == 0) goto code_?;
          this = (SpawnRoleEditorMenu *)
                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          piStack_16 = (int *)func_?(pOVar6,
                                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                             );
          if (piStack_16 == (int *)0x0) goto code_?;
          iVar15 = *piStack_16;
          uVar17 = 0;
          uStack_18 = 0;
          uVar19 = *(ushort *)(iVar15 + 0xb2);
          uStack_20 = (uint)uVar19;
          if (uVar19 != 0) {
            do {
              if (*(IAttributeSetting__Class **)(*(int *)(iVar15 + 0x58) + (uint)uVar17 * 8) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 ) {
                puVar21 = (undefined4 *)
                         (iVar15 + 0xbc + *(int *)(*(int *)(iVar15 + 0x58) + 4 + (uint)uVar17 * 8) * 8
                         );
                goto code_?;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar19);
          }
          puVar21 = (undefined4 *)
                   func_?(piStack_16,
                                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                   ,0);
code_?:
          iVar15 = (*(code *)*puVar21)(piStack_16,puVar21[1]);
          pOVar6 = (Object *)((int)&pOStack_8->klass + iVar15);
          pOStack_8 = pOVar6;
        }
      }
    }
  }
  func_?();
code_?:
  uVar22 = func_?(pOVar6,this);
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  iVar24 = (*pcVar23)();
  return iVar24;
}


/* Void ChangeTeamImageColor(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_ChangeTeamImageColor
               (SpawnRoleEditorMenu *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    pIVar1 = (this->fields).TeamImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    pIVar1 = (this->fields).TeamImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    pIVar1 = (this->fields).TeamImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    pIVar1 = (this->fields).TeamImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    pIVar1 = (this->fields).TeamImage;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_OffGray;
  }
  pCVar2 = Styles::Styles_GetColor(&CStack_3,colorStyle,(MethodInfo *)0x0);
  if (pIVar1 == (Image *)0x0) {
    CStack_3.g = (float)&UNK_?;
    uVar4 = func_?();
    out(0x58,(uint *)uVar4);
    in_AF = 9 < ((byte)uVar4 & 0xf) | in_AF;
    uVar5 = CONCAT31((int3)((ulonglong)uVar4 >> 8),(byte)uVar4 + in_AF * -6) & 0xffffff0f;
    puVar6 = (uint *)CONCAT22((short)(uVar5 >> 0x10),
                              CONCAT11((char)((ulonglong)uVar4 >> 8) - in_AF,(char)uVar5));
    if (0 < (int)((uint)((ulonglong)uVar4 >> 0x20) ^ *(uint *)uVar4 ^ *puVar6 ^ *puVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  CStack_3.r = pCVar2->a;
  CStack_3.g = (float)(pIVar1->klass->vtable).set_color.method;
  (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
  return;
}


/* Void FocusCameraOnSpawnRole() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_FocusCameraOnSpawnRole
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  SpawnRoleEditorMenu_CalculatePreviewOffset
            (&VStack_1,this,(MVWorldObjectClient *)(this->fields).spawnRole,(MethodInfo *)0x0);
  pMVar2 = (this->fields).spawnRole;
  if ((pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_00 = (pMVar2->fields)._._._.transform, this_00 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    VStack_1.y = pVVar3->x;
    VStack_1.z = pVVar3->y;
    fVar4 = pVVar3->z;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      pMVar5 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0);
      if (pMVar5 != (MVCameraBase *)0x0) {
        VStack_1.y = (float)(pMVar5->klass->vtable).FocusOnObject.method;
        VStack_1.x = fVar4;
        (*(pMVar5->klass->vtable).FocusOnObject.methodPtr)
                  (pMVar5,(this->fields).spawnRole,0x40000000);
        return;
      }
    }
  }
  VStack_1.y = (float)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
               (SpawnRoleEditorMenu *this,int32_t spawnRoleWoId,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&MethodInfo__SpawnRoleEditorMenu__OnChangeTier_MV__Common__GamePassTier_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    cRam_? = '\x01';
  }
  this_05 = (MVAvatarSpawnRoleCreator__Class *)spawnRoleWoId;
  (this_02->fields).spawnRoleWoId = spawnRoleWoId;
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 != (MVWorldObjectClientManager *)0x0) {
    CStack_1.r = (float)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (this_03,(int32_t)this_05,(MethodInfo *)0x0);
    this_05 = TypeInfo__MVAvatarSpawnRoleCreator;
    if ((MVAvatarSpawnRoleCreator *)CStack_1.r == (MVAvatarSpawnRoleCreator *)0x0) {
      (this_02->fields).spawnRole = (MVAvatarSpawnRoleCreator *)0x0;
    }
    else {
      if (((((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
      (this_02->fields).spawnRole = (MVAvatarSpawnRoleCreator *)CStack_1.r;
      this_05 = TypeInfo__MVAvatarSpawnRoleCreator;
      if (((((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
    }
    func_?(&(this_02->fields).spawnRole);
    pMVar2 = (this_02->fields).spawnRole;
    if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
      pAVar3 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                         (pMVar2,(MethodInfo *)0x0);
      (this_02->fields).spawnRoleAttributeSettingsManager = pAVar3;
      func_?(&(this_02->fields).spawnRoleAttributeSettingsManager,pAVar3);
      pMVar2 = (this_02->fields).spawnRole;
      if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
        this_05 = (MVAvatarSpawnRoleCreator__Class *)(pMVar2->fields)._._._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)this_05,1,(MethodInfo *)0x0);
        SpawnRoleEditorMenu_FocusCameraOnSpawnRole(this_02,(MethodInfo *)0x0);
        pMVar2 = (this_02->fields).spawnRole;
        if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
          team = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                           (pMVar2,(MethodInfo *)0x0);
          SpawnRoleEditorMenu_ChangeTeamImageColor(this_02,team,(MethodInfo *)0x0);
          spawnRoleWoId = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this_02,(MethodInfo *)0x0);
          pMVar2 = (this_02->fields).spawnRole;
          this_05 = (MVAvatarSpawnRoleCreator__Class *)(this_02->fields).tierEditorMenu;
          if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
            GVar4 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                              (pMVar2,(MethodInfo *)0x0);
            this = (SpawnRoleEditorMenu *)CONCAT13((char)GVar4,this._0_3_);
            this_04 = (Il2CppClass *)
                      func_?(
                                     TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>
                                     );
            if ((this_04 != (Il2CppClass *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
                UnityAction_1_System_ByteEnum___ctor
                          ((UnityAction_1_System_ByteEnum_ *)this_04,(Object *)this_02,
                           MethodInfo__SpawnRoleEditorMenu__OnChangeTier_MV__Common__GamePassTier_,
                           (MethodInfo *)0x0), this_05 != (MVAvatarSpawnRoleCreator__Class *)0x0)) {
              (this_05->_0).castClass = this_04;
              func_?(&(this_05->_0).castClass,this_04);
              pTVar5 = (Text *)(this_05->_0).namespaze;
              (this_05->_0).this_arg.attrs = (undefined2)spawnRoleWoId;
              (this_05->_0).this_arg.type = spawnRoleWoId._2_1_;
              (this_05->_0).this_arg.field_0x7 = spawnRoleWoId._3_1_;
              *(byte *)&(this_05->_0).element_class = this._3_1_;
              this = (SpawnRoleEditorMenu *)(uint)this._3_1_;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&this,(MethodInfo *)0x0);
              if (pTVar5 != (Text *)0x0) {
                (*(pTVar5->klass->vtable).set_text.methodPtr)
                          (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method);
                newspawnRoleCost._0_2_ = (this_05->_0).this_arg.attrs;
                newspawnRoleCost._2_1_ = (this_05->_0).this_arg.type;
                newspawnRoleCost._3_1_ = (this_05->_0).this_arg.field_0x7;
                SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                          ((SpawnRoleTierEditorMenu *)this_05,newspawnRoleCost,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Object);
                  cRam_? = '\x01';
                }
                this = (SpawnRoleEditorMenu *)
                       SpawnRoleEditorMenu_CalculateSpawnRoleCost(this_02,(MethodInfo *)0x0);
                pTVar5 = (this_02->fields).spawnRoleCostText;
                pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&this,(MethodInfo *)0x0);
                this_05 = (MVAvatarSpawnRoleCreator__Class *)0x0;
                if (pTVar5 != (Text *)0x0) {
                  (*(pTVar5->klass->vtable).set_text.methodPtr)
                            (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method);
                  this_05 = (MVAvatarSpawnRoleCreator__Class *)(this_02->fields).spawnRoleCostText;
                  pCVar7 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                                      (&CStack_1,(int32_t)this,(MethodInfo *)0x0);
                  if (this_05 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                    pTVar8 = (Transform__Class *)(this_05->_0).image;
                    (*(code *)pTVar8[1]._1.static_fields_size)
                              (this_05,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                               pTVar8[1]._1.thread_static_fields_size);
                    this_00 = (this_02->fields).tierEditorMenu;
                    if (this_00 != (SpawnRoleTierEditorMenu *)0x0) {
                      SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                                (this_00,(int32_t)this,(MethodInfo *)0x0);
                      x = (this_02->fields).skillsEditorMenu;
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality
                                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                      pSVar10 = this;
                      if (bVar9 == 0) {
                        return;
                      }
                      this_05 = (MVAvatarSpawnRoleCreator__Class *)
                                (this_02->fields).skillsEditorMenu;
                      if (this_05 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                        if (cRam_? == '\0') {
                          func_?(&
                                          MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                                         );
                          func_?(&
                                          MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                                         );
                          cRam_? = '\x01';
                        }
                        pIVar11 = (this_05->_0).generic_class;
                        index = 0;
                        (this_05->_0).declaringType = (Il2CppClass *)pSVar10;
                        while (pIVar11 != (Il2CppGenericClass *)0x0) {
                          if ((int)pIVar11->cached_class <= index) {
                            return;
                          }
                          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)(this_05->_0).generic_class;
                          if ((this_01 ==
                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) || (RVar12 = mscorlib.dll::System::Collections::Generic::
                                                 List`1[System::Text::RegularExpressions::
                                                 RegexCharClass+SingleRange]::
                                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                           (this_01,index,
                                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                                                  ), RVar12 == (RegexCharClass_SingleRange)0x0))
                          break;
                          *(SpawnRoleEditorMenu **)((int)RVar12 + 0x4c) = pSVar10;
                          index = index + 1;
                          pIVar11 = (this_05->_0).generic_class;
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
  }
  func_?();
  CStack_1.r = (float)extraout_EDX;
code_?:
  pMVar2 = (MVAvatarSpawnRoleCreator *)CStack_1.r;
  CStack_1.r = (float)this_05;
  func_?(pMVar2);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRole;
  if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Tier(this_00,newTier,(MethodInfo *)0x0);
    pSVar1 = (this->fields).skillsEditorMenu;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pSVar1 = (this->fields).skillsEditorMenu;
    if (pSVar1 != (SpawnRoleSkillsEditor *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar3 = (pSVar1->fields).skillSettingList;
      index = 0;
      (pSVar1->fields).spawnRoleTier = (uint8_t)newTier;
      while (pLVar3 != (List_1_SkillSettingBase_ *)0x0) {
        if ((pLVar3->fields)._size <= index) {
          return;
        }
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (pSVar1->fields).skillSettingList;
        if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                              ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
        *(uint8_t *)((int)RVar4 + 0x50) = (uint8_t)newTier;
        index = index + 1;
        pLVar3 = (pSVar1->fields).skillSettingList;
      }
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
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    x = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this = (SpawnRoleEditorMenu *)
             MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((MainCameraManager *)this == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_BlueModeEnabled
                ((MainCameraManager *)this,0,(MethodInfo *)0x0);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObject *)0x0) {
      t = (Transform *)pMVar3[1].fields.ownerActorNr;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnDisable
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnterPlayMode() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnEnterPlayMode
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    unaff_EDI = (MVLocalPlayer *)(pGVar1->fields).AvatarCommandsBuildMode;
    pMVar2 = (this->fields).spawnRole;
    if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
      puVar3 = (undefined8 *)
                (*(pMVar2->klass->vtable).get_Position.methodPtr)
                          (auStack_4,pMVar2,(pMVar2->klass->vtable).get_Position.method);
      pMVar2 = (this->fields).spawnRole;
      fVar5 = *(float *)(puVar3 + 1);
      iStack_6 = (int32_t)*puVar3;
      GStack_7 = (GamePassTier__Enum)((ulonglong)*puVar3 >> 0x20);
      if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
        pQVar8 = (Quaternion *)
                  (*(pMVar2->klass->vtable).get_Rotation.methodPtr)
                            (&stack0xffffffe0,pMVar2,(pMVar2->klass->vtable).get_Rotation.method);
        if (unaff_EDI != (MVLocalPlayer *)0x0) {
          position.y = (float)GStack_7;
          position.x = (float)iStack_6;
          position.z = fVar5;
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
                    ((GameEventManager_AvatarCommandsBuildModeManager *)unaff_EDI,position,*pQVar8,
                     (MethodInfo *)0x0);
          unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (unaff_EDI != (MVLocalPlayer *)0x0) {
            pMVar9 = TypeInfo__MVLocalPlayerBuilder;
            if (((unaff_EDI->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MVLocalPlayerBuilder->_1).typeHierarchyDepth) ||
               ((unaff_EDI->klass->_1).typeHierarchy
                [(TypeInfo__MVLocalPlayerBuilder->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
            uVar10 = unaff_EDI[1].klass;
            iVar11 = unaff_EDI[1].fields._.checkpointWOID;
            iStack_6 = (this->fields).spawnRoleWoId;
            uStack_12 = uVar10;
            unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                  ((MethodInfo *)0x0);
            if (unaff_EDI != (MVLocalPlayer *)0x0) {
              pMVar9 = TypeInfo__MVLocalPlayerBuilder;
              if (((unaff_EDI->klass->_1).typeHierarchyDepth <
                   (TypeInfo__MVLocalPlayerBuilder->_1).typeHierarchyDepth) ||
                 ((unaff_EDI->klass->_1).typeHierarchy
                  [(TypeInfo__MVLocalPlayerBuilder->_1).typeHierarchyDepth - 1] !=
                  (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
              unaff_EDI[1].klass = (MVLocalPlayer__Class *)uStack_12;
              unaff_EDI[1].monitor = (MonitorData *)iStack_6;
              unaff_EDI[1].fields._.checkpointWOID = iVar11;
              pMVar2 = (this->fields).spawnRole;
              if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
                GVar13 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                   (pMVar2,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__GamePassesManager);
                  cRam_? = '\x01';
                }
                pPVar14 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                if (pPVar14 != (PlayerPlanetData *)0x0) {
                  if ((pPVar14->fields).gamePassTier < (byte)GVar13) {
                    unaff_EDI = (MVLocalPlayer *)
                                MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                    pMVar2 = (this->fields).spawnRole;
                    if (pMVar2 != (MVAvatarSpawnRoleCreator *)0x0) {
                      GVar13 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                         (pMVar2,(MethodInfo *)0x0);
                      GStack_7 = CONCAT31(GStack_7._1_3_,(char)GVar13);
                      if (unaff_EDI != (MVLocalPlayer *)0x0) {
                        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                                  ((MVNetworkGame_OperationRequests *)unaff_EDI,GStack_7,
                                   (MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                  else {
code_?:
                    (this->fields).timeUntilEnterPlayMode = 1.0;
                    if ((this->fields).spawnRole != (MVAvatarSpawnRoleCreator *)0x0) {
                      t = (((this->fields).spawnRole)->fields)._._._.transform;
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__SharedCubeFunctions);
                      }
                      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                (t,0,(MethodInfo *)0x0);
                    }
                    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                       ((MethodInfo *)0x0);
                    if (((pGVar1 != (GameEventManager *)0x0) &&
                        (pGVar15 = (pGVar1->fields).GameState,
                        pGVar15 != (GameEventManager_GameStateManager *)0x0)) &&
                       (pAVar16 = (pGVar15->fields).OnDisableLobbyState, pAVar16 != (Action *)0x0)) {
                      (*(pAVar16->fields)._._.invoke_impl)
                                ((pAVar16->fields)._._.method_code,(pAVar16->fields)._._.method);
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
  func_?();
  pMVar9 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pMVar9);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnLooksEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnLooksEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleLooksEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleLooksEditorMenu>_SpawnRoleLooksEditorMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleEditorMenu____c__DisplayClass12_0___OnLooksEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleEditorMenu____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__SpawnRoleEditorMenu____c__DisplayClass12_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).looksEditorMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        SpawnRoleLooksEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleLooksEditorMenu>_SpawnRoleLooksEditorMenu_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_Initialize
                ((SpawnRoleLooksEditorMenu *)value[1].klass,(this->fields).spawnRoleWoId,
                 (this->fields).spawnRole,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__SpawnRoleEditorMenu____c__DisplayClass12_0___OnLooksEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSkillsEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnSkillsEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleSkillsEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillsEditor>_SpawnRoleSkillsEditor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleEditorMenu___OnSkillsEditPressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&MethodInfo__SpawnRoleEditorMenu__UpdateSpawnRoleCost__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillsEditorMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleSkillsEditor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRoleSkillsEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillsEditor>_SpawnRoleSkillsEditor_
                     );
  (this->fields).skillsEditorMenu = pSVar1;
  func_?(&(this->fields).skillsEditorMenu,pSVar1);
  pSVar1 = (this->fields).skillsEditorMenu;
  iVar2 = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  this_00 = (this->fields).spawnRole;
  if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
    GVar3 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_00,(MethodInfo *)0x0);
    pAVar4 = (this->fields).spawnRoleAttributeSettingsManager;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__SpawnRoleEditorMenu__UpdateSpawnRoleCost__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleSkillsEditor *)0x0) {
        (pSVar1->fields).spawnRoleCost = iVar2;
        (pSVar1->fields).spawnRoleTier = (uint8_t)GVar3;
        (pSVar1->fields).attributeSettingsManager = pAVar4;
        func_?(&(pSVar1->fields).attributeSettingsManager,pAVar4);
        (pSVar1->fields).updateSkillCostCallback = (UnityAction *)this_01;
        func_?(&(pSVar1->fields).updateSkillCostCallback,this_01);
        SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSettings(pSVar1,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                     MethodInfo__SpawnRoleEditorMenu___OnSkillsEditPressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTeamEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnTeamEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleTeamEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTeamEditor>_SpawnRoleTeamEditor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleEditorMenu__OnChangeTeam_MV__WorldObject__MVTeam_);
    func_?(&
                    MethodInfo__SpawnRoleEditorMenu____c__DisplayClass11_0___OnTeamEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleEditorMenu____c__DisplayClass11_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__SpawnRoleEditorMenu____c__DisplayClass11_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).teamEditorPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        SpawnRoleTeamEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTeamEditor>_SpawnRoleTeamEditor_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    this_00 = (this->fields).spawnRole;
    if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
      spawnRolesTeam =
           MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_00,(MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>)
      ;
      if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__SpawnRoleEditorMenu__OnChangeTeam_MV__WorldObject__MVTeam_,
                   (MethodInfo *)0x0);
        if (pOVar1 != (Object__Class *)0x0) {
          SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
                    ((SpawnRoleTeamEditor *)pOVar1,spawnRolesTeam,
                     (UnityAction_1_MV_WorldObject_MVTeam_ *)this_01,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__SpawnRoleEditorMenu____c__DisplayClass11_0___OnTeamEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_Update
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__SpawnRoleEditorMenu____c___Update_b__16_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleEditorMenu____c___Update_b__16_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleEditorMenu____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
  if ((pMVar1->fields).blueModeEnabled == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,1,(MethodInfo *)0x0);
    SpawnRoleEditorMenu_FocusCameraOnSpawnRole(this,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObject *)0x0) {
      t = (Transform *)pMVar3[1].fields.ownerActorNr;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
    }
  }
  fVar4 = (this->fields).timeUntilEnterPlayMode;
  if (_UNK_? < fVar4) {
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timeUntilEnterPlayMode = fVar4 - fVar5;
    if (fVar4 - fVar5 <= 0.0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleEditorMenu____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__16_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
        if ((TypeInfo__SpawnRoleEditorMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar7 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IEditModeController_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pSVar7,
                   MethodInfo__SpawnRoleEditorMenu____c___Update_b__16_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__16_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                );
    }
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleEditorMenu____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction_00 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__16_1;
      if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SpawnRoleEditorMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar7 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9;
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                   (Object *)pSVar7,
                   MethodInfo__SpawnRoleEditorMenu____c___Update_b__16_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__16_1 = callbackFunction_00;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateSpawnRoleCost() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_UpdateSpawnRoleCost
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  IStack_1.m_value = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  pTVar2 = (this->fields).spawnRoleCostText;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar3);
    pTVar2 = (this->fields).spawnRoleCostText;
    pCVar4 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                       ((Color *)&stack0xffffffe8,IStack_1.m_value,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_color.methodPtr)(pTVar2,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a)
      ;
      this_00 = (this->fields).tierEditorMenu;
      if (this_00 != (SpawnRoleTierEditorMenu *)0x0) {
        SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                  (this_00,IStack_1.m_value,(MethodInfo *)0x0);
        pSVar5 = (this->fields).skillsEditorMenu;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pSVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
        IVar7.m_value = IStack_1.m_value;
        if (bVar6 == 0) {
          return;
        }
        pSVar5 = (this->fields).skillsEditorMenu;
        if (pSVar5 != (SpawnRoleSkillsEditor *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?(&
                            MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          pLVar8 = (pSVar5->fields).skillSettingList;
          index = 0;
          (pSVar5->fields).spawnRoleCost = IVar7.m_value;
          while (pLVar8 != (List_1_SkillSettingBase_ *)0x0) {
            if ((pLVar8->fields)._size <= index) {
              return;
            }
            this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (pSVar5->fields).skillSettingList;
            if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                ) || (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (this_01,index,
                                         MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                                        ), RVar9 == (RegexCharClass_SingleRange)0x0)) break;
            *(int32_t *)((int)RVar9 + 0x4c) = IVar7.m_value;
            index = index + 1;
            pLVar8 = (pSVar5->fields).skillSettingList;
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


/* Void <OnSkillsEditPressed>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu__OnSkillsEditPressed_b__13_0
               (SpawnRoleEditorMenu *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skillsEditorMenu;
  if (this_00 != (SpawnRoleSkillsEditor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

