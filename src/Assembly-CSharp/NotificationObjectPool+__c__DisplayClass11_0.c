
/* Boolean <CreateTempPanel>b__0(NotificationObjectPoolElement) */

bool Assembly-CSharp.dll::NotificationObjectPool+<>c__DisplayClass11_0::
     NotificationObjectPool_c_DisplayClass11_0__CreateTempPanel_b__0
               (NotificationObjectPool_c_DisplayClass11_0 *this,NotificationObjectPoolElement *x,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((x != (NotificationObjectPoolElement *)0x0) &&
     (pNVar2 = (x->fields).Prefab, pNVar2 != (Notification *)0x0)) {
    return (pNVar2->fields).Type == (this->fields).type;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

