
/* Void OnValidate() */

void Assembly-CSharp.dll::NotificationSlideOut::NotificationSlideOut_OnValidate
               (NotificationSlideOut *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Notification_MethodInfo__UnityEngine__Component__GetComponent<Notification>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).notification;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pNVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pNVar1 = (Notification *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        Notification_MethodInfo__UnityEngine__Component__GetComponent<Notification>__
                       );
    (this->fields).notification = pNVar1;
    func_?(&(this->fields).notification,pNVar1);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::NotificationSlideOut::NotificationSlideOut_Update
               (NotificationSlideOut *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).notification;
  if (this_00 != (Notification *)0x0) {
    fVar1 = Notification::Notification_get_Progress(this_00,(MethodInfo *)0x0);
    pfVar2 = &(this->fields).slideOutStartTime;
    if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
      return;
    }
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      this_01 = (Transform *)0x0;
      if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        this_01 = pTVar3;
      }
      pRVar4 = TypeInfo__UnityEngine__RectTransform;
      if (this_01 != (Transform *)0x0) {
        VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition((RectTransform *)this_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)VVar5.y);
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  ((RectTransform *)this_01,(Vector2)0x0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  pTVar3 = (Transform *)func_?();
  pRVar4 = extraout_ECX;
code_?:
  func_?(pTVar3,pRVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* NotificationSlideOut() */

void Assembly-CSharp.dll::NotificationSlideOut::NotificationSlideOut__ctor
               (NotificationSlideOut *this,MethodInfo *method)

{
  (this->fields).slideVelocity.x = -400.0;
  (this->fields).slideVelocity.y = 0.0;
  (this->fields).slideOutStartTime = 0.75;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

