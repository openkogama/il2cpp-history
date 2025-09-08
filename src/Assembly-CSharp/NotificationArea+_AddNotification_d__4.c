
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::NotificationArea+<AddNotification>d__4::
     NotificationArea_AddNotification_d_4_MoveNext
               (NotificationArea_AddNotification_d_4 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pNVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    pNVar3 = (this->fields).notification;
    (this->fields).__1__state = -1;
    if (pNVar3 != (Notification *)0x0) {
      (*(code *)(pNVar3->klass->vtable).Initialize.method)
                (pNVar3,(this->fields).data,(pNVar3->klass->vtable).Update.methodPtr);
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current,0);
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
        (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pNVar3,(MethodInfo *)0x0),
        pNVar2 != (NotificationArea *)0x0)) && (pTVar4 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar4,(Transform *)(pNVar2->fields).contentHolderTransform,0,(MethodInfo *)0x0);
      pNVar3 = (this->fields).notification;
      if ((pNVar3 != (Notification *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pNVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  (pTVar4,(MethodInfo *)0x0);
        pNVar3 = (this->fields).notification;
        if (pNVar3 != (Notification *)0x0) {
          layoutRoot = (RectTransform *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)pNVar3,
                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                                 );
          if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
          LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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
  func_?(&
                  MethodInfo__NotificationArea___AddNotification_d__4__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

