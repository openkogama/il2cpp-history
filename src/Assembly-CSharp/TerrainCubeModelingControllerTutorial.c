
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_Initialize
               (TerrainCubeModelingControllerTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).materialsController = materialsController;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).materialsController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  pDVar7 = (this->fields).desktopCubeModelingController;
  if (pDVar7 != (DesktopCubeModelingToolsController *)0x0) {
    (pDVar7->fields).cubeModelingStateMachine = cubeModelingStateMachine;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&(pDVar7->fields).cubeModelingStateMachine >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if (materialsController != (MaterialsController *)0x0) {
      pUVar8 = (materialsController->fields).materialChange;
      pDVar9 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>)
      ;
      FUN_?(pDVar9,this);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar8,pDVar9,(MethodInfo *)0x0);
      pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pDVar9 == (Delegate *)0x0) {
        (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
      }
      else {
        pUVar8 = (UnityAction_1_System_Byte_ *)
                  FUN_?(pDVar9,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
        if (pUVar8 == (UnityAction_1_System_Byte_ *)0x0) {
          FUN_?(pDVar9,pUVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (materialsController->fields).materialChange = pUVar8;
        pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
        lVar3 = FUN_?();
        if (lVar3 == 0) {
          FUN_?(pDVar9,pUVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(materialsController->fields).materialChange >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if (cubeModelingStateMachine != (CubeModelingStateMachine *)0x0) {
        materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (cubeModelingStateMachine,(MethodInfo *)0x0);
        this_00 = (this->fields).materialsButtonImage;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
             (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
            (this_01 = (pMVar13->fields)._MaterialRepository_k__BackingField,
            this_01 != (MVMaterialRepository *)0x0)) &&
           ((pMVar14 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                 (this_01,materialId,(MethodInfo *)0x0),
            pMVar14 != (MVMaterial *)0x0 && (this_00 != (RawImage *)0x0)))) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)(pMVar14->fields)._ButtonTexture_k__BackingField,
                     (MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar12 != (MVGameControllerBase *)0x0) &&
              (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
             ((pGVar15 = (pMVar13->fields).GameEventManager, pGVar15 != (GameEventManager *)0x0 &&
              ((pGVar16 = (pGVar15->fields).AvatarCommandsBuildMode,
               pGVar16 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
               (pGVar17 = (pGVar16->fields).LaserCommands,
               pGVar17 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
               )))))) {
            pAVar18 = (pGVar17->fields).OnCubeMaterialChanged;
            if (pAVar18 != (Action_1_Byte__1 *)0x0) {
              (*(pAVar18->fields)._._.invoke_impl)();
            }
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar19 != (MainCameraManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral_Logic);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_02 = (pMVar19->fields).mainCamera;
              if (this_02 != (Camera *)0x0) {
                uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                                   (this_02,(MethodInfo *)0x0);
                uVar20 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                   (StringLiteral_Logic,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                          (this_02,uVar2 & ~(1 << (uVar20 & 0x1f)),(MethodInfo *)0x0);
                (pMVar19->fields).isLogicRendered = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_OnDestroy
               (TerrainCubeModelingControllerTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialChange;
    pDVar3 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    FUN_?(pDVar3,this);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,pDVar3,(MethodInfo *)0x0);
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_1_System_Byte_ *)
                FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      if (pUVar2 == (UnityAction_1_System_Byte_ *)0x0) {
        FUN_?(pDVar3,pUVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar1->fields).materialChange = pUVar2;
      pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      lVar6 = FUN_?();
      if (lVar6 == 0) {
        FUN_?(pDVar3,pUVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar1->fields).materialChange >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar11 != (MainCameraManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar11->fields).mainCamera;
      if (this_00 != (Camera *)0x0) {
        uVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_00,(MethodInfo *)0x0);
        uVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (this_00,uVar7 | 1 << (uVar12 & 0x1f),(MethodInfo *)0x0);
        (pMVar11->fields).isLogicRendered = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMaterial(Byte) */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_SetMaterial
               (TerrainCubeModelingControllerTutorial *this,uint8_t materialId,MethodInfo *method)

{
  this_00 = (this->fields).materialsButtonImage;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_01 = (pMVar2->fields)._MaterialRepository_k__BackingField,
     this_01 != (MVMaterialRepository *)0x0)) {
    pMVar3 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_01,materialId,(MethodInfo *)0x0);
    if ((pMVar3 != (MVMaterial *)0x0) && (this_00 != (RawImage *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)(pMVar3->fields)._ButtonTexture_k__BackingField,
                 (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pGVar4 = (pMVar2->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0 &&
          ((pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
           pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
           (pGVar6 = (pGVar5->fields).LaserCommands,
           pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
         )) {
        pAVar7 = (pGVar6->fields).OnCubeMaterialChanged;
        if (pAVar7 != (Action_1_Byte__1 *)0x0) {
          (*(pAVar7->fields)._._.invoke_impl)
                    ((pAVar7->fields)._._.method_code,materialId,(pAVar7->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

