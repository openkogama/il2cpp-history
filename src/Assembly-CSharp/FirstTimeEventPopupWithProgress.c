
/* Void SetProgress(Single, Single) */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::
     FirstTimeEventPopupWithProgress_SetProgress
               (FirstTimeEventPopupWithProgress *this,float current,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).progressText;
  pSVar2 = mscorlib.dll::System::Single::Single_ToString((Single *)&current,(MethodInfo *)0x0);
  str2 = mscorlib.dll::System::Single::Single_ToString((Single *)&max,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar2,::StringLiteral____,str2,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    pTVar3 = pTVar1->klass;
    max = (float)(pTVar3->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    current = (float)pSVar2;
    (*(code *)(pTVar3->vtable).set_text.method)();
    (this->fields).interpolateToSize = current / max;
    return;
  }
  max = (float)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_Update
               (FirstTimeEventPopupWithProgress *this,MethodInfo *method)

{
  if ((this->fields).progress != (this->fields).interpolateToSize) {
    value = (this->fields).interpolateToSize;
    fVar1 = (this->fields).progress;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar2 * (this->fields).interpolationSpeed + fVar1;
    if (fVar1 <= value) {
      value = fVar1;
    }
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    this_00 = (this->fields).ProgressBar;
    (this->fields).progress = value;
    if (this_00 == (Scrollbar *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (this_00,value,(MethodInfo *)0x0);
  }
  return;
}


/* FirstTimeEventPopupWithProgress() */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress__ctor
               (FirstTimeEventPopupWithProgress *this,MethodInfo *method)

{
  (this->fields).interpolationSpeed = 0.7;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_Progress(Single) */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::
     FirstTimeEventPopupWithProgress_set_Progress
               (FirstTimeEventPopupWithProgress *this,float value,MethodInfo *method)

{
  if (value < 0.0) {
    value = 0.0;
  }
  else if (_UNK_? < value) {
    value = _UNK_?;
  }
  (this->fields).progress = value;
  this_00 = (this->fields).ProgressBar;
  if (this_00 != (Scrollbar *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

