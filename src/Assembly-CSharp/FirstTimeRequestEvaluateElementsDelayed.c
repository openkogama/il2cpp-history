
/* Void OnEnable() */

void Assembly-CSharp.dll::FirstTimeRequestEvaluateElementsDelayed::
     FirstTimeRequestEvaluateElementsDelayed_OnEnable
               (FirstTimeRequestEvaluateElementsDelayed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__FirstTimeRequestEvaluateElementsDelayed->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__FirstTimeRequestEvaluateElementsDelayed___OnEnable_m__0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
              );
    TypeInfo__FirstTimeRequestEvaluateElementsDelayed->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__FirstTimeRequestEvaluateElementsDelayed->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
            );
  return;
}


/* Void <OnEnable>m__0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeRequestEvaluateElementsDelayed::
     FirstTimeRequestEvaluateElementsDelayed__OnEnable_m__0
               (IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

