
/* Void OnValidate() */

void Assembly-CSharp.dll::NotificationSlideOut::NotificationSlideOut_OnValidate
               (NotificationSlideOut *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).notification;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pNVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pNVar1 = (Notification *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        Notification_MethodInfo__UnityEngine__Component__GetComponent<Notification>__
                       );
    (this->fields).notification = pNVar1;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::NotificationSlideOut::NotificationSlideOut_Update
               (NotificationSlideOut *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    uVar6 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pTVar5);
    if (pTVar5 != (Transform *)0x0) {
      this_00 = (Transform *)0x0;
      if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        this_00 = pTVar5;
      }
      if (this_00 != (Transform *)0x0) {
        a = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition((RectTransform *)this_00,(MethodInfo *)0x0);
        VVar7 = (this->fields).slideVelocity;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector2);
        }
        VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                          (VVar7,fVar2,(MethodInfo *)0x0);
        VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                          (a,VVar7,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  ((RectTransform *)this_00,VVar7,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar6 = func_?(0);
code_?:
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* NotificationSlideOut() */

void Assembly-CSharp.dll::NotificationSlideOut::NotificationSlideOut__ctor
               (NotificationSlideOut *this,MethodInfo *method)

{
  uStack_1 = 0;
  func_?(&uStack_1,0xc3c80000,0,0);
  (this->fields).slideVelocity.x = (float)uStack_1;
  (this->fields).slideVelocity.y = uStack_1._4_4_;
  (this->fields).slideOutStartTime = 0.75;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

