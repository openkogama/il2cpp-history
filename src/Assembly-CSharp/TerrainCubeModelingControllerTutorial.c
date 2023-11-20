
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_Initialize
               (TerrainCubeModelingControllerTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    cRam_? = '\x01';
  }
  (this->fields).materialsController = materialsController;
  func_?(&(this->fields).materialsController,materialsController);
  pDVar1 = (this->fields).desktopCubeModelingController;
  if (pDVar1 != (DesktopCubeModelingToolsController *)0x0) {
    (pDVar1->fields).cubeModelingStateMachine = cubeModelingStateMachine;
    func_?(&(pDVar1->fields).cubeModelingStateMachine,cubeModelingStateMachine);
    if (materialsController != (MaterialsController *)0x0) {
      pUVar2 = (materialsController->fields).materialChange;
      this_03 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_03,(Object *)this,
                 MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
        this_04 = (CubeModelingStateMachine *)0x0;
      }
      else {
        pUVar2 = (UnityAction_1_System_Byte_ *)func_?();
        if (pUVar2 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
        (materialsController->fields).materialChange = pUVar2;
        this_04 = (CubeModelingStateMachine *)func_?();
        if (this_04 == (CubeModelingStateMachine *)0x0) goto code_?;
      }
      func_?();
      if (this_04 != (CubeModelingStateMachine *)0x0) {
        materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (this_04,(MethodInfo *)0x0);
        cubeModelingStateMachine =
             (CubeModelingStateMachine *)CONCAT31((int3)((uint)this_04 >> 8),materialId);
        this_00 = (RawImage *)materialsController[1].fields._.m_CancellationTokenSource;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar4->fields)._MaterialRepository_k__BackingField,
           this_01 != (MVMaterialRepository *)0x0)) {
          pMVar5 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                             (this_01,materialId,(MethodInfo *)0x0);
          if ((pMVar5 != (MVMaterial *)0x0) && (this_00 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,(Texture *)(pMVar5->fields)._ButtonTexture_k__BackingField,
                       (MethodInfo *)0x0);
            pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (((pGVar6 != (GameEventManager *)0x0) &&
                (pGVar7 = (pGVar6->fields).AvatarCommandsBuildMode,
                pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
               (this_02 = (pGVar7->fields).LaserCommands,
               this_02 !=
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Object]::
              SpawnRoleVariable_1_System_Object__SubscribableVariableOnOnChange
                        ((SpawnRoleVariable_1_System_Object_ *)this_02,
                         (Object *)cubeModelingStateMachine,(MethodInfo *)0x0);
              this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_05 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_set_IsLogicRendered
                          (this_05,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_OnDestroy
               (TerrainCubeModelingControllerTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialChange;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_1_System_Byte_ *)func_?();
      if (pUVar2 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
      (pMVar1->fields).materialChange = pUVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_01 = (pMVar1->fields)._MaterialRepository_k__BackingField,
     this_01 != (MVMaterialRepository *)0x0)) {
    pMVar2 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_01,materialId,(MethodInfo *)0x0);
    if ((pMVar2 != (MVMaterial *)0x0) && (this_00 != (RawImage *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)(pMVar2->fields)._ButtonTexture_k__BackingField,
                 (MethodInfo *)0x0);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         ((pGVar4->fields).LaserCommands !=
          (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        if (*(int *)(in_stack_5 + 0xc) != 0) {
          iVar6 = *(int *)(in_stack_5 + 0xc);
          puStack7 = *(undefined **)(iVar6 + 0x14);
          uStack8 = *(undefined4 *)(iVar6 + 0x20);
          (**(code **)(iVar6 + 0xc))();
        }
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

