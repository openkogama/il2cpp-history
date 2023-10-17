
/* Boolean <GetPanel>b__1(Notification) */

bool Assembly-CSharp.dll::NotificationObjectPool+<>c__DisplayClass9_0::
     NotificationObjectPool_c_DisplayClass9_0__GetPanel_b__1
               (NotificationObjectPool_c_DisplayClass9_0 *this,Notification *x,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (x != (Notification *)0x0) {
    return (char)(x->fields).Type == (char)(this->fields).type;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

