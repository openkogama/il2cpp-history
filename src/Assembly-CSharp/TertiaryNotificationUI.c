
/* Void Initialize(Notification, NotificationLifetime, Boolean) */

void Assembly-CSharp.dll::TertiaryNotificationUI::TertiaryNotificationUI_Initialize
               (TertiaryNotificationUI *this,Notification *n,NotificationLifetime__Enum l,
               bool usesIcon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).notification = n;
  func_?(&(this->fields).notification,n);
  pIVar1 = (this->fields).icon;
  (this->fields).lifetime = l;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pIVar1 = (this->fields).icon;
    if (pIVar1 == (Image *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pIVar1,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,usesIcon,(MethodInfo *)0x0);
  }
  pCVar3 = (CanvasGroup *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                     );
  (this->fields).canvasGroup = pCVar3;
  func_?();
  pCVar3 = (this->fields).canvasGroup;
  if (pCVar3 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar3,0.0,(MethodInfo *)0x0);
    if (n != (Notification *)0x0) {
      layoutRoot = (RectTransform *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)n,
                              UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                             );
      if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
      LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator NotificationAnimation() */

IEnumerator *
Assembly-CSharp.dll::TertiaryNotificationUI::TertiaryNotificationUI_NotificationAnimation
          (TertiaryNotificationUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::TertiaryNotificationUI::TertiaryNotificationUI_OnDisable
               (TertiaryNotificationUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).notification;
  if (this_00 != (Notification *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

