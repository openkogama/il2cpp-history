
/* Boolean <>m__0(SoundTabInfo) */

bool Assembly-CSharp.dll::SoundInventoryController+<Initialize>c__AnonStorey0::
     SoundInventoryController_Initialize_c_AnonStorey0___m__0
               (SoundInventoryController_Initialize_c_AnonStorey0 *this,SoundTabInfo *soundTabInfo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (soundTabInfo != (SoundTabInfo *)0x0) {
    a = (soundTabInfo->fields).name;
    b = (this->fields).soundName;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Inequality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

