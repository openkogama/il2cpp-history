
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::NotificationArea+<AddNotification>d__4::
     NotificationArea_AddNotification_d_4_MoveNext
               (NotificationArea_AddNotification_d_4 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pNVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    pNVar3 = (this->fields).notification;
    (this->fields).__1__state = -1;
    if (pNVar3 != (Notification *)0x0) {
      (*(pNVar3->klass->vtable).Initialize.methodPtr)
                (pNVar3,(this->fields).data,(pNVar3->klass->vtable).Initialize.method);
      bVar4 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pNVar3 = (this->fields).notification;
    (this->fields).__1__state = -1;
    if (((pNVar3 != (Notification *)0x0) &&
        (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pNVar3,(MethodInfo *)0x0),
        pNVar2 != (NotificationArea *)0x0)) && (pTVar9 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar9,(Transform *)(pNVar2->fields).contentHolderTransform,0,(MethodInfo *)0x0);
      pNVar3 = (this->fields).notification;
      if ((pNVar3 != (Notification *)0x0) &&
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pNVar3,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  (pTVar9,(MethodInfo *)0x0);
        pNVar3 = (this->fields).notification;
        if (pNVar3 != (Notification *)0x0) {
          layoutRoot = (RectTransform *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)pNVar3,
                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                                 );
          if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::NotificationArea+<AddNotification>d__4::
     NotificationArea_AddNotification_d_4_System_Collections_IEnumerator_Reset
               (NotificationArea_AddNotification_d_4 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__NotificationArea___AddNotification_d__4__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

