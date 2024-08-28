
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_Initialize
               (TerrainCubeModelingControllerTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  pMVar1 = materialsController;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    cRam_? = '\x01';
  }
  ppMVar2 = &(this->fields).materialsController;
  *ppMVar2 = materialsController;
  func_?(ppMVar2,materialsController);
  pDVar3 = (this->fields).desktopCubeModelingController;
  if (pDVar3 == (DesktopCubeModelingToolsController *)0x0) {
code_?:
    func_?();
  }
  else {
    ppCVar4 = &(pDVar3->fields).cubeModelingStateMachine;
    *ppCVar4 = cubeModelingStateMachine;
    func_?(ppCVar4,cubeModelingStateMachine);
    if (materialsController == (MaterialsController *)0x0) goto code_?;
    pUVar5 = (materialsController->fields).materialChange;
    materialsController = (MaterialsController *)&(materialsController->fields).materialChange;
    this_03 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_03,(Object *)this,
               MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar5,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      *(UnityAction_1_System_Byte_ **)materialsController = (UnityAction_1_System_Byte_ *)0x0;
code_?:
      func_?();
      if (cubeModelingStateMachine != (CubeModelingStateMachine *)0x0) {
        materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (cubeModelingStateMachine,(MethodInfo *)0x0);
        materialsController = (MaterialsController *)CONCAT31(materialsController._1_3_,materialId);
        this_00 = pMVar1[1].fields._._._._.m_CachedPtr;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar7 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar7->fields)._MaterialRepository_k__BackingField,
           this_01 != (MVMaterialRepository *)0x0)) {
          pMVar8 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_01,materialId,(MethodInfo *)0x0);
          if ((pMVar8 != (MVMaterial *)0x0) && (this_00 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,(Texture *)(pMVar8->fields)._ButtonTexture_k__BackingField,
                       (MethodInfo *)0x0);
            pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (((pGVar9 != (GameEventManager *)0x0) &&
                (pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode,
                pGVar10 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
               (this_02 = (pGVar10->fields).LaserCommands,
               this_02 !=
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Object]::
              SpawnRoleVariable_1_System_Object__SubscribableVariableOnOnChange
                        ((SpawnRoleVariable_1_System_Object_ *)this_02,(Object *)materialsController
                         ,(MethodInfo *)0x0);
              this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_04 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_set_IsLogicRendered
                          (this_04,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pUVar5 = (UnityAction_1_System_Byte_ *)func_?();
    if (pUVar5 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
    *(UnityAction_1_System_Byte_ **)materialsController = pUVar5;
    materialsController =
         (MaterialsController *)TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    ppUVar3 = &(pMVar1->fields).materialChange;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *ppUVar3 = (UnityAction_1_System_Byte_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_1_System_Byte_ *)func_?();
      if (pUVar2 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
      *ppUVar3 = pUVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
        iVar5 = *(int *)(in_stack_6 + 0xc);
        if (iVar5 != 0) {
          puStack7 = *(undefined **)(iVar5 + 0x14);
          uStack8 = *(undefined4 *)(iVar5 + 0x20);
          (**(code **)(iVar5 + 0xc))();
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

