
/* Void set_Progress(Single) */

void Assembly-CSharp.dll::ProgressBarAndroid::ProgressBarAndroid_set_Progress
               (ProgressBarAndroid *this,float value,MethodInfo *method)

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
    if (cRam_? == '\0') {
      FUN_?(&
                    bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                    ,value,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    cVar1 = FUN_?(&(this_00->fields).m_Size,value);
    if (cVar1 != '\0') {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_UpdateVisuals
                (this_00,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

