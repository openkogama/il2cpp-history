
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_Initialize
               (TerrainCubeModelingControllerTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).desktopCubeModelingController;
  (this->fields).materialsController = materialsController;
  if (this_00 != (DesktopCubeModelingToolsController *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              ((LockCursorManager3DMode *)this_00,(Action_1_Boolean_ *)cubeModelingStateMachine,
               (MethodInfo *)0x0);
    if (materialsController != (MaterialsController *)0x0) {
      pUVar1 = (materialsController->fields).materialChange;
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this,
                 MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_,
                 MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
                );
      pUVar2 = (UnityAction_1_System_Byte_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)this_03,(MethodInfo *)0x0);
      pUVar1 = (UnityAction_1_System_Byte_ *)0x0;
      if (pUVar2 != (UnityAction_1_System_Byte_ *)0x0) {
        if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
          pUVar1 = pUVar2;
        }
        pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
        if (pUVar1 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
      }
      (materialsController->fields).materialChange = pUVar1;
      if (cubeModelingStateMachine != (CubeModelingStateMachine *)0x0) {
        materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (cubeModelingStateMachine,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (this->fields).materialsButtonImage;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_04 != (MVNetworkGame *)0x0) {
          this_05 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                              ((DayNightCycle *)this_04,(MethodInfo *)0x0);
          if (this_05 != (CelestialParam *)0x0) {
            this_06 = (GamePointGainEffect *)
                      MVMaterialRepository::MVMaterialRepository_GetMaterial
                                ((MVMaterialRepository *)this_05,materialId,(MethodInfo *)0x0);
            if (this_06 != (GamePointGainEffect *)0x0) {
              value = (Texture *)
                      GamePointGainEffect::GamePointGainEffect_get_ID(this_06,(MethodInfo *)0x0);
              if (this_01 != (RawImage *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                          (this_01,value,(MethodInfo *)0x0);
                pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                   ((MethodInfo *)0x0);
                if (((pGVar4 != (GameEventManager *)0x0) &&
                    (pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
                    pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (this_02 = (pGVar5->fields).LaserCommands,
                   this_02 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetCurrentCubeMaterial
                            (this_02,materialId,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  this_07 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_07 != (MainCameraManager *)0x0) {
                    MainCameraManager::MainCameraManager_set_IsLogicRendered
                              (this_07,0,(MethodInfo *)0x0);
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
  func_?(0);
  pUVar2 = extraout_ECX;
  pUVar3 = extraout_EDX;
code_?:
  func_?(pUVar2,pUVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_OnDestroy
               (TerrainCubeModelingControllerTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialChange;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__TerrainCubeModelingControllerTutorial__SetMaterial_unsigned_char_,
               MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
              );
    pUVar3 = (UnityAction_1_System_Byte_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_1_System_Byte_ *)0x0;
    if (pUVar3 != (UnityAction_1_System_Byte_ *)0x0) {
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pUVar2 = pUVar3;
      }
      pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pUVar2 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
    }
    (pMVar1->fields).materialChange = pUVar2;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pUVar3 = extraout_ECX;
  pUVar4 = extraout_EDX;
code_?:
  func_?(pUVar3,pUVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMaterial(Byte) */

void Assembly-CSharp.dll::TerrainCubeModelingControllerTutorial::
     TerrainCubeModelingControllerTutorial_SetMaterial
               (TerrainCubeModelingControllerTutorial *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materialsButtonImage;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      this_03 = (GamePointGainEffect *)
                MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)this_02,materialId,(MethodInfo *)0x0);
      if (this_03 != (GamePointGainEffect *)0x0) {
        value = (Texture *)
                GamePointGainEffect::GamePointGainEffect_get_ID(this_03,(MethodInfo *)0x0);
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,value,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (((pGVar1 != (GameEventManager *)0x0) &&
              (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
              pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
             ((pGVar2->fields).LaserCommands !=
              (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (*(Action_1_UIPushOption_ **)(in_stack_3 + 0xc) !=
                (Action_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                        (*(Action_1_UIPushOption_ **)(in_stack_3 + 0xc),in_stack_4,
                         MethodInfo__System__Action<unsigned_char>__Invoke_unsigned_char_);
            }
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

