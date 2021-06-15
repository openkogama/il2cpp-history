
/* IEnumerator CreateTextureFromData(MVWorldObjectClient, Action`1[Byte[]]) */

IEnumerator *
Assembly-CSharp.dll::ImageGenerator::ImageGenerator_CreateTextureFromData
          (MVWorldObjectClient *wo,Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ImageGenerator___CreateTextureFromData_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    this[1].fields.originalScale.x = (float)callback;
    (this->fields).originalScale.y = (float)wo;
    return (IEnumerator *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

