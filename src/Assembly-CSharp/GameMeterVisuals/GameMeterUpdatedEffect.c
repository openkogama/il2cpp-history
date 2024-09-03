
/* IEnumerator AnimateScale() */

IEnumerator *
Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::GameMeterUpdatedEffect_AnimateScale
          (GameMeterUpdatedEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void ExecuteEffect() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::
     GameMeterUpdatedEffect_ExecuteEffect(GameMeterUpdatedEffect *this,MethodInfo *method)

{
  this_01 = this;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields).scaleTarget;
    if ((this_00 != (RectTransform *)0x0) &&
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), this_03 != (Transform *)0x0))
    {
      uVar2 = (this->fields).startSize.x;
      uVar3 = (this->fields).startSize.y;
      this = (GameMeterUpdatedEffect *)(this->fields).startSize.z;
      fVar4 = (float)uVar3;
      value_00.x = (float)uVar2;
      value_00 = (Vector3)CONCAT84(uVar5,value_00.x);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_03,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this_01;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this_01,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::GameMeterUpdatedEffect_OnDisable
               (GameMeterUpdatedEffect *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).scaleTarget;
  if (this_00 != (RectTransform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,(this->fields).startSize,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::GameMeterUpdatedEffect_OnEnable
               (GameMeterUpdatedEffect *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  (this->fields).startSize.x = (float)_UNK_?;
  (this->fields).startSize.y = (float)uVar1;
  (this->fields).startSize.z = 0.5;
  return;
}


/* GameMeterUpdatedEffect() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::GameMeterUpdatedEffect__ctor
               (GameMeterUpdatedEffect *this,MethodInfo *method)

{
  (this->fields).scaleStrength = 0.08;
  (this->fields).scaleTime = 0.1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

