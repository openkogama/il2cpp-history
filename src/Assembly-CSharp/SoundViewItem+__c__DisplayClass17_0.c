
/* Void <ChangeUrl>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SoundViewItem+<>c__DisplayClass17_0::
     SoundViewItem_c_DisplayClass17_0__ChangeUrl_b__0
               (SoundViewItem_c_DisplayClass17_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (IHandleSettingChanged *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,
                  StringLiteral_url,(this->fields).url);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

