
/* Void Awake() */

void Assembly-CSharp.dll::Orthographic3DObjectUIScaling::Orthographic3DObjectUIScaling_Awake
               (Orthographic3DObjectUIScaling *this,MethodInfo *method)

{
  (this->fields).storedDPI = 0.0;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    bVar2 = cRam_? == '\0';
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields).originalScale.x = pVVar1->x;
    (this->fields).originalScale.y = fVar3;
    (this->fields).originalScale.z = fVar4;
    (this->fields).storedScreen.x = 0.0;
    (this->fields).storedScreen.y = 0.0;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__Orthographic3DObjectUIScaling___SetObjectScaleCoroutine_d__7;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetObjectScale(Single, Vector2) */

void Assembly-CSharp.dll::Orthographic3DObjectUIScaling::
     Orthographic3DObjectUIScaling_SetObjectScale
               (Orthographic3DObjectUIScaling *this,float dpi,Vector2 screen,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pOStack_1 = _UNK_?;
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pOStack_2 = _UNK_?;
  }
  else {
    pOStack_2 = _UNK_?;
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
  fVar3 = (this->fields).baseInchThresholds.x * (float)pOStack_2;
  fVar4 = (this->fields).baseInchThresholds.y * (float)pOStack_2;
  pOVar5 = &this->fields;
  this = _UNK_?;
  if ((pOVar5->isScalingWithX != 0) && (screen.x / dpi < fVar3)) {
    this = (Orthographic3DObjectUIScaling *)((screen.x / dpi) / fVar3);
  }
  if (((this_00->fields).isScalingWithY != 0) && (fVar4 < screen.y / dpi)) {
    pOStack_1 = (Orthographic3DObjectUIScaling *)(fVar4 / (screen.y / dpi));
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0);
  uVar6 = (this_00->fields).originalScale.x;
  uVar7 = (this_00->fields).originalScale.y;
  fVar4 = (float)pOStack_1 * (float)this * (float)pOStack_2;
  if (this_01 == (Transform *)0x0) {
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  value.y = (float)uVar7 * fVar4;
  value.x = (float)uVar6 * fVar4;
  value.z = (this_00->fields).originalScale.z * fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            (this_01,value,(MethodInfo *)0x0);
  return;
}


/* IEnumerator SetObjectScaleCoroutine() */

IEnumerator *
Assembly-CSharp.dll::Orthographic3DObjectUIScaling::
Orthographic3DObjectUIScaling_SetObjectScaleCoroutine
          (Orthographic3DObjectUIScaling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Orthographic3DObjectUIScaling___SetObjectScaleCoroutine_d__7);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Orthographic3DObjectUIScaling___SetObjectScaleCoroutine_d__7;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Orthographic3DObjectUIScaling() */

void Assembly-CSharp.dll::Orthographic3DObjectUIScaling::Orthographic3DObjectUIScaling__ctor
               (Orthographic3DObjectUIScaling *this,MethodInfo *method)

{
  (this->fields).baseInchThresholds.x = 5.0;
  (this->fields).baseInchThresholds.y = 3.0;
  (this->fields).isScalingWithX = 1;
  (this->fields).isScalingWithY = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

