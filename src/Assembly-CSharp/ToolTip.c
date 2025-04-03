
/* Void Awake() */

void Assembly-CSharp.dll::ToolTip::ToolTip_Awake(ToolTip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ToolTip__LanguageLoadedCallback__);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).toolTipText;
  pSVar2 = TM::TM__(*ppSVar1,(MethodInfo *)0x0);
  *ppSVar1 = pSVar2;
  func_?(ppSVar1,pSVar2);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ToolTip__LanguageLoadedCallback__,(MethodInfo *)0x0)
  ;
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::ToolTip::ToolTip_LanguageLoadedCallback(ToolTip *this,MethodInfo *method)

{
  ppSVar1 = &(this->fields).toolTipText;
  pSVar2 = TM::TM__(*ppSVar1,(MethodInfo *)0x0);
  *ppSVar1 = pSVar2;
  func_?(ppSVar1,pSVar2);
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
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (RectTransform *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                     );
  (this->fields).rectTransform = pRVar1;
  func_?();
  return;
}


/* Void SetText(String) */

void Assembly-CSharp.dll::ToolTip::ToolTip_SetText
               (ToolTip *this,String *textToBeChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ToolTip__LanguageLoadedCallback__);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(textToBeChanged,(MethodInfo *)0x0);
  ppSVar2 = &(this->fields).toolTipText;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ToolTip__LanguageLoadedCallback__,(MethodInfo *)0x0)
  ;
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToolTip::ToolTip_Update(ToolTip *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleToolTip>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleToolTip>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleToolTip>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__RectTransformUtility);
    func_?(&
                    MethodInfo__ToolTip___Update_b__11_0_UnityEngine__EventSystems__IHandleToolTip__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).hasEntered != 0) {
    rect = (this->fields).rectTransform;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
             DefaultEventSystem_Input_get_mousePosition
                       ((Vector3 *)&stack0xfffffff0,(DefaultEventSystem_Input *)0x0,unaff_EDI);
    fVar2 = pVVar1->x;
    method_00 = (MethodInfo *)pVVar1->y;
    if ((TypeInfo__UnityEngine__RectTransformUtility->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__RectTransformUtility);
    }
    screenPoint.y = (float)method_00;
    screenPoint.x = fVar2;
    bVar3 = UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
            RectTransformUtility_RectangleContainsScreenPoint(rect,screenPoint,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar2 - (this->fields).pointerEnterTime <= _UNK_?) {
        (this->fields).mousePosOnToolTipSet = 0;
        return;
      }
      if ((this->fields).mousePosOnToolTipSet == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input
                 ::DefaultEventSystem_Input_get_mousePosition
                           ((Vector3 *)&stack0xfffffff0,(DefaultEventSystem_Input *)0x0,method_00);
        uVar4 = pVVar1->x;
        uVar5 = pVVar1->y;
        (this->fields).mousePosOnToolTip.x = (float)uVar4;
        (this->fields).mousePosOnToolTip.y = (float)uVar5;
        (this->fields).mousePosOnToolTipSet = 1;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__ToolTip___Update_b__11_0_UnityEngine__EventSystems__IHandleToolTip__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleToolTip>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleToolTip>_
                );
      return;
    }
    (this->fields).hasEntered = 0;
  }
  return;
}


/* Void <Update>b__11_0(IHandleToolTip, BaseEventData) */

void Assembly-CSharp.dll::ToolTip::ToolTip__Update_b__11_0
               (ToolTip *this,IHandleToolTip *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleToolTip);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).mousePosOnToolTip.x;
  fVar2 = (this->fields).mousePosOnToolTip.y;
  pSVar3 = (this->fields).toolTipText;
  if (x == (IHandleToolTip *)0x0) {
    func_?();
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
    func_?(&StringLiteral____Tooltip__);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).toolTipText;
  *ppSVar1 = StringLiteral____Tooltip__;
  func_?(ppSVar1,StringLiteral____Tooltip__);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

