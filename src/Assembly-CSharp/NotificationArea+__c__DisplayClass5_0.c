
/* Boolean <CanInstantiateNotificationType>b__0(Notification) */

bool Assembly-CSharp.dll::NotificationArea+<>c__DisplayClass5_0::
     NotificationArea_c_DisplayClass5_0__CanInstantiateNotificationType_b__0
               (NotificationArea_c_DisplayClass5_0 *this,Notification *n,MethodInfo *method)

{
  if (n != (Notification *)0x0) {
    return (n->fields).Type == (this->fields).notificationType;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

