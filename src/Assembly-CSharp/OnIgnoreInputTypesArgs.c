
/* OnIgnoreInputTypesArgs(IgnoreInputTypes) */

void Assembly-CSharp.dll::OnIgnoreInputTypesArgs::OnIgnoreInputTypesArgs__ctor
               (OnIgnoreInputTypesArgs *this,IgnoreInputTypes__Enum inputTypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).inputTypes = inputTypes;
  return;
}

