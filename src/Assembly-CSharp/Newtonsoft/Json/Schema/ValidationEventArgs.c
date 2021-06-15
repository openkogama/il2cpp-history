
/* ValidationEventArgs(JsonSchemaException) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::ValidationEventArgs::ValidationEventArgs__ctor
               (ValidationEventArgs *this,JsonSchemaException *ex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)ex,StringLiteral_ex,(MethodInfo *)0x0);
  (this->fields)._ex = ex;
  return;
}


/* String get_Message() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::ValidationEventArgs::
         ValidationEventArgs_get_Message(ValidationEventArgs *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._ex;
  if (pJVar1 != (JsonSchemaException *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pJVar1->klass->vtable).get_Message.method)
                       (pJVar1,(pJVar1->klass->vtable).get_Source.methodPtr);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}

