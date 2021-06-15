
/* IEnumerator DoTo(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::Worker::Worker_DoTo
          (Worker *this,float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Worker___DoTo_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)duration;
    (this_00->fields).originalScale.y = (float)callback;
    (this_00->fields).state = (int32_t)startValue;
    (this_00->fields).originalScale.z = (float)this;
    (this_00->fields).originalScale.x = endValue;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void To(Single, Single, Single, Action`1[Single]) */

void Assembly-CSharp.dll::Worker::Worker_To
               (Worker *this,float duration,float startValue,float endValue,
               Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Worker___DoTo_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)duration;
    (this_00->fields).state = (int32_t)startValue;
    (this_00->fields).originalScale.y = (float)callback;
    (this_00->fields).originalScale.x = endValue;
    (this_00->fields).originalScale.z = (float)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

