
/* Void SetupButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain_SetupButtons
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_0__
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_1__
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_2__
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_3__
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._.editCube;
  if (pBVar1 != (Button *)0x0) {
    pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_0__
               ,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
      pBVar1 = (this->fields)._.deletecube;
      if (pBVar1 != (Button *)0x0) {
        pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,
                   MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_1__
                   ,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
          pBVar1 = (this->fields)._.paintCube;
          if (pBVar1 != (Button *)0x0) {
            pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
            pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                     func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,
                       MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_2__
                       ,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
              pBVar1 = (this->fields)._.pickCubeColor;
              if (pBVar1 != (Button *)0x0) {
                pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick;
                pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                         func_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar3,(Object *)this,
                           MethodInfo__DesktopCubeModelingToolsControllerEditModeTerrain___SetupButtons_b__0_3__
                           ,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEvent *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                  UnityEvent_AddListener(pUVar2,(UnityAction *)pNVar3,(MethodInfo *)0x0);
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


/* Void <SetupButtons>b__0_0() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_b__0_0
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetToolActive
            ((DesktopCubeModelingToolsController *)this,CubeModelingEvent__Enum_EditCubes,
             (MethodInfo *)0x0);
  return;
}


/* Void <SetupButtons>b__0_1() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_b__0_1
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetToolActive
            ((DesktopCubeModelingToolsController *)this,CubeModelingEvent__Enum_DeleteCubes,
             (MethodInfo *)0x0);
  return;
}


/* Void <SetupButtons>b__0_2() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_b__0_2
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetToolActive
            ((DesktopCubeModelingToolsController *)this,CubeModelingEvent__Enum_PaintCubes,
             (MethodInfo *)0x0);
  return;
}


/* Void <SetupButtons>b__0_3() */

void Assembly-CSharp.dll::DesktopCubeModelingToolsControllerEditModeTerrain::
     DesktopCubeModelingToolsControllerEditModeTerrain__SetupButtons_b__0_3
               (DesktopCubeModelingToolsControllerEditModeTerrain *this,MethodInfo *method)

{
  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetToolActive
            ((DesktopCubeModelingToolsController *)this,CubeModelingEvent__Enum_ColorPicker,
             (MethodInfo *)0x0);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

