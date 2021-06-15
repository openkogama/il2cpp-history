
/* IEnumerator CheckIfAlive() */

IEnumerator *
Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_CheckIfAlive
          (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_OnEnable
               (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
            ((MonoBehaviour *)this,StringLiteral_CheckIfAlive,(MethodInfo *)0x0);
  return;
}

