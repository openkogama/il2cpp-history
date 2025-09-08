
/* Void Close() */

void Assembly-CSharp.dll::Notification::Notification_Close(Notification *this,MethodInfo *method)

{
  iVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).Initialize.methodPtr);
  (this->fields).timeSinceStart = (float)(iVar1 + 1);
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Notification::Notification_Initialize
               (Notification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  (this->fields).timeSinceStart = 0.0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Notification::Notification_Update(Notification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).timeSinceStart;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pNVar3 = this->klass;
  (this->fields).timeSinceStart = fVar2;
  iVar4 = (*(code *)(pNVar3->vtable).__unknown.method)(this,(pNVar3->vtable).Initialize.methodPtr);
  if ((float)iVar4 <= fVar2) {
    pNVar5 = (this->fields).pool;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pNVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pNVar5 = (this->fields).pool;
      if (pNVar5 == (NotificationObjectPool *)0x0) {
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      NotificationObjectPool::NotificationObjectPool_Return(pNVar5,this,(MethodInfo *)0x0);
    }
    pIStack8 = this->klass[1]._0.image;
    pNStack9 = this;
    (*(code *)(this->klass->vtable).OnReturn.method)();
  }
  return;
}


/* Single get_Progress() */

float Assembly-CSharp.dll::Notification::Notification_get_Progress
                (Notification *this,MethodInfo *method)

{
  fVar1 = (this->fields).timeSinceStart;
  iVar2 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).Initialize.methodPtr);
  return fVar1 / (float)iVar2;
}

