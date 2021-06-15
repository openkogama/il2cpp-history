
/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSuppressShortcuts::FirstTimeSuppressShortcuts_Update
               (FirstTimeSuppressShortcuts *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
  return;
}

