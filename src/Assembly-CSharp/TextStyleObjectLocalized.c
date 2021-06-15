
/* TextStyleObjectLocalized() */

void Assembly-CSharp.dll::TextStyleObjectLocalized::TextStyleObjectLocalized__ctor
               (TextStyleObjectLocalized *this,MethodInfo *method)

{
  (this->fields)._.colorStyle = 0xd;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

