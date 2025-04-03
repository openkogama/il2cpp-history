
/* EmbeddedPlayerConfig+JSONDomainObject() */

void Assembly-CSharp.dll::EmbeddedPlayerConfig+JSONDomainObject::
     EmbeddedPlayerConfig_JSONDomainObject__ctor
               (EmbeddedPlayerConfig_JSONDomainObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&this->fields;
  ((EmbeddedPlayerConfig_JSONDomainObject__Fields *)method_00)->domain = ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

