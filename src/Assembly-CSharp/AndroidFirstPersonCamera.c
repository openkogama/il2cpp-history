
/* Single DegreesBetween(Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_DegreesBetween
                (AndroidFirstPersonCamera *this,float eulerA,float eulerB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat
                    (eulerA,360.0,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat
                    (eulerB,360.0,(MethodInfo *)0x0);
  fVar1 = (float)(double)CONCAT44((uint)((ulonglong)(double)(fVar1 - fVar2) >> 0x20) & _UNK_?
                                  ,SUB84((double)(fVar1 - fVar2),0) & _UNK_?);
  if (fVar1 <= _UNK_?) {
    return fVar1;
  }
  return _UNK_? - fVar1;
}


/* Single EulerClamp(Single, Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_EulerClamp
                (AndroidFirstPersonCamera *this,float a,float min,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat(a,360.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat(min,360.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat(max,360.0,(MethodInfo *)0x0);
  return 360.0;
}

