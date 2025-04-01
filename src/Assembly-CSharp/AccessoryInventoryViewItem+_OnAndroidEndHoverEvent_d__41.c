
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnAndroidEndHoverEvent>d__41::
     AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41_MoveNext
               (AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._androidStartTime_5__2 = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (_UNK_? <= fVar2 - (this->fields)._androidStartTime_5__2) {
    if (this_00 != (AccessoryInventoryViewItem *)0x0) {
      routine = AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnHoverEvent
                          (this_00,-76.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
      return 0;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  ppOVar5 = &(this->fields).__2__current;
  *ppOVar5 = (Object *)0x0;
  func_?(ppOVar5,0);
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnAndroidEndHoverEvent>d__41::
     AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41_System_Collections_IEnumerator_Reset
               (AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

