
/* Void Awake() */

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling::PhysicalBasedCanvasScaling_Awake
               (PhysicalBasedCanvasScaling *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).storedDPI = 0.0;
  (this->fields).storedScreen.x = 0.0;
  (this->fields).storedScreen.y = 0.0;
  if (bVar1) {
    func_?(&TypeInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__5);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__5;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling::PhysicalBasedCanvasScaling_OnDestroy
               (PhysicalBasedCanvasScaling *this,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  (*pcRam_?)(this);
  return;
}


/* Void SetCanvasScale(Single, Vector2) */

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling::PhysicalBasedCanvasScaling_SetCanvasScale
               (PhysicalBasedCanvasScaling *this,float dpi,Vector2 screen,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                   );
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    fVar1 = _UNK_?;
  }
  if (TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      dpi = dpi * _UNK_?;
    }
  }
  pPVar2 = (PhysicalBasedCanvasScaling *)((dpi * fVar1) / (this->fields).baselineDPI);
  fVar3 = (this->fields).baseInchThresholds.x * fVar1;
  fVar1 = (this->fields).baseInchThresholds.y * fVar1;
  if ((screen.x / dpi < fVar3) || (this = pPVar2, screen.y / dpi < fVar1)) {
    fVar3 = (screen.x / dpi) / fVar3;
    fVar1 = (screen.y / dpi) / fVar1;
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    this = (PhysicalBasedCanvasScaling *)(fVar3 * (float)pPVar2);
  }
  this_01 = (CanvasScaler *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this_00,
                       UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                      );
  if (this_01 == (CanvasScaler *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UnityEngine.UI.dll::UnityEngine::UI::CanvasScaler::CanvasScaler_set_scaleFactor
            (this_01,(float)this,(MethodInfo *)0x0);
  return;
}


/* IEnumerator SetCanvasScaleCoroutine() */

IEnumerator *
Assembly-CSharp.dll::PhysicalBasedCanvasScaling::PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine
          (PhysicalBasedCanvasScaling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__5);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__5;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* PhysicalBasedCanvasScaling() */

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling::PhysicalBasedCanvasScaling__ctor
               (PhysicalBasedCanvasScaling *this,MethodInfo *method)

{
  (this->fields).baselineDPI = 400.0;
  (this->fields).baseInchThresholds.x = 5.0;
  (this->fields).baseInchThresholds.y = 3.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

