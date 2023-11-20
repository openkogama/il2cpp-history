
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
  (this->fields).graphic = pGVar1;
  func_?(&(this->fields).graphic,pGVar1);
  pSVar2 = (ShadowEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      ShadowEffect_MethodInfo__UnityEngine__Component__GetComponent<ShadowEffect>__)
  ;
  (this->fields).shadow = pSVar2;
  func_?(&(this->fields).shadow,pSVar2);
  pOVar3 = (Outline *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Outline_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Outline>__
                     );
  (this->fields).outline = pOVar3;
  func_?(&(this->fields).outline,pOVar3);
  pGVar4 = (GradientEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                     );
  (this->fields).gradient = pGVar4;
  func_?(&(this->fields).gradient,pGVar4);
  effectStyle = (this->fields).effectStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  return;
}

