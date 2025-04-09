
/* Void PushCubeEditCubeTutorialTools(UnityAction) */

void Assembly-CSharp.dll::SetupCubeModelTutorialUI::
     SetupCubeModelTutorialUI_PushCubeEditCubeTutorialTools
               (SetupCubeModelTutorialUI *this,UnityAction *closeAction,MethodInfo *method)

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
                    DesktopCubeModelingControllerCubeTutorial_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingControllerCubeTutorial>_DesktopCubeModelingControllerCubeTutorial_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SetupCubeModelTutorialUI____c___PushCubeEditCubeTutorialTools_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0___PushCubeEditCubeTutorialTools_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0);
    func_?(&TypeInfo__SetupCubeModelTutorialUI____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)closeAction;
    func_?(&value[1].monitor,closeAction);
    original = (this->fields).desktopCubeModelTutorialControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        DesktopCubeModelingControllerCubeTutorial_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingControllerCubeTutorial>_DesktopCubeModelingControllerCubeTutorial_
                       );
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    if (pOVar2->klass != (Object__Class *)0x0) {
      DesktopCubeModelingControllerCubeTutorial::
      DesktopCubeModelingControllerCubeTutorial_Initialize
                ((DesktopCubeModelingControllerCubeTutorial *)pOVar2->klass,
                 (this->fields).cubeModelingStateMachine,(this->fields).materialsController,
                 (MethodInfo *)0x0);
      pCVar3 = (this->fields).cubeModelingStateMachine;
      if (pCVar3 != (CubeModelingStateMachine *)0x0) {
        uVar4 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                          (pCVar3,(MethodInfo *)0x0);
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (pCVar3,uVar4,(MethodInfo *)0x0);
        pCVar3 = (this->fields).cubeModelingStateMachine;
        pOVar1 = pOVar2->klass;
        if (pCVar3 != (CubeModelingStateMachine *)0x0) {
          uVar4 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (pCVar3,(MethodInfo *)0x0);
          if (pOVar1 != (Object__Class *)0x0) {
            DesktopCubeModelingControllerCubeTutorial::
            DesktopCubeModelingControllerCubeTutorial_SetMaterial
                      ((DesktopCubeModelingControllerCubeTutorial *)pOVar1,uVar4,(MethodInfo *)0x0);
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__SetupCubeModelTutorialUI____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9__4_0;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__SetupCubeModelTutorialUI____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              object = TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9;
              callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__SetupCubeModelTutorialUI____c___PushCubeEditCubeTutorialTools_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9__4_0 = callbackFunction;
              pGVar5 = (GameObject *)&UNK_?;
              func_?(&TypeInfo__SetupCubeModelTutorialUI____c->static_fields->__9__4_0);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar5,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                       MethodInfo__SetupCubeModelTutorialUI____c__DisplayClass4_0___PushCubeEditCubeTutorialTools_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar5,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
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

