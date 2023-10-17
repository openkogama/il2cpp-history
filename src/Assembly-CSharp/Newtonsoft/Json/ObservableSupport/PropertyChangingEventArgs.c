
/* PropertyChangingEventArgs(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::PropertyChangingEventArgs::
     PropertyChangingEventArgs__ctor
               (PropertyChangingEventArgs *this,String *propertyName,MethodInfo *method)

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
  (*(this->klass->vtable).set_PropertyName.methodPtr)
            (this,propertyName,(this->klass->vtable).set_PropertyName.method);
  return;
}

