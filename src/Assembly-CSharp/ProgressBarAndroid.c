
/* Single get_Progress() */

float Assembly-CSharp.dll::ProgressBarAndroid::ProgressBarAndroid_get_Progress
                (ProgressBarAndroid *this,MethodInfo *method)

{
  return (this->fields).progress;
}


/* Void set_Progress(Single) */

void Assembly-CSharp.dll::ProgressBarAndroid::ProgressBarAndroid_set_Progress
               (ProgressBarAndroid *this,float value,MethodInfo *method)

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

