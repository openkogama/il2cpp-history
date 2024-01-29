
/* Void ActivateBar(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ActivateBar
               (GameTierProgressBar *this,int32_t barIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar2 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,barIndex,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if ((ProgressBarAndroid *)pGVar2->progressBar != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)pGVar2->progressBar,1.0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar2 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,barIndex
                            ,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if ((ProgressBarAndroid *)pGVar2->disabledProgressBar != (ProgressBarAndroid *)0x0) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    ((ProgressBarAndroid *)pGVar2->disabledProgressBar,1.0,(MethodInfo *)0x0);
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar2 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,
                                barIndex,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar2->tierIconTempUnlock != (GameObject *)0x0) {
              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar2->tierIconTempUnlock,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return;
              }
              pLVar1 = (this->fields).tierProgressDataList;
              if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar2 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,
                                    barIndex,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
                if (pGVar2->tierIconTempUnlock != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2->tierIconTempUnlock,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 CalculateGamePointsFromTierProgress(Single, GamePassTier) */

int32_t Assembly-CSharp.dll::GameTierProgressBar::
        GameTierProgressBar_CalculateGamePointsFromTierProgress
                  (GameTierProgressBar *this,float totalProgressValue,
                  GamePassTier__Enum tierToCalculateTo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_3 = CONCAT31(GStack_3._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,iVar2,GStack_3,(MethodInfo *)0x0);
      iVar4 = 1;
      if ((tierToCalculateTo & 0xff) != GamePassTier__Enum_Tier0) {
        do {
          key = CONCAT31((int3)((uint)in_stack_5 >> 8),(char)iVar4);
          if (((this_01 ==
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) ||
              (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar6 == (Object *)0x0)) ||
             (in_stack_5 =
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
             , pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar6 == (Object *)0x0)) goto code_?;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= (int)key);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar7 = (float10)func_?();
      return (int)fVar7;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  iVar2 = (*pcVar8)();
  return iVar2;
}


/* Int32 CalculateGamePointsFromTotalProgress(Single) */

int32_t Assembly-CSharp.dll::GameTierProgressBar::
        GameTierProgressBar_CalculateGamePointsFromTotalProgress
                  (GameTierProgressBar *this,float totalProgressValue,MethodInfo *method)

{
  iVar1 = GameTierProgressBar_CalculateGamePointsFromTierProgress
                    (this,totalProgressValue,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  return iVar1;
}


/* Single CalculateTotalProgressValue(Int32) */

float Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CalculateTotalProgressValue
                (GameTierProgressBar *this,int32_t gamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,GStack_2,(MethodInfo *)0x0);
      fStack_3 = 0.0;
      key = 1;
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        while (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar4 != (Object *)0x0) {
          pOVar5 = pOVar4[3].klass;
          if ((int)pOVar5 < 1) {
            fStack_3 = 0.0;
            iVar6 = gamePoints;
          }
          else {
            iVar6 = gamePoints - (int)pOVar5;
            fVar7 = (float)gamePoints / (float)(int)pOVar5;
            fVar8 = _UNK_?;
            if ((fVar7 <= _UNK_?) && (fVar8 = fVar7, fVar7 < 0.0)) {
              fVar8 = 0.0;
            }
            fStack_3 = fVar8 + fStack_3;
          }
          key = key + 1;
          gamePoints = iVar6;
          if (3 < (int)key) {
            return fStack_3;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* Boolean CanShowFreeTryBubble() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CanShowFreeTryBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    uVar4 = (pPVar1->fields).gamePassTier;
    MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (uVar4 != 3) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      if ((MVar5 != MVGameMode__Enum_Edit && (pPVar1->fields).previewGamePassTier == 0) &&
         (bVar3 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0),
         bVar3 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}


/* Void CreateAvatarHeadImages() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CreateAvatarHeadImages
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&
                    AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_Avatar_Head_preview);
    func_?(&StringLiteral_Head);
    cRam_? = '\x01';
  }
  GameTierProgressBar_DestroyHeadPreview(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).previewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar1 = (AvatarPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pAVar1,
                      AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                     );
  (this->fields).headPreviewer = pAVar1;
  func_?(&(this->fields).headPreviewer,pAVar1);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((this_01 != (MVLocalPlayer *)0x0) &&
      (this_02 = MVLocalPlayer::MVLocalPlayer_get_Body(this_01,(MethodInfo *)0x0),
      this_02 != (MVBody *)0x0)) &&
     (pMStack_2 = MVBody::MVBody_GetBodyPart(this_02,StringLiteral_Head,(MethodInfo *)0x0),
     pMStack_2 != (MVCubeModelInstance *)0x0)) {
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)(pMStack_2->fields)._._.gameObject,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    pGStack_4 = pGVar3;
    layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Preview,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar3,layer,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      pOStack_5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren
                            (pGVar3,
                             UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                            );
      uVar6 = 0;
      if (pOStack_5 != (Object__Array *)0x0) {
        ppOStack_7 = pOStack_5->vector;
code_?:
        if ((int)uVar6 < (int)pOStack_5->max_length) {
          uVar8 = 0;
          iVar9 = 0x10;
code_?:
          if (uVar6 < pOStack_5->max_length) {
            if (((Renderer *)*ppOStack_7 == (Renderer *)0x0) ||
               (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                   ((Renderer *)*ppOStack_7,(MethodInfo *)0x0),
               pMVar10 == (Material__Array *)0x0)) goto code_?;
            if ((int)pMVar10->max_length <= (int)uVar8) goto code_?;
            if (pOStack_5->max_length <= uVar6) goto code_?;
            if (((Renderer *)*ppOStack_7 == (Renderer *)0x0) ||
               (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                   ((Renderer *)*ppOStack_7,(MethodInfo *)0x0),
               pMVar10 == (Material__Array *)0x0)) goto code_?;
            if (pMVar10->max_length <= uVar8) goto code_?;
            pMVar11 = *(Material **)((int)pMVar10->vector + iVar9 + -0x10);
            if (pMVar11 == (Material *)0x0) goto code_?;
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                              (pMVar11,StringLiteral__Color,(MethodInfo *)0x0);
            if (bVar12 == 0) {
code_?:
              uVar8 = uVar8 + 1;
              iVar9 = iVar9 + 4;
              goto code_?;
            }
            if (uVar6 < pOStack_5->max_length) {
              if (((Renderer *)*ppOStack_7 == (Renderer *)0x0) ||
                 (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                     ((Renderer *)*ppOStack_7,(MethodInfo *)0x0),
                 pMVar10 == (Material__Array *)0x0)) goto code_?;
              if (pMVar10->max_length <= uVar8) goto code_?;
              pMVar11 = *(Material **)((int)pMVar10->vector + iVar9 + -0x10);
              if (pMVar11 == (Material *)0x0) goto code_?;
              pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                 ((Color *)auStack_14,pMVar11,(MethodInfo *)0x0);
              fStack_15 = pCVar13->r;
              uStack_16._0_4_ = pCVar13->g;
              uStack_16._4_4_ = pCVar13->b;
              fStack_17 = 1.0;
              if (uVar6 < pOStack_5->max_length) {
                if (((Renderer *)*ppOStack_7 == (Renderer *)0x0) ||
                   (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_materials((Renderer *)*ppOStack_7,(MethodInfo *)0x0),
                   pMVar10 == (Material__Array *)0x0)) goto code_?;
                if (uVar8 < pMVar10->max_length) {
                  pMVar11 = *(Material **)((int)pMVar10->vector + iVar9 + -0x10);
                  if (pMVar11 != (Material *)0x0) {
                    value_00.g = (float)(undefined4)uStack_16;
                    value_00.r = fStack_15;
                    value_00.b = (float)uStack_16._4_4_;
                    value_00.a = fStack_17;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (pMVar11,value_00,(MethodInfo *)0x0);
                    goto code_?;
                  }
                  goto code_?;
                }
              }
            }
          }
code_?:
          func_?();
          goto code_?;
        }
        pGVar3 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                  (pGVar3,(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        (this->fields).previewHeadRoot = pTVar18;
        func_?();
        pAVar1 = (this->fields).headPreviewer;
        uStack_16 = 0xbf00000000000000;
        fStack_17 = -1.0;
        auStack_14._4_4_ = 100.0;
        fStack_19 = 100.0;
        fStack_20 = 100.0;
        if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
        cameraOffset.z = -1.0;
        cameraOffset.x = 0.0;
        cameraOffset.y = -0.5;
        previewPosition.z = 100.0;
        previewPosition.x = 100.0;
        previewPosition.y = 100.0;
        AvatarPreviewer::AvatarPreviewer_Initialize
                  (pAVar1,0x80,0x80,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,
                   cameraOffset,(this->fields).previewHeadRoot,previewPosition,
                   StringLiteral_Avatar_Head_preview,(MVWorldObjectClient *)pMStack_2,pGStack_4,
                   (Vector3)ZEXT812(0x41700000),(MethodInfo *)0x0);
        pAVar1 = (this->fields).headPreviewer;
        if (((pAVar1 == (AvatarPreviewer *)0x0) ||
            (this_00 = (pAVar1->fields).previewCam, this_00 == (Camera *)0x0)) ||
           (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_00,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0)
           ) goto code_?;
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)(auStack_14 + 4),pTVar18,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar21->x;
        uStack_16._4_4_ = pVVar21->y;
        fStack_17 = pVVar21->z + 0.0;
        value.y = (float)uStack_16._4_4_ + _UNK_?;
        value.x = (float)(undefined4)uStack_16 + 0.0;
        value.z = fStack_17;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar18,value,(MethodInfo *)0x0);
        pAVar1 = (this->fields).headPreviewer;
        if ((pAVar1 == (AvatarPreviewer *)0x0) ||
           (pGVar3 = (pAVar1->fields)._PreviewGameObject_k__BackingField,
           pGVar3 == (GameObject *)0x0)) goto code_?;
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        uStack_16 = 0x4363000000000000;
        fStack_17 = 0.0;
        if (pTVar18 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                  (pTVar18,(Vector3)ZEXT812(0x4363000000000000),(MethodInfo *)0x0);
        iVar9 = 0;
        pLVar22 = (this->fields).tierProgressDataList;
        while (pLVar22 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          if ((pLVar22->fields)._size <= iVar9) {
            return;
          }
          pLVar22 = (this->fields).tierProgressDataList;
          if (pLVar22 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          pGVar23 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xffffff30,pLVar22,
                               iVar9,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                              );
          pAVar1 = (this->fields).headPreviewer;
          if ((pAVar1 == (AvatarPreviewer *)0x0) || (pGVar23->avatarHeadImage == (RawImage *)0x0))
          break;
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (pGVar23->avatarHeadImage,(Texture *)(pAVar1->fields).previewTexture,
                     (MethodInfo *)0x0);
          iVar9 = iVar9 + 1;
          pLVar22 = (this->fields).tierProgressDataList;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  uVar6 = uVar6 + 1;
  ppOStack_7 = ppOStack_7 + 1;
  goto code_?;
}


/* Void DeactivateBar(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DeactivateBar
               (GameTierProgressBar *this,int32_t barIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar2 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,barIndex,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if ((ProgressBarAndroid *)pGVar2->progressBar != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)pGVar2->progressBar,0.0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar2 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,barIndex
                            ,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if ((ProgressBarAndroid *)pGVar2->disabledProgressBar != (ProgressBarAndroid *)0x0) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    ((ProgressBarAndroid *)pGVar2->disabledProgressBar,0.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DeactivateFreeTryBubble() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DeactivateFreeTryBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    this_00 = (this->fields).tierProgressDataList;
    if (this_00 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      pGVar2 = mscorlib.dll::System::Collections::Generic::
               List`1[GameTierProgressBar+TierProgressData]::
               List_1_GameTierProgressBar_TierProgressData__get_Item
                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,this_00,
                          (uint)(pPVar1->fields).gamePassTier,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                         );
      if (pGVar2->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar2->freeTryTextBubble,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DestroyHeadPreview() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DestroyHeadPreview
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewHeadRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewHeadRoot;
    if (pTVar1 == (Transform *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).headPreviewer = (AvatarPreviewer *)0x0;
    func_?();
    (this->fields).previewHeadRoot = (Transform *)0x0;
    func_?(&(this->fields).previewHeadRoot,0);
  }
  return;
}


/* GamePassTier GetCurrentTier() */

GamePassTier__Enum
Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_GetCurrentTier
          (GameTierProgressBar *this,MethodInfo *method)

{
  fVar1 = (this->fields).previousProgressValue;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)fVar1);
  return CONCAT31((int3)((uint)(int)fVar2 >> 8),(char)(int)fVar2 + '\x01');
}


/* Single GetProgressBarPercentage(GamePassTier) */

float Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_GetProgressBarPercentage
                (GameTierProgressBar *this,GamePassTier__Enum tierToShowProgressFor,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,
                           CONCAT31((int3)((uint)in_ECX >> 8),(pPVar1->fields).gamePassTier),
                           (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
        cRam_? = '\x01';
      }
      key = (tierToShowProgressFor & 0xff) - 1;
      if ((int)key < 1) {
        if (this_01 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
      }
      else {
        if (this_01 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar2 == (Object *)0x0) goto code_?;
          playerGamePoints = playerGamePoints - (int)pOVar2[3].klass;
          key = key - 1;
        } while (0 < (int)key);
      }
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                          tierToShowProgressFor,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar2 != (Object *)0x0) {
        fVar3 = (float)playerGamePoints / (float)(int)pOVar2[3].klass;
        if (_UNK_? < fVar3) {
          fVar3 = 1.0;
        }
        return fVar3;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void HandleDisabledProgressBarVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_HandleDisabledProgressBarVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  barIndex = 0;
  while( true ) {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,(uint)(byte)((char)barIndex + 1),(MethodInfo *)0x0);
    if (bVar1 != 0) {
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
    break;
    puVar2 = (undefined4 *)func_?();
    if ((Component *)*puVar2 == (Component *)0x0) break;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*puVar2,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
    break;
    iVar4 = func_?();
    if (*(Component **)(iVar4 + 0x1c) == (Component *)0x0) break;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (*(Component **)(iVar4 + 0x1c),(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    iVar4 = barIndex + 2;
    barIndex = barIndex + 1;
    if (3 < iVar4) {
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleFreeTryVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleFreeTryVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
    pGVar2 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar2->freeTryTextBubble == (GamePassesTextBubble *)0x0) break;
    (pGVar2->freeTryTextBubble->fields).deactivateAfterFade = 1;
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
    pGVar2 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar2->freeTryTextBubble == (GamePassesTextBubble *)0x0) break;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pGVar2->freeTryTextBubble,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    iVar3 = index + 2;
    index = index + 1;
    if (3 < iVar3) {
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleShowTips() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleShowTips
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameTierProgressBar);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&StringLiteral_Progression_locked_while_the_gam);
    func_?(&StringLiteral_Progression_is_disabled_in_stand);
    func_?(&StringLiteral_Progression_is_disabled_in_build);
    func_?(&StringLiteral_Sign_up_to_be_able_to_save_progr);
    cRam_? = '\x01';
  }
  TypeInfo__GameTierProgressBar->static_fields->haveShownTips = 1;
  bVar1 = GameTierProgressBar_ShowFreeTryTextBubble(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if ((pPVar3 != (PlayerPlanetData *)0x0) &&
           (pLVar4 = (this->fields).tierProgressDataList,
           pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
          iVar5 = (pPVar3->fields).gamePassTier - 1;
          if (iVar5 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (pLVar4->fields)._size;
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
          }
          pGVar7 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar4,iVar6,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          if (pGVar7->disabledBarTextBubble != (GamePassesTextBubble *)0x0) {
            GamePassesTextBubble::GamePassesTextBubble_Activate
                      (pGVar7->disabledBarTextBubble,StringLiteral_Progression_is_disabled_in_build,
                       (MethodInfo *)0x0);
            pLVar4 = (this->fields).tierProgressDataList;
            if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar7 = mscorlib.dll::System::Collections::Generic::
                       List`1[GameTierProgressBar+TierProgressData]::
                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                 ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar4,
                                  iVar6,
                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                 );
              if (pGVar7->progressBarTextBubble != (GamePassesTextBubble *)0x0) {
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (pGVar7->progressBarTextBubble,
                           StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar1 == 0) {
          iVar5 = func_?();
          if ((iVar5 != 0) &&
             (pLVar4 = (this->fields).tierProgressDataList,
             pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
            iVar5 = *(byte *)(iVar5 + 0x20) - 1;
            if (iVar5 < 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (pLVar4->fields)._size;
              if (iVar5 <= iVar6) {
                iVar6 = iVar5;
              }
            }
            iVar5 = func_?(&stack0xffffff6c,pLVar4,iVar6);
            if (*(GamePassesTextBubble **)(iVar5 + 0x24) != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (*(GamePassesTextBubble **)(iVar5 + 0x24),
                         StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
              pLVar4 = (this->fields).tierProgressDataList;
              if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar5 = func_?(&stack0xffffff6c,pLVar4,iVar6);
                if (*(GamePassesTextBubble **)(iVar5 + 0xc) != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (*(GamePassesTextBubble **)(iVar5 + 0xc),
                             StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          if ((this->fields).hideSignUp != 0) {
            return;
          }
          pLVar4 = (this->fields).tierProgressDataList;
          if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar5 = func_?(&stack0xffffff6c,pLVar4,0);
            if (*(GamePassesTextBubble **)(iVar5 + 0x24) != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (*(GamePassesTextBubble **)(iVar5 + 0x24),
                         StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
              pLVar4 = (this->fields).tierProgressDataList;
              if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar5 = func_?(&stack0xffffff6c,pLVar4,0);
                if (*(GamePassesTextBubble **)(iVar5 + 0xc) != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (*(GamePassesTextBubble **)(iVar5 + 0xc),
                             StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}


/* Void HandleUnlockedTiersProgressBars() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleUnlockedTiersProgressBars
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  barIndex = 0;
  do {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,(uint)(byte)((char)barIndex + 1),(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar4 = func_?(&stack0xffffff6c,pLVar2,barIndex);
      if (*(ProgressBarAndroid **)(iVar4 + 0x1c) == (ProgressBarAndroid *)0x0)
      goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (*(ProgressBarAndroid **)(iVar4 + 0x1c),1.0,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      puVar5 = (undefined4 *)func_?(&stack0xffffff6c,pLVar2,barIndex);
      if ((ProgressBarAndroid *)*puVar5 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)*puVar5,1.0,(MethodInfo *)0x0);
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    iVar4 = barIndex + 2;
    barIndex = barIndex + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}


/* Boolean HasAnyTempTier() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HasAnyTempTier
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (pPVar1->fields).previewGamePassTier != 0;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean HasTempTier(GamePassTier) */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HasTempTier
               (GameTierProgressBar *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      if ((undefined1)tier != uVar2) {
        return 0;
      }
      return (undefined1)tier != (pPVar1->fields).gamePassTier;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Initialize
               (GameTierProgressBar *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    func_?(&MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__);
    func_?(&MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_);
    func_?(&MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_);
    func_?(&MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    pAVar3 = (Action *)0x0;
code_?:
    func_?(&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated,pAVar3);
    pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
      pAVar3 = (Action *)0x0;
    }
    else {
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      pAVar4 = TypeInfo__System__Action;
      if (pAVar3 == (Action *)0x0) goto code_?;
    }
    func_?(&TypeInfo__GamePassProgressionController->static_fields->
                     OnGamePassesProgressionUpdate,pAVar3);
    pAVar5 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar6 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar6,(Object *)this,MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar5 = TypeInfo__GamePointGainEffectManager->static_fields->
                OnTierProgressBarGamePointGainEffectShown;
      pUVar6 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        this_00 = (this->fields).embeddedPlayerConfig;
        if (this_00 != (EmbeddedPlayerConfig *)0x0) {
          pEVar8 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                              ((EmbeddedSiteConfigData *)&stack0xffffff58,this_00,(MethodInfo *)0x0)
          ;
          uVar9 = pEVar8->hideSignUp;
          (this->fields).hideSignUp = uVar9;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar10 != (PlayerPlanetData *)0x0) {
            playerGamePoints = (pPVar10->fields).progressionGamePoints;
            GameTierProgressBar_UpdateProgressBars(this,playerGamePoints,(MethodInfo *)0x0);
            GameTierProgressBar_UpdateDividerVisibility(this,playerGamePoints,(MethodInfo *)0x0);
            GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
            GameTierProgressBar_UpdateTierIconHoverInput(this,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this = (GameTierProgressBar *)0x0;
            do {
              bVar11 = GameTierProgressBar_IsTierUnlocked
                                (this_01,(uint)(byte)((char)this + 1),(MethodInfo *)0x0);
              if (bVar11 != 0) {
                GameTierProgressBar_ActivateBar(this_01,(int32_t)this,(MethodInfo *)0x0);
              }
              if ((this_01->fields).tierProgressDataList ==
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
              puVar12 = (undefined4 *)func_?();
              if ((Component *)*puVar12 == (Component *)0x0) goto code_?;
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)*puVar12,(MethodInfo *)0x0);
              if ((pGVar13 == (GameObject *)0x0) ||
                 (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar13,0,(MethodInfo *)0x0),
                 (this_01->fields).tierProgressDataList ==
                 (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
              iVar14 = func_?();
              if (*(Component **)(iVar14 + 0x1c) == (Component *)0x0) goto code_?;
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (*(Component **)(iVar14 + 0x1c),(MethodInfo *)0x0);
              if (pGVar13 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,1,(MethodInfo *)0x0);
              ppGVar15 = &this->klass;
              this = (GameTierProgressBar *)((int)&this->klass + 1);
            } while ((int)((int)ppGVar15 + 2) < 4);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            iVar14 = 0;
            while (pLVar16 = (this_01->fields).tierProgressDataList,
                  pLVar16 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar17 = mscorlib.dll::System::Collections::Generic::
                        List`1[GameTierProgressBar+TierProgressData]::
                        List_1_GameTierProgressBar_TierProgressData__get_Item
                                  ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar16,
                                   iVar14,
                                   MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                  );
              if (pGVar17->freeTryTextBubble == (GamePassesTextBubble *)0x0) break;
              (pGVar17->freeTryTextBubble->fields).deactivateAfterFade = 1;
              pLVar16 = (this_01->fields).tierProgressDataList;
              if (pLVar16 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
              pGVar17 = mscorlib.dll::System::Collections::Generic::
                        List`1[GameTierProgressBar+TierProgressData]::
                        List_1_GameTierProgressBar_TierProgressData__get_Item
                                  ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar16,
                                   iVar14,
                                   MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                  );
              if ((pGVar17->freeTryTextBubble == (GamePassesTextBubble *)0x0) ||
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject
                                      ((Component *)pGVar17->freeTryTextBubble,(MethodInfo *)0x0),
                 pGVar13 == (GameObject *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,0,(MethodInfo *)0x0);
              iVar18 = iVar14 + 2;
              iVar14 = iVar14 + 1;
              if (3 < iVar18) {
                fVar19 = GameTierProgressBar_CalculateTotalProgressValue
                                   (this_01,playerGamePoints,(MethodInfo *)0x0);
                (this_01->fields).previousProgressValue = fVar19;
                (this_01->fields).interpolateTowardsProgressValue = fVar19;
                GameTierProgressBar_CreateAvatarHeadImages(this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      pAVar5 = (Action_1_Int32_ *)func_?();
      if (pAVar5 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = pAVar5;
        iVar14 = func_?();
        if (iVar14 != 0) goto code_?;
      }
    }
    else {
      pAVar5 = (Action_1_Int32_ *)func_?();
      if (pAVar5 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar5;
        iVar14 = func_?();
        if (iVar14 != 0) goto code_?;
      }
    }
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      pAVar4 = TypeInfo__System__Action;
      if (pAVar3 == (Action *)0x0) goto code_?;
      goto code_?;
    }
code_?:
    func_?(pAVar1,TypeInfo__System__Action);
code_?:
    func_?();
  }
  func_?();
  pAVar1 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar1,pAVar4);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Boolean IsProgressBarEnabled() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_IsProgressBarEnabled
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
      (PlayerTierStateCalculator *)0x0) {
    return (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
           gamePassRewardsActivated != 0;
  }
  return 0;
}


/* Boolean IsTierUnlocked(GamePassTier) */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_IsTierUnlocked
               (GameTierProgressBar *this,GamePassTier__Enum tierToCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,GStack_2,(MethodInfo *)0x0);
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                            (ByteEnum__Enum)
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          return pOVar3[1].klass == (Object__Class *)0x0;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnActiveProgressBarClicked(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnActiveProgressBarClicked
               (GameTierProgressBar *this,int32_t progressBarNumberPressed,MethodInfo *method)

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
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GameTierProgressBar____c__DisplayClass25_0___OnActiveProgressBarClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GameTierProgressBar____c__DisplayClass25_0);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 != 0) {
    method_00 = TypeInfo__GameTierProgressBar____c__DisplayClass25_0;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pGVar2 = (this->fields).touristInformationPopup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar3 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (value == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    value[1].klass = pOVar3;
    func_?(value + 1);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GameTierProgressBar____c__DisplayClass25_0___OnActiveProgressBarClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnDestroy
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    func_?(&MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__);
    func_?(&MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_);
    func_?(&MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_);
    func_?(&MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
    }
    else {
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3
      ;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
    }
    func_?();
    pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar5 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar5,(Object *)this,MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      pUVar5 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        GameTierProgressBar_DestroyHeadPreview(this,(MethodInfo *)0x0);
        return;
      }
      pAVar4 = (Action_1_Int32_ *)func_?();
      if (pAVar4 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = pAVar4;
        iVar7 = func_?();
        if (iVar7 != 0) goto code_?;
      }
    }
    else {
      pAVar4 = (Action_1_Int32_ *)func_?();
      if (pAVar4 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar4;
        iVar7 = func_?();
        if (iVar7 != 0) goto code_?;
      }
    }
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnDisable
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
      (GameSessionData *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
           (PlayerTierStateCalculator *)0x0) &&
         ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
          gamePassRewardsActivated != 0)) {
        (this->fields).previousProgressValue = (this->fields).interpolateTowardsProgressValue;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
        playerGamePoints = (pPVar3->fields).progressionGamePoints;
        GameTierProgressBar_UpdateProgressBars(this,playerGamePoints,(MethodInfo *)0x0);
        GameTierProgressBar_UpdateDividerVisibility(this,playerGamePoints,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnEnable
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameTierProgressBar);
    func_?(&StringLiteral_Ranku000A);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).interpolationStartTime = fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    iVar4 = (pPVar3->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    if (((iVar4 != TypeInfo__GamePointGainEffectManager->static_fields->
                   progressBarGamePointAmountShown) &&
        (TypeInfo__GameTierProgressBar->static_fields->haveShownTips != 0)) &&
       ((this->fields).hasShownRankTip == 0)) {
      iVar5 = func_?(0);
      if (iVar5 == 0) goto code_?;
      if ((*(int *)(iVar5 + 0x14) != 0) &&
         (bVar6 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
         , bVar6 == 0)) {
        (this->fields).hasShownRankTip = 1;
        iVar5 = func_?(0);
        if (iVar5 == 0) {
code_?:
          func_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        IStack_1.m_value = *(int32_t *)(iVar5 + 0xc);
        this_00 = (this->fields).highScoreTipTextBubble;
        pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Ranku000A,pSVar8,(MethodInfo *)0x0);
        if (this_00 == (GamePassesTextBubble *)0x0) goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar8,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown = iVar4;
    if (TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown != (Action_1_Int32_ *)0x0) {
      pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,iVar4,(pAVar9->fields)._._.method);
    }
  }
  GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateTierIconHoverInput(this,(MethodInfo *)0x0);
  return;
}


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHaveShownGainEffect
               (GameTierProgressBar *this,int32_t newGamePointAmountShown,MethodInfo *method)

{
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue
                    (this,newGamePointAmountShown,(MethodInfo *)0x0);
  (this->fields).previousProgressValue = fVar1;
  GameTierProgressBar_UpdateProgressBars(this,newGamePointAmountShown,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateDividerVisibility(this,newGamePointAmountShown,(MethodInfo *)0x0);
  return;
}


/* Void OnHaveShownTierProgressBarGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_OnHaveShownTierProgressBarGainEffect
               (GameTierProgressBar *this,int32_t newGamePointAmountShown,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      fVar2 = GameTierProgressBar_CalculateTotalProgressValue
                        (this,newGamePointAmountShown,(MethodInfo *)0x0);
      (this->fields).previousProgressValue = fVar2;
      GameTierProgressBar_UpdateProgressBars(this,newGamePointAmountShown,(MethodInfo *)0x0);
      GameTierProgressBar_UpdateDividerVisibility(this,newGamePointAmountShown,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHeadClick() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHeadClick
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&StringLiteral__Crystals_to_go_);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  pOStack_2 = (Object__Class *)(this->fields).previousProgressValue;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar3 = (float10)func_?((double)(float)pOStack_2);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar4 = CONCAT44(unaff_EBX,unaff_ESI);
  pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar5 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar5->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar5 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      pOStack_2 = (Object__Class *)CONCAT31(pOStack_2._1_3_,(pPVar5->fields).gamePassTier);
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,(GamePassTier__Enum)pOStack_2,(MethodInfo *)0x0)
      ;
      if (this_02 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        bVar6 = (char)(int)fVar3 + 1;
        uVar4 = (ulonglong)CONCAT14(bVar6,this_02);
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,(uint)bVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 != (Object *)0x0) {
          pOStack_2 = pOVar7[3].klass;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          key = (ByteEnum__Enum)(byte)((char)(int)fVar3 + 1);
          while (key = key - 1, 0 < (int)key) {
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar7 == (Object *)0x0) goto code_?;
            playerGamePoints = playerGamePoints - (int)pOVar7[3].klass;
          }
          IStack_1.m_value = (int)pOStack_2 - playerGamePoints;
          pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_3
                             (pSVar8,StringLiteral__Crystals_to_go_,(MethodInfo *)0x0);
          this_01 = (this->fields).tierProgressDataList;
          if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar9 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,this_01,
                                (int)fVar3,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar9->avatarHead != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (pGVar9->avatarHead,pSVar8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)(uVar4);
  return;
}


/* Void OnHoverEnter() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHoverEnter
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&StringLiteral_FREE_TRY);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar1->fields).gamePassTier;
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (uVar3 == 3) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 != (PlayerPlanetData *)0x0) {
        if (MVar4 == MVGameMode__Enum_Edit || (pPVar1->fields).previewGamePassTier != 0) {
          return;
        }
        bVar5 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar6->fields)._GameTierShopRepository_k__BackingField,
           this_00 != (GameTierShopRepository *)0x0)) {
          pDVar7 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                             (this_00,(uint)(byte)(bVar2 + 1),(MethodInfo *)0x0);
          if (pDVar7 == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                        0x0) {
            return;
          }
          pLVar8 = (this->fields).tierProgressDataList;
          if (pLVar8 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar9 = mscorlib.dll::System::Collections::Generic::
                      List`1[GameTierProgressBar+TierProgressData]::
                      List_1_GameTierProgressBar_TierProgressData__get_Item
                                ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar8,
                                 (uint)bVar2,
                                 MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                );
            if (pGVar9->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
              if ((pGVar9->freeTryTextBubble->fields).isActive != 0) {
                return;
              }
              if ((this->fields).tierProgressDataList !=
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar10 = func_?();
                if ((*(Component **)(iVar10 + 0x3c) != (Component *)0x0) &&
                   (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject
                                        (*(Component **)(iVar10 + 0x3c),(MethodInfo *)0x0),
                   this_02 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_02,1,(MethodInfo *)0x0);
                  pLVar8 = (this->fields).tierProgressDataList;
                  if (pLVar8 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    iVar10 = func_?(&stack0xffffff58,pLVar8,(uint)bVar2,
                                             MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                            );
                    this_01 = *(GamePassesTextBubble **)(iVar10 + 0x3c);
                    textBubbleText = TM::TM__(StringLiteral_FREE_TRY,(MethodInfo *)0x0);
                    if (this_01 != (GamePassesTextBubble *)0x0) {
                      GamePassesTextBubble::GamePassesTextBubble_Activate
                                (this_01,textBubbleText,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnInactiveProgressBarClicked(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnInactiveProgressBarClicked
               (GameTierProgressBar *this,int32_t progressBarNumberPressed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&StringLiteral_Progression_is_disabled_in_Stand);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierProgressDataList;
  if (this_00 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar1 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&pPStack_2,this_00,
                        progressBarNumberPressed,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar1->disabledBarTextBubble != (GamePassesTextBubble *)0x0) {
      GamePassesTextBubble::GamePassesTextBubble_Activate
                (pGVar1->disabledBarTextBubble,StringLiteral_Progression_is_disabled_in_Stand,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnPlayerPlanetDataUpdated
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
             (PlayerTierStateCalculator *)0x0) &&
           ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
            gamePassRewardsActivated != 0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            fVar4 = GameTierProgressBar_CalculateTotalProgressValue
                               (this,(pPVar3->fields).progressionGamePoints,(MethodInfo *)0x0);
            (this->fields).interpolateTowardsProgressValue = fVar4;
            if ((this->fields).previousProgressValue != fVar4) {
              (this->fields).shouldInterpolate = 1;
            }
            if ((this->fields).tierProgressDataList !=
                (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar5 = func_?();
              if (((this->fields).shouldInterpolate != 0) &&
                 (fStack_6 = (this->fields).interpolateTowardsProgressValue - (float)iVar5,
                 _UNK_? < fStack_6)) {
                do {
                  pLVar7 = (this->fields).tierProgressDataList;
                  if (pLVar7 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                  goto code_?;
                  pGVar8 = mscorlib.dll::System::Collections::Generic::
                           List`1[GameTierProgressBar+TierProgressData]::
                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                     ((GameTierProgressBar_TierProgressData *)&stack0xffffff68,
                                      pLVar7,iVar5,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
                  if (fStack_6 < 0.0) {
                    fVar4 = 0.0;
                  }
                  else {
                    fVar4 = fStack_6;
                    if (_UNK_? < fStack_6) {
                      fVar4 = _UNK_?;
                    }
                  }
                  if ((ProgressBarAndroid *)pGVar8->endResultProgressBar ==
                      (ProgressBarAndroid *)0x0) goto code_?;
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            ((ProgressBarAndroid *)pGVar8->endResultProgressBar,fVar4,
                             (MethodInfo *)0x0);
                  fStack_6 = fStack_6 - _UNK_?;
                  iVar5 = iVar5 + 1;
                } while (_UNK_? < fStack_6);
              }
              if (cRam_? == '\0') {
                func_?(&TypeInfo__GamePassesManager);
                cRam_? = '\x01';
              }
              pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar3 != (PlayerPlanetData *)0x0) {
                GameTierProgressBar_UpdateProgressBars
                          (this,(pPVar3->fields).progressionGamePoints,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                if (pPVar3 != (PlayerPlanetData *)0x0) {
                  GameTierProgressBar_UpdateDividerVisibility
                            (this,(pPVar3->fields).progressionGamePoints,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      iVar5 = 0;
      do {
        bVar2 = GameTierProgressBar_IsTierUnlocked
                          (this,(uint)(byte)((char)iVar5 + 1),(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((this->fields).tierProgressDataList ==
              (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
          iVar9 = func_?();
          if (*(ProgressBarAndroid **)(iVar9 + 0x1c) == (ProgressBarAndroid *)0x0)
          goto code_?;
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (*(ProgressBarAndroid **)(iVar9 + 0x1c),1.0,(MethodInfo *)0x0);
          pLVar7 = (this->fields).tierProgressDataList;
          if (pLVar7 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
          puVar10 = (undefined4 *)
                    func_?(&stack0xffffff68,pLVar7,iVar5,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
          if ((ProgressBarAndroid *)*puVar10 == (ProgressBarAndroid *)0x0) goto code_?;
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    ((ProgressBarAndroid *)*puVar10,1.0,(MethodInfo *)0x0);
          GameTierProgressBar_ActivateBar(this,iVar5,(MethodInfo *)0x0);
        }
        iVar9 = iVar5 + 2;
        iVar5 = iVar5 + 1;
        if (3 < iVar9) {
          return;
        }
      } while( true );
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      bVar11 = (pPVar3->fields).gamePassTier;
      iVar5 = 2;
      do {
        if ((int)(bVar11 - 1) < iVar5) {
          GameTierProgressBar_DeactivateBar(this,iVar5,(MethodInfo *)0x0);
        }
        else {
          GameTierProgressBar_ActivateBar(this,iVar5,(MethodInfo *)0x0);
        }
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      return;
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::GameTierProgressBar::
        GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                  (GameTierProgressBar *this,GamePassTier__Enum gamePassTierToDisplay,
                  int32_t gamePoints,
                  Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  key = (gamePassTierToDisplay & 0xff) - 1;
  if (0 < (int)key) {
    if (gameTierShopStatus ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    do {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      gamePoints = gamePoints - (int)pOVar3[3].klass;
      key = key - 1;
    } while (0 < (int)key);
  }
  return gamePoints;
}


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ReplayGainEffect
               (GameTierProgressBar *this,int32_t previousGamePointAmount,int32_t newGamePointAmount
               ,MethodInfo *method)

{
  GameTierProgressBar_UpdateProgressBars(this,previousGamePointAmount,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateDividerVisibility(this,previousGamePointAmount,(MethodInfo *)0x0);
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue
                    (this,previousGamePointAmount,(MethodInfo *)0x0);
  (this->fields).previousProgressValue = fVar1;
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue(this,newGamePointAmount,(MethodInfo *)0x0)
  ;
  (this->fields).interpolateTowardsProgressValue = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).shouldInterpolate = 1;
  bVar2 = cRam_? == '\0';
  (this->fields).interpolationStartTime = fVar1;
  if (bVar2) {
    ppGStack3 = &TypeInfo__GamePointGainEffectManager;
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       newGamePointAmount;
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
      != (Action_1_Int32_ *)0x0) {
    pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    ppGStack3 = (pAVar4->fields)._._.method;
    puStack5 = (undefined *)newGamePointAmount;
    pvStack6 = (pAVar4->fields)._._.method_code;
    (*(pAVar4->fields)._._.invoke_impl)();
  }
  return;
}


/* IEnumerator ScaleAndFadeLockForTier(Int32) */

IEnumerator *
Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ScaleAndFadeLockForTier
          (GameTierProgressBar *this,int32_t tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)tier;
  return (IEnumerator *)value;
}


/* Void SetLockedStateForTier(Int32, Boolean) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_SetLockedStateForTier
               (GameTierProgressBar *this,int32_t tier,bool tierUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  value = _UNK_?;
  if (tierUnlocked != 0) {
    value = 0.0;
  }
  this_01 = (this->fields).tierProgressDataList;
  if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar1 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&pPStack_2,this_01,tier,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    this_00 = pGVar1->LockedTierIcon;
    if ((CanvasGroup *)this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                ((CanvasGroup *)this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ShowFreeTryTextBubble() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ShowFreeTryTextBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&StringLiteral_FREE_TRY);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar1->fields).gamePassTier;
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (uVar3 == 3) {
        return 0;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 != (PlayerPlanetData *)0x0) {
        if (MVar4 == MVGameMode__Enum_Edit || (pPVar1->fields).previewGamePassTier != 0) {
          return 0;
        }
        bVar5 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
        if (bVar5 == 0) {
          return 0;
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar6->fields)._GameTierShopRepository_k__BackingField,
           this_00 != (GameTierShopRepository *)0x0)) {
          pDVar7 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                             (this_00,(uint)(byte)(bVar2 + 1),(MethodInfo *)0x0);
          if (pDVar7 == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                        0x0) {
            return 0;
          }
          pLVar8 = (this->fields).tierProgressDataList;
          if (pLVar8 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar9 = mscorlib.dll::System::Collections::Generic::
                      List`1[GameTierProgressBar+TierProgressData]::
                      List_1_GameTierProgressBar_TierProgressData__get_Item
                                ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar8,
                                 (uint)bVar2,
                                 MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                );
            if (pGVar9->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
              if ((pGVar9->freeTryTextBubble->fields).isActive != 0) {
                return 1;
              }
              if ((this->fields).tierProgressDataList !=
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar10 = func_?();
                if ((*(Component **)(iVar10 + 0x3c) != (Component *)0x0) &&
                   (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject
                                        (*(Component **)(iVar10 + 0x3c),(MethodInfo *)0x0),
                   this_02 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_02,1,(MethodInfo *)0x0);
                  pLVar8 = (this->fields).tierProgressDataList;
                  if (pLVar8 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    iVar10 = func_?(&stack0xffffff58,pLVar8,(uint)bVar2,
                                             MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                            );
                    this_01 = *(GamePassesTextBubble **)(iVar10 + 0x3c);
                    textBubbleText = TM::TM__(StringLiteral_FREE_TRY,(MethodInfo *)0x0);
                    if (this_01 != (GamePassesTextBubble *)0x0) {
                      GamePassesTextBubble::GamePassesTextBubble_Activate
                                (this_01,textBubbleText,(MethodInfo *)0x0);
                      return 1;
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
  pcVar11 = (code *)swi(3);
  bVar5 = (*pcVar11)();
  return bVar5;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Start
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GameTierProgressBar->static_fields->haveShownTips != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameTierProgressBar);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&StringLiteral_Progression_locked_while_the_gam);
    func_?(&StringLiteral_Progression_is_disabled_in_stand);
    func_?(&StringLiteral_Progression_is_disabled_in_build);
    func_?(&StringLiteral_Sign_up_to_be_able_to_save_progr);
    cRam_? = '\x01';
  }
  TypeInfo__GameTierProgressBar->static_fields->haveShownTips = 1;
  bVar1 = GameTierProgressBar_ShowFreeTryTextBubble(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if ((pPVar3 != (PlayerPlanetData *)0x0) &&
           (pLVar4 = (this->fields).tierProgressDataList,
           pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
          iVar5 = (pPVar3->fields).gamePassTier - 1;
          if (iVar5 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (pLVar4->fields)._size;
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
          }
          pGVar7 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar4,iVar6,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          if (pGVar7->disabledBarTextBubble != (GamePassesTextBubble *)0x0) {
            GamePassesTextBubble::GamePassesTextBubble_Activate
                      (pGVar7->disabledBarTextBubble,StringLiteral_Progression_is_disabled_in_build,
                       (MethodInfo *)0x0);
            pLVar4 = (this->fields).tierProgressDataList;
            if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar7 = mscorlib.dll::System::Collections::Generic::
                       List`1[GameTierProgressBar+TierProgressData]::
                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                 ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar4,
                                  iVar6,
                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                 );
              if (pGVar7->progressBarTextBubble != (GamePassesTextBubble *)0x0) {
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (pGVar7->progressBarTextBubble,
                           StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar1 == 0) {
          iVar5 = func_?();
          if ((iVar5 != 0) &&
             (pLVar4 = (this->fields).tierProgressDataList,
             pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
            iVar5 = *(byte *)(iVar5 + 0x20) - 1;
            if (iVar5 < 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (pLVar4->fields)._size;
              if (iVar5 <= iVar6) {
                iVar6 = iVar5;
              }
            }
            iVar5 = func_?(&stack0xffffff6c,pLVar4,iVar6);
            if (*(GamePassesTextBubble **)(iVar5 + 0x24) != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (*(GamePassesTextBubble **)(iVar5 + 0x24),
                         StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
              pLVar4 = (this->fields).tierProgressDataList;
              if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar5 = func_?(&stack0xffffff6c,pLVar4,iVar6);
                if (*(GamePassesTextBubble **)(iVar5 + 0xc) != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (*(GamePassesTextBubble **)(iVar5 + 0xc),
                             StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          if ((this->fields).hideSignUp != 0) {
            return;
          }
          pLVar4 = (this->fields).tierProgressDataList;
          if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar5 = func_?(&stack0xffffff6c,pLVar4,0);
            if (*(GamePassesTextBubble **)(iVar5 + 0x24) != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (*(GamePassesTextBubble **)(iVar5 + 0x24),
                         StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
              pLVar4 = (this->fields).tierProgressDataList;
              if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar5 = func_?(&stack0xffffff6c,pLVar4,0);
                if (*(GamePassesTextBubble **)(iVar5 + 0xc) != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (*(GamePassesTextBubble **)(iVar5 + 0xc),
                             StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Update
               (GameTierProgressBar *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).shouldInterpolate == 0) {
    return;
  }
  fVar1 = (this->fields).previousProgressValue;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
  fVar3 = (float10)func_?((double)fVar1);
  index = (MonitorData *)(int)fVar3;
  if ((int)index < 0) {
    index = (MonitorData *)0x0;
  }
  else {
    pMVar4 = (MonitorData *)((pLVar2->fields)._size + -1);
    if ((int)pMVar4 < (int)index) {
      index = pMVar4;
    }
  }
  fVar1 = (this->fields).previousProgressValue;
  this = (GameTierProgressBar *)((this->fields).interpolateTowardsProgressValue - (float)(int)index)
  ;
  if ((float)this < 0.0) {
    pGVar5 = (GameTierProgressBar *)0x0;
code_?:
    this = pGVar5;
  }
  else {
    pGVar5 = _UNK_?;
    if ((float)_UNK_? < (float)this) goto code_?;
  }
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (float)(int)index;
  fVar1 = (fVar6 - (this_00->fields).interpolationStartTime) * _UNK_? *
          ((float)this - fVar1) + fVar1;
  if ((this_00->fields).interpolateTowardsProgressValue - (float)(int)index < fVar1) {
    (this_00->fields).shouldInterpolate = 0;
    fVar1 = (this_00->fields).interpolateTowardsProgressValue - (float)(int)index;
  }
  if ((float)_UNK_? <= fVar1) {
    pLVar2 = (this_00->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if ((pGVar7->avatarHeadUI == (GameObject *)0x0) ||
       (pGVar8 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar7->avatarHeadUI,(MethodInfo *)0x0),
       pGVar8 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pLVar2 = (this_00->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar7->progressDivider == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7->progressDivider,0,(MethodInfo *)0x0);
    pLVar2 = (this_00->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar7->disabledProgressDivider == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7->disabledProgressDivider,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this_00;
    func_?(value + 2,this_00);
    value[2].monitor = index;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
    GameTierProgressBar_ActivateBar(this_00,(int32_t)index,(MethodInfo *)0x0);
    pMVar4 = index + 1;
    (this_00->fields).previousProgressValue = (float)(int)pMVar4;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pLVar2 = (this_00->fields).tierProgressDataList;
    (this_00->fields).interpolationStartTime = fVar6;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((int)pMVar4 < (pLVar2->fields)._size) {
      iVar9 = func_?(&stack0xffffff60,pLVar2,pMVar4);
      if ((*(Void **)(iVar9 + 0x18) == (Void *)0x0) ||
         (pGVar8 = (GameObject *)
                   UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1(*(Void **)(iVar9 + 0x18),(MethodInfo *)0x0),
         pGVar8 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
      pLVar2 = (this_00->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar9 = func_?(&stack0xffffff60,pLVar2,pMVar4);
      if (*(GameObject **)(iVar9 + 8) == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar9 + 8),1,(MethodInfo *)0x0);
      pLVar2 = (this_00->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar9 = func_?(&stack0xffffff60,pLVar2,pMVar4);
      if (*(GameObject **)(iVar9 + 0x20) == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar9 + 0x20),1,(MethodInfo *)0x0);
    }
  }
  pLVar2 = (this_00->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if ((ProgressBarAndroid *)pGVar7->progressBar != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)pGVar7->progressBar,fVar1,(MethodInfo *)0x0);
      pLVar2 = (this_00->fields).tierProgressDataList;
      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar7 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if ((ProgressBarAndroid *)pGVar7->disabledProgressBar != (ProgressBarAndroid *)0x0) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    ((ProgressBarAndroid *)pGVar7->disabledProgressBar,fVar1,(MethodInfo *)0x0);
          GameTierProgressBar_UpdateProgressText
                    (this_00,(float)(int)index + fVar1,(uint)(index + 1) & 0xff,(MethodInfo *)0x0);
          return;
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


/* Void UpdateDividerVisibility(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateDividerVisibility
               (GameTierProgressBar *this,int32_t playerGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 == (PlayerPlanetData *)0x0) ||
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 == (PlayerTierStateCalculator *)0x0)) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GStack_3 = CONCAT31(GStack_3._1_3_,(pPVar1->fields).gamePassTier);
    this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,playerGamePoints,GStack_3,(MethodInfo *)0x0);
    bVar4 = false;
    bVar5 = 1;
    iStack_6 = 0;
    do {
      BStack_7 = CONCAT31(BStack_7._1_3_,bVar5);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      key = bVar5 - 1;
      iVar8 = playerGamePoints;
      if (0 < (int)key) {
        if (this_01 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) goto code_?;
          iVar8 = iVar8 - (int)pOVar9[3].klass;
          key = key - 1;
        } while (0 < (int)key);
      }
      if ((this_01 ==
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) || (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BStack_7
                                    ,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar9 == (Object *)0x0)) goto code_?;
      fVar10 = (float)iVar8 / (float)(int)pOVar9[3].klass;
      if ((_UNK_? <= fVar10) || (((_UNK_? <= fVar10 || (fVar10 <= 0.0)) || (bVar4))))
      {
code_?:
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar12 = func_?(&puStack_13,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar12 + 8) == (Void *)0x0) ||
           (pGVar14 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar12 + 8),(MethodInfo *)0x0),
           pGVar14 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,0,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar12 = func_?(&puStack_13,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar12 + 0x18) == (Void *)0x0) ||
           (pGVar14 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar12 + 0x18),(MethodInfo *)0x0),
           pGVar14 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,0,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar12 = func_?(&puStack_13,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar12 + 0x20) == (Void *)0x0) ||
           (pGVar14 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar12 + 0x20),(MethodInfo *)0x0),
           pGVar14 == (GameObject *)0x0)) goto code_?;
        bStack_15 = 0;
      }
      else {
        bVar16 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0);
        if (bVar16 == 0) goto code_?;
        bVar4 = true;
        if ((this->fields).tierProgressDataList ==
            (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar12 = func_?();
        if ((*(Void **)(iVar12 + 8) == (Void *)0x0) ||
           (pGVar14 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar12 + 8),(MethodInfo *)0x0),
           pGVar14 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,1,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar12 = func_?(&puStack_13,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar12 + 0x18) == (Void *)0x0) ||
           (pGVar14 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar12 + 0x18),(MethodInfo *)0x0),
           pGVar14 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,1,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar12 = func_?(&puStack_13,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar12 + 0x20) == (Void *)0x0) ||
           (pGVar14 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar12 + 0x20),(MethodInfo *)0x0),
           pGVar14 == (GameObject *)0x0)) goto code_?;
        bStack_15 = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar14,bStack_15,(MethodInfo *)0x0);
      iStack_6 = iStack_6 + 1;
      bVar5 = bVar5 + 1;
    } while (iStack_6 < 3);
  }
  return;
}


/* Void UpdateEditModeDisabledProgressBars() */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_UpdateEditModeDisabledProgressBars
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    barIndex = 2;
    do {
      if ((int)(bVar2 - 1) < barIndex) {
        GameTierProgressBar_DeactivateBar(this,barIndex,(MethodInfo *)0x0);
      }
      else {
        GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
      }
      barIndex = barIndex + -1;
    } while (-1 < barIndex);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateProgressBar(GamePassTier, Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressBar
               (GameTierProgressBar *this,GamePassTier__Enum progressBarToUpdate,
               int32_t playerGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&::StringLiteral____);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  IStack_2.m_value = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    pLVar3 = (this->fields).tierProgressDataList;
    if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      pGVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[GameTierProgressBar+TierProgressData]::
               List_1_GameTierProgressBar_TierProgressData__get_Item
                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar3,
                          (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                         );
      if ((ProgressBarAndroid *)pGVar4->progressBar != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  ((ProgressBarAndroid *)pGVar4->progressBar,0.0,(MethodInfo *)0x0);
        pLVar3 = (this->fields).tierProgressDataList;
        if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar4 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar3,
                              (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          if (pGVar4->progressText != (Text *)0x0) {
            (*(code *)(pGVar4->progressText->klass->vtable).set_text.method)();
            pLVar3 = (this->fields).tierProgressDataList;
            if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar4 = mscorlib.dll::System::Collections::Generic::
                       List`1[GameTierProgressBar+TierProgressData]::
                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                 ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar3,
                                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                 );
              if ((ProgressBarAndroid *)pGVar4->disabledProgressBar != (ProgressBarAndroid *)0x0) {
                ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          ((ProgressBarAndroid *)pGVar4->disabledProgressBar,0.0,(MethodInfo *)0x0);
                bVar5 = GameTierProgressBar_IsTierUnlocked
                                  (this,progressBarToUpdate,(MethodInfo *)0x0);
                GStack_6 = CONCAT31(GStack_6._1_3_,bVar5);
                GameTierProgressBar_SetLockedStateForTier
                          (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,bVar5,
                           (MethodInfo *)0x0);
                if (bVar5 == 0) {
                  return;
                }
                pLVar3 = (this->fields).tierProgressDataList;
                if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  pGVar4 = mscorlib.dll::System::Collections::Generic::
                           List`1[GameTierProgressBar+TierProgressData]::
                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                     ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,
                                      pLVar3,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1
                                      ,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
                  if ((ProgressBarAndroid *)pGVar4->disabledProgressBar != (ProgressBarAndroid *)0x0
                     ) {
                    ProgressBarAndroid::ProgressBarAndroid_set_Progress
                              ((ProgressBarAndroid *)pGVar4->disabledProgressBar,1.0,
                               (MethodInfo *)0x0);
                    pLVar3 = (this->fields).tierProgressDataList;
                    if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      pGVar4 = mscorlib.dll::System::Collections::Generic::
                               List`1[GameTierProgressBar+TierProgressData]::
                               List_1_GameTierProgressBar_TierProgressData__get_Item
                                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,
                                          pLVar3,(progressBarToUpdate & 0xff) -
                                                 GamePassTier__Enum_Tier1,
                                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                         );
                      if ((ProgressBarAndroid *)pGVar4->progressBar != (ProgressBarAndroid *)0x0) {
                        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                                  ((ProgressBarAndroid *)pGVar4->progressBar,1.0,(MethodInfo *)0x0);
                        GameTierProgressBar_ActivateBar
                                  (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                   (MethodInfo *)0x0);
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
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar7 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_6 = CONCAT31(GStack_6._1_3_,(pPVar7->fields).gamePassTier);
      pDStack_8 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                  PlayerTierStateCalculator_GetTierPricingState
                            (this_00,playerGamePoints,GStack_6,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      key = (progressBarToUpdate & 0xff) - 1;
      if ((int)key < 1) {
        IStack_1.m_value = playerGamePoints;
        IVar9.m_value = IStack_1.m_value;
        if (pDStack_8 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
      }
      else {
        if (pDStack_8 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDStack_8,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar10 == (Object *)0x0) goto code_?;
          playerGamePoints = playerGamePoints - (int)pOVar10[3].klass;
          key = key - 1;
          IVar9.m_value = (int32_t)(Object__Class *)playerGamePoints;
        } while (0 < (int)key);
      }
      IStack_1.m_value = IVar9.m_value;
      pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDStack_8,
                          progressBarToUpdate,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar10 != (Object *)0x0) {
        IStack_2.m_value = (int32_t)pOVar10[3].klass;
        bVar5 = GameTierProgressBar_IsTierUnlocked(this,progressBarToUpdate,(MethodInfo *)0x0);
        GStack_6 = CONCAT31(GStack_6._1_3_,bVar5);
        if (IStack_2.m_value < 1) {
          pLVar3 = (this->fields).tierProgressDataList;
          if (bVar5 == 0) {
            if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar11 = func_?(&stack0xffffff5c,pLVar3,
                                      (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
              if ((*(ProgressBarAndroid **)(iVar11 + 0x1c) != (ProgressBarAndroid *)0x0) &&
                 (ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            (*(ProgressBarAndroid **)(iVar11 + 0x1c),0.0,(MethodInfo *)0x0),
                 (this->fields).tierProgressDataList !=
                 (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
                puVar12 = (undefined4 *)func_?();
                if ((ProgressBarAndroid *)*puVar12 != (ProgressBarAndroid *)0x0) {
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            ((ProgressBarAndroid *)*puVar12,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar11 = func_?(&stack0xffffff5c,pLVar3,
                                    (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
            if ((*(ProgressBarAndroid **)(iVar11 + 0x1c) != (ProgressBarAndroid *)0x0) &&
               (ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          (*(ProgressBarAndroid **)(iVar11 + 0x1c),1.0,(MethodInfo *)0x0),
               (this->fields).tierProgressDataList !=
               (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
              puVar12 = (undefined4 *)func_?();
              if ((ProgressBarAndroid *)*puVar12 != (ProgressBarAndroid *)0x0) {
                ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          ((ProgressBarAndroid *)*puVar12,1.0,(MethodInfo *)0x0);
                GameTierProgressBar_SetLockedStateForTier
                          (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                           (bool)GStack_6,(MethodInfo *)0x0);
                GameTierProgressBar_ActivateBar
                          (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pDStack_8 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                       *)((float)IStack_1.m_value / (float)IStack_2.m_value);
          if (IStack_2.m_value < IStack_1.m_value) {
            IStack_1.m_value = IStack_2.m_value;
          }
          if (IStack_1.m_value < 0) {
            IStack_1.m_value = 0;
          }
          str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
          str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_4
                    (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
          pLVar3 = (this->fields).tierProgressDataList;
          if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar4 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar3,
                                (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if ((ProgressBarAndroid *)pGVar4->progressBar != (ProgressBarAndroid *)0x0) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress
                        ((ProgressBarAndroid *)pGVar4->progressBar,(float)pDStack_8,
                         (MethodInfo *)0x0);
              pLVar3 = (this->fields).tierProgressDataList;
              if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar4 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar3,
                                    (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
                if (pGVar4->progressText != (Text *)0x0) {
                  (*(code *)(pGVar4->progressText->klass->vtable).set_text.method)();
                  pLVar3 = (this->fields).tierProgressDataList;
                  if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    pGVar4 = mscorlib.dll::System::Collections::Generic::
                             List`1[GameTierProgressBar+TierProgressData]::
                             List_1_GameTierProgressBar_TierProgressData__get_Item
                                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,
                                        pLVar3,(progressBarToUpdate & 0xff) -
                                               GamePassTier__Enum_Tier1,
                                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                       );
                    if ((ProgressBarAndroid *)pGVar4->disabledProgressBar !=
                        (ProgressBarAndroid *)0x0) {
                      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                                ((ProgressBarAndroid *)pGVar4->disabledProgressBar,(float)pDStack_8,
                                 (MethodInfo *)0x0);
                      GameTierProgressBar_SetLockedStateForTier
                                (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                 (bool)GStack_6,(MethodInfo *)0x0);
                      if ((float)pDStack_8 < _UNK_?) {
                        return;
                      }
                      GameTierProgressBar_ActivateBar
                                (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                 (MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateProgressBars(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressBars
               (GameTierProgressBar *this,int32_t playerGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  GameTierProgressBar_UpdateProgressBar
            (this,GamePassTier__Enum_Tier1,playerGamePoints,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateProgressBar
            (this,GamePassTier__Enum_Tier2,playerGamePoints,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateProgressBar
            (this,GamePassTier__Enum_Tier3,playerGamePoints,(MethodInfo *)0x0);
  index = 0;
  pLVar1 = (this->fields).gameMeterVisualEffects;
  while (pLVar1 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeterVisualEffects;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                          ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar2 + 0xe0))();
    index = index + 1;
    pLVar1 = (this->fields).gameMeterVisualEffects;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateProgressText(Single, GamePassTier) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressText
               (GameTierProgressBar *this,float totalProgress,GamePassTier__Enum currentTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  IStack_2.m_value = 0;
  IVar3.m_value =
       GameTierProgressBar_CalculateGamePointsFromTierProgress
                 (this,totalProgress,currentTier,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar4->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar4 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      totalProgress = (float)CONCAT31(totalProgress._1_3_,(pPVar4->fields).gamePassTier);
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,(GamePassTier__Enum)totalProgress,
                           (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      key = (currentTier & 0xff) - 1;
      if ((int)key < 1) {
        IStack_1.m_value = IVar3.m_value;
        if (this_02 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
      }
      else {
        if (this_02 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar5 == (Object *)0x0) goto code_?;
          IVar3.m_value = IVar3.m_value - (int)pOVar5[3].klass;
          key = key - 1;
        } while (0 < (int)key);
      }
      IStack_1.m_value = IVar3.m_value;
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,currentTier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar5 != (Object *)0x0) {
        IStack_2.m_value = (int32_t)pOVar5[3].klass;
        str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
        str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4
                  (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
        this_01 = (this->fields).tierProgressDataList;
        if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar6 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,this_01,
                              (currentTier & 0xff) - GamePassTier__Enum_Tier1,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          pTVar7 = pGVar6->progressText;
          if (pTVar7 != (Text *)0x0) {
            (*(code *)(pTVar7->klass->vtable).set_text.method)(pTVar7);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateTempProgressVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateTempProgressVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  value = GameTierProgressBar_HasTempTier(this,GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  bVar1 = GameTierProgressBar_HasTempTier(this,GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
  GameTierProgressBar_HasTempTier(this,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar3 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,0,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar3->tempProgress != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3->tempProgress,value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar3 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,0,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if (pGVar3->disabledTempProgress != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3->disabledTempProgress,value,(MethodInfo *)0x0);
          pLVar2 = (this->fields).tierProgressDataList;
          if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            value_00 = 0;
            pMVar4 = 
            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
            ;
            pGVar3 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,0,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            value_01 = (bool)pMVar4;
            if (pGVar3->tierIconTempUnlock != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3->tierIconTempUnlock,value,(MethodInfo *)0x0);
              pLVar2 = (this->fields).tierProgressDataList;
              if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar3 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                                    0,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
                if (pGVar3->tierIconNumber != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3->tierIconNumber,value ^ 1,(MethodInfo *)0x0);
                  pLVar2 = (this->fields).tierProgressDataList;
                  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    pGVar3 = mscorlib.dll::System::Collections::Generic::
                             List`1[GameTierProgressBar+TierProgressData]::
                             List_1_GameTierProgressBar_TierProgressData__get_Item
                                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,
                                        pLVar2,0,
                                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                       );
                    this_00 = pGVar3->LockedTierIcon;
                    if ((Component *)this_00 != (Component *)0x0) {
                      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                      if (pGVar5 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar5,value ^ 1,(MethodInfo *)0x0);
                        pLVar2 = (this->fields).tierProgressDataList;
                        if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          pGVar3 = mscorlib.dll::System::Collections::Generic::
                                   List`1[GameTierProgressBar+TierProgressData]::
                                   List_1_GameTierProgressBar_TierProgressData__get_Item
                                             ((GameTierProgressBar_TierProgressData *)
                                              &stack0xffffff60,pLVar2,1,
                                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                             );
                          if (pGVar3->tempProgress != (GameObject *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar3->tempProgress,value_01,(MethodInfo *)0x0);
                            pLVar2 = (this->fields).tierProgressDataList;
                            if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                              pGVar3 = mscorlib.dll::System::Collections::Generic::
                                       List`1[GameTierProgressBar+TierProgressData]::
                                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                                 ((GameTierProgressBar_TierProgressData *)
                                                  &stack0xffffff60,pLVar2,1,
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                 );
                              if (pGVar3->disabledTempProgress != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive
                                          (pGVar3->disabledTempProgress,value_01,(MethodInfo *)0x0);
                                pLVar2 = (this->fields).tierProgressDataList;
                                if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                                  pGVar3 = mscorlib.dll::System::Collections::Generic::
                                           List`1[GameTierProgressBar+TierProgressData]::
                                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                                     ((GameTierProgressBar_TierProgressData *)
                                                      &stack0xffffff60,pLVar2,1,
                                                                                                            
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                  if (pGVar3->tierIconTempUnlock != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive
                                              (pGVar3->tierIconTempUnlock,value_01,(MethodInfo *)0x0
                                              );
                                    pLVar2 = (this->fields).tierProgressDataList;
                                    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)
                                                  0x0) {
                                      pGVar3 = mscorlib.dll::System::Collections::Generic::
                                               List`1[GameTierProgressBar+TierProgressData]::
                                               List_1_GameTierProgressBar_TierProgressData__get_Item
                                                         ((GameTierProgressBar_TierProgressData *)
                                                          &stack0xffffff60,pLVar2,1,
                                                                                                                    
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                      if (pGVar3->tierIconNumber != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive
                                                  (pGVar3->tierIconNumber,bVar1 ^ 1,
                                                   (MethodInfo *)0x0);
                                        pLVar2 = (this->fields).tierProgressDataList;
                                        if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_
                                                       *)0x0) {
                                          pGVar3 = mscorlib.dll::System::Collections::Generic::
                                                   List`1[GameTierProgressBar+TierProgressData]::
                                                                                                      
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff60,pLVar2,1,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                          this_01 = pGVar3->LockedTierIcon;
                                          if ((Component *)this_01 != (Component *)0x0) {
                                            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     Component::Component_get_gameObject
                                                               ((Component *)this_01,
                                                                (MethodInfo *)0x0);
                                            if (pGVar5 != (GameObject *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_SetActive
                                                        (pGVar5,bVar1 ^ 1,(MethodInfo *)0x0);
                                              pLVar2 = (this->fields).tierProgressDataList;
                                              if (pLVar2 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                 ) {
                                                pGVar3 = mscorlib.dll::System::Collections::Generic
                                                         ::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff60,pLVar2,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                if (pGVar3->tempProgress != (GameObject *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_SetActive
                                                            (pGVar3->tempProgress,value_00,
                                                             (MethodInfo *)0x0);
                                                  pLVar2 = (this->fields).tierProgressDataList;
                                                  if (pLVar2 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar3 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff60,pLVar2,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  if (pGVar3->disabledTempProgress !=
                                                      (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar3->disabledTempProgress,value_00
                                                               ,(MethodInfo *)0x0);
                                                    pLVar2 = (this->fields).tierProgressDataList;
                                                    if (pLVar2 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar3 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff60,pLVar2,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  if (pGVar3->tierIconTempUnlock !=
                                                      (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar3->tierIconTempUnlock,value_00,
                                                               (MethodInfo *)0x0);
                                                    pLVar2 = (this->fields).tierProgressDataList;
                                                    if (pLVar2 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar3 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff60,pLVar2,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  if (pGVar3->tierIconNumber != (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar3->tierIconNumber,1,
                                                               (MethodInfo *)0x0);
                                                    pLVar2 = (this->fields).tierProgressDataList;
                                                    if (pLVar2 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar3 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff60,pLVar2,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  this_02 = pGVar3->LockedTierIcon;
                                                  if ((Component *)this_02 != (Component *)0x0) {
                                                    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::Component_get_gameObject
                                                                       ((Component *)this_02,
                                                                        (MethodInfo *)0x0);
                                                    if (pGVar5 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar5,1,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTierIconHoverInput() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateTierIconHoverInput
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  index = 0;
  pLVar1 = (this->fields).tierProgressDataList;
  do {
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pLVar1->fields)._size <= index) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        if (bVar4 == 3) {
          return;
        }
        bVar5 = GameTierProgressBar_HasTempTier(this,(uint)(byte)(bVar4 + 1),(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        pLVar1 = (this->fields).tierProgressDataList;
        if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar6 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,
                              (uint)bVar4,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          this_01 = pGVar6->hoverInputHandler;
          if ((HoverInputHandler *)this_01 != (HoverInputHandler *)0x0) {
            HoverInputHandler::HoverInputHandler_SubscribeToHoverInput
                      ((HoverInputHandler *)this_01,(HoverInputReceiver *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar6 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    this_00 = pGVar6->hoverInputHandler;
    if ((HoverInputHandler *)this_00 == (HoverInputHandler *)0x0) goto code_?;
    HoverInputHandler::HoverInputHandler_UnsubscribeToHoverInput
              ((HoverInputHandler *)this_00,(HoverInputReceiver *)this,(MethodInfo *)0x0);
    pLVar1 = (this->fields).tierProgressDataList;
    index = index + 1;
  } while( true );
}


/* GameTierProgressBar() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar__ctor
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields).gameMeterVisualEffects = this_00;
  func_?(&(this->fields).gameMeterVisualEffects,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

