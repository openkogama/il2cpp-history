
/* Void ActivateBar(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ActivateBar
               (GameTierProgressBar *this,int32_t barIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pGVar2->progressBar != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress(pGVar2->progressBar,1.0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar2 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,barIndex
                            ,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if (pGVar2->disabledProgressBar != (ProgressBar *)0x0) {
          ProgressBar::ProgressBar_set_Progress(pGVar2->disabledProgressBar,1.0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,iVar2,
                           CONCAT31((int3)((uint)in_stack_3 >> 8),
                                    (pPVar1->fields).gamePassTier),(MethodInfo *)0x0);
      iVar4 = 1;
      fVar5 = 0.0;
      if ((tierToCalculateTo & 0xff) != GamePassTier__Enum_Tier0) {
        do {
          key = 
          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
          ;
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          pDVar6 = this_01;
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                              (GamePassTier__Enum)
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar7 == (Object *)0x0) goto code_?;
          pOVar8 = pOVar7[3].klass;
          pDVar9 = this_01;
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                              (GamePassTier__Enum)key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar7 == (Object *)0x0) goto code_?;
          fVar5 = (float)(int)pOVar7[3].klass * totalProgressValue;
          if ((float)(int)pOVar8 < fVar5) {
            fVar5 = (float)(int)pOVar8;
          }
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          totalProgressValue = totalProgressValue - _UNK_?;
          fVar5 = fVar5 + (float)pDVar9;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= (int)pDVar6);
      }
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        (fVar5,(MethodInfo *)0x0);
      return iVar2;
    }
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,
                           CONCAT31((int3)((uint)unaff_EBX >> 8),(pPVar1->fields).gamePassTier),
                           (MethodInfo *)0x0);
      key = 1.4013e-45;
      while ((this_01 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0 && (fVar2 = key,
                     pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                              GamePassTier,System::Object]::
                              Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                        ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                         this_01,(GamePassTier__Enum)key,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        ), pOVar3 != (Object *)0x0))) {
        pOVar4 = pOVar3[3].klass;
        if ((int)pOVar4 < 1) {
          fVar5 = 0.0;
          iVar6 = gamePoints;
        }
        else {
          iVar6 = gamePoints - (int)pOVar4;
          fVar7 = (float)gamePoints / (float)(int)pOVar4;
          fVar5 = _UNK_?;
          if ((fVar7 <= _UNK_?) && (fVar5 = fVar7, fVar7 < 0.0)) {
            fVar5 = 0.0;
          }
          fVar5 = fVar5 + fVar2;
        }
        key = (float)((int)key + GamePassTier__Enum_Tier1);
        gamePoints = iVar6;
        if (3 < (int)key) {
          return fVar5;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Boolean CanShowFreeTryBubble() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CanShowFreeTryBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    uVar4 = (pPVar1->fields).gamePassTier;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (uVar4 != 3) {
      if (cRam_? == '\0') {
        this = _UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      if (((pPVar1->fields).previewGamePassTier == 0) && (MVar5 != MVGameMode__Enum_Edit)) {
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                          ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0,(MethodInfo *)this);
        if (bVar3 != 0) {
          return 1;
        }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GameTierProgressBar_DestroyHeadPreview(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).previewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar1 = (AvatarPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pAVar1,
                      AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                     );
  (this->fields).headPreviewer = pAVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_03 != (MVLocalPlayer *)0x0) &&
     (this_04 = MVLocalPlayer::MVLocalPlayer_get_Body(this_03,(MethodInfo *)0x0),
     this_04 != (MVBody *)0x0)) {
    this_05 = MVBody::MVBody_GetBodyPart(this_04,StringLiteral_Head,(MethodInfo *)0x0);
    uStack_2 = CONCAT44(this_05,(undefined4)uStack_2);
    if (this_05 != (MVCubeModelInstance *)0x0) {
      original = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)this_05,(MethodInfo *)0x0);
      gameObject = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)original,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
      pXStack_3 = gameObject;
      layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Preview,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)gameObject,layer,(MethodInfo *)0x0);
      if (gameObject != (XpBoostParticlePreviewer *)0x0) {
        pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)gameObject,
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                           );
        iVar5 = 0;
        if (pUVar4 != (UseInteratorVisualization__Array *)0x0) {
          for (; iVar5 < (int)pUVar4->max_length; iVar5 = iVar5 + 1) {
            iVar6 = 0;
            while( true ) {
              pRVar7 = (Renderer *)func_?();
              if ((pRVar7 == (Renderer *)0x0) ||
                 (pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                     (pRVar7,(MethodInfo *)0x0), pMVar8 == (Material__Array *)0x0))
              goto code_?;
              if ((int)pMVar8->max_length <= iVar6) break;
              pRVar7 = (Renderer *)func_?();
              if (((pRVar7 == (Renderer *)0x0) ||
                  (pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_materials(pRVar7,(MethodInfo *)0x0),
                  pMVar8 == (Material__Array *)0x0)) ||
                 (pMVar9 = (Material *)func_?(), pMVar9 == (Material *)0x0))
              goto code_?;
              bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                                (pMVar9,StringLiteral__Color,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                pRVar7 = (Renderer *)func_?();
                if (((pRVar7 == (Renderer *)0x0) ||
                    (pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_get_materials(pRVar7,(MethodInfo *)0x0),
                    pMVar8 == (Material__Array *)0x0)) ||
                   (pMVar9 = (Material *)func_?(), pMVar9 == (Material *)0x0))
                goto code_?;
                pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                   (&CStack_12,pMVar9,(MethodInfo *)0x0);
                fStack_13 = pCVar11->r;
                uStack_14._0_4_ = pCVar11->g;
                uStack_14._4_4_ = pCVar11->b;
                fStack_15 = pCVar11->a;
                pRVar7 = (Renderer *)func_?();
                if ((pRVar7 == (Renderer *)0x0) ||
                   (pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_materials(pRVar7,(MethodInfo *)0x0),
                   pMVar8 == (Material__Array *)0x0)) goto code_?;
                pMVar9 = (Material *)func_?();
                fStack_16 = fStack_13;
                VStack_17.x = (float)uStack_14;
                VStack_17.y = uStack_14._4_4_;
                VStack_17.z = 1.0;
                if (pMVar9 == (Material *)0x0) goto code_?;
                value.g = (float)uStack_14;
                value.r = fStack_13;
                value.b = uStack_14._4_4_;
                value.a = 1.0;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (pMVar9,value,(MethodInfo *)0x0);
              }
              iVar6 = iVar6 + 1;
            }
          }
          pGVar18 = (GameObject *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                    (pGVar18,(MethodInfo *)0x0);
          if (pGVar18 != (GameObject *)0x0) {
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar18,(MethodInfo *)0x0);
            fStack_20 = 0.0;
            uStack_21 = 0;
            pAVar1 = (this->fields).headPreviewer;
            (this->fields).previewHeadRoot = pTVar19;
            func_?();
            pTVar19 = (this->fields).previewHeadRoot;
            fStack_22 = 0.0;
            uStack_23 = 0;
            func_?();
            fStack_24 = 0.0;
            uStack_25 = 0;
            func_?();
            if (pAVar1 != (AvatarPreviewer *)0x0) {
              cameraOffset.z = fStack_20;
              cameraOffset.x = (float)(undefined4)uStack_21;
              cameraOffset.y = (float)uStack_21._4_4_;
              previewPosition.z = fStack_22;
              previewPosition.x = (float)(undefined4)uStack_23;
              previewPosition.y = (float)uStack_23._4_4_;
              additionalCameraRotation.z = fStack_24;
              additionalCameraRotation.x = (float)(undefined4)uStack_25;
              additionalCameraRotation.y = (float)uStack_25._4_4_;
              AvatarPreviewer::AvatarPreviewer_Initialize
                        (pAVar1,0x80,0x80,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,
                         cameraOffset,pTVar19,previewPosition,StringLiteral_Avatar_Head_preview,
                         uStack_2._4_4_,(GameObject *)pXStack_3,additionalCameraRotation,
                         (MethodInfo *)0x0);
              pAVar1 = (this->fields).headPreviewer;
              if (((pAVar1 != (AvatarPreviewer *)0x0) &&
                  (this_00 = (pAVar1->fields).previewCam, this_00 != (Camera *)0x0)) &&
                 (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0),
                 pTVar19 != (Transform *)0x0)) {
                pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_17,pTVar19,(MethodInfo *)0x0);
                uStack_2._0_4_ = pVVar26->x;
                uStack_2._4_4_ = (MVWorldObjectClient *)pVVar26->y;
                fVar27 = pVVar26->z;
                CStack_12.a = 0.0;
                CStack_12.g = 0.0;
                CStack_12.b = 0.0;
                func_?();
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a.z = fVar27;
                a.x = (float)(undefined4)uStack_2;
                a.y = (float)uStack_2._4_4_;
                b.z = CStack_12.a;
                b.x = CStack_12.g;
                b.y = CStack_12.b;
                pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    (&VStack_17,a,b,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar19,*pVVar26,(MethodInfo *)0x0);
                this_01 = (AddDotsToTruncatedText_Start_c_Iterator0 *)(this->fields).headPreviewer;
                if ((this_01 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) &&
                   (pGVar18 = (GameObject *)
                              AddDotsToTruncatedText+<Start>c__Iterator0::
                              AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                                        (this_01,(MethodInfo *)0x0), pGVar18 != (GameObject *)0x0))
                {
                  pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar18,(MethodInfo *)0x0);
                  fStack_15 = 0.0;
                  uStack_14 = 0;
                  func_?();
                  if (pTVar19 != (Transform *)0x0) {
                    eulers.z = fStack_15;
                    eulers.x = (float)uStack_14;
                    eulers.y = uStack_14._4_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                              (pTVar19,eulers,(MethodInfo *)0x0);
                    pLVar28 = (this->fields).tierProgressDataList;
                    iVar5 = 0;
                    if (pLVar28 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      while( true ) {
                        pOVar29 = mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                              *)pLVar28,
                                             MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                                            );
                        if ((int)pOVar29 <= iVar5) {
                          return;
                        }
                        pLVar28 = (this->fields).tierProgressDataList;
                        if (pLVar28 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
                        pGVar30 = mscorlib.dll::System::Collections::Generic::
                                  List`1[GameTierProgressBar+TierProgressData]::
                                  List_1_GameTierProgressBar_TierProgressData__get_Item
                                            ((GameTierProgressBar_TierProgressData *)
                                             &stack0xffffff0c,pLVar28,iVar5,
                                             MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                            );
                        this_02 = pGVar30->avatarHeadImage;
                        pAVar1 = (this->fields).headPreviewer;
                        if ((pAVar1 == (AvatarPreviewer *)0x0) ||
                           (value_00 = (Texture *)
                                       System.Core.dll::System::Linq::
                                       Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
                                       Collections::Generic::KeyValuePair`2[System::Object,System::
                                       Object],System::Object]::
                                       Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                 ((
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                                  *)pAVar1,(MethodInfo *)0x0),
                           this_02 == (RawImage *)0x0)) break;
                        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                  (this_02,value_00,(MethodInfo *)0x0);
                        pLVar28 = (this->fields).tierProgressDataList;
                        iVar5 = iVar5 + 1;
                        if (pLVar28 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
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
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void DeactivateBar(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DeactivateBar
               (GameTierProgressBar *this,int32_t barIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pGVar2->progressBar != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress(pGVar2->progressBar,0.0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar2 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,barIndex
                            ,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if (pGVar2->disabledProgressBar != (ProgressBar *)0x0) {
          ProgressBar::ProgressBar_set_Progress(pGVar2->disabledProgressBar,0.0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
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
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pGVar2->freeTryTextBubble,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewHeadRoot;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).headPreviewer = (AvatarPreviewer *)0x0;
    (this->fields).previewHeadRoot = (Transform *)0x0;
  }
  return;
}


/* GamePassTier GetCurrentTier() */

GamePassTier__Enum
Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_GetCurrentTier
          (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  f = (this->fields).previousProgressValue;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(f,(MethodInfo *)0x0);
  return CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + '\x01');
}


/* Single GetProgressBarPercentage(GamePassTier) */

float Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_GetProgressBarPercentage
                (GameTierProgressBar *this,GamePassTier__Enum tierToShowProgressFor,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,iVar2,
                      CONCAT31((int3)((uint)unaff_EBX >> 8),(pPVar1->fields).gamePassTier),
                      (MethodInfo *)0x0);
      iVar2 = GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                        (this,tierToShowProgressFor,iVar2,gameTierShopStatus,(MethodInfo *)0x0);
      if (gameTierShopStatus !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)gameTierShopStatus
                            ,tierToShowProgressFor,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          fVar4 = (float)iVar2 / (float)(int)pOVar3[3].klass;
          fVar5 = _UNK_?;
          if (fVar4 <= _UNK_?) {
            fVar5 = fVar4;
          }
          return fVar5;
        }
      }
    }
  }
  uStack6 = 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0);
  barIndex = GamePassTier__Enum_Tier0;
  while( true ) {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
    break;
    puVar2 = (undefined4 *)func_?();
    if ((Component_1 *)*puVar2 == (Component_1 *)0x0) break;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)*puVar2,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
    break;
    iVar4 = func_?();
    if (*(Component_1 **)(iVar4 + 0x1c) == (Component_1 *)0x0) break;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (*(Component_1 **)(iVar4 + 0x1c),(MethodInfo *)0x0);
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
    func_?(_UNK_?);
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
    GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
              (pGVar2->freeTryTextBubble,1,(MethodInfo *)0x0);
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
    pGVar2 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar2->freeTryTextBubble == (GamePassesTextBubble *)0x0) break;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pGVar2->freeTryTextBubble,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    iVar3 = index + 2;
    index = index + 1;
    if (3 < iVar3) {
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleShowTips() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleShowTips
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GameTierProgressBar->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameTierProgressBar->_1).cctor_started == 0)) {
    func_?(TypeInfo__GameTierProgressBar);
  }
  TypeInfo__GameTierProgressBar->static_fields->haveShownTips = 1;
  bVar1 = GameTierProgressBar_ShowFreeTryTextBubble(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar2 != (GameSessionData *)0x0) {
    if ((pGVar2->fields).gameMode == 0) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        pLVar5 = (this->fields).tierProgressDataList;
        if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                             );
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                            (bVar4 - 1,0,(int32_t)pOVar6,(MethodInfo *)0x0);
          pLVar5 = (this->fields).tierProgressDataList;
          if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar8 = mscorlib.dll::System::Collections::Generic::
                      List`1[GameTierProgressBar+TierProgressData]::
                      List_1_GameTierProgressBar_TierProgressData__get_Item
                                ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar5,
                                 iVar7,
                                 MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                );
            if (pGVar8->disabledBarTextBubble != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (pGVar8->disabledBarTextBubble,
                         StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
              pLVar5 = (this->fields).tierProgressDataList;
              if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar8 = mscorlib.dll::System::Collections::Generic::
                          List`1[GameTierProgressBar+TierProgressData]::
                          List_1_GameTierProgressBar_TierProgressData__get_Item
                                    ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar5
                                     ,iVar7,
                                     MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                    );
                if (pGVar8->progressBarTextBubble != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (pGVar8->progressBarTextBubble,
                             StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar3 != (PlayerPlanetData *)0x0) {
          bVar4 = (pPVar3->fields).gamePassTier;
          pLVar5 = (this->fields).tierProgressDataList;
          if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                               );
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?();
            }
            iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                              (bVar4 - 1,0,(int32_t)pOVar6,(MethodInfo *)0x0);
            if ((this->fields).tierProgressDataList !=
                (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar9 = func_?();
              if (*(GamePassesTextBubble **)(iVar9 + 0x24) != (GamePassesTextBubble *)0x0) {
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (*(GamePassesTextBubble **)(iVar9 + 0x24),
                           StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
                pLVar5 = (this->fields).tierProgressDataList;
                if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  iVar9 = func_?(&stack0xffffff6c,pLVar5,iVar7,
                                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                         );
                  if (*(GamePassesTextBubble **)(iVar9 + 0xc) != (GamePassesTextBubble *)0x0) {
                    GamePassesTextBubble::GamePassesTextBubble_Activate
                              (*(GamePassesTextBubble **)(iVar9 + 0xc),
                               StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pLVar5 = (this->fields).tierProgressDataList;
        if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          iVar9 = func_?(&stack0xffffff6c,pLVar5,0);
          if (*(GamePassesTextBubble **)(iVar9 + 0x24) != (GamePassesTextBubble *)0x0) {
            GamePassesTextBubble::GamePassesTextBubble_Activate
                      (*(GamePassesTextBubble **)(iVar9 + 0x24),
                       StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
            pLVar5 = (this->fields).tierProgressDataList;
            if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar9 = func_?(&stack0xffffff6c,pLVar5,0,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
              if (*(GamePassesTextBubble **)(iVar9 + 0xc) != (GamePassesTextBubble *)0x0) {
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (*(GamePassesTextBubble **)(iVar9 + 0xc),
                           StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandleUnlockedTiersProgressBars() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleUnlockedTiersProgressBars
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        func_?(0);
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
      if ((ProgressBar *)puVar4[7] == (ProgressBar *)0x0) goto code_?;
      ProgressBar::ProgressBar_set_Progress((ProgressBar *)puVar4[7],1.0,(MethodInfo *)0x0);
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
      if ((ProgressBar *)*puVar4 == (ProgressBar *)0x0) goto code_?;
      ProgressBar::ProgressBar_set_Progress((ProgressBar *)*puVar4,1.0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (pPVar1->fields).previewGamePassTier != 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean HasTempTier(GamePassTier) */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HasTempTier
               (GameTierProgressBar *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar2->fields).previewGamePassTier;
      pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        if ((undefined1)tier != uVar3) {
          return 0;
        }
        return (undefined1)tier != (pPVar2->fields).gamePassTier;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    bVar1 = (*pcVar4)();
    return bVar1;
  }
  return 0;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Initialize
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAStack_3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack_3 != (Action *)0x0) {
    if (pAStack_3->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack_3;
    }
    if (pAVar1 != (Action *)0x0) goto code_?;
code_?:
    func_?();
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__,
             (MethodInfo *)0x0);
  pAStack_3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack_3 != (Action *)0x0) {
    if (pAStack_3->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack_3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar5 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAStack_3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack_3 != (Action *)0x0) {
    if (pAStack_3->klass == (Action__Class *)TypeInfo__System__Action<int>) {
      pAVar1 = pAStack_3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
       (Action_1_Int32_ *)pAVar1;
  pAVar5 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAStack_3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack_3 != (Action *)0x0) {
    if (pAStack_3->klass == (Action__Class *)TypeInfo__System__Action<int>) {
      pAVar1 = pAStack_3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       (Action_1_Int32_ *)pAVar1;
  bVar6 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar6 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar7 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar7 == (PlayerPlanetData *)0x0) goto code_?;
    playerGamePoints = (pPVar7->fields).progressionGamePoints;
    GameTierProgressBar_UpdateProgressBars(this,playerGamePoints,(MethodInfo *)0x0);
    GameTierProgressBar_UpdateDividerVisibility(this,playerGamePoints,(MethodInfo *)0x0);
    GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
    GameTierProgressBar_UpdateTierIconHoverInput(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0);
    barIndex = GamePassTier__Enum_Tier0;
    do {
      bVar6 = GameTierProgressBar_IsTierUnlocked
                        (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
      }
      if ((this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0
         ) goto code_?;
      puVar8 = (undefined4 *)func_?();
      if ((((Component_1 *)*puVar8 == (Component_1 *)0x0) ||
          (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)*puVar8,(MethodInfo *)0x0),
          pGVar9 == (GameObject *)0x0)) ||
         (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar9,0,(MethodInfo *)0x0),
         (this->fields).tierProgressDataList == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
         ) goto code_?;
      iVar10 = func_?();
      if ((*(Component_1 **)(iVar10 + 0x1c) == (Component_1 *)0x0) ||
         (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (*(Component_1 **)(iVar10 + 0x1c),(MethodInfo *)0x0),
         pGVar9 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      iVar10 = barIndex + GamePassTier__Enum_Tier2;
      barIndex = barIndex + GamePassTier__Enum_Tier1;
    } while (iVar10 < 4);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar10 = 0;
    do {
      pLVar11 = (this->fields).tierProgressDataList;
      if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      pGVar12 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar11,iVar10,
                           MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                          );
      if (pGVar12->freeTryTextBubble == (GamePassesTextBubble *)0x0) goto code_?;
      GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                (pGVar12->freeTryTextBubble,1,(MethodInfo *)0x0);
      pLVar11 = (this->fields).tierProgressDataList;
      if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      pGVar12 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar11,iVar10,
                           MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                          );
      if ((pGVar12->freeTryTextBubble == (GamePassesTextBubble *)0x0) ||
         (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pGVar12->freeTryTextBubble,(MethodInfo *)0x0),
         pGVar9 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,0,(MethodInfo *)0x0);
      iVar13 = iVar10 + 2;
      iVar10 = iVar10 + 1;
    } while (iVar13 < 4);
    fVar14 = GameTierProgressBar_CalculateTotalProgressValue
                       (this,playerGamePoints,(MethodInfo *)0x0);
    (this->fields).previousProgressValue = fVar14;
    (this->fields).interpolateTowardsProgressValue = fVar14;
    GameTierProgressBar_CreateAvatarHeadImages(this,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean IsProgressBarEnabled() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_IsProgressBarEnabled
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
      (PlayerTierStateCalculator *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar1 == (PlayerTierStateCalculator *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pPVar1->fields).gamePassRewardsActivated != 0) {
      return 1;
    }
  }
  return 0;
}


/* Boolean IsTierUnlocked(GamePassTier) */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_IsTierUnlocked
               (GameTierProgressBar *this,GamePassTier__Enum tierToCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      method_00 = (GamePassTier__Enum)(pPVar1->fields).gamePassTier;
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,method_00,(MethodInfo *)method_00);
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                            tierToCheck,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar2 != (Object *)0x0) {
          return pOVar2[1].klass == (Object__Class *)0x0;
        }
      }
    }
  }
  uStack3 = 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 != 0) {
    method_00 = TypeInfo__GameTierProgressBar___OnActiveProgressBarClicked_c__AnonStorey1;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    pXVar2 = (XpBoostParticlePreviewer *)(this->fields).touristInformationPopup;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (this_00 == (ScaleAnimationBase *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GameTierProgressBar___OnActiveProgressBarClicked_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAVar5 = (Action_1_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_1_Int32_ *)0x0;
  if (pAVar5 != (Action_1_Int32_ *)0x0) {
    if (pAVar5->klass == TypeInfo__System__Action<int>) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 == (Action_1_Int32_ *)0x0) goto code_?;
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar4;
  pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_,
             MethodInfo__System__Action<int>__Action_System__Object__void__);
  pAVar5 = (Action_1_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_1_Int32_ *)0x0;
  if (pAVar5 != (Action_1_Int32_ *)0x0) {
    if (pAVar5->klass == TypeInfo__System__Action<int>) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 == (Action_1_Int32_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       pAVar4;
  GameTierProgressBar_DestroyHeadPreview(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnDisable
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar1 == (GameSessionData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pGVar1->fields).gameMode != 0) &&
       (bVar3 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0), bVar3 != 0)) {
      (this->fields).previousProgressValue = (this->fields).interpolateTowardsProgressValue;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
      playerGamePoints = (pPVar4->fields).progressionGamePoints;
      GameTierProgressBar_UpdateProgressBars(this,playerGamePoints,(MethodInfo *)0x0);
      GameTierProgressBar_UpdateDividerVisibility(this,playerGamePoints,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnEnable
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_01 = this;
  (this->fields).interpolationStartTime = fVar1;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar2 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    gamePointAmountShown = (pPVar3->fields).progressionGamePoints;
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointGainEffectManager);
    }
    iVar4 = GamePointGainEffectManager::GamePointGainEffectManager_get_GamePointAmountShown
                      ((MethodInfo *)0x0);
    if (gamePointAmountShown != iVar4) {
      if ((((uint)(TypeInfo__GameTierProgressBar->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GameTierProgressBar->_1).cctor_started == 0)) {
        func_?(TypeInfo__GameTierProgressBar);
      }
      if ((TypeInfo__GameTierProgressBar->static_fields->haveShownTips != 0) &&
         ((this_01->fields).hasShownRankTip == 0)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar5 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar5->fields).gameMode != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (bVar2 == 0) {
            (this_01->fields).hasShownRankTip = 1;
            if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__GamePassesManager);
            }
            pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
            if (pPVar3 == (PlayerPlanetData *)0x0) {
code_?:
              func_?(0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this = (GameTierProgressBar *)(pPVar3->fields).rank;
            this_00 = (this_01->fields).highScoreTipTextBubble;
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            textBubbleText =
                 mscorlib.dll::System::String::String_Concat
                           ((Object *)StringLiteral_Ranku000A,arg1,(MethodInfo *)0x0);
            if (this_00 == (GamePassesTextBubble *)0x0) goto code_?;
            GamePassesTextBubble::GamePassesTextBubble_Activate
                      (this_00,textBubbleText,(MethodInfo *)0x0);
          }
        }
      }
    }
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointGainEffectManager);
    }
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
              (gamePointAmountShown,(MethodInfo *)0x0);
  }
  GameTierProgressBar_UpdateTempProgressVisibility(this_01,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateTierIconHoverInput(this_01,(MethodInfo *)0x0);
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
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
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  f = (this->fields).previousProgressValue;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  index = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(f,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).gamePassTier);
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,playerGamePoints,GStack_2,(MethodInfo *)0x0);
      if (gameTierShopStatus !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        this._0_1_ = (char)index;
        key = CONCAT31((int3)((uint)playerGamePoints >> 8),(char)this + '\x01');
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)gameTierShopStatus
                            ,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                    (this_02,key,playerGamePoints,gameTierShopStatus,(MethodInfo *)0x0);
          pSVar4 = (String *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat_2
                             (pSVar4,StringLiteral__Crystals_to_go_,(MethodInfo *)0x0);
          this_01 = (this_02->fields).tierProgressDataList;
          if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar5 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,this_01,
                                index,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar5->avatarHead != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (pGVar5->avatarHead,pSVar4,(MethodInfo *)0x0);
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


/* Void OnHoverEnter() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHoverEnter
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (pPVar1->fields).gamePassTier;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    uVar4 = (pPVar1->fields).gamePassTier;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (uVar4 != 3) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      if (((pPVar1->fields).previewGamePassTier == 0) && (MVar5 != MVGameMode__Enum_Edit)) {
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVClientSettings);
        }
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                          ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0,in_stack_7);
        if (bVar6 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_01 != (MVNetworkGame *)0x0) &&
             (pIVar8 = HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                 ((HoverCraftMotor *)this_01,(MethodInfo *)0x0),
             pIVar8 != (IVehicleCamera *)0x0)) {
            GStack_9 = CONCAT31(GStack_9._1_3_,uVar3 + 1);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if (pIVar8[1].klass != (IVehicleCamera__Class *)0x0) {
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      GamePassTier,System::Object]::
                      Dictionary_2_MV_Common_GamePassTier_System_Object__ContainsKey
                                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                 pIVar8[1].klass,GStack_9,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                                );
              if (bVar6 == 0) {
                return;
              }
              if (pIVar8[1].klass != (IVehicleCamera__Class *)0x0) {
                pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                    pIVar8[1].klass,GStack_9,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar10 == (Object *)0x0) {
                  return;
                }
                index = CONCAT11(MVar5 == MVGameMode__Enum_Edit,uVar3) & 0xff;
                pLVar11 = (this->fields).tierProgressDataList;
                if (pLVar11 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  pGVar12 = mscorlib.dll::System::Collections::Generic::
                            List`1[GameTierProgressBar+TierProgressData]::
                            List_1_GameTierProgressBar_TierProgressData__get_Item
                                      ((GameTierProgressBar_TierProgressData *)&stack0xffffff54,
                                       pLVar11,index,
                                       MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                      );
                  if (pGVar12->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
                    bVar6 = GamePassesTextBubble::GamePassesTextBubble_get_IsActive
                                      (pGVar12->freeTryTextBubble,(MethodInfo *)0x0);
                    if (bVar6 != 0) {
                      return;
                    }
                    if ((this->fields).tierProgressDataList !=
                        (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      iVar13 = func_?();
                      if ((*(Component_1 **)(iVar13 + 0x3c) != (Component_1 *)0x0) &&
                         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_gameObject
                                              (*(Component_1 **)(iVar13 + 0x3c),(MethodInfo *)0x0),
                         this_02 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (this_02,1,(MethodInfo *)0x0);
                        pLVar11 = (this->fields).tierProgressDataList;
                        if (pLVar11 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          iVar13 = func_?(&stack0xffffff54,pLVar11,index,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                          this_00 = *(GamePassesTextBubble **)(iVar13 + 0x3c);
                          textBubbleText = TM::TM__(StringLiteral_FREE_TRY,(MethodInfo *)0x0);
                          if (this_00 != (GamePassesTextBubble *)0x0) {
                            GamePassesTextBubble::GamePassesTextBubble_Activate
                                      (this_00,textBubbleText,(MethodInfo *)0x0);
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
          goto code_?;
        }
      }
    }
  }
  return;
}


/* Void OnInactiveProgressBarClicked(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnInactiveProgressBarClicked
               (GameTierProgressBar *this,int32_t progressBarNumberPressed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnPlayerPlanetDataUpdated
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        bVar3 = (pPVar2->fields).gamePassTier;
        iVar4 = 2;
        do {
          if ((int)(bVar3 - 1) < iVar4) {
            GameTierProgressBar_DeactivateBar(this,iVar4,(MethodInfo *)0x0);
          }
          else {
            GameTierProgressBar_ActivateBar(this,iVar4,(MethodInfo *)0x0);
          }
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassProgressionController);
      }
      bVar5 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if ((bVar5 == 0) ||
         (bVar5 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0), bVar5 == 0)) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        barIndex = GamePassTier__Enum_Tier0;
        do {
          bVar5 = GameTierProgressBar_IsTierUnlocked
                            (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            if ((this->fields).tierProgressDataList ==
                (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
            iVar4 = func_?();
            if (*(ProgressBar **)(iVar4 + 0x1c) == (ProgressBar *)0x0) goto code_?;
            ProgressBar::ProgressBar_set_Progress
                      (*(ProgressBar **)(iVar4 + 0x1c),1.0,(MethodInfo *)0x0);
            pLVar6 = (this->fields).tierProgressDataList;
            if (pLVar6 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
            goto code_?;
            puVar7 = (undefined4 *)
                      func_?(&stack0xffffff64,pLVar6,barIndex,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
            if ((ProgressBar *)*puVar7 == (ProgressBar *)0x0) goto code_?;
            ProgressBar::ProgressBar_set_Progress((ProgressBar *)*puVar7,1.0,(MethodInfo *)0x0);
            GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
          }
          iVar4 = barIndex + GamePassTier__Enum_Tier2;
          barIndex = barIndex + GamePassTier__Enum_Tier1;
          if (3 < iVar4) {
            return;
          }
        } while( true );
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        fVar8 = GameTierProgressBar_CalculateTotalProgressValue
                           (this,(pPVar2->fields).progressionGamePoints,(MethodInfo *)0x0);
        fVar9 = (this->fields).previousProgressValue;
        (this->fields).interpolateTowardsProgressValue = fVar8;
        if (fVar9 != fVar8) {
          (this->fields).shouldInterpolate = 1;
        }
        pLVar6 = (this->fields).tierProgressDataList;
        if (pLVar6 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                             );
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                             (fVar9,0.0,(float)(int)((int)&pOVar10[-1].monitor + 3),
                              (MethodInfo *)0x0);
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                            (fVar9,(MethodInfo *)0x0);
          if ((this->fields).shouldInterpolate != 0) {
            for (fVar9 = (this->fields).interpolateTowardsProgressValue - (float)iVar4;
                0.0 < fVar9; fVar9 = fVar9 - _UNK_?) {
              pLVar6 = (this->fields).tierProgressDataList;
              if (pLVar6 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
              goto code_?;
              iVar11 = func_?(&stack0xffffff64,pLVar6,iVar4,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
              this_00 = *(ProgressBar **)(iVar11 + 0x30);
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?();
              }
              fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                 (fVar9,0.0,1.0,(MethodInfo *)0x0);
              if (this_00 == (ProgressBar *)0x0) goto code_?;
              ProgressBar::ProgressBar_set_Progress(this_00,fVar8,(MethodInfo *)0x0);
              iVar4 = iVar4 + 1;
            }
          }
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar2 != (PlayerPlanetData *)0x0) {
            GameTierProgressBar_UpdateProgressBars
                      (this,(pPVar2->fields).progressionGamePoints,(MethodInfo *)0x0);
            pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
            if (pPVar2 != (PlayerPlanetData *)0x0) {
              GameTierProgressBar_UpdateDividerVisibility
                        (this,(pPVar2->fields).progressionGamePoints,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - GamePassTier__Enum_Tier1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    GamePassTier,System::Object]::
                    Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                              ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                               gameTierShopStatus,key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    gamePoints = gamePoints - (int)pOVar1[3].klass;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ReplayGainEffect
               (GameTierProgressBar *this,int32_t previousGamePointAmount,int32_t newGamePointAmount
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  GameTierProgressBar_UpdateProgressBars(this,previousGamePointAmount,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateDividerVisibility(this,previousGamePointAmount,(MethodInfo *)0x0);
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue
                    (this,previousGamePointAmount,(MethodInfo *)0x0);
  (this->fields).previousProgressValue = fVar1;
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue(this,newGamePointAmount,(MethodInfo *)0x0)
  ;
  (this->fields).interpolateTowardsProgressValue = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).interpolationStartTime = fVar1;
  (this->fields).shouldInterpolate = 1;
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?();
  }
  GamePointGainEffectManager::GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
            (newGamePointAmount,(MethodInfo *)0x0);
  return;
}


/* IEnumerator ScaleAndFadeLockForTier(Int32) */

IEnumerator *
Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ScaleAndFadeLockForTier
          (GameTierProgressBar *this,int32_t tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = (float)this;
    (this_00->fields).originalScale.x = (float)tier;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void SetLockedStateForTier(Int32, Boolean) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_SetLockedStateForTier
               (GameTierProgressBar *this,int32_t tier,bool tierUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ShowFreeTryTextBubble() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ShowFreeTryTextBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uVar4 = (pPVar1->fields).gamePassTier;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    uVar5 = (pPVar1->fields).gamePassTier;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (uVar5 != 3) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      if (((pPVar1->fields).previewGamePassTier == 0) && (MVar6 != MVGameMode__Enum_Edit)) {
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVClientSettings);
        }
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                          ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0,in_stack_7);
        if (bVar3 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_01 != (MVNetworkGame *)0x0) &&
             (pIVar8 = HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                 ((HoverCraftMotor *)this_01,(MethodInfo *)0x0),
             pIVar8 != (IVehicleCamera *)0x0)) {
            GStack_9 = CONCAT31(GStack_9._1_3_,uVar4 + 1);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if (pIVar8[1].klass != (IVehicleCamera__Class *)0x0) {
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      GamePassTier,System::Object]::
                      Dictionary_2_MV_Common_GamePassTier_System_Object__ContainsKey
                                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                 pIVar8[1].klass,GStack_9,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                                );
              if (bVar3 == 0) {
                return 0;
              }
              if (pIVar8[1].klass != (IVehicleCamera__Class *)0x0) {
                pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                    pIVar8[1].klass,GStack_9,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar10 == (Object *)0x0) {
                  return 0;
                }
                index = CONCAT11(MVar6 == MVGameMode__Enum_Edit,uVar4) & 0xff;
                pLVar11 = (this->fields).tierProgressDataList;
                if (pLVar11 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  pGVar12 = mscorlib.dll::System::Collections::Generic::
                            List`1[GameTierProgressBar+TierProgressData]::
                            List_1_GameTierProgressBar_TierProgressData__get_Item
                                      ((GameTierProgressBar_TierProgressData *)&stack0xffffff54,
                                       pLVar11,index,
                                       MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                      );
                  if (pGVar12->freeTryTextBubble != (GamePassesTextBubble *)0x0) {
                    bVar3 = GamePassesTextBubble::GamePassesTextBubble_get_IsActive
                                      (pGVar12->freeTryTextBubble,(MethodInfo *)0x0);
                    if (bVar3 != 0) {
                      return 1;
                    }
                    if ((this->fields).tierProgressDataList !=
                        (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      iVar13 = func_?();
                      if ((*(Component_1 **)(iVar13 + 0x3c) != (Component_1 *)0x0) &&
                         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_gameObject
                                              (*(Component_1 **)(iVar13 + 0x3c),(MethodInfo *)0x0),
                         this_02 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (this_02,1,(MethodInfo *)0x0);
                        pLVar11 = (this->fields).tierProgressDataList;
                        if (pLVar11 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          iVar13 = func_?(&stack0xffffff54,pLVar11,index,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                                  );
                          this_00 = *(GamePassesTextBubble **)(iVar13 + 0x3c);
                          textBubbleText = TM::TM__(StringLiteral_FREE_TRY,(MethodInfo *)0x0);
                          if (this_00 != (GamePassesTextBubble *)0x0) {
                            GamePassesTextBubble::GamePassesTextBubble_Activate
                                      (this_00,textBubbleText,(MethodInfo *)0x0);
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
          goto code_?;
        }
      }
    }
  }
  return 0;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Start
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GameTierProgressBar->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameTierProgressBar->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__GameTierProgressBar->static_fields->haveShownTips == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GameTierProgressBar->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GameTierProgressBar->_1).cctor_started == 0)) {
      func_?(TypeInfo__GameTierProgressBar);
    }
    TypeInfo__GameTierProgressBar->static_fields->haveShownTips = 1;
    bVar1 = GameTierProgressBar_ShowFreeTryTextBubble(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 0) {
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar3 != (PlayerPlanetData *)0x0) {
          bVar4 = (pPVar3->fields).gamePassTier;
          pLVar5 = (this->fields).tierProgressDataList;
          if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                               );
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?();
            }
            iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                              (bVar4 - 1,0,(int32_t)pOVar6,(MethodInfo *)0x0);
            pLVar5 = (this->fields).tierProgressDataList;
            if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar8 = mscorlib.dll::System::Collections::Generic::
                        List`1[GameTierProgressBar+TierProgressData]::
                        List_1_GameTierProgressBar_TierProgressData__get_Item
                                  ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar5,
                                   iVar7,
                                   MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                  );
              if (pGVar8->disabledBarTextBubble != (GamePassesTextBubble *)0x0) {
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (pGVar8->disabledBarTextBubble,
                           StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
                pLVar5 = (this->fields).tierProgressDataList;
                if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  pGVar8 = mscorlib.dll::System::Collections::Generic::
                            List`1[GameTierProgressBar+TierProgressData]::
                            List_1_GameTierProgressBar_TierProgressData__get_Item
                                      ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,
                                       pLVar5,iVar7,
                                       MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                      );
                  if (pGVar8->progressBarTextBubble != (GamePassesTextBubble *)0x0) {
                    GamePassesTextBubble::GamePassesTextBubble_Activate
                              (pGVar8->progressBarTextBubble,
                               StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar1 == 0) {
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            bVar4 = (pPVar3->fields).gamePassTier;
            pLVar5 = (this->fields).tierProgressDataList;
            if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5
                                  ,
                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                                 );
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?();
              }
              iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                                (bVar4 - 1,0,(int32_t)pOVar6,(MethodInfo *)0x0);
              if ((this->fields).tierProgressDataList !=
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar9 = func_?();
                if (*(GamePassesTextBubble **)(iVar9 + 0x24) != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (*(GamePassesTextBubble **)(iVar9 + 0x24),
                             StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
                  pLVar5 = (this->fields).tierProgressDataList;
                  if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    iVar9 = func_?(&stack0xffffff6c,pLVar5,iVar7,
                                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                           );
                    if (*(GamePassesTextBubble **)(iVar9 + 0xc) != (GamePassesTextBubble *)0x0) {
                      GamePassesTextBubble::GamePassesTextBubble_Activate
                                (*(GamePassesTextBubble **)(iVar9 + 0xc),
                                 StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pLVar5 = (this->fields).tierProgressDataList;
          if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar9 = func_?(&stack0xffffff6c,pLVar5,0);
            if (*(GamePassesTextBubble **)(iVar9 + 0x24) != (GamePassesTextBubble *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_Activate
                        (*(GamePassesTextBubble **)(iVar9 + 0x24),
                         StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
              pLVar5 = (this->fields).tierProgressDataList;
              if (pLVar5 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                iVar9 = func_?(&stack0xffffff6c,pLVar5,0,
                                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                       );
                if (*(GamePassesTextBubble **)(iVar9 + 0xc) != (GamePassesTextBubble *)0x0) {
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (*(GamePassesTextBubble **)(iVar9 + 0xc),
                             StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    func_?(0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Update
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).shouldInterpolate == 0) {
    return;
  }
  fVar1 = (this->fields).previousProgressValue;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  value = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(fVar1,(MethodInfo *)0x0)
  ;
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
  pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                     );
  index = (float)UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                           (value,0,(int32_t)((int)&pOVar3[-1].monitor + 3),(MethodInfo *)0x0);
  fVar1 = (this->fields).previousProgressValue;
  fVar4 = (float)(int)index;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    ((this->fields).interpolateTowardsProgressValue - fVar4,0.0,1.0,
                     (MethodInfo *)0x0);
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_LerpUnclamped
                     (fVar1 - fVar4,fVar5,
                      (fVar6 - (this->fields).interpolationStartTime) * _UNK_?,
                      (MethodInfo *)0x0);
  fVar5 = (this->fields).interpolateTowardsProgressValue - fVar4;
  if (fVar5 < fVar1) {
    (this->fields).shouldInterpolate = 0;
    fVar1 = fVar5;
  }
  if (_UNK_? <= fVar1) {
    pLVar2 = (this->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )pGVar7->avatarHeadUI ==
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )0x0) ||
       (pGVar8 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)pGVar7->avatarHeadUI,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0)
       ) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).tierProgressDataList;
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
    pLVar2 = (this->fields).tierProgressDataList;
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
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_9);
    if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
    (this_00->fields).originalScale.x = index;
    (this_00->fields).originalScale.y = (float)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    GameTierProgressBar_ActivateBar(this,(int32_t)index,(MethodInfo *)0x0);
    iVar10 = (int)index + 1;
    (this->fields).previousProgressValue = (float)iVar10;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pLVar2 = (this->fields).tierProgressDataList;
    (this->fields).interpolationStartTime = fVar5;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                       );
    if (iVar10 < (int)pOVar3) {
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar11 = func_?(&stack0xffffff60,pLVar2,iVar10,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
      if ((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             **)(iVar11 + 0x18) ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) ||
         (pGVar8 = (GameObject *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                **)(iVar11 + 0x18),(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar11 = func_?(&stack0xffffff60,pLVar2,iVar10,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
      if (*(GameObject **)(iVar11 + 8) == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar11 + 8),1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      iVar10 = func_?(&stack0xffffff60,pLVar2,iVar10,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
      if (*(GameObject **)(iVar10 + 0x20) == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar10 + 0x20),1,(MethodInfo *)0x0);
    }
  }
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                        (int32_t)index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    if (pGVar7->progressBar != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress(pGVar7->progressBar,fVar1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar7 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           ((GameTierProgressBar_TierProgressData *)&stack0xffffff60,pLVar2,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                           );
        if (pGVar7->disabledProgressBar != (ProgressBar *)0x0) {
          ProgressBar::ProgressBar_set_Progress
                    (pGVar7->disabledProgressBar,fVar1,(MethodInfo *)0x0);
          GameTierProgressBar_UpdateProgressText
                    (this,fVar4 + fVar1,(uint)(byte)(SUB41(index,0) + 1),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateDividerVisibility(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateDividerVisibility
               (GameTierProgressBar *this,int32_t playerGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar2 == (PlayerPlanetData *)0x0) ||
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 == (PlayerTierStateCalculator *)0x0)) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GStack_4 = CONCAT31(GStack_4._1_3_,(pPVar2->fields).gamePassTier);
    gameTierShopStatus =
         MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
         PlayerTierStateCalculator_GetTierPricingState
                   (this_00,playerGamePoints,GStack_4,(MethodInfo *)0x0);
    bVar5 = false;
    iVar6 = 0;
    do {
      GStack_7 = CONCAT31(GStack_7._1_3_,(char)(iVar6 + 1));
      iVar8 = GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                        (this,GStack_7,playerGamePoints,gameTierShopStatus,(MethodInfo *)0x0);
      if ((gameTierShopStatus ==
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) || (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                    gameTierShopStatus,GStack_7,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar9 == (Object *)0x0)) goto code_?;
      fVar10 = (float)iVar8 / (float)(int)pOVar9[3].klass;
      if ((_UNK_? <= fVar10) ||
         ((((_UNK_? <= fVar10 || (fVar10 <= 0.0)) || (bVar5)) ||
          (bVar1 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0), bVar1 == 0))))
      {
        if ((this->fields).tierProgressDataList ==
            (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar11 = func_?();
        if (((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                **)(iVar11 + 8) ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) ||
            (pGVar12 = (GameObject *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   **)(iVar11 + 8),(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
           || (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                         (pGVar12,0,(MethodInfo *)0x0),
              (this->fields).tierProgressDataList ==
              (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
        iVar11 = func_?();
        if (((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                **)(iVar11 + 0x18) ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) ||
            (pGVar12 = (GameObject *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   **)(iVar11 + 0x18),(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0
            )) || (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                             (pGVar12,0,(MethodInfo *)0x0),
                  (this->fields).tierProgressDataList ==
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
        iVar11 = func_?();
        if ((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               **)(iVar11 + 0x20) ==
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) ||
           (pGVar12 = (GameObject *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                               (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  **)(iVar11 + 0x20),(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0)
           ) goto code_?;
        bStack_13 = 0;
      }
      else {
        bVar5 = true;
        if ((this->fields).tierProgressDataList ==
            (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
        iVar11 = func_?();
        if (((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                **)(iVar11 + 8) ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) ||
            (pGVar12 = (GameObject *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   **)(iVar11 + 8),(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
           || (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                         (pGVar12,1,(MethodInfo *)0x0),
              (this->fields).tierProgressDataList ==
              (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
        iVar11 = func_?();
        if (((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                **)(iVar11 + 0x18) ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) ||
            (pGVar12 = (GameObject *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   **)(iVar11 + 0x18),(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0
            )) || (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                             (pGVar12,1,(MethodInfo *)0x0),
                  (this->fields).tierProgressDataList ==
                  (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
        iVar11 = func_?();
        if ((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               **)(iVar11 + 0x20) ==
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) ||
           (pGVar12 = (GameObject *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                               (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  **)(iVar11 + 0x20),(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0)
           ) goto code_?;
        bStack_13 = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar12,bStack_13,(MethodInfo *)0x0);
      iVar11 = iVar6 + 2;
      iVar6 = iVar6 + 1;
    } while (iVar11 < 4);
  }
  return;
}


/* Void UpdateEditModeDisabledProgressBars() */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_UpdateEditModeDisabledProgressBars
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pLVar2 = (this->fields).tierProgressDataList;
    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      iVar3 = (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1;
      pGVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[GameTierProgressBar+TierProgressData]::
               List_1_GameTierProgressBar_TierProgressData__get_Item
                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar2,iVar3,
                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                         );
      if (pGVar4->progressBar != (ProgressBar *)0x0) {
        ProgressBar::ProgressBar_set_Progress(pGVar4->progressBar,0.0,(MethodInfo *)0x0);
        pLVar2 = (this->fields).tierProgressDataList;
        if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar4 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar2,iVar3
                              ,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          pTVar5 = pGVar4->progressText;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          if (pTVar5 != (Text *)0x0) {
            (*(code *)(pTVar5->klass->vtable).set_text.method)();
            pLVar2 = (this->fields).tierProgressDataList;
            if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              pGVar4 = mscorlib.dll::System::Collections::Generic::
                       List`1[GameTierProgressBar+TierProgressData]::
                       List_1_GameTierProgressBar_TierProgressData__get_Item
                                 ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar2,
                                  iVar3,
                                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                 );
              if (pGVar4->disabledProgressBar != (ProgressBar *)0x0) {
                ProgressBar::ProgressBar_set_Progress
                          (pGVar4->disabledProgressBar,0.0,(MethodInfo *)0x0);
                bVar1 = GameTierProgressBar_IsTierUnlocked
                                  (this,progressBarToUpdate,(MethodInfo *)0x0);
                GameTierProgressBar_SetLockedStateForTier(this,iVar3,bVar1,(MethodInfo *)0x0);
                if (bVar1 == 0) {
                  return;
                }
                pLVar2 = (this->fields).tierProgressDataList;
                if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  pGVar4 = mscorlib.dll::System::Collections::Generic::
                           List`1[GameTierProgressBar+TierProgressData]::
                           List_1_GameTierProgressBar_TierProgressData__get_Item
                                     ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,
                                      pLVar2,iVar3,
                                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                     );
                  if (pGVar4->disabledProgressBar != (ProgressBar *)0x0) {
                    ProgressBar::ProgressBar_set_Progress
                              (pGVar4->disabledProgressBar,1.0,(MethodInfo *)0x0);
                    pLVar2 = (this->fields).tierProgressDataList;
                    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      pGVar4 = mscorlib.dll::System::Collections::Generic::
                               List`1[GameTierProgressBar+TierProgressData]::
                               List_1_GameTierProgressBar_TierProgressData__get_Item
                                         ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,
                                          pLVar2,iVar3,
                                          MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                         );
                      if (pGVar4->progressBar != (ProgressBar *)0x0) {
                        ProgressBar::ProgressBar_set_Progress
                                  (pGVar4->progressBar,1.0,(MethodInfo *)0x0);
                        GameTierProgressBar_ActivateBar(this,iVar3,(MethodInfo *)0x0);
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
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar6 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_7 = CONCAT31(GStack_7._1_3_,(pPVar6->fields).gamePassTier);
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,playerGamePoints,GStack_7,(MethodInfo *)0x0);
      iVar8 = GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                        (this,progressBarToUpdate,playerGamePoints,gameTierShopStatus,
                         (MethodInfo *)0x0);
      if ((gameTierShopStatus !=
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) && (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                    gameTierShopStatus,progressBarToUpdate,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar9 != (Object *)0x0)) {
        pOVar10 = pOVar9[3].klass;
        bVar1 = GameTierProgressBar_IsTierUnlocked(this,progressBarToUpdate,(MethodInfo *)0x0);
        if ((int)pOVar10 < 1) {
          pLVar2 = (this->fields).tierProgressDataList;
          if (bVar1 == 0) {
            if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              iVar3 = func_?();
              if ((*(ProgressBar **)(iVar3 + 0x1c) != (ProgressBar *)0x0) &&
                 (ProgressBar::ProgressBar_set_Progress
                            (*(ProgressBar **)(iVar3 + 0x1c),0.0,(MethodInfo *)0x0),
                 (this->fields).tierProgressDataList !=
                 (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
                puVar11 = (undefined4 *)func_?();
                if ((ProgressBar *)*puVar11 != (ProgressBar *)0x0) {
                  ProgressBar::ProgressBar_set_Progress
                            ((ProgressBar *)*puVar11,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            tier = (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1;
            iVar3 = func_?();
            if ((*(ProgressBar **)(iVar3 + 0x1c) != (ProgressBar *)0x0) &&
               (ProgressBar::ProgressBar_set_Progress
                          (*(ProgressBar **)(iVar3 + 0x1c),1.0,(MethodInfo *)0x0),
               (this->fields).tierProgressDataList !=
               (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
              puVar11 = (undefined4 *)func_?();
              if ((ProgressBar *)*puVar11 != (ProgressBar *)0x0) {
                ProgressBar::ProgressBar_set_Progress((ProgressBar *)*puVar11,1.0,(MethodInfo *)0x0)
                ;
                GameTierProgressBar_SetLockedStateForTier(this,tier,bVar1,(MethodInfo *)0x0);
                GameTierProgressBar_ActivateBar(this,tier,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          value = (float)iVar8 / (float)(int)pOVar10;
          str0 = (String *)func_?();
          str2 = (String *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          mscorlib.dll::System::String::String_Concat_3
                    (str0,StringLiteral____,str2,(MethodInfo *)0x0);
          pLVar2 = (this->fields).tierProgressDataList;
          if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar3 = (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1;
            pGVar4 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar2,
                                iVar3,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar4->progressBar != (ProgressBar *)0x0) {
              ProgressBar::ProgressBar_set_Progress(pGVar4->progressBar,value,(MethodInfo *)0x0);
              pLVar2 = (this->fields).tierProgressDataList;
              if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                pGVar4 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,pLVar2,
                                    iVar3,
                                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                   );
                if (pGVar4->progressText != (Text *)0x0) {
                  (*(code *)(pGVar4->progressText->klass->vtable).set_text.method)();
                  pLVar2 = (this->fields).tierProgressDataList;
                  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    pGVar4 = mscorlib.dll::System::Collections::Generic::
                             List`1[GameTierProgressBar+TierProgressData]::
                             List_1_GameTierProgressBar_TierProgressData__get_Item
                                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff58,
                                        pLVar2,iVar3,
                                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                                       );
                    if (pGVar4->disabledProgressBar != (ProgressBar *)0x0) {
                      ProgressBar::ProgressBar_set_Progress
                                (pGVar4->disabledProgressBar,value,(MethodInfo *)0x0);
                      GameTierProgressBar_SetLockedStateForTier(this,iVar3,bVar1,(MethodInfo *)0x0)
                      ;
                      if (value < _UNK_?) {
                        return;
                      }
                      GameTierProgressBar_ActivateBar(this,iVar3,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateProgressBars(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressBars
               (GameTierProgressBar *this,int32_t playerGamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).gameMeterVisualEffects;
    if ((pLVar1 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    (*(code *)pIVar3->klass[1]._0.castClass)();
    index = index + 1;
    pLVar1 = (this->fields).gameMeterVisualEffects;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateProgressText(Single, GamePassTier) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressText
               (GameTierProgressBar *this,float totalProgress,GamePassTier__Enum currentTier,
               MethodInfo *method)

{
  gamePassTierToDisplay = currentTier;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  gamePoints = GameTierProgressBar_CalculateGamePointsFromTierProgress
                         (this,totalProgress,currentTier,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      currentTier = CONCAT31(currentTier._1_3_,(pPVar1->fields).gamePassTier);
      gameTierShopStatus =
           MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
           PlayerTierStateCalculator_GetTierPricingState
                     (this_00,playerGamePoints,currentTier,(MethodInfo *)0x0);
      GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                (this,gamePassTierToDisplay,gamePoints,gameTierShopStatus,(MethodInfo *)0x0);
      if (gameTierShopStatus !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)gameTierShopStatus
                            ,gamePassTierToDisplay,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar2 != (Object *)0x0) {
          str0 = (String *)func_?();
          str2 = (String *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::String::String_Concat_3
                    (str0,StringLiteral____,str2,(MethodInfo *)0x0);
          this_01 = (this->fields).tierProgressDataList;
          if (this_01 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            pGVar3 = mscorlib.dll::System::Collections::Generic::
                     List`1[GameTierProgressBar+TierProgressData]::
                     List_1_GameTierProgressBar_TierProgressData__get_Item
                               ((GameTierProgressBar_TierProgressData *)&stack0xffffff64,this_01,
                                (gamePassTierToDisplay & 0xff) - GamePassTier__Enum_Tier1,
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                               );
            if (pGVar3->progressText != (Text *)0x0) {
              (*(code *)(pGVar3->progressText->klass->vtable).set_text.method)();
              return;
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


/* Void UpdateTempProgressVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateTempProgressVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
                    if ((Component_1 *)this_00 != (Component_1 *)0x0) {
                      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
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
                                          if ((Component_1 *)this_01 != (Component_1 *)0x0) {
                                            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     Component::Component_1_get_gameObject
                                                               ((Component_1 *)this_01,
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
                                                  if ((Component_1 *)this_02 != (Component_1 *)0x0)
                                                  {
                                                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::Component_1_get_gameObject
                                                                       ((Component_1 *)this_02,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  index = 0;
  pLVar2 = (this->fields).tierProgressDataList;
  do {
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                       );
    if ((int)pOVar4 <= index) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar5 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar5 != (PlayerPlanetData *)0x0) {
        bVar6 = (pPVar5->fields).gamePassTier;
        if (bVar6 == 3) {
          return;
        }
        bVar1 = GameTierProgressBar_HasTempTier(this,(uint)(byte)(bVar6 + 1),(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        pLVar2 = (this->fields).tierProgressDataList;
        if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          pGVar7 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar2,
                              (uint)bVar6,
                              MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                             );
          this_01 = pGVar7->hoverInputHandler;
          if ((HoverInputHandler *)this_01 != (HoverInputHandler *)0x0) {
            HoverInputHandler::HoverInputHandler_SubscribeToHoverInput
                      ((HoverInputHandler *)this_01,(HoverInputReceiver *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pLVar2 = (this->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    pGVar7 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
    this_00 = pGVar7->hoverInputHandler;
    if ((HoverInputHandler *)this_00 == (HoverInputHandler *)0x0) goto code_?;
    HoverInputHandler::HoverInputHandler_UnsubscribeToHoverInput
              ((HoverInputHandler *)this_00,(HoverInputReceiver *)this,(MethodInfo *)0x0);
    pLVar2 = (this->fields).tierProgressDataList;
    index = index + 1;
  } while( true );
}


/* GameTierProgressBar() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar__ctor
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields).gameMeterVisualEffects = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)this_00;
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

