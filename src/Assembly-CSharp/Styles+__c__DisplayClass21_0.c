
/* Void <SetStyle>b__0() */

void Assembly-CSharp.dll::Styles+<>c__DisplayClass21_0::Styles_c_DisplayClass21_0__SetStyle_b__0
               (Styles_c_DisplayClass21_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).audioSource;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pAVar1 != (AudioSource *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar1,(MethodInfo *)0x0);
    }
  }
  return;
}

