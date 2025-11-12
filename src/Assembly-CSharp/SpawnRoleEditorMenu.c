
/* Vector3 CalculatePreviewOffset(MVWorldObjectClient) */

Vector3 * Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_CalculatePreviewOffset
                    (Vector3 *__return_storage_ptr__,SpawnRoleEditorMenu *this,
                    MVWorldObjectClient *spawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spawnRole != (MVWorldObjectClient *)0x0) {
    fVar1 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                       (spawnRole,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar2 != (MainCameraManager *)0x0) &&
       (obj = (pMVar2->fields).mainCamera, obj != (Camera *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pVVar5 = (Vector3 *)(*pcVar4)();
        return pVVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        pVVar5 = (Vector3 *)(*pcVar4)();
        return pVVar5;
      }
      pcRam_? = pcVar4;
      auVar7._0_8_ = (*pcRam_?)(pvVar3);
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar8._4_12_ = auVar7._4_12_;
      auVar8._0_4_ = (float)auVar7._0_8_ * _UNK_? * _UNK_? * _UNK_?;
      fVar9 = (float)FUN_?(auVar8._0_8_);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
      aVStack_11[0].x = (pVVar10->upVector).x;
      aVStack_11[0].y = (pVVar10->upVector).y;
      fVar12 = (pVVar10->upVector).z;
      fVar13 = aVStack_11[0].x * TypeRef__System__Activator__T._0_4_;
      fVar14 = aVStack_11[0].y + aVStack_11[0].y;
      puVar15 = (undefined8 *)
                (*(spawnRole->klass->vtable).get_WorldPivot.methodPtr)
                          (aVStack_11,spawnRole,(spawnRole->klass->vtable).get_WorldPivot.method);
      VStack_16._0_8_ = *puVar15;
      fVar17 = *(float *)(puVar15 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar18 != (MVGameControllerBase *)0x0) &&
           (pMVar19 = (pMVar18->fields).game, pMVar19 != (MVNetworkGame *)0x0)) &&
          (this_00 = (pMVar19->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         (((pMVar20 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar20 != (MVLocalPlayer *)0x0 &&
           (pSVar21 = (pMVar20->fields).spawnRoleDataMediator, pSVar21 != (SpawnRoleDataMediator *)0x0
           )) && ((pSVar22 = (pSVar21->fields).position,
                  pSVar22 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                             *)0x0 &&
                  (pSVar23 = (pSVar22->fields)._.subscribableVariable,
                  pSVar23 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)))))) {
        if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        aVStack_11[0].x = (pSVar23->fields)._.value.x;
        aVStack_11[0].y = (pSVar23->fields)._.value.y;
        fVar24 = VStack_16.x - (aVStack_11[0].x + fVar13);
        fVar14 = VStack_16.y - (aVStack_11[0].y + fVar14);
        fVar17 = fVar17 - ((pSVar23->fields)._.value.z + fVar12 + fVar12);
        fVar12 = (pSVar23->fields)._.value.z;
        VStack_16.y = fVar14;
        VStack_16.x = fVar24;
        VStack_16.z = fVar17;
        VStack_25._0_8_ = VStack_16._0_8_;
        VStack_25.z = fVar17;
        fVar13 = (float)FUN_?(&VStack_16);
        if (_UNK_? < fVar13) {
          fVar17 = fVar17 / fVar13;
          VStack_16.y = fVar14 / fVar13;
          VStack_16.x = fVar24 / fVar13;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_16.x = (pVVar10->zeroVector).x;
          VStack_16.y = (pVVar10->zeroVector).y;
          fVar17 = (pVVar10->zeroVector).z;
        }
        fVar13 = (float)FUN_?(&VStack_25);
        fVar13 = fVar13 - fVar1 / fVar9;
        fVar9 = VStack_16.x * fVar13 + aVStack_11[0].x;
        fVar14 = VStack_16.y * fVar13 + aVStack_11[0].y;
        puVar15 = (undefined8 *)
                  (*(spawnRole->klass->vtable).get_Position.methodPtr)(&VStack_25,spawnRole);
        pTVar26 = (spawnRole->fields).transform;
        aVStack_11[0]._0_8_ = *puVar15;
        fVar1 = *(float *)(puVar15 + 1);
        if (pTVar26 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              (&VStack_25,pTVar26,(MethodInfo *)0x0);
          uVar27 = pVVar5->x;
          fVar28 = (float)uVar27 * _UNK_? + aVStack_11[0].x;
          fVar29 = pVVar5->z * _UNK_?;
          fVar24 = pVVar5->y * _UNK_? + aVStack_11[0].y;
          pTVar26 = (spawnRole->fields).transform;
          if (pTVar26 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (aVStack_11,pTVar26,(MethodInfo *)0x0);
            uVar30 = pVVar5->x;
            fVar31 = pVVar5->y * _UNK_?;
            fVar32 = pVVar5->z * _UNK_?;
            __return_storage_ptr__->x = ((float)uVar30 * _UNK_? + fVar28) - fVar9;
            __return_storage_ptr__->y = (fVar31 + fVar24) - fVar14;
            __return_storage_ptr__->z = (fVar32 + fVar29 + fVar1) - (fVar17 * fVar13 + fVar12);
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Int32 CalculateSpawnRoleCost() */

int32_t Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_CalculateSpawnRoleCost
                  (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleAttributeSettingsManager;
  if (this_00 == (AttributeSettingsManager *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar1 = FUN_?(this,unaff_R14);
code_?:
    FUN_?(uVar1,unaff_RSI);
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  pKVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                     (this_00,(MethodInfo *)0x0);
  iVar3 = 0;
  if (pKVar4 != (KogamaSettingWrapperBase *)0x0) {
    bVar5 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar4->klass->_1).naturalAligment < bVar5) ||
       ((pKVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(pKVar4);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    pKVar6 = pKVar4[1].klass;
    if (pKVar6 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
    uStack_7 = 0;
    uStack_8 = 0;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&pKStack_10 >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
    uStack_14 = (ulonglong)*(uint *)&(pKVar6->_0).byval_arg.field_0xc;
    uStack_15 = 2;
    DStack_16._version = (undefined4)uStack_14;
    DStack_16._index = uStack_14._4_4_;
    DStack_16._current.key = (Object *)0x0;
    DStack_16._current.value = (Object *)0x0;
    DStack_16._getEnumeratorRetType = 2;
    DStack_16._36_4_ = 0;
    pKStack_10 = pKVar6;
    DStack_16._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKVar6;
    iVar3 = 0;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_16,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                             ), this = (SpawnRoleEditorMenu *)DStack_16._current.value,
          unaff_RSI = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          , bVar17 != 0) {
      if ((SpawnRoleEditorMenu *)DStack_16._current.value == (SpawnRoleEditorMenu *)0x0)
      goto code_?;
      lVar18 = FUN_?(DStack_16._current.value,
                             TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                            );
      unaff_R14 = 
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
      ;
      uVar1 = extraout_XMM0_Da;
      if (lVar18 == 0) goto code_?;
      plVar19 = (longlong *)
                FUN_?(this,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                             );
      unaff_RSI = (IAttributeSetting__Class *)0x0;
      if (plVar19 == (longlong *)0x0) goto code_?;
      lVar18 = *plVar19;
      uVar20 = 0;
      if (*(ushort *)(lVar18 + 0x12e) != 0) {
        do {
          if (*(IAttributeSetting__Class **)
               (*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
             ) {
            puVar21 = (undefined8 *)
                      ((longlong)
                       *(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) * 0x10
                       + 0x138 + lVar18);
            goto code_?;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
      }
      puVar21 = (undefined8 *)
                FUN_?(plVar19,
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              ,0);
code_?:
      iVar22 = (*(code *)*puVar21)(plVar19,puVar21[1]);
      iVar3 = iVar3 + iVar22;
    }
  }
  return iVar3;
}


/* Void ChangeTeamImageColor(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_ChangeTeamImageColor
               (SpawnRoleEditorMenu *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).TeamImage;
  if (team == MVTeam__Enum_Blue) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
  }
  else if (team == MVTeam__Enum_Red) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamRed;
  }
  else if (team == MVTeam__Enum_Green) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
  }
  else if (team == MVTeam__Enum_Yellow) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
  }
  else {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_OffGray;
  }
  pCVar2 = Styles::Styles_GetColor(&CStack_3,colorStyle,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    CStack_3.r = pCVar2->r;
    CStack_3.g = pCVar2->g;
    CStack_3.b = pCVar2->b;
    CStack_3.a = pCVar2->a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&CStack_3,(pIVar1->klass->vtable).set_color.method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FocusCameraOnSpawnRole() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_FocusCameraOnSpawnRole
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  pVVar1 = SpawnRoleEditorMenu_CalculatePreviewOffset
                     (aVStack_2,this,(MVWorldObjectClient *)(this->fields).spawnRole,
                      (MethodInfo *)0x0);
  pMVar3 = (this->fields).spawnRole;
  uVar4._0_4_ = pVVar1->x;
  uVar4._4_4_ = pVVar1->y;
  fVar5 = pVVar1->z;
  if ((pMVar3 != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_00 = (pMVar3->fields)._._._.transform, this_00 != (Transform *)0x0)) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (aVStack_2,this_00,(MethodInfo *)0x0);
    uVar6._0_4_ = pVVar1->x;
    uVar6._4_4_ = pVVar1->y;
    fVar7 = pVVar1->z;
    aVStack_2[0]._0_8_ = uVar6;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar8 != (MainCameraManager *)0x0) &&
       ((pMVar9 = (pMVar8->fields).cameraController, pMVar9 != (MVCameraController *)0x0 &&
        (this_01 = (pMVar9->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0)))
       ) {
      pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (this_01,(MethodInfo *)0x0);
      if (pMVar10 != (MVCameraBase *)0x0) {
        uStack_11 = CONCAT44(aVStack_2[0].y,(float)uVar6);
        fStack_12 = fVar7;
        aVStack_2[0]._0_8_ = uVar4;
        aVStack_2[0].z = fVar5;
        (*(pMVar10->klass->vtable).FocusOnObject.methodPtr)
                  (pMVar10,(this->fields).spawnRole,TypeRef__System__Activator__T._0_4_,aVStack_2,
                   &uStack_11,(pMVar10->klass->vtable).FocusOnObject.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
               (SpawnRoleEditorMenu *this,int32_t spawnRoleWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleEditorMenu__OnChangeTier_MV__Common__GamePassTier_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleWoId = spawnRoleWoId;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_00,spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar1 == (MVAvatarSpawnRoleCreator *)0x0) {
      (this->fields).spawnRole = (MVAvatarSpawnRoleCreator *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        FUN_?(pMVar1);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).spawnRole = pMVar1;
      bVar2 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        FUN_?(pMVar1);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).spawnRole >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pMVar1 = (this->fields).spawnRole;
    if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
      pAVar9 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (pMVar1,(MethodInfo *)0x0);
      bVar8 = iRam_? != 0;
      (this->fields).spawnRoleAttributeSettingsManager = pAVar9;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(this->fields).spawnRoleAttributeSettingsManager >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pMVar1 = (this->fields).spawnRole;
      if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
        t = (pMVar1->fields)._._._.transform;
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
        SpawnRoleEditorMenu_FocusCameraOnSpawnRole(this,(MethodInfo *)0x0);
        pMVar1 = (this->fields).spawnRole;
        if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
          team = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                           (pMVar1,(MethodInfo *)0x0);
          SpawnRoleEditorMenu_ChangeTeamImageColor(this,team,(MethodInfo *)0x0);
          iVar10 = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
          pMVar1 = (this->fields).spawnRole;
          pSVar11 = (this->fields).tierEditorMenu;
          if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
            GVar12 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                               (pMVar1,(MethodInfo *)0x0);
            pUVar13 = (UnityAction_1_MV_Common_GamePassTier_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>
                                   );
            FUN_?(pUVar13,this);
            if (pSVar11 != (SpawnRoleTierEditorMenu *)0x0) {
              bVar8 = iRam_? != 0;
              (pSVar11->fields).ChangeTierRequirement = pUVar13;
              if (bVar8) {
                uVar4 = (uint)((ulonglong)&(pSVar11->fields).ChangeTierRequirement >> 0xc);
                lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                  LOCK();
                  bVar8 = uVar6 == *puVar7;
                  if (bVar8) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar8);
              }
              (pSVar11->fields).spawnRoleCost = iVar10;
              SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateTier
                        (pSVar11,GVar12 & 0xff,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              iVar10 = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
              pTVar14 = (this->fields).spawnRoleCostText;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              CStack_15.r = 0.0;
              CStack_15.g = 0.0;
              CStack_15.b = 0.0;
              CStack_15.a = 0.0;
              pSVar16 = mscorlib.dll::System::Number::Number_FormatInt32
                                  (iVar10,(ReadOnlySpan_1_Char_ *)&CStack_15,(IFormatProvider *)0x0,
                                   (MethodInfo *)0x0);
              if (pTVar14 != (Text *)0x0) {
                (*(pTVar14->klass->vtable).set_text.methodPtr)(pTVar14,pSVar16);
                pTVar14 = (this->fields).spawnRoleCostText;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__Styles);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (iVar10 < 0) {
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  colorStyle = ColorStyle__Enum_NegativeRed;
                }
                else {
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  colorStyle = ColorStyle__Enum_OffWhite;
                }
                pCVar17 = Styles::Styles_GetColor(&CStack_15,colorStyle,(MethodInfo *)0x0);
                uVar18._0_4_ = pCVar17->r;
                uVar18._4_4_ = pCVar17->g;
                uVar19._0_4_ = pCVar17->b;
                uVar19._4_4_ = pCVar17->a;
                if (pTVar14 != (Text *)0x0) {
                  CStack_15._0_8_ = uVar18;
                  CStack_15._8_8_ = uVar19;
                  (*(pTVar14->klass->vtable).set_color.methodPtr)(pTVar14,&CStack_15);
                  pSVar11 = (this->fields).tierEditorMenu;
                  if (pSVar11 != (SpawnRoleTierEditorMenu *)0x0) {
                    SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                              (pSVar11,iVar10,(MethodInfo *)0x0);
                    pSVar20 = (this->fields).skillsEditorMenu;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Object);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Object);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (pSVar20 != (SpawnRoleSkillsEditor *)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if ((pSVar20->fields)._._._._.m_CachedPtr != (void *)0x0) {
                        pSVar20 = (this->fields).skillsEditorMenu;
                        if (pSVar20 != (SpawnRoleSkillsEditor *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pLVar21 = (pSVar20->fields).skillSettingList;
                          (pSVar20->fields).spawnRoleCost = iVar10;
                          uVar4 = 0;
                          if (pLVar21 != (List_1_SkillSettingBase_ *)0x0) {
                            lVar5 = 0x20;
                            do {
                              if ((pLVar21->fields)._size <= (int)uVar4) {
                                return;
                              }
                              pLVar21 = (pSVar20->fields).skillSettingList;
                              if (pLVar21 == (List_1_SkillSettingBase_ *)0x0) break;
                              if ((uint)(pLVar21->fields)._size <= uVar4) {
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                          ((MethodInfo *)0x0);
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              pSVar22 = (pLVar21->fields)._items;
                              if (pSVar22 == (SkillSettingBase__Array *)0x0) break;
                              if ((uint)pSVar22->max_length <= uVar4) {
                                FUN_?();
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              lVar23 = *(longlong *)((longlong)pSVar22->vector + lVar5 + -0x20);
                              if (lVar23 == 0) break;
                              uVar4 = uVar4 + 1;
                              *(int32_t *)(lVar23 + 0x8c) = iVar10;
                              pLVar21 = (pSVar20->fields).skillSettingList;
                              lVar5 = lVar5 + 8;
                            } while (pLVar21 != (List_1_SkillSettingBase_ *)0x0);
                          }
                        }
                        goto code_?;
                      }
                    }
                    return;
                  }
                }
              }
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnChangeTeam(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnChangeTeam
               (SpawnRoleEditorMenu *this,MVTeam__Enum newTeam,MethodInfo *method)

{
  pMVar1 = (this->fields).spawnRole;
  if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_team);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
      this_00 = (pMVar3->fields).operationRequests;
      worldObjectID = (pMVar1->fields)._._._._.id;
      aMStackX_10[0] = newTeam;
      value = (Object *)FUN_?(uRam_?,aMStackX_10);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_00,worldObjectID,StringLiteral_team,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Styles);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar4 = (this->fields).TeamImage;
        if (newTeam == MVTeam__Enum_Blue) {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_TeamBlue;
        }
        else if (newTeam == MVTeam__Enum_Red) {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_TeamRed;
        }
        else if (newTeam == MVTeam__Enum_Green) {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_TeamGreen;
        }
        else if (newTeam == MVTeam__Enum_Yellow) {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_TeamYellow;
        }
        else {
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          colorStyle = ColorStyle__Enum_OffGray;
        }
        Styles::Styles_GetColor((Color *)&stack0xffffffffffffffe8,colorStyle,(MethodInfo *)0x0);
        if (pIVar4 != (Image *)0x0) {
          (*(pIVar4->klass->vtable).set_color.methodPtr)
                    (pIVar4,&stack0xffffffffffffffe8,(pIVar4->klass->vtable).set_color.method);
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnChangeTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnChangeTier
               (SpawnRoleEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRole;
  if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Tier
            (this_00,newTier & 0xff,(MethodInfo *)0x0);
  pSVar2 = (this->fields).skillsEditorMenu;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 != (SpawnRoleSkillsEditor *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar2 = (this->fields).skillsEditorMenu;
      if (pSVar2 != (SpawnRoleSkillsEditor *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar3 = (pSVar2->fields).skillSettingList;
        (pSVar2->fields).spawnRoleTier = (uint8_t)newTier;
        uVar4 = 0;
        if (pLVar3 != (List_1_SkillSettingBase_ *)0x0) {
          lVar5 = 0x20;
          do {
            if ((pLVar3->fields)._size <= (int)uVar4) {
              return;
            }
            pLVar3 = (pSVar2->fields).skillSettingList;
            if (pLVar3 == (List_1_SkillSettingBase_ *)0x0) break;
            if ((uint)(pLVar3->fields)._size <= uVar4) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pSVar6 = (pLVar3->fields)._items;
            if (pSVar6 == (SkillSettingBase__Array *)0x0) break;
            if ((uint)pSVar6->max_length <= uVar4) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            lVar7 = *(longlong *)((longlong)pSVar6->vector + lVar5 + -0x20);
            if (lVar7 == 0) break;
            uVar4 = uVar4 + 1;
            *(uint8_t *)(lVar7 + 0x90) = (uint8_t)newTier;
            pLVar3 = (pSVar2->fields).skillSettingList;
            lVar5 = lVar5 + 8;
          } while (pLVar3 != (List_1_SkillSettingBase_ *)0x0);
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnDestroy
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pMVar2 != (MainCameraManager *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pMVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar2 == (MainCameraManager *)0x0) goto DAT_?;
        MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar2,0,(MethodInfo *)0x0);
      }
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      t = (pMVar4->fields).transform;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = cRam_? == '\0';
  (pMVar1->fields).blueModeEnabled = 0;
  if (bVar3) {
    FUN_?(&TypeInfo__MVGameControllerBase,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  this_00 = (pMVar1->fields).secondaryCamera;
  if ((this_00 != (Transform *)0x0) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,0,(MethodInfo *)0x0);
    this_01 = (pMVar1->fields).greyScaleEffect;
    if (this_01 != (GrayscaleEffect *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLooksEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnLooksEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleLooksEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleLooksEditorMenu>_SpawnRoleLooksEditorMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleEditorMenu____c__DisplayClass12_0___OnLooksEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleEditorMenu____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleEditorMenu____c__DisplayClass12_0);
  original = (this->fields).looksEditorMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleLooksEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleLooksEditorMenu>_SpawnRoleLooksEditorMenu_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    if (object[1].klass != (Object__Class *)0x0) {
      SpawnRoleLooksEditorMenu::SpawnRoleLooksEditorMenu_Initialize
                ((SpawnRoleLooksEditorMenu *)object[1].klass,(this->fields).spawnRoleWoId,
                 (this->fields).spawnRole,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__SpawnRoleEditorMenu____c__DisplayClass12_0___OnLooksEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar3 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar3) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSkillsEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnSkillsEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSkillsEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillsEditor>_SpawnRoleSkillsEditor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleEditorMenu___OnSkillsEditPressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleEditorMenu__UpdateSpawnRoleCost__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).skillsEditorMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = (SpawnRoleSkillsEditor *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pSVar1,
                       SpawnRoleSkillsEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSkillsEditor>_SpawnRoleSkillsEditor_
                      );
  bVar2 = iRam_? != 0;
  (this->fields).skillsEditorMenu = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).skillsEditorMenu >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar1 = (this->fields).skillsEditorMenu;
  iVar7 = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  this_00 = (this->fields).spawnRole;
  if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
    GVar8 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_00,(MethodInfo *)0x0);
    pAVar9 = (this->fields).spawnRoleAttributeSettingsManager;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__SpawnRoleEditorMenu__UpdateSpawnRoleCost__,
               (MethodInfo *)0x0);
    iVar10 = iRam_?;
    if (pSVar1 != (SpawnRoleSkillsEditor *)0x0) {
      (pSVar1->fields).spawnRoleCost = iVar7;
      (pSVar1->fields).spawnRoleTier = (uint8_t)GVar8;
      (pSVar1->fields).attributeSettingsManager = pAVar9;
      if (iVar10 != 0) {
        uVar3 = (uint)((ulonglong)&(pSVar1->fields).attributeSettingsManager >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar10 = iRam_?;
        } while (!bVar2);
      }
      (pSVar1->fields).updateSkillCostCallback = (UnityAction *)this_02;
      if (iVar10 != 0) {
        uVar3 = (uint)((ulonglong)&(pSVar1->fields).updateSkillCostCallback >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      SpawnRoleSkillsEditor::SpawnRoleSkillsEditor_CreateSkillSettings(pSVar1,(MethodInfo *)0x0);
      pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,(Object *)this,
                 MethodInfo__SpawnRoleEditorMenu___OnSkillsEditPressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar12 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar12);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar11,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar4 = (longlong)(pLVar13->fields)._size;
        uVar3 = 0;
        if (0 < lVar4) {
          lVar14 = 0;
          lVar15 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar13->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pTVar17 = (pLVar13->fields)._items;
            if (pTVar17 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar17->max_length <= uVar3) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_01,(MethodInfo *)0x0);
            bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar11,(BaseEventData *)0x0,this_03,
                               (pMVar12->field7_0x38).rgctx_data[1].method);
            if (bVar18 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar14 = lVar14 + 1;
            lVar15 = lVar15 + 8;
          } while (lVar14 < lVar4);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnTeamEditPressed() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_OnTeamEditPressed
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleTeamEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTeamEditor>_SpawnRoleTeamEditor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleEditorMenu__OnChangeTeam_MV__WorldObject__MVTeam_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleEditorMenu____c__DisplayClass11_0___OnTeamEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleEditorMenu____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleEditorMenu____c__DisplayClass11_0);
  original = (this->fields).teamEditorPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleTeamEditor_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTeamEditor>_SpawnRoleTeamEditor_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    this_00 = (this->fields).spawnRole;
    pOVar1 = object[1].klass;
    if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
      spawnRolesTeam =
           MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_00,(MethodInfo *)0x0);
      onTeamChangeCallback =
           (UnityAction_1_MV_WorldObject_MVTeam_ *)
           FUN_?(TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>);
      FUN_?(onTeamChangeCallback,this,
                    MethodInfo__SpawnRoleEditorMenu__OnChangeTeam_MV__WorldObject__MVTeam_);
      if (pOVar1 != (Object__Class *)0x0) {
        SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
                  ((SpawnRoleTeamEditor *)pOVar1,spawnRolesTeam,onTeamChangeCallback,
                   (MethodInfo *)0x0);
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__SpawnRoleEditorMenu____c__DisplayClass11_0___OnTeamEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar8 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar8);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar7,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar10 = (longlong)(pLVar9->fields)._size;
          uVar3 = 0;
          if (0 < lVar10) {
            lVar11 = 0;
            lVar12 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar9->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar14 = (pLVar9->fields)._items;
              if (pTVar14 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar14->max_length <= uVar3) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar7,(BaseEventData *)0x0,this_02,
                                 (pMVar8->field7_0x38).rgctx_data[1].method);
              if (bVar15 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar3 = uVar3 + 1;
              lVar11 = lVar11 + 1;
              lVar12 = lVar12 + 8;
            } while (lVar11 < lVar10);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_Update
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleEditorMenu____c___Update_b__15_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleEditorMenu____c___Update_b__15_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
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
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar2,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      t = (pMVar3->fields).transform;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
    }
  }
  fVar4 = (this->fields).timeUntilEnterPlayMode;
  if (0.0 < fVar4) {
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar7 = (float)(*pcRam_?)();
    fVar4 = fVar4 - fVar7;
    (this->fields).timeUntilEnterPlayMode = fVar4;
    if (fVar4 <= 0.0) {
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SpawnRoleEditorMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleEditorMenu____c);
      }
      this_00 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__15_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
        if (*(int *)&(TypeInfo__SpawnRoleEditorMenu____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SpawnRoleEditorMenu____c);
        }
        pSVar9 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IEditModeController_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)pSVar9,
                   MethodInfo__SpawnRoleEditorMenu____c___Update_b__15_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__15_0 = this_00;
        func_?(&TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__15_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar8,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                );
    }
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    uVar10 = (this->fields).spawnRoleWoId;
    uVar11 = (ulonglong)uVar10;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar2,uVar10,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SpawnRoleEditorMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleEditorMenu____c);
      }
      this_01 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__15_1;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__SpawnRoleEditorMenu____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SpawnRoleEditorMenu____c);
        }
        pSVar9 = TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pSVar9,
                   MethodInfo__SpawnRoleEditorMenu____c___Update_b__15_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__15_1 = this_01;
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&TypeInfo__SpawnRoleEditorMenu____c->static_fields->__9__15_1
                         >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar11 = 0;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar8,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = (MVInputWrapper_InputSuppression *)
              FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
    pIVar16 = (pMVar15->klass->vtable).set_IsSuppressed.methodPtr;
    (*pIVar16)(pMVar15,CONCAT71((int7)(uVar11 >> 8),1),
              (pMVar15->klass->vtable).set_IsSuppressed.method,pIVar16,unaff_RBX);
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVInputWrapper);
    }
    TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar15;
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >>
                     0xc);
      puVar13 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar13;
        LOCK();
        uVar11 = *puVar13;
        if (uVar12 == uVar11) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSpawnRoleCost() */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu_UpdateSpawnRoleCost
               (SpawnRoleEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = SpawnRoleEditorMenu_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).spawnRoleCostText;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aCStack_2[0].r = 0.0;
  aCStack_2[0].g = 0.0;
  aCStack_2[0].b = 0.0;
  aCStack_2[0].a = 0.0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,(ReadOnlySpan_1_Char_ *)aCStack_2,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar3);
    pTVar1 = (this->fields).spawnRoleCostText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (value < 0) {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_NegativeRed;
    }
    else {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_OffWhite;
    }
    pCVar4 = Styles::Styles_GetColor(aCStack_2,colorStyle,(MethodInfo *)0x0);
    uVar5._0_4_ = pCVar4->r;
    uVar5._4_4_ = pCVar4->g;
    uVar6._0_4_ = pCVar4->b;
    uVar6._4_4_ = pCVar4->a;
    if (pTVar1 != (Text *)0x0) {
      aCStack_2[0]._0_8_ = uVar5;
      aCStack_2[0]._8_8_ = uVar6;
      (*(pTVar1->klass->vtable).set_color.methodPtr)(pTVar1,aCStack_2);
      this_00 = (this->fields).tierEditorMenu;
      if (this_00 != (SpawnRoleTierEditorMenu *)0x0) {
        SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
                  (this_00,value,(MethodInfo *)0x0);
        pSVar7 = (this->fields).skillsEditorMenu;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar7 != (SpawnRoleSkillsEditor *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pSVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pSVar7 = (this->fields).skillsEditorMenu;
            if (pSVar7 != (SpawnRoleSkillsEditor *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Count__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<SkillSettingBase>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar8 = (pSVar7->fields).skillSettingList;
              (pSVar7->fields).spawnRoleCost = value;
              uVar9 = 0;
              if (pLVar8 != (List_1_SkillSettingBase_ *)0x0) {
                lVar10 = 0x20;
                do {
                  if ((pLVar8->fields)._size <= (int)uVar9) {
                    return;
                  }
                  pLVar8 = (pSVar7->fields).skillSettingList;
                  if (pLVar8 == (List_1_SkillSettingBase_ *)0x0) break;
                  if ((uint)(pLVar8->fields)._size <= uVar9) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pSVar12 = (pLVar8->fields)._items;
                  if (pSVar12 == (SkillSettingBase__Array *)0x0) break;
                  if ((uint)pSVar12->max_length <= uVar9) {
                    FUN_?();
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar13 = *(longlong *)((longlong)pSVar12->vector + lVar10 + -0x20);
                  if (lVar13 == 0) break;
                  uVar9 = uVar9 + 1;
                  *(int32_t *)(lVar13 + 0x8c) = value;
                  pLVar8 = (pSVar7->fields).skillSettingList;
                  lVar10 = lVar10 + 8;
                } while (pLVar8 != (List_1_SkillSettingBase_ *)0x0);
              }
            }
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <OnSkillsEditPressed>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleEditorMenu::SpawnRoleEditorMenu__OnSkillsEditPressed_b__13_0
               (SpawnRoleEditorMenu *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skillsEditorMenu;
  if (this_00 != (SpawnRoleSkillsEditor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

