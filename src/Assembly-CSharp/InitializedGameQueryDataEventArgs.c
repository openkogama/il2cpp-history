
/* InitializedGameQueryDataEventArgs(MVWorldObjectClient, Int32) */

void Assembly-CSharp.dll::InitializedGameQueryDataEventArgs::InitializedGameQueryDataEventArgs__ctor
               (InitializedGameQueryDataEventArgs *this,MVWorldObjectClient *rootWO,
               int32_t instigatorActorNumber,MethodInfo *method)

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
  (this->fields).RootWO = rootWO;
  func_?(&this->fields,rootWO);
  (this->fields).InstigatorActorNumber = instigatorActorNumber;
  return;
}

