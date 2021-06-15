
/* Void SetupButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain_SetupButtons
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HoverCraftMotor *)(this->fields)._.editCube;
  if (pHVar1 != (HoverCraftMotor *)0x0) {
    pUVar2 = (UnityEvent *)
             HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_m__0__,
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
      pHVar1 = (HoverCraftMotor *)(this->fields)._.deletecube;
      if (pHVar1 != (HoverCraftMotor *)0x0) {
        pUVar2 = (UnityEvent *)
                 HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_m__1__
                   ,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
          pHVar1 = (HoverCraftMotor *)(this->fields)._.paintCube;
          if (pHVar1 != (HoverCraftMotor *)0x0) {
            pUVar2 = (UnityEvent *)
                     HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_m__2__
                       ,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <SetupButtons>m__0() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_m__0
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  (this->fields)._._ActiveTool_k__BackingField = 0;
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAllToTransparent
            ((DesktopCubeModelingToolsController *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.editCube;
  if (this_00 != (Button *)0x0) {
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)this_00,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
              ((DesktopCubeModelingToolsController *)this,image,(this->fields)._.enabledAlpha,
               (MethodInfo *)0x0);
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_02,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (this->fields)._.cubeModelingStateMachine;
        value = (Object *)func_?();
        if (this_01 == (CubeModelingStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <SetupButtons>m__1() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_m__1
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  (this->fields)._._ActiveTool_k__BackingField = 1;
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAllToTransparent
            ((DesktopCubeModelingToolsController *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.deletecube;
  if (this_00 != (Button *)0x0) {
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)this_00,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
              ((DesktopCubeModelingToolsController *)this,image,(this->fields)._.enabledAlpha,
               (MethodInfo *)0x0);
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_02,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (this->fields)._.cubeModelingStateMachine;
        value = (Object *)func_?();
        if (this_01 == (CubeModelingStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <SetupButtons>m__2() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_m__2
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  (this->fields)._._ActiveTool_k__BackingField = 2;
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAllToTransparent
            ((DesktopCubeModelingToolsController *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.paintCube;
  if (this_00 != (Button *)0x0) {
    image = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                      ((Selectable *)this_00,(MethodInfo *)0x0);
    DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
              ((DesktopCubeModelingToolsController *)this,image,(this->fields)._.enabledAlpha,
               (MethodInfo *)0x0);
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_02,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (this->fields)._.cubeModelingStateMachine;
        value = (Object *)func_?();
        if (this_01 == (CubeModelingStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DesktopCubeModelingToolsControllerEditModeTerrain() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__ctor
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  (this->fields)._.disabledAlpha = 0.3;
  (this->fields)._.enabledAlpha = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

