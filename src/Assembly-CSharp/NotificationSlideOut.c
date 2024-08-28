
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
  ppNVar2 = &(this->fields).notification;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pNVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pNVar1 = (Notification *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        Notification_MethodInfo__UnityEngine__Component__GetComponent<Notification>__
                       );
    *ppNVar2 = pNVar1;
    func_?(ppNVar2,pNVar1);
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
  pNVar1 = (this->fields).notification;
  if (pNVar1 != (Notification *)0x0) {
    fVar2 = (pNVar1->fields).timeSinceStart;
    iVar3 = (*(code *)(pNVar1->klass->vtable).__unknown.method)
                      (pNVar1,(pNVar1->klass->vtable).Initialize.methodPtr);
    fVar2 = fVar2 / (float)iVar3;
    pfVar4 = &(this->fields).slideOutStartTime;
    if (fVar2 < *pfVar4 || fVar2 == *pfVar4) {
      return;
    }
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      this_00 = (Transform *)0x0;
      if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        this_00 = pTVar5;
      }
      pRVar6 = TypeInfo__UnityEngine__RectTransform;
      if (this_00 != (Transform *)0x0) {
        VVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition((RectTransform *)this_00,(MethodInfo *)0x0);
        fVar2 = (this->fields).slideVelocity.x;
        fVar8 = (this->fields).slideVelocity.y;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fStack_10 = VVar7.x;
        fStack_11 = VVar7.y;
        VVar7.y = fStack_11 + fVar8 * fVar9;
        VVar7.x = fStack_10 + fVar2 * fVar9;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  ((RectTransform *)this_00,VVar7,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  pTVar5 = (Transform *)func_?();
  pRVar6 = extraout_ECX;
code_?:
  func_?(pTVar5,pRVar6);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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

