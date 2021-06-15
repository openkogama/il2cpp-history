
/* Boolean <>m__1(Notification) */

bool Assembly-CSharp.dll::NotificationObjectPool+<GetPanel>c__AnonStorey1::
     NotificationObjectPool_GetPanel_c_AnonStorey1___m__1
               (NotificationObjectPool_GetPanel_c_AnonStorey1 *this,Notification *x,
               MethodInfo *method)

{
  if (x != (Notification *)0x0) {
    return (char)(x->fields).Type == (char)(this->fields).type;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

