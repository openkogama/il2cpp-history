
/* Void Update() */

void Assembly-CSharp.dll::FPSCounter::FPSCounter_Update(FPSCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fVar2 = (this->fields).currTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + fVar2;
  pfVar4 = &(this->fields).frameUpdateRate;
  (this->fields).currTime = fVar3;
  if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
    pTVar5 = (this->fields).fpsText;
    fStack_1 = FpsCounter::FpsCounter_get_Fps((MethodInfo *)0x0);
    uVar6 = func_?(&fStack_1,StringLiteral_F0,0);
    if (pTVar5 == (Text *)0x0) {
      func_?(0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (*(code *)(pTVar5->klass->vtable).set_text.method)
              (pTVar5,uVar6,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).currTime = 0.0;
  }
  return;
}


/* FPSCounter() */

void Assembly-CSharp.dll::FPSCounter::FPSCounter__ctor(FPSCounter *this,MethodInfo *method)

{
  (this->fields).frameUpdateRate = 0.5;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

