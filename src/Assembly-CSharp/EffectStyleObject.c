
/* Void Awake() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_Awake
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  effectStyle = (this->fields).effectStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_OnValidate
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    effectStyle = (this->fields).effectStyle;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_Reset
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                   );
    func_?(&
                    UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                   );
    func_?(&
                    UnityEngine__UI__Outline_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Outline>__
                   );
    func_?(&ShadowEffect_MethodInfo__UnityEngine__Component__GetComponent<ShadowEffect>__);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pGVar1 = (Graphic *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                     );
  ppGVar2 = &(this->fields).graphic;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  pSVar3 = (ShadowEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      ShadowEffect_MethodInfo__UnityEngine__Component__GetComponent<ShadowEffect>__)
  ;
  ppSVar4 = &(this->fields).shadow;
  *ppSVar4 = pSVar3;
  func_?(ppSVar4,pSVar3);
  pOVar5 = (Outline *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Outline_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Outline>__
                     );
  ppOVar6 = &(this->fields).outline;
  *ppOVar6 = pOVar5;
  func_?(ppOVar6,pOVar5);
  pGVar7 = (GradientEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                     );
  ppGVar8 = &(this->fields).gradient;
  *ppGVar8 = pGVar7;
  func_?(ppGVar8,pGVar7);
  effectStyle = (this->fields).effectStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  return;
}

