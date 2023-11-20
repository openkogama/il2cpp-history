
/* Void Update() */

void Assembly-CSharp.dll::FPSCounter::FPSCounter_Update(FPSCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_F0);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).currTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pfVar3 = &(this->fields).frameUpdateRate;
  (this->fields).currTime = fVar2;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    pTVar4 = (this->fields).fpsText;
    SStack_5.m_value = FpsCounter::FpsCounter_get_Fps((MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_ToString_2(&SStack_5,StringLiteral_F0,(MethodInfo *)0x0);
    if (pTVar4 == (Text *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SStack_5.m_value = (float)pTVar4;
    (*(code *)(pTVar4->klass->vtable).set_text.method)();
    (this->fields).currTime = 0.0;
  }
  return;
}


/* FPSCounter() */

void Assembly-CSharp.dll::FPSCounter::FPSCounter__ctor(FPSCounter *this,MethodInfo *method)

{
  (this->fields).frameUpdateRate = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

