
/* ValidationEventArgs(JsonSchemaException) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::ValidationEventArgs::ValidationEventArgs__ctor
               (ValidationEventArgs *this,JsonSchemaException *ex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    func_?(&StringLiteral_ex);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)ex,StringLiteral_ex,(MethodInfo *)0x0);
  (this->fields)._ex = ex;
  func_?(&this->fields,ex);
  return;
}


/* String get_Message() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::ValidationEventArgs::
         ValidationEventArgs_get_Message(ValidationEventArgs *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._ex;
  if (pJStack_2 != (JsonSchemaException *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_Message.method;
    pSVar3 = (String *)(*(pJStack_2->klass->vtable).get_Message.methodPtr)();
    return pSVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}

