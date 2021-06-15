
/* IEnumerator AnimateScale() */

IEnumerator *
Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::GameMeterUpdatedEffect_AnimateScale
          (GameMeterUpdatedEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void ExecuteEffect() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::
     GameMeterUpdatedEffect_ExecuteEffect(GameMeterUpdatedEffect *this,MethodInfo *method)

{
  this_01 = this;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields).scaleTarget;
    if ((this_00 != (RectTransform *)0x0) &&
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0), this_03 != (Transform *)0x0)
       ) {
      uVar2 = (this->fields).startSize.x;
      uVar3 = (this->fields).startSize.y;
      this = (GameMeterUpdatedEffect *)(this->fields).startSize.z;
      fVar4 = (float)uVar3;
      value.x = (float)uVar2;
      value = (Vector3)CONCAT84(uVar5,value.x);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_03,value,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_04 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,(MethodInfo *)&UNK_?);
      if (this_04 != (ScaleAnimationBase *)0x0) {
        (this_04->fields).originalScale.x = (float)this_01;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this_01,(IEnumerator *)this_04,(MethodInfo *)0x0);
        return;
      }
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
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
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x3f000000,0x3f000000,0x3f000000,0);
  (this->fields).startSize.x = (float)(undefined4)uStack_2;
  (this->fields).startSize.y = (float)uStack_2._4_4_;
  (this->fields).startSize.z = fStack_1;
  return;
}


/* GameMeterUpdatedEffect() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect::GameMeterUpdatedEffect__ctor
               (GameMeterUpdatedEffect *this,MethodInfo *method)

{
  (this->fields).scaleStrength = 0.08;
  (this->fields).scaleTime = 0.1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

