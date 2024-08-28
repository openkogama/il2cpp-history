
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
      fStack_3 = (float)CONCAT31(fStack_3._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,iVar2,(GamePassTier__Enum)fStack_3,(MethodInfo *)0x0);
      iVar4 = 1;
      fStack_3 = 0.0;
      if ((tierToCalculateTo & 0xff) != GamePassTier__Enum_Tier0) {
        do {
          BStack_5 = CONCAT31(BStack_5._1_3_,(char)iVar4);
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BStack_5,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar6 == (Object *)0x0) goto code_?;
          method_00 = pOVar6[3].klass;
          BVar7 = BStack_5;
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BStack_5,
                              (MethodInfo *)method_00);
          if (pOVar6 == (Object *)0x0) goto code_?;
          fVar8 = (float)(int)pOVar6[3].klass * totalProgressValue;
          if ((float)(int)method_00 < fVar8) {
            fVar8 = (float)(int)method_00;
          }
          if (fVar8 < 0.0) {
            fVar8 = 0.0;
          }
          totalProgressValue = totalProgressValue - _UNK_?;
          fStack_3 = fVar8 + fStack_3;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= (int)BVar7);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      fVar9 = (float10)func_?((double)fStack_3);
      return (int)fVar9;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  iVar2 = (*pcVar10)();
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
      while ((this_01 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0 && (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key
                                          ,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar4 != (Object *)0x0))) {
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
    if (uVar4 == 3) {
      bVar6 = true;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      bVar6 = (pPVar1->fields).previewGamePassTier != 0;
    }
    if (MVar5 != MVGameMode__Enum_Edit && !bVar6) {
      bVar3 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
      if (bVar3 != 0) {
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
  ppAVar2 = &(this->fields).headPreviewer;
  *ppAVar2 = pAVar1;
  func_?(ppAVar2,pAVar1);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((this_01 != (MVLocalPlayer *)0x0) &&
      (this_02 = MVLocalPlayer::MVLocalPlayer_get_Body(this_01,(MethodInfo *)0x0),
      this_02 != (MVBody *)0x0)) &&
     (pMStack_3 = MVBody::MVBody_GetBodyPart(this_02,StringLiteral_Head,(MethodInfo *)0x0),
     pMStack_3 != (MVCubeModelInstance *)0x0)) {
    pGVar4 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)(pMStack_3->fields)._._.gameObject,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    pGStack_5 = pGVar4;
    layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Preview,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar4,layer,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      pOStack_6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren
                            (pGVar4,
                             UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                            );
      uVar7 = 0;
      if (pOStack_6 != (Object__Array *)0x0) {
        ppOStack_8 = pOStack_6->vector;
code_?:
        if ((int)uVar7 < (int)pOStack_6->max_length) {
          uVar9 = 0;
          iVar10 = 0x10;
code_?:
          if (uVar7 < pOStack_6->max_length) {
            if (((Renderer *)*ppOStack_8 == (Renderer *)0x0) ||
               (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                   ((Renderer *)*ppOStack_8,(MethodInfo *)0x0),
               pMVar11 == (Material__Array *)0x0)) goto code_?;
            if ((int)pMVar11->max_length <= (int)uVar9) goto code_?;
            if (pOStack_6->max_length <= uVar7) goto code_?;
            if (((Renderer *)*ppOStack_8 == (Renderer *)0x0) ||
               (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                   ((Renderer *)*ppOStack_8,(MethodInfo *)0x0),
               pMVar11 == (Material__Array *)0x0)) goto code_?;
            if (pMVar11->max_length <= uVar9) goto code_?;
            pMVar12 = *(Material **)((int)pMVar11->vector + iVar10 + -0x10);
            if (pMVar12 == (Material *)0x0) goto code_?;
            bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                              (pMVar12,StringLiteral__Color,(MethodInfo *)0x0);
            if (bVar13 == 0) {
code_?:
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + 4;
              goto code_?;
            }
            if (uVar7 < pOStack_6->max_length) {
              if (((Renderer *)*ppOStack_8 == (Renderer *)0x0) ||
                 (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                     ((Renderer *)*ppOStack_8,(MethodInfo *)0x0),
                 pMVar11 == (Material__Array *)0x0)) goto code_?;
              if (pMVar11->max_length <= uVar9) goto code_?;
              pMVar12 = *(Material **)((int)pMVar11->vector + iVar10 + -0x10);
              if (pMVar12 == (Material *)0x0) goto code_?;
              pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                 (&CStack_15,pMVar12,(MethodInfo *)0x0);
              fStack_16 = pCVar14->r;
              VStack_17.x = pCVar14->g;
              VStack_17.y = pCVar14->b;
              VStack_17.z = pCVar14->a;
              if (uVar7 < pOStack_6->max_length) {
                if (((Renderer *)*ppOStack_8 == (Renderer *)0x0) ||
                   (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_materials((Renderer *)*ppOStack_8,(MethodInfo *)0x0),
                   pMVar11 == (Material__Array *)0x0)) goto code_?;
                if (uVar9 < pMVar11->max_length) {
                  pMVar12 = *(Material **)((int)pMVar11->vector + iVar10 + -0x10);
                  fStack_18 = fStack_16;
                  uStack_19 = CONCAT44(VStack_17.y,VStack_17.x);
                  fStack_20 = 1.0;
                  if (pMVar12 != (Material *)0x0) {
                    value_00.g = VStack_17.x;
                    value_00.r = fStack_16;
                    value_00.b = VStack_17.y;
                    value_00.a = 1.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (pMVar12,value_00,(MethodInfo *)0x0);
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
        pGVar4 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                  (pGVar4,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar4,(MethodInfo *)0x0);
        ppTVar22 = &(this->fields).previewHeadRoot;
        *ppTVar22 = pTVar21;
        func_?();
        pAVar1 = (this->fields).headPreviewer;
        uStack_19 = 0xbf00000000000000;
        fStack_20 = -1.0;
        VStack_17.x = 100.0;
        VStack_17.y = 100.0;
        VStack_17.z = 100.0;
        CStack_15.g = 15.0;
        CStack_15.b = 0.0;
        CStack_15.a = 0.0;
        if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
        cameraOffset.z = -1.0;
        cameraOffset.x = 0.0;
        cameraOffset.y = -0.5;
        previewPosition.z = 100.0;
        previewPosition.x = 100.0;
        previewPosition.y = 100.0;
        AvatarPreviewer::AvatarPreviewer_Initialize
                  (pAVar1,0x80,0x80,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,
                   cameraOffset,*ppTVar22,previewPosition,StringLiteral_Avatar_Head_preview,
                   (MVWorldObjectClient *)pMStack_3,pGStack_5,(Vector3)ZEXT812(0x41700000),
                   (MethodInfo *)0x0);
        pAVar1 = (this->fields).headPreviewer;
        if (((pAVar1 == (AvatarPreviewer *)0x0) ||
            (this_00 = (pAVar1->fields).previewCam, this_00 == (Camera *)0x0)) ||
           (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0),
           pTVar21 == (Transform *)0x0)) goto code_?;
        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_17,pTVar21,(MethodInfo *)0x0);
        uStack_19._0_4_ = pVVar23->x;
        uStack_19._4_4_ = pVVar23->y;
        fStack_20 = pVVar23->z + 0.0;
        value.y = (float)uStack_19._4_4_ + _UNK_?;
        value.x = (float)(undefined4)uStack_19 + 0.0;
        value.z = fStack_20;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar21,value,(MethodInfo *)0x0);
        pAVar1 = (this->fields).headPreviewer;
        if ((pAVar1 == (AvatarPreviewer *)0x0) ||
           (pGVar4 = (pAVar1->fields)._PreviewGameObject_k__BackingField,
           pGVar4 == (GameObject *)0x0)) goto code_?;
        pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar4,(MethodInfo *)0x0);
        uStack_19 = 0x4363000000000000;
        fStack_20 = 0.0;
        if (pTVar21 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                  (pTVar21,(Vector3)ZEXT812(0x4363000000000000),(MethodInfo *)0x0);
        iVar10 = 0;
        pLVar24 = (this->fields).tierProgressDataList;
        while (pLVar24 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          if ((pLVar24->fields)._size <= iVar10) {
            return;
          }
          pLVar24 = (this->fields).tierProgressDataList;
          if (pLVar24 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          pGVar25 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xffffff2c,pLVar24,
                               iVar10,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                              );
          pAVar1 = (this->fields).headPreviewer;
          if ((pAVar1 == (AvatarPreviewer *)0x0) || (pGVar25->avatarHeadImage == (RawImage *)0x0))
          break;
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (pGVar25->avatarHeadImage,(Texture *)(pAVar1->fields).previewTexture,
                     (MethodInfo *)0x0);
          iVar10 = iVar10 + 1;
          pLVar24 = (this->fields).tierProgressDataList;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
code_?:
  uVar7 = uVar7 + 1;
  ppOStack_8 = ppOStack_8 + 1;
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
  if ((pPVar1 != (PlayerPlanetData *)0x0) &&
     (this_00 = (this->fields).tierProgressDataList,
     this_00 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
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
  x = (this->fields).previewHeadRoot;
  ppTVar1 = &(this->fields).previewHeadRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppTVar1 == (Transform *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)*ppTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    ppAVar4 = &(this->fields).headPreviewer;
    *ppAVar4 = (AvatarPreviewer *)0x0;
    func_?(ppAVar4);
    *ppTVar1 = (Transform *)0x0;
    func_?(ppTVar1,0);
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
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_3 = CONCAT31((int3)((uint)in_ECX >> 8),(pPVar1->fields).gamePassTier);
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState(this_00,iVar2,GStack_3,(MethodInfo *)0x0);
      iVar2 = GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                        (this,tierToShowProgressFor,iVar2,gameTierShopStatus,(MethodInfo *)0x0);
      if (gameTierShopStatus !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                            tierToShowProgressFor,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar4 != (Object *)0x0) {
          fVar5 = (float)iVar2 / (float)(int)pOVar4[3].klass;
          fVar6 = _UNK_?;
          if (fVar5 <= _UNK_?) {
            fVar6 = fVar5;
          }
          return fVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
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
  barIndex = GamePassTier__Enum_Tier0;
  while( true ) {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
    break;
    puVar2 = (undefined4 *)func_?(&stack0xffffff6c);
    if ((Component *)*puVar2 == (Component *)0x0) break;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*puVar2,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
    break;
    iVar4 = func_?(&stack0xffffff6c);
    if (*(Component **)(iVar4 + 0x1c) == (Component *)0x0) break;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (*(Component **)(iVar4 + 0x1c),(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    iVar4 = barIndex + GamePassTier__Enum_Tier2;
    barIndex = barIndex + GamePassTier__Enum_Tier1;
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
  barIndex = GamePassTier__Enum_Tier0;
  do {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar4 = (undefined4 *)
               func_?(auStack_5,pLVar2,barIndex,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                              );
      uStack_6 = *puVar4;
      uStack_7 = puVar4[1];
      uStack_8 = puVar4[2];
      uStack_9 = puVar4[3];
      uStack_10 = puVar4[8];
      uStack_11 = puVar4[9];
      uStack_12 = puVar4[10];
      uStack_13 = puVar4[0xb];
      uStack_14 = puVar4[0xc];
      uStack_15 = puVar4[0xd];
      uStack_16 = puVar4[0xe];
      uStack_17 = puVar4[0xf];
      uStack_18 = *(undefined8 *)(puVar4 + 0x10);
      if ((ProgressBarAndroid *)puVar4[7] == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)puVar4[7],1.0,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      puVar4 = (undefined4 *)
               func_?(auStack_5,pLVar2,barIndex,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                              );
      uStack_19 = puVar4[4];
      uStack_20 = puVar4[5];
      uStack_21 = puVar4[6];
      uStack_22 = puVar4[7];
      uStack_10 = puVar4[8];
      uStack_11 = puVar4[9];
      uStack_12 = puVar4[10];
      uStack_13 = puVar4[0xb];
      uStack_14 = puVar4[0xc];
      uStack_15 = puVar4[0xd];
      uStack_16 = puVar4[0xe];
      uStack_17 = puVar4[0xf];
      uStack_18 = *(undefined8 *)(puVar4 + 0x10);
      if ((ProgressBarAndroid *)*puVar4 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)*puVar4,1.0,(MethodInfo *)0x0);
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    iVar23 = barIndex + GamePassTier__Enum_Tier2;
    barIndex = barIndex + GamePassTier__Enum_Tier1;
    if (3 < iVar23) {
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
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3
      ;
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
            barIndex = GamePassTier__Enum_Tier0;
            do {
              bVar11 = GameTierProgressBar_IsTierUnlocked
                                (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
              if (bVar11 != 0) {
                GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
              }
              if ((this->fields).tierProgressDataList ==
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
              puVar12 = (undefined4 *)func_?();
              if ((Component *)*puVar12 == (Component *)0x0) goto code_?;
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)*puVar12,(MethodInfo *)0x0);
              if ((pGVar13 == (GameObject *)0x0) ||
                 (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar13,0,(MethodInfo *)0x0),
                 (this->fields).tierProgressDataList ==
                 (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
              iVar14 = func_?();
              if (*(Component **)(iVar14 + 0x1c) == (Component *)0x0) goto code_?;
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (*(Component **)(iVar14 + 0x1c),(MethodInfo *)0x0);
              if (pGVar13 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,1,(MethodInfo *)0x0);
              iVar14 = barIndex + GamePassTier__Enum_Tier2;
              barIndex = barIndex + GamePassTier__Enum_Tier1;
            } while (iVar14 < 4);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            iVar14 = 0;
            while (pLVar15 = (this->fields).tierProgressDataList,
                  pLVar15 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar16 = mscorlib.dll::System::Collections::Generic::
                        List`1[GameTierProgressBar+TierProgressData]::
                        List_1_GameTierProgressBar_TierProgressData__get_Item
                                  ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar15,
                                   iVar14,
                                   MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                  );
              if (pGVar16->freeTryTextBubble == (GamePassesTextBubble *)0x0) break;
              (pGVar16->freeTryTextBubble->fields).deactivateAfterFade = 1;
              pLVar15 = (this->fields).tierProgressDataList;
              if (pLVar15 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
              pGVar16 = mscorlib.dll::System::Collections::Generic::
                        List`1[GameTierProgressBar+TierProgressData]::
                        List_1_GameTierProgressBar_TierProgressData__get_Item
                                  ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar15,
                                   iVar14,
                                   MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                  );
              if ((pGVar16->freeTryTextBubble == (GamePassesTextBubble *)0x0) ||
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject
                                      ((Component *)pGVar16->freeTryTextBubble,(MethodInfo *)0x0),
                 pGVar13 == (GameObject *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,0,(MethodInfo *)0x0);
              iVar17 = iVar14 + 2;
              iVar14 = iVar14 + 1;
              if (3 < iVar17) {
                fVar18 = GameTierProgressBar_CalculateTotalProgressValue
                                   (this,playerGamePoints,(MethodInfo *)0x0);
                (this->fields).previousProgressValue = fVar18;
                (this->fields).interpolateTowardsProgressValue = fVar18;
                GameTierProgressBar_CreateAvatarHeadImages(this,(MethodInfo *)0x0);
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
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if ((pPVar1 != (PlayerTierStateCalculator *)0x0) &&
     ((pPVar1->fields).gamePassRewardsActivated != 0)) {
    return 1;
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
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if ((pPVar3 != (PlayerTierStateCalculator *)0x0) &&
         ((pPVar3->fields).gamePassRewardsActivated != 0)) {
        (this->fields).previousProgressValue = (this->fields).interpolateTowardsProgressValue;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
        playerGamePoints = (pPVar4->fields).progressionGamePoints;
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
    pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    if (pAVar9 != (Action_1_Int32_ *)0x0) {
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
  fStack_1 = (this->fields).previousProgressValue;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_2 = (double)fStack_1;
  fVar3 = (float10)func_?(dStack_2);
  dStack_2 = (double)fVar3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 != (PlayerPlanetData *)0x0) {
    iVar5 = (pPVar4->fields).progressionGamePoints;
    iStack_6 = iVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar4 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      fStack_1 = (float)CONCAT31(fStack_1._1_3_,(pPVar4->fields).gamePassTier);
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,iVar5,(GamePassTier__Enum)fStack_1,(MethodInfo *)0x0);
      if (gameTierShopStatus !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        key = CONCAT31((int3)((uint)(int)dStack_2 >> 8),(char)(int)dStack_2 + '\x01');
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 != (Object *)0x0) {
          pOVar8 = pOVar7[3].klass;
          iVar5 = GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                            (this,key,iStack_6,gameTierShopStatus,(MethodInfo *)0x0);
          IStack_9.m_value = (int)pOVar8 - iVar5;
          pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
          pSVar10 = mscorlib.dll::System::String::String_Concat_3
                             (pSVar10,StringLiteral__Crystals_to_go_,(MethodInfo *)0x0);
          this_01 = (this->fields).tierProgressDataList;
          if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar11 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&pPStack_12,this_01,
                                (int)dStack_2,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar11->avatarHead != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (pGVar11->avatarHead,pSVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
        bVar5 = true;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
        bVar5 = (pPVar1->fields).previewGamePassTier != 0;
      }
      if (MVar4 == MVGameMode__Enum_Edit || bVar5) {
        return;
      }
      bVar6 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
      if (bVar6 == 0) {
        return;
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar7->fields)._GameTierShopRepository_k__BackingField,
         this_00 != (GameTierShopRepository *)0x0)) {
        pDVar8 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                           (this_00,(uint)(byte)(bVar2 + 1),(MethodInfo *)0x0);
        if (pDVar8 == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
           ) {
          return;
        }
        pLVar9 = (this->fields).tierProgressDataList;
        if (pLVar9 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar10 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar9,
                               (uint)bVar2,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                              );
          if (pGVar10->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
            if ((pGVar10->freeTryTextBubble->fields).isActive != 0) {
              return;
            }
            if ((this->fields).tierProgressDataList !=
                (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar11 = func_?();
              if ((*(Component **)(iVar11 + 0x3c) != (Component *)0x0) &&
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject
                                      (*(Component **)(iVar11 + 0x3c),(MethodInfo *)0x0),
                 this_02 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,1,(MethodInfo *)0x0);
                pLVar9 = (this->fields).tierProgressDataList;
                if (pLVar9 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  iVar11 = func_?(&stack0xffffff58,pLVar9,(uint)bVar2,
                                           MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                          );
                  this_01 = *(GamePassesTextBubble **)(iVar11 + 0x3c);
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
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if ((pPVar3 != (PlayerTierStateCalculator *)0x0) &&
           ((pPVar3->fields).gamePassRewardsActivated != 0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar4 != (PlayerPlanetData *)0x0) {
            fVar5 = GameTierProgressBar_CalculateTotalProgressValue
                               (this,(pPVar4->fields).progressionGamePoints,(MethodInfo *)0x0);
            (this->fields).interpolateTowardsProgressValue = fVar5;
            if ((this->fields).previousProgressValue != fVar5) {
              (this->fields).shouldInterpolate = 1;
            }
            if ((this->fields).tierProgressDataList !=
                (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar6 = func_?();
              if (((this->fields).shouldInterpolate != 0) &&
                 (fStack_7 = (this->fields).interpolateTowardsProgressValue - (float)iVar6,
                 _UNK_? < fStack_7)) {
                do {
                  pLVar8 = (this->fields).tierProgressDataList;
                  if (pLVar8 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                  goto code_?;
                  pGVar9 = mscorlib.dll::System::Collections::Generic::
                           List`1[GameTierProgressBar+TierProgressData]::
                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                     ((GameTierProgressBar_TierProgressData *)&stack0xffffff68,
                                      pLVar8,iVar6,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
                  if (fStack_7 < 0.0) {
                    fVar5 = 0.0;
                  }
                  else {
                    fVar5 = fStack_7;
                    if (_UNK_? < fStack_7) {
                      fVar5 = _UNK_?;
                    }
                  }
                  if ((ProgressBarAndroid *)pGVar9->endResultProgressBar ==
                      (ProgressBarAndroid *)0x0) goto code_?;
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            ((ProgressBarAndroid *)pGVar9->endResultProgressBar,fVar5,
                             (MethodInfo *)0x0);
                  fStack_7 = fStack_7 - _UNK_?;
                  iVar6 = iVar6 + 1;
                } while (_UNK_? < fStack_7);
              }
              if (cRam_? == '\0') {
                func_?(&TypeInfo__GamePassesManager);
                cRam_? = '\x01';
              }
              pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar4 != (PlayerPlanetData *)0x0) {
                GameTierProgressBar_UpdateProgressBars
                          (this,(pPVar4->fields).progressionGamePoints,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                if (pPVar4 != (PlayerPlanetData *)0x0) {
                  GameTierProgressBar_UpdateDividerVisibility
                            (this,(pPVar4->fields).progressionGamePoints,(MethodInfo *)0x0);
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
      barIndex = GamePassTier__Enum_Tier0;
      do {
        bVar2 = GameTierProgressBar_IsTierUnlocked
                          (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((this->fields).tierProgressDataList ==
              (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
          iVar6 = func_?();
          if (*(ProgressBarAndroid **)(iVar6 + 0x1c) == (ProgressBarAndroid *)0x0)
          goto code_?;
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (*(ProgressBarAndroid **)(iVar6 + 0x1c),1.0,(MethodInfo *)0x0);
          pLVar8 = (this->fields).tierProgressDataList;
          if (pLVar8 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
          puVar10 = (undefined4 *)
                    func_?(&stack0xffffff68,pLVar8,barIndex,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
          if ((ProgressBarAndroid *)*puVar10 == (ProgressBarAndroid *)0x0) goto code_?;
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    ((ProgressBarAndroid *)*puVar10,1.0,(MethodInfo *)0x0);
          GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
        }
        iVar6 = barIndex + GamePassTier__Enum_Tier2;
        barIndex = barIndex + GamePassTier__Enum_Tier1;
        if (3 < iVar6) {
          return;
        }
      } while( true );
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      bVar11 = (pPVar4->fields).gamePassTier;
      iVar6 = 2;
      do {
        if ((int)(bVar11 - 1) < iVar6) {
          GameTierProgressBar_DeactivateBar(this,iVar6,(MethodInfo *)0x0);
        }
        else {
          GameTierProgressBar_ActivateBar(this,iVar6,(MethodInfo *)0x0);
        }
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
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
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - 1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    gamePoints = gamePoints - (int)pOVar1[3].klass;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
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
  pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
  if (pAVar4 != (Action_1_Int32_ *)0x0) {
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
        bVar5 = true;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
        bVar5 = (pPVar1->fields).previewGamePassTier != 0;
      }
      if (MVar4 == MVGameMode__Enum_Edit || bVar5) {
        return 0;
      }
      bVar6 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
      if (bVar6 == 0) {
        return 0;
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar7->fields)._GameTierShopRepository_k__BackingField,
         this_00 != (GameTierShopRepository *)0x0)) {
        pDVar8 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                           (this_00,(uint)(byte)(bVar2 + 1),(MethodInfo *)0x0);
        if (pDVar8 == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
           ) {
          return 0;
        }
        pLVar9 = (this->fields).tierProgressDataList;
        if (pLVar9 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar10 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar9,
                               (uint)bVar2,
                               MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                              );
          if (pGVar10->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
            if ((pGVar10->freeTryTextBubble->fields).isActive != 0) {
              return 1;
            }
            if ((this->fields).tierProgressDataList !=
                (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar11 = func_?();
              if ((*(Component **)(iVar11 + 0x3c) != (Component *)0x0) &&
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject
                                      (*(Component **)(iVar11 + 0x3c),(MethodInfo *)0x0),
                 this_02 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,1,(MethodInfo *)0x0);
                pLVar9 = (this->fields).tierProgressDataList;
                if (pLVar9 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  iVar11 = func_?(&stack0xffffff58,pLVar9,(uint)bVar2,
                                           MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                          );
                  this_01 = *(GamePassesTextBubble **)(iVar11 + 0x3c);
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
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar6 = (*pcVar12)();
  return bVar6;
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
  fVar5 = (float)(int)index;
  this = (GameTierProgressBar *)((this->fields).interpolateTowardsProgressValue - fVar5);
  if ((float)this < 0.0) {
    pGVar6 = (GameTierProgressBar *)0x0;
code_?:
    this = pGVar6;
  }
  else {
    pGVar6 = _UNK_?;
    if ((float)_UNK_? < (float)this) goto code_?;
  }
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar5;
  fVar8 = (this_00->fields).interpolateTowardsProgressValue - fVar5;
  fVar1 = (fVar7 - (this_00->fields).interpolationStartTime) * _UNK_? *
           ((float)this - fVar1) + fVar1;
  if (fVar8 < fVar1) {
    (this_00->fields).shouldInterpolate = 0;
    fVar1 = fVar8;
  }
  if ((float)_UNK_? <= fVar1) {
    pLVar2 = (this_00->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar9 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if ((pGVar9->avatarHeadUI == (GameObject *)0x0) ||
       (pGVar10 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar9->avatarHeadUI,(MethodInfo *)0x0),
       pGVar10 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pLVar2 = (this_00->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar9 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar9->progressDivider == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9->progressDivider,0,(MethodInfo *)0x0);
    pLVar2 = (this_00->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar9 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar9->disabledProgressDivider == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9->disabledProgressDivider,0,(MethodInfo *)0x0);
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
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pLVar2 = (this_00->fields).tierProgressDataList;
    (this_00->fields).interpolationStartTime = fVar8;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((int)pMVar4 < (pLVar2->fields)._size) {
      iVar11 = func_?(&stack0xffffff5c,pLVar2,pMVar4);
      if ((*(Void **)(iVar11 + 0x18) == (Void *)0x0) ||
         (pGVar10 = (GameObject *)
                   UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_AsRef_1(*(Void **)(iVar11 + 0x18),(MethodInfo *)0x0),
         pGVar10 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar10,1,(MethodInfo *)0x0);
      pLVar2 = (this_00->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar11 = func_?(&stack0xffffff5c,pLVar2,pMVar4);
      if (*(GameObject **)(iVar11 + 8) == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar11 + 8),1,(MethodInfo *)0x0);
      pLVar2 = (this_00->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar11 = func_?(&stack0xffffff5c,pLVar2,pMVar4);
      if (*(GameObject **)(iVar11 + 0x20) == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar11 + 0x20),1,(MethodInfo *)0x0);
    }
  }
  pLVar2 = (this_00->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar9 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if ((ProgressBarAndroid *)pGVar9->progressBar != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                ((ProgressBarAndroid *)pGVar9->progressBar,fVar1,(MethodInfo *)0x0);
      pLVar2 = (this_00->fields).tierProgressDataList;
      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar9 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff5c,pLVar2,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if ((ProgressBarAndroid *)pGVar9->disabledProgressBar != (ProgressBarAndroid *)0x0) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    ((ProgressBarAndroid *)pGVar9->disabledProgressBar,fVar1,(MethodInfo *)0x0);
          GameTierProgressBar_UpdateProgressText
                    (this_00,fVar5 + fVar1,(uint)(byte)((char)index + 1),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
      key = (ByteEnum__Enum)bVar5;
      iVar8 = playerGamePoints;
      while (key = key - 1, 0 < (int)key) {
        if ((this_01 ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key
                                          ,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar9 == (Object *)0x0)) goto code_?;
        iVar8 = iVar8 - (int)pOVar9[3].klass;
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
        iVar8 = func_?(&puStack_12,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar8 + 8) == (Void *)0x0) ||
           (pGVar13 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar8 + 8),(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,0,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar8 = func_?(&puStack_12,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar8 + 0x18) == (Void *)0x0) ||
           (pGVar13 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar8 + 0x18),(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,0,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar8 = func_?(&puStack_12,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar8 + 0x20) == (Void *)0x0) ||
           (pGVar13 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar8 + 0x20),(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        bStack_14 = 0;
      }
      else {
        bVar15 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0);
        if (bVar15 == 0) goto code_?;
        bVar4 = true;
        if ((this->fields).tierProgressDataList ==
            (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar8 = func_?();
        if ((*(Void **)(iVar8 + 8) == (Void *)0x0) ||
           (pGVar13 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar8 + 8),(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,1,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar8 = func_?(&puStack_12,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar8 + 0x18) == (Void *)0x0) ||
           (pGVar13 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar8 + 0x18),(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,1,(MethodInfo *)0x0);
        pLVar11 = (this->fields).tierProgressDataList;
        if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar8 = func_?(&puStack_12,pLVar11,iStack_6,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
        if ((*(Void **)(iVar8 + 0x20) == (Void *)0x0) ||
           (pGVar13 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1(*(Void **)(iVar8 + 0x20),(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        bStack_14 = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar13,bStack_14,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      iVar2 = (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1;
      pGVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[GameTierProgressBar+TierProgressData]::
               List_1_GameTierProgressBar_TierProgressData__get_Item
                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar1,iVar2,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                         );
      if ((ProgressBarAndroid *)pGVar3->progressBar != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  ((ProgressBarAndroid *)pGVar3->progressBar,0.0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).tierProgressDataList;
        if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar3 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar1,iVar2
                              ,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          if (pGVar3->progressText != (Text *)0x0) {
            (*(code *)(pGVar3->progressText->klass->vtable).set_text.method)();
            pLVar1 = (this->fields).tierProgressDataList;
            if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar3 = mscorlib.dll::System::Collections::Generic::
                       List`1[GameTierProgressBar+TierProgressData]::
                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                 ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar1,
                                  iVar2,
                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                 );
              if ((ProgressBarAndroid *)pGVar3->disabledProgressBar != (ProgressBarAndroid *)0x0) {
                ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          ((ProgressBarAndroid *)pGVar3->disabledProgressBar,0.0,(MethodInfo *)0x0);
                bVar4 = GameTierProgressBar_IsTierUnlocked
                                  (this,progressBarToUpdate,(MethodInfo *)0x0);
                pDStack_5 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                             *)CONCAT31(pDStack_5._1_3_,bVar4);
                GameTierProgressBar_SetLockedStateForTier(this,iVar2,bVar4,(MethodInfo *)0x0);
                if (bVar4 == 0) {
                  return;
                }
                pLVar1 = (this->fields).tierProgressDataList;
                if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  pGVar3 = mscorlib.dll::System::Collections::Generic::
                           List`1[GameTierProgressBar+TierProgressData]::
                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                     ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,
                                      pLVar1,iVar2,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
                  if ((ProgressBarAndroid *)pGVar3->disabledProgressBar != (ProgressBarAndroid *)0x0
                     ) {
                    ProgressBarAndroid::ProgressBarAndroid_set_Progress
                              ((ProgressBarAndroid *)pGVar3->disabledProgressBar,1.0,
                               (MethodInfo *)0x0);
                    pLVar1 = (this->fields).tierProgressDataList;
                    if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      pGVar3 = mscorlib.dll::System::Collections::Generic::
                               List`1[GameTierProgressBar+TierProgressData]::
                               List_1_GameTierProgressBar_TierProgressData__get_Item
                                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,
                                          pLVar1,iVar2,
                                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                         );
                      if ((ProgressBarAndroid *)pGVar3->progressBar != (ProgressBarAndroid *)0x0) {
                        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                                  ((ProgressBarAndroid *)pGVar3->progressBar,1.0,(MethodInfo *)0x0);
                        GameTierProgressBar_ActivateBar(this,iVar2,(MethodInfo *)0x0);
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
    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar6 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      pDStack_5 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)CONCAT31(pDStack_5._1_3_,(pPVar6->fields).gamePassTier);
      pDStack_5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                  PlayerTierStateCalculator_GetTierPricingState
                            (this_00,playerGamePoints,(GamePassTier__Enum)pDStack_5,
                             (MethodInfo *)0x0);
      IStack_7.m_value =
           GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                     (this,progressBarToUpdate,playerGamePoints,pDStack_5,(MethodInfo *)0x0);
      if ((pDStack_5 !=
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) && (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDStack_5,
                                    progressBarToUpdate,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar8 != (Object *)0x0)) {
        IVar9.m_value = (int32_t)pOVar8[3].klass;
        bVar4 = GameTierProgressBar_IsTierUnlocked(this,progressBarToUpdate,(MethodInfo *)0x0);
        pDStack_5 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)CONCAT31(pDStack_5._1_3_,bVar4);
        if (IVar9.m_value < 1) {
          pLVar1 = (this->fields).tierProgressDataList;
          if (bVar4 == 0) {
            if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar2 = func_?();
              if ((*(ProgressBarAndroid **)(iVar2 + 0x1c) != (ProgressBarAndroid *)0x0) &&
                 (ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            (*(ProgressBarAndroid **)(iVar2 + 0x1c),0.0,(MethodInfo *)0x0),
                 (this->fields).tierProgressDataList !=
                 (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
                puVar10 = (undefined4 *)func_?();
                if ((ProgressBarAndroid *)*puVar10 != (ProgressBarAndroid *)0x0) {
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            ((ProgressBarAndroid *)*puVar10,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            tier = (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1;
            iVar2 = func_?();
            if ((*(ProgressBarAndroid **)(iVar2 + 0x1c) != (ProgressBarAndroid *)0x0) &&
               (ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          (*(ProgressBarAndroid **)(iVar2 + 0x1c),1.0,(MethodInfo *)0x0),
               (this->fields).tierProgressDataList !=
               (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
              puVar10 = (undefined4 *)func_?();
              if ((ProgressBarAndroid *)*puVar10 != (ProgressBarAndroid *)0x0) {
                ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          ((ProgressBarAndroid *)*puVar10,1.0,(MethodInfo *)0x0);
                GameTierProgressBar_SetLockedStateForTier
                          (this,tier,(bool)pDStack_5,(MethodInfo *)0x0);
                GameTierProgressBar_ActivateBar(this,tier,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          IVar11.m_value = IStack_7.m_value;
          if (IVar9.m_value < IStack_7.m_value) {
            IVar11.m_value = IVar9.m_value;
          }
          fVar12 = (float)IStack_7.m_value;
          if (IVar11.m_value < 0) {
            IVar11.m_value = 0;
          }
          IStack_7.m_value = IVar11.m_value;
          str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
          str2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
          pDVar13 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)mscorlib.dll::System::String::String_Concat_4
                                 (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar2 = (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1;
            pGVar3 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar1,
                                iVar2,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if ((ProgressBarAndroid *)pGVar3->progressBar != (ProgressBarAndroid *)0x0) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress
                        ((ProgressBarAndroid *)pGVar3->progressBar,fVar12 / (float)IVar9.m_value,
                         (MethodInfo *)0x0);
              pLVar1 = (this->fields).tierProgressDataList;
              if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar3 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar1,
                                    iVar2,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
                pOVar14 = (Object__Class *)pGVar3->progressText;
                if (pOVar14 != (Object__Class *)0x0) {
                  IStack_7.m_value = (int32_t)pOVar14;
                  pDStack_5 = pDVar13;
                  (*(code *)(pOVar14->_0).image[0x12].name)();
                  pLVar1 = (this->fields).tierProgressDataList;
                  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    pGVar3 = mscorlib.dll::System::Collections::Generic::
                             List`1[GameTierProgressBar+TierProgressData]::
                             List_1_GameTierProgressBar_TierProgressData__get_Item
                                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,
                                        pLVar1,iVar2,
                                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                       );
                    if ((ProgressBarAndroid *)pGVar3->disabledProgressBar !=
                        (ProgressBarAndroid *)0x0) {
                      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                                ((ProgressBarAndroid *)pGVar3->disabledProgressBar,3.8439708e-29,
                                 (MethodInfo *)0x0);
                      GameTierProgressBar_SetLockedStateForTier
                                (this,iVar2,(bool)pDStack_5,(MethodInfo *)0x0);
                      if (3.8439708e-29 < _UNK_?) {
                        return;
                      }
                      GameTierProgressBar_ActivateBar(this,iVar2,(MethodInfo *)0x0);
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).gameMeterVisualEffects;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                          ), RVar1 == (RegexCharClass_SingleRange)0x0)) break;
    (**(code **)(*(int *)RVar1 + 0xe0))();
    index = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).gameMeterVisualEffects;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateProgressText(Single, GamePassTier) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressText
               (GameTierProgressBar *this,float totalProgress,GamePassTier__Enum currentTier,
               MethodInfo *method)

{
  key = currentTier;
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
  gamePoints = GameTierProgressBar_CalculateGamePointsFromTierProgress
                         (this,totalProgress,currentTier,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      currentTier = CONCAT31(currentTier._1_3_,(pPVar1->fields).gamePassTier);
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,playerGamePoints,currentTier,(MethodInfo *)0x0);
      IStack_2.m_value =
           GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                     (this,key,gamePoints,gameTierShopStatus,(MethodInfo *)0x0);
      if (gameTierShopStatus !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          IStack_4.m_value = (int32_t)pOVar3[3].klass;
          str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
          str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_4
                    (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
          this_01 = (this->fields).tierProgressDataList;
          if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar5 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,this_01,
                                (key & 0xff) - GamePassTier__Enum_Tier1,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar5->progressText != (Text *)0x0) {
              (*(code *)(pGVar5->progressText->klass->vtable).set_text.method)();
              return;
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
  bVar1 = GameTierProgressBar_HasTempTier(this,GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  bVar2 = bVar1;
  GameTierProgressBar_HasTempTier(this,GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
  GameTierProgressBar_HasTempTier(this,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  pLVar3 = (this->fields).tierProgressDataList;
  if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,pLVar3,0,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar4->tempProgress != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4->tempProgress,bVar2,(MethodInfo *)0x0);
      pLVar3 = (this->fields).tierProgressDataList;
      if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar4 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,pLVar3,0,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if (pGVar4->disabledTempProgress != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4->disabledTempProgress,bVar2,(MethodInfo *)0x0);
          pLVar3 = (this->fields).tierProgressDataList;
          if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pMVar5 = 
            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
            ;
            pGVar4 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,pLVar3,0,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            value = (bool)pMVar5;
            if (pGVar4->tierIconTempUnlock != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4->tierIconTempUnlock,bVar2,(MethodInfo *)0x0);
              pLVar3 = (this->fields).tierProgressDataList;
              if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar4 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,pLVar3,
                                    0,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
                if (pGVar4->tierIconNumber != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4->tierIconNumber,bVar1 == 0,(MethodInfo *)0x0);
                  pLVar3 = (this->fields).tierProgressDataList;
                  if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    pGVar4 = mscorlib.dll::System::Collections::Generic::
                             List`1[GameTierProgressBar+TierProgressData]::
                             List_1_GameTierProgressBar_TierProgressData__get_Item
                                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,
                                        pLVar3,0,
                                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                       );
                    this_00 = pGVar4->LockedTierIcon;
                    if ((Component *)this_00 != (Component *)0x0) {
                      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                      if (pGVar6 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar6,bVar1 == 0,(MethodInfo *)0x0);
                        pLVar3 = (this->fields).tierProgressDataList;
                        if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          pGVar4 = mscorlib.dll::System::Collections::Generic::
                                   List`1[GameTierProgressBar+TierProgressData]::
                                   List_1_GameTierProgressBar_TierProgressData__get_Item
                                             ((GameTierProgressBar_TierProgressData *)
                                              &stack0xffffff64,pLVar3,1,
                                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                             );
                          if (pGVar4->tempProgress != (GameObject *)0x0) {
                            bVar2 = (bool)pLVar3;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4->tempProgress,bVar2,(MethodInfo *)0x0);
                            pLVar3 = (this->fields).tierProgressDataList;
                            if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                              pGVar4 = mscorlib.dll::System::Collections::Generic::
                                       List`1[GameTierProgressBar+TierProgressData]::
                                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                                 ((GameTierProgressBar_TierProgressData *)
                                                  &stack0xffffff64,pLVar3,1,
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                 );
                              if (pGVar4->disabledTempProgress != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive
                                          (pGVar4->disabledTempProgress,bVar2,(MethodInfo *)0x0);
                                pLVar3 = (this->fields).tierProgressDataList;
                                if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                                  pGVar4 = mscorlib.dll::System::Collections::Generic::
                                           List`1[GameTierProgressBar+TierProgressData]::
                                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                                     ((GameTierProgressBar_TierProgressData *)
                                                      &stack0xffffff64,pLVar3,1,
                                                                                                            
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                  if (pGVar4->tierIconTempUnlock != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive
                                              (pGVar4->tierIconTempUnlock,bVar2,(MethodInfo *)0x0);
                                    pLVar3 = (this->fields).tierProgressDataList;
                                    if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)
                                                  0x0) {
                                      pGVar4 = mscorlib.dll::System::Collections::Generic::
                                               List`1[GameTierProgressBar+TierProgressData]::
                                               List_1_GameTierProgressBar_TierProgressData__get_Item
                                                         ((GameTierProgressBar_TierProgressData *)
                                                          &stack0xffffff64,pLVar3,1,
                                                                                                                    
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                      if (pGVar4->tierIconNumber != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive
                                                  (pGVar4->tierIconNumber,bVar2 == 0,
                                                   (MethodInfo *)0x0);
                                        pLVar3 = (this->fields).tierProgressDataList;
                                        if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_
                                                       *)0x0) {
                                          pGVar4 = mscorlib.dll::System::Collections::Generic::
                                                   List`1[GameTierProgressBar+TierProgressData]::
                                                                                                      
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff64,pLVar3,1,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                          this_01 = pGVar4->LockedTierIcon;
                                          if ((Component *)this_01 != (Component *)0x0) {
                                            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     Component::Component_get_gameObject
                                                               ((Component *)this_01,
                                                                (MethodInfo *)0x0);
                                            if (pGVar6 != (GameObject *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_SetActive
                                                        (pGVar6,bVar2 == 0,(MethodInfo *)0x0);
                                              pLVar3 = (this->fields).tierProgressDataList;
                                              if (pLVar3 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                 ) {
                                                pGVar4 = mscorlib.dll::System::Collections::Generic
                                                         ::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff64,pLVar3,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                if (pGVar4->tempProgress != (GameObject *)0x0) {
                                                  bVar2 = value;
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_SetActive
                                                            (pGVar4->tempProgress,value,
                                                             (MethodInfo *)0x0);
                                                  pLVar3 = (this->fields).tierProgressDataList;
                                                  if (pLVar3 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar4 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff64,pLVar3,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  if (pGVar4->disabledTempProgress !=
                                                      (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar4->disabledTempProgress,value,
                                                               (MethodInfo *)0x0);
                                                    pLVar3 = (this->fields).tierProgressDataList;
                                                    if (pLVar3 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar4 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff64,pLVar3,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  if (pGVar4->tierIconTempUnlock !=
                                                      (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar4->tierIconTempUnlock,value,
                                                               (MethodInfo *)0x0);
                                                    pLVar3 = (this->fields).tierProgressDataList;
                                                    if (pLVar3 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar4 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff64,pLVar3,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  if (pGVar4->tierIconNumber != (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar4->tierIconNumber,bVar2 == 0,
                                                               (MethodInfo *)0x0);
                                                    pLVar3 = (this->fields).tierProgressDataList;
                                                    if (pLVar3 != (
                                                  List_1_GameTierProgressBar_TierProgressData_ *)0x0
                                                  ) {
                                                    pGVar4 = mscorlib.dll::System::Collections::
                                                             Generic::
                                                  List`1[GameTierProgressBar+TierProgressData]::
                                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                                            ((GameTierProgressBar_TierProgressData *
                                                             )&stack0xffffff64,pLVar3,2,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                                                  this_02 = pGVar4->LockedTierIcon;
                                                  if ((Component *)this_02 != (Component *)0x0) {
                                                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::Component_get_gameObject
                                                                       ((Component *)this_02,
                                                                        (MethodInfo *)0x0);
                                                    if (pGVar6 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar6,bVar2 == 0,(MethodInfo *)0x0
                                                                );
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  ppLVar1 = &(this->fields).gameMeterVisualEffects;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

