
/* Void Close() */

void Assembly-CSharp.dll::Notification::Notification_Close(Notification *this,MethodInfo *method)

{
  iVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  (this->fields).timeSinceStart = (float)(iVar1 + 1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Notification::Notification_Update(Notification *this,MethodInfo *method)

{
  fVar1 = (this->fields).timeSinceStart;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pNVar3 = this->klass;
  (this->fields).timeSinceStart = fVar2;
  iVar4 = (*(pNVar3->vtable).__unknown.methodPtr)(this,(pNVar3->vtable).__unknown.method);
  if ((float)iVar4 <= fVar2) {
    this_00 = (this->fields).pool;
    if (this_00 == (NotificationObjectPool *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    NotificationObjectPool::NotificationObjectPool_Return(this_00,this,(MethodInfo *)0x0);
    (*(this->klass->vtable).OnReturn.methodPtr)(this,(this->klass->vtable).OnReturn.method);
  }
  return;
}


/* Single get_Progress() */

float Assembly-CSharp.dll::Notification::Notification_get_Progress
                (Notification *this,MethodInfo *method)

{
  fVar1 = (this->fields).timeSinceStart;
  iVar2 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  return fVar1 / (float)iVar2;
}

