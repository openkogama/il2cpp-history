
/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera::FirstTimeSystemPopupCamera_Update
               (FirstTimeSystemPopupCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__FirstTimeSystemPopupCamera____c___Update_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeSystemPopupCamera____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pVVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         ((Vector3 *)&stack0x00000000,(DefaultEventSystem_Input *)0x0,
                          in_stack_3);
      uVar4 = pVVar2->x;
      uVar5 = pVVar2->y;
      method = (MethodInfo *)(this->fields).mousePos.x;
      in_stack_6 = (this->fields).mousePos.y;
      fVar7 = (float)uVar4 - (float)method;
      fVar8 = (float)uVar5 - in_stack_6;
      fVar9 = pVVar2->z - (this->fields).mousePos.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar10 = (double)(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
      if (dVar10 < 0.0) {
        func_?();
      }
      else {
        dVar10 = SQRT(dVar10);
      }
      (this->fields).mouseMoved = (float)dVar10 + in_stack_11;
      pVVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         ((Vector3 *)&method,(DefaultEventSystem_Input *)0x0,in_stack_12);
      fVar8 = pVVar2->y;
      fVar7 = pVVar2->z;
      (this->fields).mousePos.x = pVVar2->x;
      (this->fields).mousePos.y = fVar8;
      (this->fields).mousePos.z = fVar7;
    }
  }
  else {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
             DefaultEventSystem_Input_get_mousePosition
                       ((Vector3 *)&stack0xfffffff0,(DefaultEventSystem_Input *)0x0,unaff_EBX);
    fVar8 = pVVar2->y;
    fVar7 = pVVar2->z;
    (this->fields).mousePos.x = pVVar2->x;
    (this->fields).mousePos.y = fVar8;
    (this->fields).mousePos.z = fVar7;
    pGVar13 = (this->fields).inActiveImage;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar13,0,(MethodInfo *)0x0);
    pGVar13 = (this->fields).activeImage;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar13,1,(MethodInfo *)0x0);
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar13 = (this->fields).inActiveImage;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar13,1,(MethodInfo *)0x0);
    pGVar13 = (this->fields).activeImage;
    if (pGVar13 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar13,0,(MethodInfo *)0x0);
  }
  if ((this->fields).mouseMoveDistance <= (this->fields).mouseMoved) {
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    this_00 = (this->fields).group;
    (this->fields).currentFade = fVar7 + in_stack_14;
    if (this_00 == (CanvasGroup *)0x0) {
code_?:
      method = (MethodInfo *)&UNK_?;
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    _method = _method & 0xffffffff00000000;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,_UNK_? - (fVar7 + in_stack_14) / (this->fields).fadeDuration,
               (MethodInfo *)0x0);
    if ((this->fields).fadeDuration <= (this->fields).currentFade) {
      in_stack_6 = (float)&UNK_?;
      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__FirstTimeSystemPopupCamera____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__FirstTimeSystemPopupCamera____c->static_fields->__9__8_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__FirstTimeSystemPopupCamera____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__FirstTimeSystemPopupCamera____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        in_stack_6 = (float)callbackFunction;
        method = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__FirstTimeSystemPopupCamera____c___Update_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FirstTimeSystemPopupCamera____c->static_fields->__9__8_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      in_stack_6 = (float)&UNK_?;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar13,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* FirstTimeSystemPopupCamera() */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera::FirstTimeSystemPopupCamera__ctor
               (FirstTimeSystemPopupCamera *this,MethodInfo *method)

{
  (this->fields).mousePos.x = 0.0;
  (this->fields).mousePos.y = 0.0;
  (this->fields).mouseMoveDistance = 30.0;
  (this->fields).fadeDuration = 0.4;
  (this->fields).mousePos.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

