
/* Boolean <CreateTempPanel>b__0(NotificationObjectPoolElement) */

bool Assembly-CSharp.dll::NotificationObjectPool+<>c__DisplayClass11_0::
     NotificationObjectPool_c_DisplayClass11_0__CreateTempPanel_b__0
               (NotificationObjectPool_c_DisplayClass11_0 *this,NotificationObjectPoolElement *x,
               MethodInfo *method)

{
  if ((x != (NotificationObjectPoolElement *)0x0) &&
     (pNVar1 = (x->fields).Prefab, pNVar1 != (Notification *)0x0)) {
    return (pNVar1->fields).Type == (this->fields).type;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

