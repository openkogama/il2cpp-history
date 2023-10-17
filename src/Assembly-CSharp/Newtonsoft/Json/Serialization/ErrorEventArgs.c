
/* ErrorEventArgs(Object, ErrorContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ErrorEventArgs::ErrorEventArgs__ctor
               (ErrorEventArgs *this,Object *currentObject,ErrorContext *errorContext,
               MethodInfo *method)

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
  (this->fields)._CurrentObject_k__BackingField = currentObject;
  func_?(&this->fields,currentObject);
  (this->fields)._ErrorContext_k__BackingField = errorContext;
  func_?(&(this->fields)._ErrorContext_k__BackingField,errorContext);
  return;
}

