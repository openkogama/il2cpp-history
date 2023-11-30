
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
    fVar1 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                       (spawnRole,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar2 != (MainCameraManager *)0x0) &&
       (this_00 = (pMVar2->fields).mainCamera, this_00 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                (this_00,(MethodInfo *)0x0);
      func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_4.x = (pVVar3->upVector).x;
      VStack_4.y = (pVVar3->upVector).y;
      VStack_4.z = (pVVar3->upVector).z;
      fVar5 = VStack_4.y * _UNK_?;
      fVar6 = VStack_4.z * _UNK_?;
      (*(code *)(spawnRole->klass->vtable).get_WorldPivot.method)
                (afStack_7,spawnRole,(spawnRole->klass->vtable).get_InteractionFlags.methodPtr);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if ((pMVar8 != (MVLocalPlayer *)0x0) &&
           (pSVar9 = (pMVar8->fields).spawnRoleDataMediator, pSVar9 != (SpawnRoleDataMediator *)0x0
           )) {
          pVVar10 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                    SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                              (&VStack_11,
                               (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar9->fields).position
                               ,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                              );
          uVar12 = pVVar10->x;
          uVar13 = pVVar10->y;
          fVar14 = pVVar10->z;
          VStack_4.x = fVar14;
          fVar15 = VStack_11.x - ((float)uVar12 + fVar6);
          fVar6 = VStack_11.y - ((float)uVar13 + fStack_16);
          fVar1 = VStack_11.z - (fVar14 + fVar1);
          VStack_11.x = pVVar10->x;
          VStack_11.y = pVVar10->y;
          VStack_11.z = fVar14;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          dVar17 = (double)(fVar15 * fVar15 + fVar6 * fVar6 + fVar1 * fVar1);
          if (dVar17 < 0.0) {
            func_?();
          }
          else {
            dVar17 = SQRT(dVar17);
          }
          if (_UNK_? < (float)dVar17) {
            fVar14 = fVar1 / (float)dVar17;
            afStack_7[0] = fVar14;
          }
          else {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            fVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
          }
          VStack_4.x = fVar14;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          dVar17 = (double)(fVar15 * fVar15 + fVar6 * fVar6 + fVar1 * fVar1);
          if (dVar17 < 0.0) {
            func_?();
          }
          else {
            dVar17 = SQRT(dVar17);
          }
          fVar14 = VStack_11.z + VStack_4.x * ((float)dVar17 - fVar5);
          iVar18 = (*(code *)(spawnRole->klass->vtable).get_Position.method)
                             (auStack_19,spawnRole,(spawnRole->klass->vtable).set_Position.methodPtr
                             );
          fVar6 = *(float *)(iVar18 + 8);
          pTVar20 = (spawnRole->fields).transform;
          if (pTVar20 != (Transform *)0x0) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_4,pTVar20,(MethodInfo *)0x0);
            VStack_4.x = pVVar10->x;
            VStack_4.y = pVVar10->y;
            VStack_4.z = pVVar10->z;
            fVar15 = VStack_4.y * _UNK_?;
            fStack_21 = fVar1 + VStack_4.x * _UNK_?;
            afStack_7[0] = 0.0;
            afStack_7[1] = 0.0;
            afStack_7[2] = 0.0;
            pTVar20 = (spawnRole->fields).transform;
            if (pTVar20 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  (&VStack_11,pTVar20,(MethodInfo *)0x0);
              uVar22 = pVVar10->x;
              uVar23 = pVVar10->y;
              fVar24 = (float)uVar23 * _UNK_?;
              fVar25 = pVVar10->z * _UNK_?;
              __return_storage_ptr__->x = (afStack_7[2] + (float)uVar22 * _UNK_?) - fVar6;
              __return_storage_ptr__->y = (fVar5 + fVar24) - (fVar5 + fVar15);
              __return_storage_ptr__->z = (fVar1 + fVar25) - fVar14;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar26)();
  return pVVar10;
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
    if (((pKVar9->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar9->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
    }
    else {
      method_00 = pKVar9[1].klass;
      if (method_00 != (KogamaSettingWrapperBase__Class *)0x0) {
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           (&DStack_11,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                           );
        pDStack_12 = &DStack_7;
        uStack_13 = 0;
        DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
        DStack_7._version = pDVar10->_version;
        DStack_7._index = pDVar10->_index;
        DStack_7._current.key = (Object *)(pDVar10->_current).key;
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
          uVar19 = *(ushort *)(iVar15 + 0xb6);
          uStack_20 = (uint)uVar19;
          if (uVar19 != 0) {
            do {
              if (*(IAttributeSetting__Class **)(*(int *)(iVar15 + 0x58) + (uint)uVar17 * 8) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 ) {
                puVar21 = (undefined4 *)
                         (iVar15 + (*(int *)(*(int *)(iVar15 + 0x58) + 4 + (uint)uVar17 * 8) + 0x18) *
                                  8);
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
  bVar4 = 0;
  if (pIVar1 == (Image *)0x0) {
    CStack_3.g = (float)&UNK_?;
    bVar5 = func_?();
    puVar6 = (uint *)in(0x3b);
    *(char *)(unaff_EDI + -0x1b) = *(char *)(unaff_EDI + -0x1b) + unaff_BH + (0x99 < bVar5 | bVar4);
    in(0x3b);
    *(char *)(unaff_EDI + -0x33efc41b) =
         *(char *)(unaff_EDI + -0x33efc41b) + unaff_BH + (extraout_EDX < *puVar6);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  CStack_3.r = pCVar2->a;
  CStack_3.g = (float)(pIVar1->klass->vtable).get_raycastTarget.methodPtr;
  (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b);
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
        VStack_1.y = (float)(pMVar5->klass->vtable).Activate.methodPtr;
        VStack_1.x = fVar4;
        (*(code *)(pMVar5->klass->vtable).FocusOnObject.method)
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
      if (((((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).naturalAligment <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
      (this_02->fields).spawnRole = (MVAvatarSpawnRoleCreator *)CStack_1.r;
      this_05 = TypeInfo__MVAvatarSpawnRoleCreator;
      if (((((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).naturalAligment <
           (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (((MVAvatarSpawnRoleCreator *)CStack_1.r)->klass->_1).typeHierarchy
          [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
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
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      ((UnityAction_1_System_Int32Enum_ *)this_04,(Object *)this_02,
                       MethodInfo__SpawnRoleEditorMenu__OnChangeTier_MV__Common__GamePassTier_,
                       (MethodInfo *)0x0);
            if (this_05 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
              (this_05->_0).declaringType = this_04;
              func_?(&(this_05->_0).declaringType,this_04);
              pTVar5 = (Text *)(this_05->_0).byval_arg.data.array;
              (this_05->_0).element_class = (Il2CppClass *)spawnRoleWoId;
              *(byte *)&(this_05->_0).castClass = this._3_1_;
              this = (SpawnRoleEditorMenu *)(uint)this._3_1_;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&this,(MethodInfo *)0x0);
              if (pTVar5 != (Text *)0x0) {
                (*(code *)(pTVar5->klass->vtable).set_text.method)
                          (pTVar5,pSVar6,
                           (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                          ((SpawnRoleTierEditorMenu *)this_05,(int32_t)(this_05->_0).element_class,
                           (MethodInfo *)0x0);
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
                  (*(code *)(pTVar5->klass->vtable).set_text.method)
                            (pTVar5,pSVar6,
                             (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  this_05 = (MVAvatarSpawnRoleCreator__Class *)(this_02->fields).spawnRoleCostText;
                  pCVar7 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                                      (&CStack_1,(int32_t)this,(MethodInfo *)0x0);
                  if (this_05 != (MVAvatarSpawnRoleCreator__Class *)0x0) {
                    pTVar8 = (Transform__Class *)(this_05->_0).image;
                    (*(code *)pTVar8[1]._1.thread_static_fields_size)
                              (this_05,pCVar7->r,pCVar7->g,pCVar7->b,pCVar7->a,
                               pTVar8[1]._1.thread_static_fields_offset);
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
                        p_Var4 = (this_05->_0).typeMetadataHandle;
                        index = 0;
                        (this_05->_0).parent = (Il2CppClass *)pSVar10;
                        while (p_Var4 != (Il2CppMetadataTypeHandle)0x0) {
                          if (*(int *)(p_Var4 + 0xc) <= index) {
                            return;
                          }
                          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)(this_05->_0).typeMetadataHandle;
                          if ((this_01 ==
                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) || (RVar11 = mscorlib.dll::System::Collections::Generic::
                                                 List`1[System::Text::RegularExpressions::
                                                 RegexCharClass+SingleRange]::
                                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                           (this_01,index,
                                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                                                  ), RVar11 == (RegexCharClass_SingleRange)0x0))
                          break;
                          *(SpawnRoleEditorMenu **)((int)RVar11 + 0x50) = pSVar10;
                          index = index + 1;
                          p_Var4 = (this_05->_0).typeMetadataHandle;
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
        *(uint8_t *)((int)RVar4 + 0x54) = (uint8_t)newTier;
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
  if (pGVar1 == (GameEventManager *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    unaff_EDI = (MVLocalPlayerBuilder__Class *)(pGVar1->fields).AvatarCommandsBuildMode;
    pMVar3 = (this->fields).spawnRole;
    if (pMVar3 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    puVar4 = (undefined8 *)
              (*(code *)(pMVar3->klass->vtable).get_Position.method)
                        (auStack_5,pMVar3,(pMVar3->klass->vtable).set_Position.methodPtr);
    pMVar3 = (this->fields).spawnRole;
    fVar6 = *(float *)(puVar4 + 1);
    iStack_7 = (int32_t)*puVar4;
    GStack_8 = (GamePassTier__Enum)((ulonglong)*puVar4 >> 0x20);
    if (pMVar3 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    pQVar9 = (Quaternion *)
              (*(code *)(pMVar3->klass->vtable).get_Rotation.method)
                        (&stack0xffffffe0,pMVar3,(pMVar3->klass->vtable).set_Rotation.methodPtr);
    if (unaff_EDI == (MVLocalPlayerBuilder__Class *)0x0) goto code_?;
    position.y = (float)GStack_8;
    position.x = (float)iStack_7;
    position.z = fVar6;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
              ((GameEventManager_AvatarCommandsBuildModeManager *)unaff_EDI,position,*pQVar9,
               (MethodInfo *)0x0);
    unaff_EDI = (MVLocalPlayerBuilder__Class *)
                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (unaff_EDI == (MVLocalPlayerBuilder__Class *)0x0) goto code_?;
    pIVar10 = (unaff_EDI->_0).image;
    pMVar11 = TypeInfo__MVLocalPlayerBuilder;
    if ((*(byte *)&pIVar10[4].assembly < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
       (*(MVLocalPlayerBuilder__Class **)
         ((pIVar10[2].typeCount - 4) + (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4
         ) != TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    uVar12 = (unaff_EDI->_1).thread_static_fields_size;
    iStack_7 = (this->fields).spawnRoleWoId;
    uVar13 = (unaff_EDI->_1).flags;
    uStack_14 = uVar12;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
         (pMVar2->klass->_1).naturalAligment) &&
       ((pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1]
        == (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      pMVar2[1].klass = (MVLocalPlayer__Class *)uStack_14;
      pMVar2[1].monitor = (MonitorData *)iStack_7;
      pMVar2[1].fields._.checkpointWOID = uVar13;
      pMVar3 = (this->fields).spawnRole;
      if (pMVar3 != (MVAvatarSpawnRoleCreator *)0x0) {
        GVar15 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                           (pMVar3,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar16 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar16 != (PlayerPlanetData *)0x0) {
          if ((pPVar16->fields).gamePassTier < (byte)GVar15) {
            unaff_EDI = (MVLocalPlayerBuilder__Class *)
                        MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
            pMVar3 = (this->fields).spawnRole;
            if (pMVar3 != (MVAvatarSpawnRoleCreator *)0x0) {
              GVar15 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                                 (pMVar3,(MethodInfo *)0x0);
              GStack_8 = CONCAT31(GStack_8._1_3_,(char)GVar15);
              if (unaff_EDI != (MVLocalPlayerBuilder__Class *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                          ((MVNetworkGame_OperationRequests *)unaff_EDI,GStack_8,(MethodInfo *)0x0);
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
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
            }
            pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (((pGVar1 != (GameEventManager *)0x0) &&
                (pGVar17 = (pGVar1->fields).GameState,
                pGVar17 != (GameEventManager_GameStateManager *)0x0)) &&
               (pAVar18 = (pGVar17->fields).OnDisableLobbyState, pAVar18 != (Action *)0x0)) {
              (*(pAVar18->fields)._._.invoke_impl)
                        ((pAVar18->fields)._._.method_code,(pAVar18->fields)._._.method);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(pMVar2,unaff_EDI);
  pMVar11 = extraout_EDX_00;
code_?:
  func_?(unaff_EDI,pMVar11);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  method_00 = TypeInfo__SpawnRoleEditorMenu____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).looksEditorMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleLooksEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleLooksEditorMenu>_SpawnRoleLooksEditorMenu_
                     );
  if (value != (Object *)0x0) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__SpawnRoleEditorMenu____c__DisplayClass12_0___OnLooksEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
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
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__SpawnRoleEditorMenu___OnSkillsEditPressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
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
  method_00 = TypeInfo__SpawnRoleEditorMenu____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).teamEditorPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleTeamEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTeamEditor>_SpawnRoleTeamEditor_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    this_00 = (this->fields).spawnRole;
    pOVar1 = value[1].klass;
    if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
      MVar2 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_00,(MethodInfo *)0x0)
      ;
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(MVar2);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__SpawnRoleEditorMenu__OnChangeTeam_MV__WorldObject__MVTeam_,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
                  ((SpawnRoleTeamEditor *)pOVar1,MVTeam__Enum_Blue,
                   (UnityAction_1_MV_WorldObject_MVTeam_ *)this_01,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__SpawnRoleEditorMenu____c__DisplayClass11_0___OnTeamEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pSVar7,
                   MethodInfo__SpawnRoleEditorMenu____c___Update_b__16_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__16_0 = callbackFunction;
        pGVar6 = (GameObject *)&UNK_?;
        func_?(&TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__16_0);
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
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pSVar3);
    pTVar2 = (this->fields).spawnRoleCostText;
    pCVar4 = SpawnRolesSkillDataManager::SpawnRolesSkillDataManager_GetCostColor
                       ((Color *)&stack0xffffffe8,IStack_1.m_value,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_color.method)
                (pTVar2,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a);
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
            *(int32_t *)((int)RVar9 + 0x50) = IVar7.m_value;
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

