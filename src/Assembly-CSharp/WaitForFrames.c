
/* IEnumerator Frames(Int32, UnityAction) */

IEnumerator *
Assembly-CSharp.dll::WaitForFrames::WaitForFrames_Frames
          (int32_t frameCount,UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WaitForFrames___Frames_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).state = (int32_t)callback;
    (this->fields)._._._._.m_CachedPtr = (void *)frameCount;
    return (IEnumerator *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

