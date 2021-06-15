
/* Boolean <>m__0(NotificationObjectPoolElement) */

bool Assembly-CSharp.dll::NotificationObjectPool+<CreateTempPanel>c__AnonStorey2::
     NotificationObjectPool_CreateTempPanel_c_AnonStorey2___m__0
               (NotificationObjectPool_CreateTempPanel_c_AnonStorey2 *this,
               NotificationObjectPoolElement *x,MethodInfo *method)

{
  if ((x != (NotificationObjectPoolElement *)0x0) &&
     (pNVar1 = (x->fields).Prefab, pNVar1 != (Notification *)0x0)) {
    return (pNVar1->fields).Type == (this->fields).type;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

