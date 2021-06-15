
/* Void SetProgress(Single, Single) */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::
     FirstTimeEventPopupWithProgress_SetProgress
               (FirstTimeEventPopupWithProgress *this,float current,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  this = (FirstTimeEventPopupWithProgress *)current;
  pTVar2 = (pFVar1->fields).progressText;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_3 = max;
  arg2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_1
                     (arg0,(Object *)StringLiteral____,arg2,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (pFVar1->fields).interpolateToSize = current / max;
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_Update
               (FirstTimeEventPopupWithProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).progress;
  a = (this->fields).interpolateToSize;
  if (fVar1 != a) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar3 = (this->fields).interpolationSpeed;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                      (a,fVar3 * fVar2 + fVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).ProgressBar;
    (this->fields).progress = fVar1;
    if (this_00 == (Scrollbar *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (this_00,fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* FirstTimeEventPopupWithProgress() */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress__ctor
               (FirstTimeEventPopupWithProgress *this,MethodInfo *method)

{
  (this->fields).interpolationSpeed = 0.7;
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


/* Void set_Progress(Single) */

void Assembly-CSharp.dll::FirstTimeEventPopupWithProgress::
     FirstTimeEventPopupWithProgress_set_Progress
               (FirstTimeEventPopupWithProgress *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  value_00 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(value,(MethodInfo *)0x0);
  (this->fields).progress = value_00;
  this_00 = (this->fields).ProgressBar;
  if (this_00 != (Scrollbar *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

