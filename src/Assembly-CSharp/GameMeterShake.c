
/* Void Awake() */

void Assembly-CSharp.dll::GameMeterShake::GameMeterShake_Awake
               (GameMeterShake *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
    (this->fields).rectTransform = (RectTransform *)0x0;
    pTVar2 = (Transform *)0x0;
  }
  else {
    pTVar2 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
    (this->fields).rectTransform = (RectTransform *)pTVar2;
    pTVar2 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
  }
  func_?(&(this->fields).rectTransform,pTVar2);
  this_00 = (this->fields).rectTransform;
  if (this_00 != (RectTransform *)0x0) {
    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    (this->fields).startPos.x = 0.0;
    fStack_4 = VVar3.y;
    (this->fields).startPos.y = fStack_4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterShake::GameMeterShake_OnDisable
               (GameMeterShake *this,MethodInfo *method)

{
  if ((this->fields).shakeCoroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).shakeCoroutine,(MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator ShakeAnimation() */

IEnumerator *
Assembly-CSharp.dll::GameMeterShake::GameMeterShake_ShakeAnimation
          (GameMeterShake *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameMeterShake___ShakeAnimation_d__5;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void StartShake() */

void Assembly-CSharp.dll::GameMeterShake::GameMeterShake_StartShake
               (GameMeterShake *this,MethodInfo *method)

{
  if ((this->fields).shakeCoroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).shakeCoroutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameMeterShake___ShakeAnimation_d__5;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  (this->fields).shakeCoroutine = (IEnumerator *)value;
  func_?(&(this->fields).shakeCoroutine,value);
  Coroutines::Coroutines_Start((this->fields).shakeCoroutine,(MethodInfo *)0x0);
  return;
}

