
/* MVInputWrapper+InputSuppression(Boolean) */

void Assembly-CSharp.dll::MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression__ctor
               (MVInputWrapper_InputSuppression *this,bool a,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (*(code *)(this->klass->vtable).set_IsSuppressed.method)(this,_a,this->klass[1]._0.image);
  return;
}


/* Boolean get_IsSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_get_IsSuppressed
               (MVInputWrapper_InputSuppression *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  iVar2 = (this->fields).suppressionFrame;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Abs_1
                    (iVar1 - iVar2,(MethodInfo *)0x0);
  return iVar1 < 2;
}


/* MVInputWrapper+InputSuppression op_Implicit(Boolean) */

MVInputWrapper_InputSuppression *
Assembly-CSharp.dll::MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
          (bool a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (*this->klass[1]._0.gc_desc)(this,_a,this->klass[1]._0.name);
  return (MVInputWrapper_InputSuppression *)this;
}


/* Boolean op_Implicit(MVInputWrapper+InputSuppression) */

bool Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_op_Implicit_1
               (MVInputWrapper_InputSuppression *a,MethodInfo *method)

{
  if (a != (MVInputWrapper_InputSuppression *)0x0) {
    bVar1 = (*(code *)(a->klass->vtable).get_IsSuppressed.method)
                      (a,(a->klass->vtable).set_IsSuppressed.methodPtr);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void set_IsSuppressed(Boolean) */

void Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_set_IsSuppressed
               (MVInputWrapper_InputSuppression *this,bool value,MethodInfo *method)

{
  if (value == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  }
  if (this != (MVInputWrapper_InputSuppression *)0x0) {
    (this->fields).suppressionFrame = iVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

