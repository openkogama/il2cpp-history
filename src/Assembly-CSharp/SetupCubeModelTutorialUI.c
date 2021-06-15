
/* Void PushCubeEditCubeTutorialTools(UnityAction) */

void Assembly-CSharp.dll::SetupCubeModelTutorialUI::
     SetupCubeModelTutorialUI_PushCubeEditCubeTutorialTools
               (SetupCubeModelTutorialUI *this,UnityAction *closeAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SetupCubeModelTutorialUI___PushCubeEditCubeTutorialTools_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)closeAction;
    pDVar1 = (this->fields).desktopCubeModelTutorialControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pDVar1 = (DesktopCubeModelingControllerCubeTutorial *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pDVar1,
                        DesktopCubeModelingControllerCubeTutorial_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingControllerCubeTutorial>_DesktopCubeModelingControllerCubeTutorial_
                       );
    (this_00->fields)._._._._.m_CachedPtr = pDVar1;
    if (pDVar1 != (DesktopCubeModelingControllerCubeTutorial *)0x0) {
      DesktopCubeModelingControllerCubeTutorial::
      DesktopCubeModelingControllerCubeTutorial_Initialize
                (pDVar1,(this->fields).cubeModelingStateMachine,(this->fields).materialsController,
                 (MethodInfo *)0x0);
      pCVar2 = (this->fields).cubeModelingStateMachine;
      if (pCVar2 != (CubeModelingStateMachine *)0x0) {
        uVar3 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                          (pCVar2,(MethodInfo *)0x0);
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (pCVar2,uVar3,(MethodInfo *)0x0);
        pCVar2 = (this->fields).cubeModelingStateMachine;
        pDVar1 = (this_00->fields)._._._._.m_CachedPtr;
        if (pCVar2 != (CubeModelingStateMachine *)0x0) {
          uVar3 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (pCVar2,(MethodInfo *)0x0);
          if (pDVar1 != (DesktopCubeModelingControllerCubeTutorial *)0x0) {
            DesktopCubeModelingControllerCubeTutorial::
            DesktopCubeModelingControllerCubeTutorial_SetMaterial(pDVar1,uVar3,(MethodInfo *)0x0);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__SetupCubeModelTutorialUI->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar5,(Object *)0x0,
                         MethodInfo__SetupCubeModelTutorialUI___PushCubeEditCubeTutorialTools_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__SetupCubeModelTutorialUI->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__SetupCubeModelTutorialUI->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this_00,
                       MethodInfo__SetupCubeModelTutorialUI___PushCubeEditCubeTutorialTools_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <PushCubeEditCubeTutorialTools>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SetupCubeModelTutorialUI::
     SetupCubeModelTutorialUI__PushCubeEditCubeTutorialTools_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

