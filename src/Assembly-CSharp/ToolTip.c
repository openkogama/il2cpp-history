
/* Void Awake() */

void Assembly-CSharp.dll::ToolTip::ToolTip_Awake(ToolTip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__((this->fields).toolTipText,(MethodInfo *)0x0);
  (this->fields).toolTipText = pSVar1;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__ToolTip__LanguageLoadedCallback__,(MethodInfo *)0x0)
  ;
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::ToolTip::ToolTip_LanguageLoadedCallback(ToolTip *this,MethodInfo *method)

{
  pSVar1 = TM::TM__((this->fields).toolTipText,(MethodInfo *)0x0);
  (this->fields).toolTipText = pSVar1;
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::ToolTip::ToolTip_OnPointerEnter
               (ToolTip *this,PointerEventData *eventData,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).pointerEnterTime = fVar1;
  (this->fields).hasEntered = 1;
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::ToolTip::ToolTip_OnPointerExit
               (ToolTip *this,PointerEventData *eventData,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).pointerEnterTime = fVar1;
  (this->fields).hasEntered = 0;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ToolTip::ToolTip_Reset(ToolTip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                     );
  (this->fields).rectTransform = (RectTransform *)pMVar1;
  return;
}


/* Void SetText(String) */

void Assembly-CSharp.dll::ToolTip::ToolTip_SetText
               (ToolTip *this,String *textToBeChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(textToBeChanged,(MethodInfo *)0x0);
  (this->fields).toolTipText = pSVar1;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__ToolTip__LanguageLoadedCallback__,(MethodInfo *)0x0)
  ;
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToolTip::ToolTip_Update(ToolTip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).hasEntered != 0) {
    rect = (this->fields).rectTransform;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar1 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
             StandaloneInput_MousePosition
                       ((Vector3 *)&stack0xffffffe8,(StandaloneInput *)0x0,unaff_EDI);
    uVar2._0_4_ = pVVar1->x;
    uVar2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    v.z = fVar3;
    v.x = (float)(int)uVar2;
    v.y = (float)(int)((ulonglong)uVar2 >> 0x20);
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (v,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__RectTransformUtility->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__UnityEngine__RectTransformUtility->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
            RectTransformUtility_RectangleContainsScreenPoint(rect,VVar4,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar3 - (this->fields).pointerEnterTime <= _UNK_?) {
        (this->fields).mousePosOnToolTipSet = 0;
        return;
      }
      if ((this->fields).mousePosOnToolTipSet == 0) {
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar1 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                 StandaloneInput_MousePosition
                           ((Vector3 *)&stack0xffffffe8,(StandaloneInput *)0x0,method);
        uVar6._0_4_ = pVVar1->x;
        uVar6._4_4_ = pVVar1->y;
        fVar3 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
          func_?();
        }
        fVar7 = 0.0;
        v_00.z = fVar3;
        v_00.x = (float)(int)uVar6;
        v_00.y = (float)(int)((ulonglong)uVar6 >> 0x20);
        VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                          (v_00,(MethodInfo *)0x0);
        (this->fields).mousePosOnToolTip.x = fVar7;
        (this->fields).mousePosOnToolTip.y = VVar4.y;
        (this->fields).mousePosOnToolTipSet = 1;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__ToolTip___Update_m__0_UnityEngine__EventSystems__IHandleToolTip__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleToolTip>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleToolTip>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleToolTip>_
                );
      return;
    }
    (this->fields).hasEntered = 0;
  }
  return;
}


/* Void <Update>m__0(IHandleToolTip, BaseEventData) */

void Assembly-CSharp.dll::ToolTip::ToolTip__Update_m__0
               (ToolTip *this,IHandleToolTip *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).mousePosOnToolTip.x;
  fVar2 = (this->fields).mousePosOnToolTip.y;
  pSVar3 = (this->fields).toolTipText;
  if (x == (IHandleToolTip *)0x0) {
    func_?(0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar5 = x->klass;
  uVar6 = 0;
  uVar7._0_1_ = (pIVar5->_1).rank;
  uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleToolTip) {
        ppMVar8 = &(&x->klass->vtable)[pIVar5->interfaceOffsets[uVar6].offset].SendToolTip.method;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  ppMVar8 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IHandleToolTip,0);
code_?:
  (*(code *)*ppMVar8)(x,fVar1,fVar2,pSVar3,ppMVar8[1]);
  return;
}


/* ToolTip() */

void Assembly-CSharp.dll::ToolTip::ToolTip__ctor(ToolTip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral____Tooltip__;
  (this->fields).mousePosOnToolTip.x = 0.0;
  (this->fields).mousePosOnToolTip.y = 0.0;
  (this->fields).toolTipText = pSVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

