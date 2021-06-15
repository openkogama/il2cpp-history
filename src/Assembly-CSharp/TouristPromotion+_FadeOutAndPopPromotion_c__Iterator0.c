
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TouristPromotion+<FadeOutAndPopPromotion>c__Iterator0::
     TouristPromotion_FadeOutAndPopPromotion_c_Iterator0_MoveNext
               (TouristPromotion_FadeOutAndPopPromotion_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 != 0) {
    return 0;
  }
  this_00 = (this->fields)._this;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<float>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__TouristPromotion___FadeOutAndPopPromotion_c__Iterator0____m__0_float_,
             MethodInfo__System__Action<float>__Action_System__Object__void__);
  routine = pTween::pTween_To(0.5,1.0,0.0,(Action_1_Single_ *)this_01,(MethodInfo *)0x0);
  if (this_00 != (TouristPromotion *)0x0) {
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
             MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)pCVar2;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::TouristPromotion+<FadeOutAndPopPromotion>c__Iterator0::
     TouristPromotion_FadeOutAndPopPromotion_c_Iterator0_Reset
               (TouristPromotion_FadeOutAndPopPromotion_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <>m__0(Single) */

void Assembly-CSharp.dll::TouristPromotion+<FadeOutAndPopPromotion>c__Iterator0::
     TouristPromotion_FadeOutAndPopPromotion_c_Iterator0___m__0
               (TouristPromotion_FadeOutAndPopPromotion_c_Iterator0 *this,float t,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._this;
  if ((pTVar1 != (TouristPromotion *)0x0) &&
     (this_00 = (pTVar1->fields).canvasGroup, this_00 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t != _UNK_?) {
      return;
    }
    pTVar1 = (this->fields)._this;
    if ((pTVar1 != (TouristPromotion *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pTVar1 = (this->fields)._this;
      if (pTVar1 != (TouristPromotion *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0);
        if (TypeInfo__TouristPromotion___FadeOutAndPopPromotion_c__Iterator0->static_fields->
            __f__am_cache0 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)0x0,
                     MethodInfo__TouristPromotion___FadeOutAndPopPromotion_c__Iterator0____m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__TouristPromotion___FadeOutAndPopPromotion_c__Iterator0->static_fields->
          __f__am_cache0 = (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__TouristPromotion___FadeOutAndPopPromotion_c__Iterator0->static_fields->
             __f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar2,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotion+<FadeOutAndPopPromotion>c__Iterator0::
     TouristPromotion_FadeOutAndPopPromotion_c_Iterator0___m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

