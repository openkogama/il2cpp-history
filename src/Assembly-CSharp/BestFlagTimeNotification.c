
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BestFlagTimeNotification::BestFlagTimeNotification_Initialize
               (BestFlagTimeNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BestFlagTimeNotification__DestroyNotification__);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  object = this;
  this = (BestFlagTimeNotification *)CONCAT13(1,this._0_3_);
  pTVar1 = (object->fields).timeText;
  (object->fields)._.timeSinceStart = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__String,pOVar2);
    if (pTVar1 != (Text *)0x0) {
      pOVar4 = (Object *)0x0;
      if (pOVar2 != (Object *)0x0) {
        if ((String__Class *)pOVar2->klass == TypeInfo__System__String) {
          pOVar4 = pOVar2;
        }
        if (pOVar4 == (Object *)0x0) goto code_?;
      }
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pOVar4,(pTVar1->klass->vtable).set_text.method);
      pNVar5 = (object->fields).fader;
      if (pNVar5 != (NotificationFade *)0x0) {
        (pNVar5->fields).pauseAt = (pNVar5->fields).duration;
        this_00 = (pNVar5->fields).group;
        (pNVar5->fields).playing = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pNVar5->fields).currentTime = 0.0;
          pNVar5 = (object->fields).fader;
          if (pNVar5 != (NotificationFade *)0x0) {
            data = (Dictionary_2_System_Object_System_Object_ *)(pNVar5->fields).OnFinished;
            this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
            if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)object,
                         MethodInfo__BestFlagTimeNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              pAVar6 = (Action *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)data,(Delegate *)this_01,(MethodInfo *)0x0);
              uVar3 = CONCAT44(TypeInfo__System__Action,pAVar6);
              if (pAVar6 == (Action *)0x0) {
                (pNVar5->fields).OnFinished = (Action *)0x0;
                func_?(&(pNVar5->fields).OnFinished,0);
                return;
              }
              pAVar7 = (Action *)0x0;
              if (pAVar6->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar6;
              }
              if (pAVar7 != (Action *)0x0) {
                (pNVar5->fields).OnFinished = pAVar7;
                uVar3 = CONCAT44(TypeInfo__System__Action,pAVar6);
                pAVar7 = (Action *)0x0;
                if (pAVar6->klass == TypeInfo__System__Action) {
                  pAVar7 = pAVar6;
                }
                if (pAVar7 != (Action *)0x0) {
                  func_?(&(pNVar5->fields).OnFinished,pAVar7);
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

