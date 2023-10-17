
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

