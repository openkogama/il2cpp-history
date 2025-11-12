
/* Boolean <GetPanel>b__1(Notification) */

bool Assembly-CSharp.dll::NotificationObjectPool+<>c__DisplayClass9_0::
     NotificationObjectPool_c_DisplayClass9_0__GetPanel_b__1
               (NotificationObjectPool_c_DisplayClass9_0 *this,Notification *x,MethodInfo *method)

{
  if (x != (Notification *)0x0) {
    return (char)(x->fields).Type == (char)(this->fields).type;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

