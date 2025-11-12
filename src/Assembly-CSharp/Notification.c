
/* Void Close() */

void Assembly-CSharp.dll::Notification::Notification_Close(Notification *this,MethodInfo *method)

{
  iVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).timeSinceStart;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  pNVar5 = this->klass;
  fVar4 = fVar4 + fVar1;
  (this->fields).timeSinceStart = fVar4;
  iVar6 = (*(pNVar5->vtable).__unknown.methodPtr)(this,(pNVar5->vtable).__unknown.method);
  if ((float)iVar6 <= fVar4) {
    pNVar7 = (this->fields).pool;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pNVar7 != (NotificationObjectPool *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pNVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pNVar7 = (this->fields).pool;
        if (pNVar7 == (NotificationObjectPool *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        NotificationObjectPool::NotificationObjectPool_Return(pNVar7,this,(MethodInfo *)0x0);
      }
    }
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

