
/* EmbeddedPlayerConfig+JSONDomainObject() */

void Assembly-CSharp.dll::EmbeddedPlayerConfig+JSONDomainObject::
     EmbeddedPlayerConfig_JSONDomainObject__ctor
               (EmbeddedPlayerConfig_JSONDomainObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).domain = TypeInfo__System__String->static_fields->Empty;
  return;
}

