
/* Single <DOFillAmount>b__0() */

float Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass5_0::
      DOTweenModuleUI_c_DisplayClass5_0__DOFillAmount_b__0
                (DOTweenModuleUI_c_DisplayClass5_0 *this,MethodInfo *method)

{
  pIVar1 = (this->fields).target;
  if (pIVar1 != (Image *)0x0) {
    return (pIVar1->fields).m_FillAmount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void <DOFillAmount>b__1(Single) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass5_0::
     DOTweenModuleUI_c_DisplayClass5_0__DOFillAmount_b__1
               (DOTweenModuleUI_c_DisplayClass5_0 *this,float x,MethodInfo *method)

{
  pIVar1 = (this->fields).target;
  if (pIVar1 != (Image *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                    ,in_RDX,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (x < 0.0) {
      x = 0.0;
    }
    else if (_UNK_? < x) {
      x = _UNK_?;
    }
    cVar2 = FUN_?(&(pIVar1->fields).m_FillAmount,x);
    if (cVar2 != '\0') {
      (*(pIVar1->klass->vtable).SetVerticesDirty.methodPtr)
                (pIVar1,(pIVar1->klass->vtable).SetVerticesDirty.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

