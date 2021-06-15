
/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera::FirstTimeSystemPopupCamera_Update
               (FirstTimeSystemPopupCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  method_00 = (MethodInfo *)0x6;
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar2 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition
                         ((Vector3 *)&stack0xffffffe4,(StandaloneInput *)0x0,in_stack_3);
      uVar4._0_4_ = (this->fields).mousePos.x;
      uVar4._4_4_ = (this->fields).mousePos.y;
      fVar5 = (this->fields).mousePos.z;
      uVar6._0_4_ = pVVar2->x;
      uVar6._4_4_ = pVVar2->y;
      fVar7 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        puVar8 = &UNK_?;
        func_?();
        uVar6 = CONCAT44(puVar8,(undefined4)uVar6);
      }
      a.z = fVar7;
      a.x = (float)(int)uVar6;
      a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      b.z = fVar5;
      b.x = (float)(int)uVar4;
      b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffe4,a,b,(MethodInfo *)0x0);
      uVar4._0_4_ = 0.0;
      fVar9 = (float10)func_?();
      (this->fields).mouseMoved = (float)(fVar9 + (float10)(float)uVar4);
      pVVar2 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition
                         ((Vector3 *)&stack0xffffffe4,(StandaloneInput *)0x0,method_00);
      uVar4._4_4_ = pVVar2->y;
      uVar4._0_4_ = pVVar2->z;
      (this->fields).mousePos.x = pVVar2->x;
      (this->fields).mousePos.y = uVar4._4_4_;
      (this->fields).mousePos.z = (float)uVar4;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar2 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
             StandaloneInput_MousePosition
                       ((Vector3 *)&stack0xffffffe4,(StandaloneInput *)0x0,unaff_EBX);
    uVar4._4_4_ = pVVar2->y;
    uVar4._0_4_ = pVVar2->z;
    (this->fields).mousePos.x = pVVar2->x;
    (this->fields).mousePos.y = uVar4._4_4_;
    (this->fields).mousePos.z = (float)uVar4;
    pGVar10 = (this->fields).inActiveImage;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pGVar10 = (this->fields).activeImage;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,1,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar10 = (this->fields).inActiveImage;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,1,(MethodInfo *)0x0);
    pGVar10 = (this->fields).activeImage;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
  }
  if ((this->fields).mouseMoveDistance <= (this->fields).mouseMoved) {
    uVar4._0_4_ = (this->fields).currentFade;
    uVar4._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    this_00 = (this->fields).group;
    (this->fields).currentFade = uVar4._4_4_ + (float)uVar4;
    if (this_00 == (CanvasGroup *)0x0) {
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,_UNK_? - (uVar4._4_4_ + (float)uVar4) / (this->fields).fadeDuration,
               (MethodInfo *)0x0);
    if ((this->fields).fadeDuration <= (this->fields).currentFade) {
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__FirstTimeSystemPopupCamera->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__FirstTimeSystemPopupCamera___Update_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__FirstTimeSystemPopupCamera->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__FirstTimeSystemPopupCamera->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar10,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* Void <Update>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera::FirstTimeSystemPopupCamera__Update_m__0
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


/* FirstTimeSystemPopupCamera() */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera::FirstTimeSystemPopupCamera__ctor
               (FirstTimeSystemPopupCamera *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).mouseMoveDistance = 30.0;
  (this->fields).fadeDuration = 0.4;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).mousePos.x = (float)(undefined4)uStack_2;
  (this->fields).mousePos.y = (float)uStack_2._4_4_;
  (this->fields).mousePos.z = fStack_1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

