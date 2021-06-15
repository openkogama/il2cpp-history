
/* IEnumerator RealtimeTo(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_RealtimeTo
          (float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__pTween___RealtimeTo_c__Iterator1;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).state = (int32_t)duration;
    (this->fields).OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)startValue;
    (this->fields).testState = (int32_t)callback;
    this[1].klass = (ScaleAnimationBase__Class *)endValue;
    return (IEnumerator *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator To(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To
          (float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__pTween___To_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).state = (int32_t)duration;
    (this->fields).OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)startValue;
    (this->fields).testState = (int32_t)callback;
    this[1].klass = (ScaleAnimationBase__Class *)endValue;
    return (IEnumerator *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator To(Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To_1
          (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__pTween___To_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).testState = (int32_t)callback;
    (this->fields).state = (int32_t)duration;
    (this->fields).OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
    this[1].klass = (ScaleAnimationBase__Class *)0x3f800000;
    return (IEnumerator *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void WorkerTo(Single, Single, Single, Action`1[Single]) */

void Assembly-CSharp.dll::pTween::pTween_WorkerTo
               (float duration,float startValue,float endValue,Action_1_Single_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (this,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    if (this_00 != (Worker *)0x0) {
      Worker::Worker_To(this_00,(float)callback,0.0,endValue,callback,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WorkerTo(Single, Action`1[Single]) */

void Assembly-CSharp.dll::pTween::pTween_WorkerTo_1
               (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (this,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    if (this_00 != (Worker *)0x0) {
      Worker::Worker_To(this_00,duration,0.0,1.0,(Action_1_Single_ *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

