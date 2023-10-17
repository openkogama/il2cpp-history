
/* ScaleChangedEventArgs(Vector3) */

void Assembly-CSharp.dll::ScaleChangedEventArgs::ScaleChangedEventArgs__ctor
               (ScaleChangedEventArgs *this,Vector3 newScale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  (this->fields).NewScale.x = newScale.x;
  (this->fields).NewScale.y = newScale.y;
  (this->fields).NewScale.z = newScale.z;
  return;
}

