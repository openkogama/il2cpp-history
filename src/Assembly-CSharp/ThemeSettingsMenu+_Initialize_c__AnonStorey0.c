
/* Void <>m__0() */

void Assembly-CSharp.dll::ThemeSettingsMenu+<Initialize>c__AnonStorey0::
     ThemeSettingsMenu_Initialize_c_AnonStorey0___m__0
               (ThemeSettingsMenu_Initialize_c_AnonStorey0 *this,MethodInfo *method)

{
  this_00._._._.m_CachedPtr = (Behaviour__Fields)(this->fields).menuController;
  if (this_00._._._.m_CachedPtr != (Component_1__Fields)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_02 = (ScaleAnimationBase *)
              func_?(TypeInfo__ThemeMenuController___OpenSelection_c__AnonStorey1);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_1);
    pXVar2 = (((Component_1__Fields *)((int)this_00._._._.m_CachedPtr + 0xc))->_).m_CachedPtr;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                       );
    if (((this_02 != (ScaleAnimationBase *)0x0) &&
        ((this_02->fields)._._._._.m_CachedPtr = pXVar2, pXVar2 != (XpBoostParticlePreviewer *)0x0))
       && (this_01 = (Component_1 *)(pXVar2->fields)._PreviewGameObject_k__BackingField,
          this_01 != (Component_1 *)0x0)) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (this_01,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        if (pXVar2[1].klass != (XpBoostParticlePreviewer__Class *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pXVar2[1].klass,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            pXVar2[1].fields._._ = this_00._._._.m_CachedPtr;
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00._._._.m_CachedPtr,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_02,
                       MethodInfo__ThemeMenuController___OpenSelection_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar3,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
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

